/**
 * Medal of Honor European Assault - Recompiled code chunk 45
 * Functions: 250 (0x00187A00 - 0x00193C60)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00187A00
 * Original: 0x00187A00 - 0x00187A0E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A00(void)
{

loc_00187A00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00187A08u); RECOMP_ABI_CALL(0x00185DA0u, sub_00185DA0); /* call 0x00185DA0 */

loc_00187A08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00187A10
 * Original: 0x00187A10 - 0x00187A11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A10(void)
{

loc_00187A10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00187A20
 * Original: 0x00187A20 - 0x00187A3B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187A20: ;
    ecx = MEM32(0x5234EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187A3A; /* je: equal / zero */

loc_00187A2A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00187A30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00187A2Eu); } /* indirect call */
    }

loc_00187A30: ;
    MEM32(0x5234EC) = 0;

loc_00187A3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00187A40
 * Original: 0x00187A40 - 0x00187A56 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187A40: ;
    eax = MEM32(ecx + 0x1C0);
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB290D783u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB290D783u (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00187A60
 * Original: 0x00187A60 - 0x00187A75 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187A60: ;
    eax = MEM32(ecx + 0x1E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00187A72; /* jle: less or equal (signed <=) */

loc_00187A6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00187A72; /* jg: greater (signed >) */

loc_00187A6F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00187A72: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00187A80
 * Original: 0x00187A80 - 0x00187A95 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187A80: ;
    eax = MEM32(ecx + 0x1E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00187A92; /* jle: less or equal (signed <=) */

loc_00187A8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00187A92; /* jg: greater (signed >) */

loc_00187A8F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00187A92: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00187AA0
 * Original: 0x00187AA0 - 0x00187ABB (27 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187AA0(void)
{

loc_00187AA0: ;
    SET_LO16(eax, MEM16(esp + 4));
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(ecx + 0x1CE) = LO16(eax);
    MEM16(ecx + 0x1CC) = LO16(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00187AC0
 * Original: 0x00187AC0 - 0x00187AD1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187AC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 0x1CC) = LO16(eax);
    MEM16(ecx + 0x1CE) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00187AE0
 * Original: 0x00187AE0 - 0x00187B14 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187AE0: ;
    eax = MEM32(ecx + 0x1C0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x1CE));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(eax + 4) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00187B13; /* jge: greater or equal (signed >=) */

loc_00187AF5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x1CC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00187B13; /* jle: less or equal (signed <=) */

loc_00187B03: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx + 0x1CE) = LO16(edx);
    MEM16(ecx + 0x1CC) = LO16(eax);

loc_00187B13: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00187B20
 * Original: 0x00187B20 - 0x00187BA2 (130 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187B20: ;
    SET_LO8(edx, MEM8(ecx + 0x230));
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    MEM8(ecx + 0x230) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_00187B47; /* je: equal / zero */

loc_00187B35: ;
    eax = MEM32(ecx + 0x1C0);
    SET_LO16(edx, MEM16(eax + 4));
    MEM16(ecx + 0x1CE) = LO16(edx);
    esp += 4; return; /* ret */

loc_00187B47: ;
    edx = MEM32(ecx + 0x1C0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0x1CE));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x1CC));
    PUSH32(esp, edi);
    ebx = SX16(LO16(esi));
    edi = SX16(LO16(eax));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(int32_t)SMEM16(edx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00187B86; /* jge: greater or equal (signed >=) */

loc_00187B70: ;
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM16(ecx + 0x1CC) = 0;
    MEM16(ecx + 0x1CE) = LO16(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00187B86: ;
    _fb = (uint32_t)(MEM16(edx + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(edx + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x1CC) = LO16(eax);
    SET_LO16(eax, MEM16(edx + 4));
    POP32(esp, esi);
    MEM16(ecx + 0x1CE) = LO16(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00187BB0
 * Original: 0x00187BB0 - 0x00187BB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187BB0: ;
    g_seh_ebp = ebp; sub_000FC7A0(); return; /* tail jmp 0x000FC7A0 */

}

/**
 * sub_00187BC0
 * Original: 0x00187BC0 - 0x00187BE8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187BC0(void)
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

loc_00187BC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C0);
    ecx = MEM32(eax + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 0x40));
    PUSH32(esp, ecx);
    ecx = 0x3C2F40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00187BDDu); RECOMP_ABI_CALL(0x00181FF0u, sub_00181FF0); /* call 0x00181FF0 */

loc_00187BDD: ;
    eax = MEM32(esi + 0x1C0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00187BF0
 * Original: 0x00187BF0 - 0x00187BFB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187BF0(void)
{

loc_00187BF0: ;
    eax = MEM32(ecx + 0x1C0);
    SET_LO16(eax, MEM16(eax + 0x38));
    esp += 4; return; /* ret */

}

/**
 * sub_00187C00
 * Original: 0x00187C00 - 0x00187C1C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187C00: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x230));
    SET_LO8(eax, LO8(eax) << 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x230) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00187C20
 * Original: 0x00187C20 - 0x00187C4E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187C20: ;
    _fa = (uint32_t)(MEM8(ecx + 0x230)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x230), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00187C4B; /* je: equal / zero */

loc_00187C29: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00187C35u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_00187C35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187C4B; /* je: equal / zero */

loc_00187C3C: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00187C4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00187C45u); } /* indirect call */
    }

loc_00187C4B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00187C50
 * Original: 0x00187C50 - 0x00187C93 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00187C50: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(ecx + 4);
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(edx + eax + 0x34)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    MEM32(edx + 0x2C) = eax;
    eax = MEM32(edx + 8);
    MEM32(edx + 0x48) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(edx + 0x68) = 0;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00187C8D; /* jp: parity */

loc_00187C80: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(edx + 0x38) = xmm0.f[0]; /* movss */

loc_00187C8D: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00187CA0
 * Original: 0x00187CA0 - 0x00187CEB (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187CA0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187CEA; /* je: equal / zero */

loc_00187CAA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x44) = ecx;
    MEM16(eax + 0x66) = 1;

loc_00187CEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00187CF0
 * Original: 0x00187CF0 - 0x00187D05 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187CF0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00187CFFu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_00187CFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00187D10
 * Original: 0x00187D10 - 0x00187D39 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187D10: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00187D33; /* je: equal / zero */

loc_00187D18: ;
    ecx = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00187D33; /* jbe: below or equal (unsigned <=) */

loc_00187D21: ;
    esi = MEM32(esp + 8);

loc_00187D25: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187D35; /* je: equal / zero */

loc_00187D29: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00187D25; /* jb: below (unsigned <) */

loc_00187D33: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00187D35: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00187D40
 * Original: 0x00187D40 - 0x00187D5F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187D40: ;
    eax = MEM32(ecx + 0x2B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00187D5E; /* jne: not equal / not zero */

loc_00187D4A: ;
    eax = MEM32(ecx + 0x1C0);
    SET_LO8(edx, MEM8(eax + 0x46));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187D5E; /* je: equal / zero */

loc_00187D57: ;
    MEM8(ecx + 0x2BC) = 1;

loc_00187D5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00187D60
 * Original: 0x00187D60 - 0x00187D89 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187D60: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    edx = MEM32(ecx + 0x1C0);
    if (TEST_Z(_fa, _fb)) goto loc_00187D84; /* je: equal / zero */

loc_00187D74: ;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x232);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx + 4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00187D84: ;
    SET_LO16(eax, MEM16(edx + 0x44));
    esp += 4; return; /* ret */

}

/**
 * sub_00187D90
 * Original: 0x00187D90 - 0x00187DB9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187D90: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00187DA6; /* je: equal / zero */

loc_00187D9E: ;
    SET_LO16(eax, MEM16(ecx + 0x232));
    esp += 4; return; /* ret */

loc_00187DA6: ;
    ecx = MEM32(ecx + 0x1C0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x44));
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00187DC0
 * Original: 0x00187DC0 - 0x00187E26 (102 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00187DC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(esp + 4);
    MEMF(ecx + 0x1E0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FEC54); /* ucomiss */
    MEM32(ecx + 0x1D8) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00187DF3; /* jnp: not parity */

loc_00187DEB: ;
    MEMF(ecx + 0x1EC) = xmm0.f[0]; /* movss */

loc_00187DF3: ;
    edx = MEM32(ecx + 0x1C0);
    SET_LO8(eax, MEM8(edx + 0x46));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187E11; /* je: equal / zero */

loc_00187E00: ;
    eax = MEM32(ecx + 0x2B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00187E11; /* jne: not equal / not zero */

loc_00187E0A: ;
    MEM8(ecx + 0x2BC) = 1;

loc_00187E11: ;
    ecx = MEM32(ecx + 0x2C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187E23; /* je: equal / zero */

loc_00187E1B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x00187E23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00187E1Du); } /* indirect call */
    }

loc_00187E23: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00187E30
 * Original: 0x00187E30 - 0x00187EFF (207 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x230)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x230), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00187E7A; /* je: equal / zero */

loc_00187E3C: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00187E7A; /* jne: not equal / not zero */

loc_00187E44: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1CE);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1CC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00187E7A; /* jne: not equal / not zero */

loc_00187E56: ;
    ecx = MEM32(esi + 0x254);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00187E61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00187E5Eu); } /* indirect call */
    }

loc_00187E61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187E7A; /* je: equal / zero */

loc_00187E65: ;
    ecx = MEM32(esi + 0x254);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00187E70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00187E6Du); } /* indirect call */
    }

loc_00187E70: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00187E7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00187E74u); } /* indirect call */
    }

loc_00187E7A: ;
    SET_LO16(eax, MEM16(esp + 8));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 0x1CC) = MEM16(esi + 0x1CC) + LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 0x1CC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xED497BEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 0xED497BEAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00187E9C; /* jne: not equal / not zero */

loc_00187E95: ;
    ecx = esi;
    PUSH32(esp, 0x00187E9Cu); RECOMP_ABI_CALL(0x00187B20u, sub_00187B20); /* call 0x00187B20 */

loc_00187E9C: ;
    edx = MEM32(0x3888C0);
    SET_LO8(edx, MEM8(edx + 0x1ED4));
    SET_LO8(edx, LO8(edx) >> 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00187EB9; /* je: equal / zero */

loc_00187EB0: ;
    SET_LO16(eax, MEM16(esi + 0x232));
    goto loc_00187EC7;

loc_00187EB9: ;
    ecx = MEM32(esi + 0x1C0);
    SET_LO16(eax, MEM16(ecx + 0x44));
    _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(ecx + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */

loc_00187EC7: ;
    _fa = (uint32_t)(MEM16(esi + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x1CC), LO16(eax) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00187EFB; /* jle: less or equal (signed <=) */

loc_00187ED0: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187EE6; /* je: equal / zero */

loc_00187ED4: ;
    SET_LO16(eax, MEM16(esi + 0x232));
    MEM16(esi + 0x1CC) = LO16(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00187EE6: ;
    ecx = MEM32(esi + 0x1C0);
    SET_LO16(eax, MEM16(ecx + 0x44));
    _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(ecx + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(esi + 0x1CC) = LO16(eax);

loc_00187EFB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00187F00
 * Original: 0x00187F00 - 0x00187F5F (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187F00(void)
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

loc_00187F00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3888C0);
    SET_LO16(edx, MEM16(ecx + 0x1CE));
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0x1CC));
    if (TEST_Z(_fa, _fb)) goto loc_00187F31; /* je: equal / zero */

loc_00187F1E: ;
    eax = MEM32(ecx + 0x1C0);
    SET_LO16(eax, MEM16(eax + 4));
    _fb = (uint32_t)(MEM16(ecx + 0x232)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x232));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_00187F3B;

loc_00187F31: ;
    ecx = MEM32(ecx + 0x1C0);
    SET_LO16(eax, MEM16(ecx + 0x44));

loc_00187F3B: ;
    ecx = SX16(LO16(esi));
    MEM32(esp + 4) = ecx;
    edx = SX16(LO16(edx));
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = edx;
    eax = SX16(LO16(eax));
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 4)); /* fiadd dword ptr [esp + 4] */
    MEM32(esp + 4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 4)); /* fidiv dword ptr [esp + 4] */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00187F60
 * Original: 0x00187F60 - 0x00187F7D (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187F60: ;
    eax = MEM32(ecx + 0x1C0);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00187F75; /* jne: not equal / not zero */

loc_00187F6D: ;
    MEM16(ecx + 0x1CC) = MEM16(ecx + 0x1CC) - 1;
    _fa = (uint32_t)(MEM16(ecx + 0x1CC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00187F75: ;
    MEM16(ecx + 0x1CE) = MEM16(ecx + 0x1CE) - 1;
    _fa = (uint32_t)(MEM16(ecx + 0x1CE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00187F80
 * Original: 0x00187F80 - 0x00187F99 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187F80: ;
    eax = MEM32(ecx + 0x1C0);
    SET_LO16(edx, MEM16(esp + 4));
    _fb = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(eax + 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(ecx + 0x232) = LO16(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00187FA0
 * Original: 0x00187FA0 - 0x00187FCD (45 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00187FA0: ;
    eax = MEM32(ecx + 0x1C0);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8EE65D66u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0x8EE65D66u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00187FCA; /* je: equal / zero */

loc_00187FAF: ;
    SET_LO8(edx, MEM8(ecx + 0x231));
    SET_LO8(edx, LO8(edx) ^ MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x231));
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x231) = LO8(eax);

loc_00187FCA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00187FD0
 * Original: 0x00187FD0 - 0x001880DC (268 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187FD0(void)
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

loc_00187FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xED497BEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0xED497BEAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001880D5; /* je: equal / zero */

loc_00187FEF: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188002u); RECOMP_ABI_CALL(0x000FE210u, sub_000FE210); /* call 0x000FE210 */

loc_00188002: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x240) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001880D5; /* je: equal / zero */

loc_00188013: ;
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018801Fu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018801F: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188043u); RECOMP_ABI_CALL(0x00265E50u, sub_00265E50); /* call 0x00265E50 */

loc_00188043: ;
    ecx = MEM32(esi + 0x240);
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x00188056u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188050u); } /* indirect call */
    }

loc_00188056: ;
    ecx = MEM32(esi + 0x240);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188066u); RECOMP_ABI_CALL(0x00131F50u, sub_00131F50); /* call 0x00131F50 */

loc_00188066: ;
    ecx = MEM32(esi + 0x240);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188073u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_00188073: ;
    eax = MEM32(esi + 0x240);
    ecx = MEM32(eax + 0xCC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00188086u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188083u); } /* indirect call */
    }

loc_00188086: ;
    eax = MEM32(esi + 0x240);
    ecx = MEM32(eax + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001880D5; /* je: equal / zero */

loc_00188096: ;
    PUSH32(esp, 0x41700000);
    PUSH32(esp, 0x41200000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001880A5u); RECOMP_ABI_CALL(0x0012FB40u, sub_0012FB40); /* call 0x0012FB40 */

loc_001880A5: ;
    ecx = MEM32(esi + 0x254);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001880B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001880ADu); } /* indirect call */
    }

loc_001880B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001880D5; /* je: equal / zero */

loc_001880B4: ;
    ecx = MEM32(esi + 0x240);
    esi = MEM32(ecx + 0x16C);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x001880CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001880C4u); } /* indirect call */
    }

loc_001880CA: ;
    MEM8(esi + 0x60) = 1;
    MEM8(esi + 0x61) = 0;
    MEM8(esi + 0x62) = LO8(eax);

loc_001880D5: ;
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
 * sub_001880E0
 * Original: 0x001880E0 - 0x001880E9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001880E0(void)
{

loc_001880E0: ;
    eax = ecx;
    MEM32(eax) = 0x323D98;
    esp += 4; return; /* ret */

}

/**
 * sub_001880F0
 * Original: 0x001880F0 - 0x001880F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001880F0(void)
{

loc_001880F0: ;
    MEM32(ecx) = 0x2FF0D4;
    esp += 4; return; /* ret */

}

/**
 * sub_00188100
 * Original: 0x00188100 - 0x00188163 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188100: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 4);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0018814F; /* je: equal / zero */

loc_0018810D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x44) = ecx;
    MEM16(eax + 0x66) = 1;

loc_0018814F: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(edx);
    MEM32(eax + 4) = ecx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00188170
 * Original: 0x00188170 - 0x001881BC (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188170: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    edi = ecx;
    edx = edi;
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x400);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x323DC0);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0018819Eu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0018819E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001881B2; /* je: equal / zero */

loc_001881A5: ;
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001881B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001881C0
 * Original: 0x001881C0 - 0x00188211 (81 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001881C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001881C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018820B; /* je: equal / zero */

loc_001881CD: ;
    ecx = MEM32(edx + -4);
    PUSH32(esp, ebx);
    ebx = edx + -4;
    eax = ecx;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001881FE; /* js: sign (negative) */

loc_001881DE: ;
    PUSH32(esp, ebp);
    esi = eax + 8;
    ebp = ecx + 1;

loc_001881E5: ;
    ecx = MEM32(esi + -128);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001881F8; /* je: equal / zero */

loc_001881F2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001881F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001881F6u); } /* indirect call */
    }

loc_001881F8: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001881E5; /* jne: not equal / not zero */

loc_001881FB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);

loc_001881FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00188204u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_00188204: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = esi;
    POP32(esp, ebx);

loc_0018820B: ;
    MEM32(edi + 8) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00188220
 * Original: 0x00188220 - 0x00188249 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188220: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00188243; /* je: equal / zero */

loc_00188228: ;
    ecx = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00188243; /* jbe: below or equal (unsigned <=) */

loc_00188231: ;
    esi = MEM32(esp + 8);

loc_00188235: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188245; /* je: equal / zero */

loc_00188239: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00188235; /* jb: below (unsigned <) */

loc_00188243: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00188245: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188250
 * Original: 0x00188250 - 0x00188384 (308 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188250: ;
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
    edi = MEM32(esi + 0x2B8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018837D; /* je: equal / zero */

loc_00188271: ;
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018827Au); RECOMP_ABI_CALL(0x0009F640u, sub_0009F640); /* call 0x0009F640 */

loc_0018827A: ;
    PUSH32(esp, edi);
    ecx = esp + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188284u); RECOMP_ABI_CALL(0x00142510u, sub_00142510); /* call 0x00142510 */

loc_00188284: ;
    MEM32(esi + 0x2B8) = ebx;
    _fa = (uint32_t)(MEM32(0x3E8D54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3E8D54), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018837D; /* je: equal / zero */

loc_00188296: ;
    eax = MEM32(esi + 0x1C0);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x28) = LO8(ebx);
    MEM32(esp + 0x24) = 0x302BAC;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00188319; /* je: equal / zero */

loc_001882CB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x001882D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001882CDu); } /* indirect call */
    }

loc_001882D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188319; /* je: equal / zero */

loc_001882D7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0x1C0);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1CE);
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x78) = ebx;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x7C) = ebx;
    MEM32(esp + 0x74) = edi;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x6C) = 1;
    goto loc_00188365;

loc_00188319: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x00188328u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188322u); } /* indirect call */
    }

loc_00188328: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188336u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_00188336: ;
    ecx = MEM32(esi + 0x1C0);
    eax = esp + 0x24;
    MEM32(esp + 0x3C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1CE);
    MEM32(esp + 0x74) = edi;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    MEM32(esp + 0x84) = edx;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x6C) = ebx;

loc_00188365: ;
    ecx = esp + 0x38;
    MEM8(esp + 0x89) = 1;
    MEM8(esp + 0x88) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018837Du); RECOMP_ABI_CALL(0x00142E00u, sub_00142E00); /* call 0x00142E00 */

loc_0018837D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00188390
 * Original: 0x00188390 - 0x001884FD (365 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C0);
    PUSH32(esp, edi);
    edi = 1;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x58) = ebx;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x60) = edi;
    MEM32(esp + 0x64) = ebx;
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x6C) = edi;
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x38) = 0x30E010;
    MEM32(esp + 0x74) = edi;
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x7C) = ebx;
    MEM32(esp + 0x80) = ebx;
    MEM32(esp + 0x84) = ebx;
    MEM8(esp + 0x88) = LO8(ebx);
    MEM8(esp + 0x89) = LO8(ebx);
    MEM8(esp + 0x8A) = LO8(ebx);
    MEM8(esp + 0x8B) = LO8(ebx);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x28) = LO8(ebx);
    MEM32(esp + 0x24) = 0x302BAC;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00188479; /* je: equal / zero */

loc_00188467: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0018846Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188469u); } /* indirect call */
    }

loc_0018846F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188479; /* je: equal / zero */

loc_00188473: ;
    MEM32(esp + 0x6C) = edi;
    goto loc_001884A2;

loc_00188479: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x00188488u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188482u); } /* indirect call */
    }

loc_00188488: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188496u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_00188496: ;
    eax = esp + 0x24;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x6C) = ebx;

loc_001884A2: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x1C0);
    MEM32(esp + 0x74) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edx + 4);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1CE);
    MEM32(esp + 0x84) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x2B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2B8), ebx (32-bit) */
    MEM32(esp + 0x80) = ecx;
    MEM8(esp + 0x88) = 1;
    MEM8(esp + 0x89) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001884E7; /* je: equal / zero */

loc_001884E0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001884E7u); RECOMP_ABI_CALL(0x00188250u, sub_00188250); /* call 0x00188250 */

loc_001884E7: ;
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001884F0u); RECOMP_ABI_CALL(0x00142E00u, sub_00142E00); /* call 0x00142E00 */

loc_001884F0: ;
    POP32(esp, edi);
    MEM32(esi + 0x2B8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00188500
 * Original: 0x00188500 - 0x0018859D (157 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x28) = LO8(ebx);
    MEM32(esp + 0x24) = 0x302BAC;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x0018853Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188534u); } /* indirect call */
    }

loc_0018853A: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188548u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_00188548: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x20;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x34;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x34) = 0x2FF9EC;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x5C) = LO8(ebx);
    MEM32(esp + 0x54) = 0xCFC4A9F1u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188598u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_00188598: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001885A0
 * Original: 0x001885A0 - 0x0018867C (220 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001885A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001885A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM32(esp + 0x28) = 0x302BAC;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x001885DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001885D9u); } /* indirect call */
    }

loc_001885DF: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001885EDu); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_001885ED: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0x1C0);
    eax = 1;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x6C) = eax;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = esp + 0x24;
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x78) = 0xFFFFFFFFu;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x64) = ebx;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = 0x323D80;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esp + 0x38;
    MEM32(esp + 0x78) = edx;
    MEM32(esp + 0x74) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188674u); RECOMP_ABI_CALL(0x001437D0u, sub_001437D0); /* call 0x001437D0 */

loc_00188674: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188680
 * Original: 0x00188680 - 0x0018875C (220 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x254);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0018869Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188698u); } /* indirect call */
    }

loc_0018869E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188756; /* je: equal / zero */

loc_001886A6: ;
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001886AFu); RECOMP_ABI_CALL(0x0009F640u, sub_0009F640); /* call 0x0009F640 */

loc_001886AF: ;
    ecx = MEM32(esi + 0x1C0);
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x38);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0x254);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x28) = 0;
    MEM32(esp + 0x24) = 0x302BAC;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188712u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_00188712: ;
    ecx = MEM32(esi + 0x1C0);
    eax = esp + 0x24;
    MEM32(esp + 0x3C) = eax;
    eax = 1;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x74) = edi;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1CE);
    MEM32(esp + 0x80) = ecx;
    ecx = esp + 0x38;
    MEM32(esp + 0x84) = edx;
    MEM8(esp + 0x8B) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188756u); RECOMP_ABI_CALL(0x00142E00u, sub_00142E00); /* call 0x00142E00 */

loc_00188756: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00188760
 * Original: 0x00188760 - 0x001887FD (157 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188760: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x28) = LO8(ebx);
    MEM32(esp + 0x24) = 0x302BAC;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x0018879Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188794u); } /* indirect call */
    }

loc_0018879A: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001887A8u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_001887A8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x20;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x34;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x34) = 0x2FF9EC;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x5C) = LO8(ebx);
    MEM32(esp + 0x54) = 0x6CEAF9BF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001887F8u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_001887F8: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00188800
 * Original: 0x00188800 - 0x001888D4 (212 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001888CD; /* je: equal / zero */

loc_00188817: ;
    xmm3 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x40); /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x44); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x60); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x48); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x64); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x68); /* addss */
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 0x16C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001888CD; /* je: equal / zero */

loc_0018889E: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(esi + 0x180) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x184) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x188) = xmm2.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x001888CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001888C4u); } /* indirect call */
    }

loc_001888CA: ;
    MEM8(esi + 0x62) = LO8(eax);

loc_001888CD: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001888E0
 * Original: 0x001888E0 - 0x00188A26 (326 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001888E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001888E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xCC);
    ecx = MEM32(edi + 0x10);
    esi = MEM32(ecx + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00188A1D; /* jbe: below or equal (unsigned <=) */

loc_00188900: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00188908: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE6E804D5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xE6E804D5u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188921; /* je: equal / zero */

loc_00188910: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00188908; /* jb: below (unsigned <) */

loc_00188918: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00188921: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00188A1D; /* jle: less or equal (signed <=) */

loc_00188929: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188A1D; /* je: equal / zero */

loc_00188934: ;
    esi = MEM32(edi + 0x10);
    edi = MEM32(esi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00188949; /* jle: less or equal (signed <=) */

loc_0018893E: ;
    edx = edx + edx * 4 + 5;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0018894B;

loc_00188949: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018894B: ;
    xmm4 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x60); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x64); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x68); /* addss */
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 0x16C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00188A1D; /* je: equal / zero */

loc_001889EE: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(esi + 0x180) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x184) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x188) = xmm2.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00188A1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188A14u); } /* indirect call */
    }

loc_00188A1A: ;
    MEM8(esi + 0x62) = LO8(eax);

loc_00188A1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00188A30
 * Original: 0x00188A30 - 0x00188A89 (89 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x2C4;
    MEM32(esi) = 0x323DF8;
    MEM32(esi + 8) = 0x323DF0;
    MEM32(esi + 0xB0) = 0x323DE8;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00188A64; /* je: equal / zero */

loc_00188A5E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00188A64u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00188A64: ;
    MEM32(edi + 4) = 0;
    ecx = MEM32(esi + 0x1C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188A80; /* je: equal / zero */

loc_00188A75: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00188A80; /* jne: not equal / not zero */

loc_00188A7A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00188A80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188A7Eu); } /* indirect call */
    }

loc_00188A80: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000FCCE0(); return; /* tail jmp 0x000FCCE0 */

}

/**
 * sub_00188A90
 * Original: 0x00188A90 - 0x00188AE7 (87 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188A90: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5234EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188AC9; /* jne: not equal / not zero */

loc_00188A9A: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x323F88);
    PUSH32(esp, 0x00188AABu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00188AAB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188ABF; /* je: equal / zero */

loc_00188AB2: ;
    MEM32(eax) = 0x323D98;
    MEM32(0x5234EC) = eax;
    goto loc_00188AC9;

loc_00188ABF: ;
    MEM32(0x5234EC) = 0;

loc_00188AC9: ;
    PUSH32(esp, 0x323F78);
    ecx = esp + 4;
    PUSH32(esp, 0x00188AD7u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_00188AD7: ;
    PUSH32(esp, eax);
    eax = MEM32(0x5234EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00188AE3u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_00188AE3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00188AF0
 * Original: 0x00188AF0 - 0x00188AFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188AF0: ;
    ecx = MEM32(0x5234EC);
    g_seh_ebp = ebp; sub_001881C0(); return; /* tail jmp 0x001881C0 */

}

/**
 * sub_00188B00
 * Original: 0x00188B00 - 0x00188B5A (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188B20; /* je: equal / zero */

loc_00188B0D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00188B13u); RECOMP_ABI_CALL(0x00035DF0u, sub_00035DF0); /* call 0x00035DF0 */

loc_00188B13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE0) = 0;

loc_00188B20: ;
    ecx = MEM32(esi + 0x240);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188B3A; /* je: equal / zero */

loc_00188B2A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00188B30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188B2Eu); } /* indirect call */
    }

loc_00188B30: ;
    MEM32(esi + 0x240) = 0;

loc_00188B3A: ;
    ecx = MEM32(esi + 0x2C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188B4A; /* je: equal / zero */

loc_00188B44: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00188B4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188B48u); } /* indirect call */
    }

loc_00188B4A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00188B56u); RECOMP_ABI_CALL(0x000FCB70u, sub_000FCB70); /* call 0x000FCB70 */

loc_00188B56: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188B60
 * Original: 0x00188B60 - 0x00188B6C (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188B60: ;
    MEM8(ecx + 0x230) = MEM8(ecx + 0x230) | 1;
    _fa = (uint32_t)(MEM8(ecx + 0x230)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00188250(); return; /* tail jmp 0x00188250 */

}

/**
 * sub_00188B70
 * Original: 0x00188B70 - 0x00189099 (1321 bytes, 277 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188B70(void)
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

loc_00188B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xB4));
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188B8Cu); RECOMP_ABI_CALL(0x000390A0u, sub_000390A0); /* call 0x000390A0 */

loc_00188B8C: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189090; /* je: equal / zero */

loc_00188B99: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, 0xBFC90FDBu);
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
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188C43u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00188C43: ;
    fp_top() = -fp_top(); /* fchs */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    ecx = esp + 0x88;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188C7Au); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_00188C7A: ;
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, 0xBFC90FDBu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188C89u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00188C89: ;
    fp_top() = -fp_top(); /* fchs */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x88;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188CC0u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_00188CC0: ;
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, 0xBFC90FDBu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188CCFu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00188CCF: ;
    fp_top() = -fp_top(); /* fchs */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x88;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188D06u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_00188D06: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188D34u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00188D34: ;
    xmm0 = XMM_MEM(esp + 0x80); /* movaps */
    XMM_STORE(0x534370, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x90); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xA0); /* movaps */
    XMM_STORE(0x534390, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xB0); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    esi = ebx + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, 0x534370);
    ecx = esp + 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188D85u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_00188D85: ;
    edx = MEM32(edi);
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00188D97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188D91u); } /* indirect call */
    }

loc_00188D97: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00188DA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188DA0u); } /* indirect call */
    }

loc_00188DA3: ;
    PUSH32(esp, 0x3FE66666);
    PUSH32(esp, 0x3FC00000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188DB2u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00188DB2: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188DBFu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00188DBF: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3FB0A3D7);
    PUSH32(esp, 0x3FACCCCD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188DD2u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00188DD2: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0xBDCCCCCDu);
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188E68u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00188E68: ;
    fp_top() = -fp_top(); /* fchs */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188E9Cu); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_00188E9C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188EA5u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00188EA5: ;
    fp_top() = -fp_top(); /* fchs */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188ED9u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_00188ED9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188EE2u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00188EE2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = -fp_top(); /* fchs */
    edx = esp + 0x14;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00188F15u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_00188F15: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    ecx = MEM32(ebx + 0x254);
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x30;
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm5.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00189022u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018901Fu); } /* indirect call */
    }

loc_00189022: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(0x3210B0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00189084; /* jbe: below or equal (unsigned <=) */

loc_0018904E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_00189084: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189090u); RECOMP_ABI_CALL(0x000FEAB0u, sub_000FEAB0); /* call 0x000FEAB0 */

loc_00189090: ;
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
 * sub_001890A0
 * Original: 0x001890A0 - 0x001890AF (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001890A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001890A0: ;
    MEM32(ecx + 0x1D8) = 1;
    g_seh_ebp = ebp; sub_00188250(); return; /* tail jmp 0x00188250 */

}

/**
 * sub_001890B0
 * Original: 0x001890B0 - 0x001890E2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001890B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001890B0: ;
    edx = MEM32(0x5234EC);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001890DE; /* je: equal / zero */

loc_001890BE: ;
    edx = MEM32(edx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001890DE; /* jbe: below or equal (unsigned <=) */

loc_001890C7: ;
    esi = MEM32(esp + 8);
    goto loc_001890D0;

    /* nop */

loc_001890D0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001890E0; /* je: equal / zero */

loc_001890D4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001890D0; /* jb: below (unsigned <) */

loc_001890DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001890E0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001890F0
 * Original: 0x001890F0 - 0x00189412 (802 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001890F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001890F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001890FAu); RECOMP_ABI_CALL(0x000FD160u, sub_000FD160); /* call 0x000FD160 */

loc_001890FA: ;
    MEM32(esi) = 0x323DF8;
    MEM32(esi + 8) = 0x323DF0;
    MEM32(esi + 0xB0) = 0x323DE8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C4) = ebx;
    MEM32(esi + 0x2C8) = ebx;
    MEM32(esi + 0x2CC) = ebx;
    MEM32(esi + 0x2D0) = ebx;
    ecx = esi;
    MEM32(esi + 0x2C4) = 0x307680;
    PUSH32(esp, 0x0018913Cu); RECOMP_ABI_CALL(0x000FC730u, sub_000FC730); /* call 0x000FC730 */

loc_0018913C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    edi = MEM32(esp + 0x10);
    MEM32(esi + 0x2B8) = ebx;
    MEM8(esi + 0x2BC) = LO8(ebx);
    MEM8(esi + 0x2BD) = LO8(ebx);
    MEM8(esi + 0x2BE) = LO8(ebx);
    MEMF(esi + 0x1EC) = xmm0.f[0]; /* movss */
    MEM16(esi + 0x1CE) = LO16(ebx);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189184; /* jne: not equal / not zero */

loc_00189174: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x323FB0);
    PUSH32(esp, 0x00189181u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00189181: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00189184: ;
    ecx = MEM32(edi);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = 1;
    MEM32(esi + 0x1D8) = eax;
    MEM32(esi + 0x1DC) = eax;
    SET_LO8(eax, MEM8(esi + 0x230));
    MEM32(esi + 0x1C8) = ecx;
    MEMF(esi + 0x1D0) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x2BF) = LO8(ebx);
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x238) = xmm1.f[0]; /* movss */
    SET_LO8(eax, LO8(eax) & 0xFB);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x230) = LO8(eax);
    edx = MEM32(edi + 8);
    MEM32(esi + 0x254) = edx;
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x230) = LO8(eax);
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x1C0) = ecx;
    edx = MEM32(edi + 4);
    ecx = MEM32(edx + 0x18);
    MEM32(esi + 0x1E8) = ecx;
    edx = MEM32(edi);
    MEM32(esi + 0x1C8) = edx;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx + 0x1C);
    SET_LO8(eax, LO8(eax) & 0x4F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x409CCCCD);
    PUSH32(esp, ebx);
    MEM32(esi + 0xCC) = edx;
    MEMF(esi + 0x234) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x250) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x230) = LO8(eax);
    PUSH32(esp, 0x00189231u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00189231: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189239u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00189239: ;
    SET_LO8(ecx, MEM8(esi + 0x230));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esi + 0x231));
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31BE80); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x30076C); /* addss */
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x230) = LO8(ecx);
    MEM8(esi + 0x231) = LO8(eax);
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(esi + 0x1C0);
    MEMF(esi + 0x2D4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8EE65D66u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0x8EE65D66u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018928C; /* jne: not equal / not zero */

loc_00189283: ;
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x231) = LO8(ecx);

loc_0018928C: ;
    SET_LO16(ecx, MEM16(edi + 0xC));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x44);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    if (CMP_LE(_fas, _fbs)) eax = ecx; /* cmovle */
    MEM16(esi + 0x1CC) = LO16(eax);
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(ecx + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(esi + 0x232) = LO16(eax);
    if ((_fas >= 0)) goto loc_001892B8; /* jns: not sign (positive) */

loc_001892B1: ;
    MEM16(esi + 0x232) = LO16(ebx);

loc_001892B8: ;
    ecx = esi;
    PUSH32(esp, 0x001892BFu); RECOMP_ABI_CALL(0x00187B20u, sub_00187B20); /* call 0x00187B20 */

loc_001892BF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x218) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x214) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x210) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001892F1; /* je: equal / zero */

loc_001892E4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001892E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001892E6u); } /* indirect call */
    }

loc_001892E9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001892F1u); RECOMP_ABI_CALL(0x0018AAA0u, sub_0018AAA0); /* call 0x0018AAA0 */

loc_001892F1: ;
    MEM32(esi + 0xE0) = ebx;
    ecx = MEM32(0x5234EC);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001893BC; /* je: equal / zero */

loc_00189309: ;
    ecx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001893BC; /* jbe: below or equal (unsigned <=) */

loc_00189316: ;
    edi = MEM32(edi);

loc_00189318: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018932D; /* je: equal / zero */

loc_0018931D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x80;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00189318; /* jb: below (unsigned <) */

loc_00189328: ;
    goto loc_001893BC;

loc_0018932D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001893BC; /* je: equal / zero */

loc_00189335: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189396; /* je: equal / zero */

loc_0018933C: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018934Cu); RECOMP_ABI_CALL(0x00067BF0u, sub_00067BF0); /* call 0x00067BF0 */

loc_0018934C: ;
    ecx = MEM32(esi + 0x1C4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189377; /* je: equal / zero */

loc_0018935B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x1C4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00189368; /* je: equal / zero */

loc_00189365: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00189368: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189377; /* je: equal / zero */

loc_0018936C: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00189377; /* jne: not equal / not zero */

loc_00189371: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00189377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189375u); } /* indirect call */
    }

loc_00189377: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189396; /* je: equal / zero */

loc_0018937F: ;
    edi = MEM32(eax + 4);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(eax) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00189396; /* jne: not equal / not zero */

loc_00189390: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00189396u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189394u); } /* indirect call */
    }

loc_00189396: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x244) = eax;
    ecx = MEM32(ebp + 0x20);
    edx = ebp + 0x18;
    MEM32(esi + 0x24C) = ecx;
    MEM32(esi + 0x248) = edx;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001893BCu); RECOMP_ABI_CALL(0x00187FD0u, sub_00187FD0); /* call 0x00187FD0 */

loc_001893BC: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ecx = esi + 0x170;
    PUSH32(esp, 0x001893CAu); RECOMP_ABI_CALL(0x0003B6B0u, sub_0003B6B0); /* call 0x0003B6B0 */

loc_001893CA: ;
    ecx = MEM32(esi + 0x254);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001893D7u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_001893D7: ;
    eax = MEM32(esi + 0xCC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0018940A; /* je: equal / zero */

loc_001893E5: ;
    ecx = MEM32(esi + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018940A; /* je: equal / zero */

loc_001893EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001893F5u); RECOMP_ABI_CALL(0x0012FB20u, sub_0012FB20); /* call 0x0012FB20 */

loc_001893F5: ;
    ecx = MEM32(esi + 0x16C);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41C80000);
    PUSH32(esp, 0x0018940Au); RECOMP_ABI_CALL(0x0012FB40u, sub_0012FB40); /* call 0x0012FB40 */

loc_0018940A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189420
 * Original: 0x00189420 - 0x0018A435 (4117 bytes, 946 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189420(void)
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

loc_00189420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x194) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x194));
    esp = esp - 0x194;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C0);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x42)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x42), LO16(edi) (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00189C27; /* jle: less or equal (signed <=) */

loc_00189447: ;
    ebx = esi + 0x1F0;
    /* nop */

loc_00189450: ;
    ecx = MEM32(esi + 0x254);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0018945Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189458u); } /* indirect call */
    }

loc_0018945E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x210)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x214)); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x218)); /* movss */
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    MEM32(esp + 0x2C) = edi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00189561; /* je: equal / zero */

loc_001894BF: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x001894C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001894C3u); } /* indirect call */
    }

loc_001894C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001894DC; /* je: equal / zero */

loc_001894CD: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001894DCu); RECOMP_ABI_CALL(0x001313A0u, sub_001313A0); /* call 0x001313A0 */

loc_001894DC: ;
    edx = MEM32(esi + 0x1C0);
    SET_LO8(eax, MEM8(edx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001895E5; /* je: equal / zero */

loc_001894ED: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001894F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001894F1u); } /* indirect call */
    }

loc_001894F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001895E5; /* je: equal / zero */

loc_001894FC: ;
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189507u); RECOMP_ABI_CALL(0x00079180u, sub_00079180); /* call 0x00079180 */

loc_00189507: ;
    edx = MEM32(esi + 0x1C0);
    ecx = eax;
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3EAA50A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3EAA50A (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_00189553; /* je: equal / zero */

loc_0018951B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8EE65D66u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8EE65D66u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00189545; /* je: equal / zero */

loc_00189522: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xED497BEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xED497BEAu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00189537; /* je: equal / zero */

loc_00189529: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189532u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_00189532: ;
    goto loc_001895E5;

loc_00189537: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189540u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_00189540: ;
    goto loc_001895E5;

loc_00189545: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018954Eu); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_0018954E: ;
    goto loc_001895E5;

loc_00189553: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018955Cu); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_0018955C: ;
    goto loc_001895E5;

loc_00189561: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001895A9; /* jbe: below or equal (unsigned <=) */

loc_0018957A: ;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xA4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    goto loc_001895DC;

loc_001895A9: ;
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0xA4) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm1.f[0]; /* movss */

loc_001895DC: ;
    MEMF(esp + 0xA0) = xmm4.f[0]; /* movss */

loc_001895E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00189608; /* je: equal / zero */

loc_001895F2: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x001895FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001895F6u); } /* indirect call */
    }

loc_001895FC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31BE80)); /* fmul dword ptr [0x31be80] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0018962B;

loc_00189608: ;
    ecx = MEM32(esi + 0x254);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x00189616u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189610u); } /* indirect call */
    }

loc_00189616: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018962B; /* je: equal / zero */

loc_0018961A: ;
    eax = MEM32(esi + 0x1C0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */

loc_0018962B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x50); /* subss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189644u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00189644: ;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x64);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    ecx = esp + 0x168;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189664u); RECOMP_ABI_CALL(0x00264DC0u, sub_00264DC0); /* call 0x00264DC0 */

loc_00189664: ;
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189670u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00189670: ;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_push(MEMF(ebx)); /* fld float */
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
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001896E0; /* jnp: not parity */

loc_001896AF: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x4C); /* divss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 8); /* mulss */
    MEMF(ebx + 4) = xmm1.f[0]; /* movss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */

loc_001896E0: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esp + 0x168;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001896F2u); RECOMP_ABI_CALL(0x00265ED0u, sub_00265ED0); /* call 0x00265ED0 */

loc_001896F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001897E8; /* je: equal / zero */

loc_001896FA: ;
    ecx = MEM32(esi + 0x254);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00189709u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189706u); } /* indirect call */
    }

loc_00189709: ;
    eax = MEM32(esi + 0x1C0);
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001897E8; /* jne: not equal / not zero */

loc_0018971A: ;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xED497BEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0xED497BEAu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001897E8; /* jne: not equal / not zero */

loc_00189727: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm5 = xmm7; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm6 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, 0x3E860A8B);
    eax = esp + 0x74;
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x168;
    MEMF(esp + 0x78) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001897E8u); RECOMP_ABI_CALL(0x00264DC0u, sub_00264DC0); /* call 0x00264DC0 */

loc_001897E8: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x160)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x170); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x164)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebx); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x168)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebx); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x180); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x174); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x184); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x178); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x188); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00189907; /* jnp: not parity */

loc_001898D5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x4C); /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_00189907: ;
    ecx = MEM32(esi + 0x1C0);
    SET_LO8(eax, MEM8(0x5234E8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x250); /* mulss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001899FC; /* je: equal / zero */

loc_00189933: ;
    ecx = MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001899FC; /* je: equal / zero */

loc_00189941: ;
    edx = MEM32(ecx);
    eax = esp + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0018994Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018994Bu); } /* indirect call */
    }

loc_0018994E: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 0x54); /* divss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */

loc_001899FC: ;
    SET_LO8(eax, MEM8(esi + 0x230));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = 0xFF;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00189A11; /* js: sign (negative) */

loc_00189A0B: ;
    ecx = MEM32(esi + 0x1E4);

loc_00189A11: ;
    edx = MEM32(esi + 0x254);
    eax = MEM32(esi + 0x1C0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x1E0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 0x40));
    ecx = esp + 0xA8;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x3C2F40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189A52u); RECOMP_ABI_CALL(0x00182050u, sub_00182050); /* call 0x00182050 */

loc_00189A52: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189C6F; /* je: equal / zero */

loc_00189A5C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x00189A66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189A60u); } /* indirect call */
    }

loc_00189A66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189A82; /* je: equal / zero */

loc_00189A6A: ;
    edx = MEM32(edi);
    ecx = esi + 0x200;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x00189A7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189A75u); } /* indirect call */
    }

loc_00189A7B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189A82u); RECOMP_ABI_CALL(0x00183580u, sub_00183580); /* call 0x00183580 */

loc_00189A82: ;
    SET_LO8(eax, MEM8(esi + 0x230));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00189A9C; /* jns: not sign (positive) */

loc_00189A8C: ;
    xmm0 = XMM_SCALAR(MEMF(0x323FDC)); /* movss */
    MEMF(edi + 0xE8) = xmm0.f[0]; /* movss */

loc_00189A9C: ;
    eax = MEM32(esi + 0x1C0);
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00189AD2; /* jne: not equal / not zero */

loc_00189AA9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x00189AB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189AADu); } /* indirect call */
    }

loc_00189AB3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1EC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00189AD2; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_00189AC4: ;
    ecx = MEM32(esi + 0x1EC);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189AD2u); RECOMP_ABI_CALL(0x00185390u, sub_00185390); /* call 0x00185390 */

loc_00189AD2: ;
    SET_LO8(eax, MEM8(esi + 0x230));
    ecx = MEM32(esi + 0x1C0);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x230) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x40));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00189AF9; /* jne: not equal / not zero */

loc_00189AED: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB290D783u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xB290D783u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00189C0C; /* jne: not equal / not zero */

loc_00189AF9: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x230) = LO8(eax);
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189C0C; /* je: equal / zero */

loc_00189B0D: ;
    edx = MEM32(esi);
    eax = esp + 0xC0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE6E804D5u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00189B21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189B1Eu); } /* indirect call */
    }

loc_00189B21: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189C0C; /* je: equal / zero */

loc_00189B29: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xF4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xF8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xF0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    edx = MEM32(edi);
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x60); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x54)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x64); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x68); /* addss */
    ecx = edi;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x00189BD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189BD2u); } /* indirect call */
    }

loc_00189BD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189BF2; /* je: equal / zero */

loc_00189BDC: ;
    edx = MEM32(edi);
    eax = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x00189BEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189BE5u); } /* indirect call */
    }

loc_00189BEB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189BF2u); RECOMP_ABI_CALL(0x00183550u, sub_00183550); /* call 0x00183550 */

loc_00189BF2: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x00189BFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189BF6u); } /* indirect call */
    }

loc_00189BFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189C0C; /* je: equal / zero */

loc_00189C00: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189C0Cu); RECOMP_ABI_CALL(0x00185480u, sub_00185480); /* call 0x00185480 */

loc_00189C0C: ;
    edx = MEM32(esi + 0x1C0);
    eax = MEM32(esp + 0x28);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x42);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00189450; /* jl: less (signed <) */

loc_00189C27: ;
    SET_LO8(eax, MEM8(0x37279E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189C46; /* je: equal / zero */

loc_00189C30: ;
    ecx = MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189C46; /* je: equal / zero */

loc_00189C3A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00189C42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189C3Cu); } /* indirect call */
    }

loc_00189C42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00189C9B; /* jne: not equal / not zero */

loc_00189C46: ;
    _fa = (uint32_t)(MEM8(esi + 0x231)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x231), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00189C9B; /* jne: not equal / not zero */

loc_00189C4F: ;
    SET_LO8(eax, MEM8(esi + 0x230));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00189C9B; /* js: sign (negative) */

loc_00189C59: ;
    eax = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00189C94; /* jne: not equal / not zero */

loc_00189C66: ;
    MEM16(esi + 0x1CC) = MEM16(esi + 0x1CC) - 1;
    _fa = (uint32_t)(MEM16(esi + 0x1CC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00189C9B;

loc_00189C6F: ;
    edx = MEM32(esi + 0x1C0);
    eax = (uint32_t)(int32_t)SMEM16(edx + 6);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1D4); /* addss */
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00189C94: ;
    MEM16(esi + 0x1CE) = MEM16(esi + 0x1CE) - 1;
    _fa = (uint32_t)(MEM16(esi + 0x1CE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */

loc_00189C9B: ;
    SET_LO8(edx, MEM8(esi + 0x230));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esi + 0x1C0);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    MEM32(esp + 0xE8) = eax;
    MEM32(esp + 0xF4) = eax;
    MEM32(esp + 0xFC) = eax;
    eax = MEM32(esi + 0x254);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) | 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x230) = LO8(edx);
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xDC) = ebx;
    MEM32(esp + 0xD0) = ebx;
    MEM32(esp + 0xD4) = ebx;
    MEM32(esp + 0xD8) = ebx;
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xE0) = ebx;
    MEMF(esp + 0xE4) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xEC) = ebx;
    MEMF(esp + 0xF0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xF8) = xmm1.f[0]; /* movss */
    MEM32(esp + 0xC0) = 0x30E010;
    MEM32(esp + 0x100) = ebx;
    MEM32(esp + 0x104) = ebx;
    MEM32(esp + 0x108) = ebx;
    MEM32(esp + 0x10C) = ebx;
    MEM8(esp + 0x110) = LO8(ebx);
    MEM8(esp + 0x111) = LO8(ebx);
    MEM8(esp + 0x112) = LO8(ebx);
    MEM8(esp + 0x113) = LO8(ebx);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x38);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x74) = LO8(ebx);
    MEM32(esp + 0x70) = 0x302BAC;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189DE2u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_00189DE2: ;
    ecx = esp + 0x70;
    MEM32(esp + 0xC4) = ecx;
    ecx = MEM32(esi + 0x254);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00189DFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189DF5u); } /* indirect call */
    }

loc_00189DFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189E4D; /* je: equal / zero */

loc_00189DFF: ;
    ecx = MEM32(esi + 0x254);
    MEM32(esp + 0xF4) = 1;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00189E18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189E12u); } /* indirect call */
    }

loc_00189E18: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00189E1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189E1Cu); } /* indirect call */
    }

loc_00189E1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189E65; /* je: equal / zero */

loc_00189E23: ;
    ecx = MEM32(esi + 0x254);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00189E31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189E2Bu); } /* indirect call */
    }

loc_00189E31: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00189E38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189E35u); } /* indirect call */
    }

loc_00189E38: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2000000);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00189E44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189E41u); } /* indirect call */
    }

loc_00189E44: ;
    MEM8(esp + 0x112) = LO8(eax);
    goto loc_00189E65;

loc_00189E4D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2D4)); /* movss */
    MEM32(esp + 0xF4) = ebx;
    MEMF(esp + 0xF8) = xmm0.f[0]; /* movss */

loc_00189E65: ;
    SET_LO8(eax, MEM8(esi + 0x2BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00189E7D; /* je: equal / zero */

loc_00189E6F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189E76u); RECOMP_ABI_CALL(0x00188390u, sub_00188390); /* call 0x00188390 */

loc_00189E76: ;
    MEM8(esi + 0x2BC) = 0;

loc_00189E7D: ;
    SET_LO8(eax, MEM8(esi + 0x230));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0018A022; /* js: sign (negative) */

loc_00189E8B: ;
    ecx = MEM32(esi + 0x254);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00189E99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189E93u); } /* indirect call */
    }

loc_00189E99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0018A022; /* jne: not equal / not zero */

loc_00189EA1: ;
    eax = MEM32(esi + 0x1C0);
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00189EBA; /* jne: not equal / not zero */

loc_00189EAE: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB290D783u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xB290D783u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018A022; /* jne: not equal / not zero */

loc_00189EBA: ;
    eax = MEM32(esi + 0x254);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189EEEu); RECOMP_ABI_CALL(0x00130D50u, sub_00130D50); /* call 0x00130D50 */

loc_00189EEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00189EFA; /* je: equal / zero */

loc_00189EF5: ;
    ebx = eax + 0x30;
    goto loc_00189EFC;

loc_00189EFA: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00189EFC: ;
    edx = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189F07u); RECOMP_ABI_CALL(0x00149510u, sub_00149510); /* call 0x00149510 */

loc_00189F07: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = ZX16(LO16(eax));
    MEM32(esp + 0xE8) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    ecx = esp + 0x18;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    PUSH32(esp, ecx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00189FB3u); RECOMP_ABI_CALL(0x00149510u, sub_00149510); /* call 0x00149510 */

loc_00189FB3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x70); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x74); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x78); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    edx = ZX16(LO16(eax));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x100) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A019u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0018A019: ;
    MEM32(esp + 0x104) = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018A022: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esi + 0x1C0);
    MEM32(esp + 0xFC) = eax;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1CE);
    ecx = esp + 0xC0;
    MEM32(esp + 0x10C) = edx;
    MEM32(esp + 0x108) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A058u); RECOMP_ABI_CALL(0x00142E00u, sub_00142E00); /* call 0x00142E00 */

loc_0018A058: ;
    eax = MEM32(esi + 0x1C0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(esi + 0x2BF));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1D4); /* addss */
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0018A0A9; /* jne: not equal / not zero */

loc_0018A080: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1D0); /* addss */
    MEMF(esi + 0x1D0) = xmm0.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018A0A9; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_0018A09B: ;
    ecx = esi;
    MEM8(esi + 0x2BF) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A0A9u); RECOMP_ABI_CALL(0x00188760u, sub_00188760); /* call 0x00188760 */

loc_0018A0A9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fa = (uint32_t)(MEM32(esi + 0x240)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x240), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(esp + 0x120) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x124) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x128) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x12C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x130) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x134) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x138) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x13C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x140) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x144) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x148) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x150) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x154) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x158) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x15C) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0018A158; /* jne: not equal / not zero */

loc_0018A14C: ;
    _fa = (uint32_t)(MEM32(esi + 0x24C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0018A42E; /* jle: less or equal (signed <=) */

loc_0018A158: ;
    edx = MEM32(esi + 0xCC);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x34);
    xmm2 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x120, xmm2); /* movaps */
    xmm2 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x130, xmm2); /* movaps */
    xmm2 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(esp + 0x140, xmm2); /* movaps */
    xmm2 = XMM_MEM(esi + 0x60); /* movaps */
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = eax + 0x50;
    XMM_STORE(esp + 0x150, xmm2); /* movaps */
    if (CMP_LE(_fas, _fbs)) goto loc_0018A42E; /* jle: less or equal (signed <=) */

loc_0018A1A1: ;
    MEM32(esp + 0x28) = ecx;

loc_0018A1A5: ;
    _fa = (uint32_t)(MEM32(edi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE6E804D5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x40), 0xE6E804D5u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018A20D; /* jne: not equal / not zero */

loc_0018A1AE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0018A20D; /* jne: not equal / not zero */

loc_0018A1B2: ;
    xmm0 = XMM_MEM(esp + 0x120); /* movaps */
    XMM_STORE(0x534370, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x130); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x140); /* movaps */
    PUSH32(esp, 0x534370);
    XMM_STORE(0x534390, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x154); /* movaps */
    PUSH32(esp, edi);
    ecx = esp + 0x128;
    SET_LO8(ebx, 1);
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A202u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018A202: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0018A20D: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x50)) >> 32) & 1);
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_0018A1A5; /* jne: not equal / not zero */

loc_0018A21B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A42E; /* je: equal / zero */

loc_0018A223: ;
    eax = MEM32(esi + 0x240);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A2B7; /* je: equal / zero */

loc_0018A231: ;
    PUSH32(esp, ecx);
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x23C); /* subss */
    eax = esp + 0x94;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x128;
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A26Eu); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_0018A26E: ;
    ecx = MEM32(esi + 0x240);
    edx = MEM32(ecx);
    eax = esp + 0x120;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0018A284u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A27Eu); } /* indirect call */
    }

loc_0018A284: ;
    ecx = MEM32(esi + 0x240);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A291u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0018A291: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3DCCCCCD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A2A0u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018A2A0: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x240);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A2B7u); RECOMP_ABI_CALL(0x000FC700u, sub_000FC700); /* call 0x000FC700 */

loc_0018A2B7: ;
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A344; /* je: equal / zero */

loc_0018A2C5: ;
    eax = MEM32(esi + 0x24C);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x28) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0018A344; /* jle: less or equal (signed <=) */

loc_0018A2D5: ;
    edx = MEM32(esi + 0x248);
    eax = MEM32(edx + ebx * 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A2E6u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_0018A2E6: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A335; /* je: equal / zero */

loc_0018A2EF: ;
    edx = MEM32(edi);
    eax = esp + 0x120;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0018A301u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A2FBu); } /* indirect call */
    }

loc_0018A301: ;
    ecx = MEM32(esi + 0x254);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0018A30Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A309u); } /* indirect call */
    }

loc_0018A30C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A335; /* je: equal / zero */

loc_0018A310: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0018A31Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A314u); } /* indirect call */
    }

loc_0018A31A: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x0018A326u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A320u); } /* indirect call */
    }

loc_0018A326: ;
    MEM8(eax + 0x62) = LO8(ebx);
    ebx = MEM32(esp + 0x28);
    MEM8(eax + 0x60) = 1;
    MEM8(eax + 0x61) = 0;

loc_0018A335: ;
    eax = MEM32(esi + 0x24C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0018A2D5; /* jl: less (signed <) */

loc_0018A344: ;
    ecx = MEM32(esi + 0x254);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0018A352u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A34Cu); } /* indirect call */
    }

loc_0018A352: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0018A42E; /* jne: not equal / not zero */

loc_0018A35A: ;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018A365u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A362u); } /* indirect call */
    }

loc_0018A365: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A42E; /* je: equal / zero */

loc_0018A36D: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A37Fu); RECOMP_ABI_CALL(0x00116E90u, sub_00116E90); /* call 0x00116E90 */

loc_0018A37F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018A42E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0018A392: ;
    ecx = MEM32(esi + 0x2C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A3A3; /* je: equal / zero */

loc_0018A39C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A3A1u); RECOMP_ABI_CALL(0x0018EF50u, sub_0018EF50); /* call 0x0018EF50 */

loc_0018A3A1: ;
    goto loc_0018A3E3;

loc_0018A3A3: ;
    eax = esp + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x15486397);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A3B5u); RECOMP_ABI_CALL(0x0018F2D0u, sub_0018F2D0); /* call 0x0018F2D0 */

loc_0018A3B5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A3BCu); RECOMP_ABI_CALL(0x00190C70u, sub_00190C70); /* call 0x00190C70 */

loc_0018A3BC: ;
    ecx = MEM32(esi + 0x2C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = esi + 0x2C4;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A3D4; /* je: equal / zero */

loc_0018A3CE: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A3D4u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0018A3D4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edi + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A3E3; /* je: equal / zero */

loc_0018A3DB: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A3E3u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_0018A3E3: ;
    eax = MEM32(esi + 0x2C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A3F7; /* je: equal / zero */

loc_0018A3ED: ;
    MEM32(eax + 0xE0) = 0;

loc_0018A3F7: ;
    ecx = MEM32(esi + 0x254);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0018A405u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A3FFu); } /* indirect call */
    }

loc_0018A405: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0018A42E; /* jne: not equal / not zero */

loc_0018A409: ;
    xmm0 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x58); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018A42E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0x58)) */

loc_0018A418: ;
    SET_LO8(eax, MEM8(esi + 0x230));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0018A42E; /* js: sign (negative) */

loc_0018A422: ;
    PUSH32(esp, 0x1F3EA5CD);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018A42Eu); RECOMP_ABI_CALL(0x00188B70u, sub_00188B70); /* call 0x00188B70 */

loc_0018A42E: ;
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
 * sub_0018A440
 * Original: 0x0018A440 - 0x0018AA9C (1628 bytes, 529 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A440: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0018A44Eu); RECOMP_ABI_CALL(0x000FCDA0u, sub_000FCDA0); /* call 0x000FCDA0 */

loc_0018A44E: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x230) = MEM8(esi + 0x230) & 0xFB;
    _fa = (uint32_t)(MEM8(esi + 0x230)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(0x37279E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A48A; /* je: equal / zero */

loc_0018A463: ;
    _fa = (uint32_t)(MEM16(esi + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x1CC), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0018A48A; /* jne: not equal / not zero */

loc_0018A46D: ;
    ecx = MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A48A; /* je: equal / zero */

loc_0018A477: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0018A47Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A479u); } /* indirect call */
    }

loc_0018A47F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A48A; /* je: equal / zero */

loc_0018A483: ;
    MEM16(esi + 0x1CC) = LO16(ebx);

loc_0018A48A: ;
    eax = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0018A5CB; /* ja: above (unsigned >) */

loc_0018A499: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x18A6D4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0018A4A0u) goto loc_0018A4A0;
    if (_jt == 0x0018A513u) goto loc_0018A513;
    if (_jt == 0x0018A59Bu) goto loc_0018A59B;
    if (_jt == 0x0018A5B4u) goto loc_0018A5B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018A4A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1D4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018A4CF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x1D4)) */

loc_0018A4AC: ;
    _fa = (uint32_t)(MEM16(esi + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x1CE), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0018A4BE; /* jg: greater (signed >) */

loc_0018A4B6: ;
    _fa = (uint32_t)(MEM8(esi + 0x231)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x231), LO8(ebx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0018A4E5; /* je: equal / zero */

loc_0018A4BE: ;
    _fa = (uint32_t)(MEM8(esi + 0x230)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x230), LO8(ebx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0018A4E5; /* jne: not equal / not zero */

loc_0018A4C6: ;
    ecx = esi;
    PUSH32(esp, 0x0018A4CDu); RECOMP_ABI_CALL(0x00189420u, sub_00189420); /* call 0x00189420 */

loc_0018A4CD: ;
    goto loc_0018A4E5;

loc_0018A4CF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1D4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */

loc_0018A4E5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1D4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018A504; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x1D4)) */

loc_0018A4F1: ;
    ecx = MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A504; /* je: equal / zero */

loc_0018A4FB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0018A504u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A501u); } /* indirect call */
    }

loc_0018A504: ;
    MEM32(esi + 0x1DC) = 0;
    goto loc_0018A5CB;

loc_0018A513: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1D4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018A549; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0018A523: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018A549; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0018A536: ;
    ecx = MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A549; /* je: equal / zero */

loc_0018A540: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0018A549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A546u); } /* indirect call */
    }

loc_0018A549: ;
    ecx = MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A574; /* je: equal / zero */

loc_0018A553: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0018A55Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018A555u); } /* indirect call */
    }

loc_0018A55B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A574; /* je: equal / zero */

loc_0018A55F: ;
    _fa = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1DC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018A574; /* jne: not equal / not zero */

loc_0018A567: ;
    ecx = esi;
    MEM32(esi + 0x1D8) = ebx;
    PUSH32(esp, 0x0018A574u); RECOMP_ABI_CALL(0x00188250u, sub_00188250); /* call 0x00188250 */

loc_0018A574: ;
    _fa = (uint32_t)(MEM16(esi + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x1CE), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0018A593; /* jg: greater (signed >) */

loc_0018A57E: ;
    _fa = (uint32_t)(MEM8(esi + 0x230)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x230), LO8(ebx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0018A593; /* jne: not equal / not zero */

loc_0018A586: ;
    ecx = esi;
    MEM32(esi + 0x1D8) = ebx;
    PUSH32(esp, 0x0018A593u); RECOMP_ABI_CALL(0x00188250u, sub_00188250); /* call 0x00188250 */

loc_0018A593: ;
    MEM32(esi + 0x1DC) = ebx;
    goto loc_0018A5CB;

loc_0018A59B: ;
    ecx = esi;
    MEM32(esi + 0x1D8) = ebx;
    PUSH32(esp, 0x0018A5A8u); RECOMP_ABI_CALL(0x00189420u, sub_00189420); /* call 0x00189420 */

loc_0018A5A8: ;
    MEM32(esi + 0x1DC) = 3;
    goto loc_0018A5CB;

loc_0018A5B4: ;
    ecx = esi;
    MEM32(esi + 0x1D8) = ebx;
    PUSH32(esp, 0x0018A5C1u); RECOMP_ABI_CALL(0x00189420u, sub_00189420); /* call 0x00189420 */

loc_0018A5C1: ;
    MEM32(esi + 0x1DC) = 2;

loc_0018A5CB: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1D0)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018A64E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0018A5DB: ;
    SET_LO8(eax, MEM8(esi + 0x2BF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0018A5F5; /* jne: not equal / not zero */

loc_0018A5E5: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esi + 0x1D0) = xmm1.f[0]; /* movss */
    goto loc_0018A617;

loc_0018A5F5: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1D0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF504); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x1D0) = xmm2.f[0]; /* movss */

loc_0018A617: ;
    fp_push(MEMF(esi + 0x1D0)); /* fld float */
    fp_push(MEMD(0x30FE50)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0018A631; /* jbe: below or equal (unsigned <=) */

loc_0018A629: ;
    MEMF(esi + 0x1D0) = xmm0.f[0]; /* movss */

loc_0018A631: ;
    fp_push(MEMF(esi + 0x1D0)); /* fld float */
    fp_push(MEMD(0x30FE50)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018A64E; /* jp: parity */

loc_0018A647: ;
    MEM8(esi + 0x2BF) = 0;

loc_0018A64E: ;
    _fa = (uint32_t)(MEM8(esi + 0x230)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x230), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0018A6B8; /* je: equal / zero */

loc_0018A657: ;
    PUSH32(esp, 0x41490FDB);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0018A663u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018A663: ;
    MEMF(esi + 0x23C) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(edx, MEM8(esi + 0x230));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) | 0x10);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(edx));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0x230) = LO8(edx);
    if (TEST_NZ(_fa, _fb)) goto loc_0018A6B3; /* jne: not equal / not zero */

loc_0018A681: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x234)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x238); /* comiss */
    MEMF(esi + 0x234) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018A6B3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x238)) */

loc_0018A6A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xCF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x230) = LO8(eax);
    MEMF(esi + 0x234) = xmm0.f[0]; /* movss */

loc_0018A6B3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A6B8: ;
    ecx = MEM32(esi + 0x240);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A6B3; /* je: equal / zero */

loc_0018A6C2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_000FCBB0(); return; /* tail jmp 0x000FCBB0 */

    /* nop */
    SET_LO8(eax, MEM8(0x130018A4));
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    { uint64_t _t = (uint64_t)(MEM8(eax)) - (uint64_t)(LO8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_HI8(eax, 0xA5);
    { uint64_t _t = (uint64_t)(MEM8(eax)) - (uint64_t)(LO8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    /* wait - FPU sync */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    { uint64_t _t = (uint64_t)(MEM8(eax)) - (uint64_t)(LO8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    if (7) _cf = (int)(((esi) >> (32 - (7))) & 1);
    esi = esi << 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0018A756; /* je: equal / zero */

loc_0018A70D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 4) = ebx;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x44) = ebx;
    MEM16(esi + 0x66) = 1;
    ecx = MEM32(eax);
    MEM32(esi + 4) = ecx;

loc_0018A756: ;
    edi = MEM32(esp + 0x20);
    ecx = edi;
    PUSH32(esp, 0x0018A761u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_0018A761: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5234F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x5234F4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018A7F2; /* jne: not equal / not zero */

loc_0018A76F: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018A77Au); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_0018A77A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A86B; /* je: equal / zero */

loc_0018A789: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x323FE0);
    PUSH32(esp, 0x0018A79Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0018A79A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018A7DF; /* je: equal / zero */

loc_0018A7A1: ;
    MEM32(eax) = 0x310C84;
    MEM32(eax + 0x10) = ebx;
    MEM8(eax + 0x14) = 1;
    MEM8(eax + 0x15) = 1;
    MEM8(eax + 0x16) = 1;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x50) = ebx;
    MEM32(eax + 0x54) = ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x58) = ebx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0018A7DAu); RECOMP_ABI_CALL(0x0014EF90u, sub_0014EF90); /* call 0x0014EF90 */

loc_0018A7DA: ;
    goto loc_0018A86B;

loc_0018A7DF: ;
    ecx = MEM32(esp + 0x1C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0018A7F0u); RECOMP_ABI_CALL(0x0014EF90u, sub_0014EF90); /* call 0x0014EF90 */

loc_0018A7F0: ;
    goto loc_0018A86B;

loc_0018A7F2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5234F8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x5234F8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018A80C; /* jne: not equal / not zero */

loc_0018A7FA: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018A804u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_0018A804: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    goto loc_0018A86B;

loc_0018A80C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5234FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x5234FC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018A821; /* jne: not equal / not zero */

loc_0018A814: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A81Cu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A81C: ;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0018A86B;

loc_0018A821: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x523500)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x523500) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018A843; /* jne: not equal / not zero */

loc_0018A829: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0018A86B; /* jge: greater or equal (signed >=) */

loc_0018A82F: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A837u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A837: ;
    ecx = MEM32(esi + 0x20);
    MEM32(esi + ecx * 4 + 0x18) = eax;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0018A86B;

loc_0018A843: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x523504)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x523504) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018A858; /* jne: not equal / not zero */

loc_0018A84B: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A853u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A853: ;
    MEM32(esi + 0x24) = eax;
    goto loc_0018A86B;

loc_0018A858: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x523508)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x523508) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018A86B; /* jne: not equal / not zero */

loc_0018A860: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A868u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A868: ;
    MEM32(esi + 0x28) = eax;

loc_0018A86B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x150B90A4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x150B90A4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0018A9AE; /* jg: greater (signed >) */

loc_0018A877: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A996; /* je: equal / zero */

loc_0018A87D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF7475F1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xBF7475F1u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0018A91D; /* jg: greater (signed >) */

loc_0018A889: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A90A; /* je: equal / zero */

loc_0018A88B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAEB8F060u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xAEB8F060u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0018A8EB; /* jg: greater (signed >) */

loc_0018A893: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A8D5; /* je: equal / zero */

loc_0018A895: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x83EC6C6Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x83EC6C6Du (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018A8C1; /* je: equal / zero */

loc_0018A89D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x87B71023u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x87B71023u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018A8A9: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A8B1u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A8B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x76) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A8C1: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A8C9u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A8C9: ;
    POP32(esp, edi);
    MEM16(esi + 0x64) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A8D5: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A8DDu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A8DD: ;
    POP32(esp, edi);
    MEM8(esi + 0x6C) = LO8(ebx);
    MEM32(esi + 0x40) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A8EB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBE787D19u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xBE787D19u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018A8F7: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A8FFu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A8FF: ;
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A90A: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A912u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A912: ;
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A91D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDD5C06D9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xDD5C06D9u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0018A977; /* jg: greater (signed >) */

loc_0018A925: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A963; /* je: equal / zero */

loc_0018A927: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCBE25099u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xCBE25099u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018A94F; /* je: equal / zero */

loc_0018A92F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD0622602u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xD0622602u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018A93B: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A943u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A943: ;
    POP32(esp, edi);
    MEM16(esi + 0x70) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A94F: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A957u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A957: ;
    POP32(esp, edi);
    MEM16(esi + 0x6E) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A963: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A96Bu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A96B: ;
    POP32(esp, edi);
    MEM16(esi + 0x32) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A977: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCACDCBB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xCACDCBB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018A983: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A98Bu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A98B: ;
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A996: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A99Eu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A99E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x73) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A9AE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F2C21A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x4F2C21A8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0018AA46; /* jg: greater (signed >) */

loc_0018A9BA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA33; /* je: equal / zero */

loc_0018A9BC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32A20F02) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x32A20F02 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0018AA14; /* jg: greater (signed >) */

loc_0018A9C4: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA00; /* je: equal / zero */

loc_0018A9C6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1DE165E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x1DE165E4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018A9ED; /* je: equal / zero */

loc_0018A9CE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22CCF15C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x22CCF15C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018A9DA: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A9E2u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A9E2: ;
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A9ED: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A9F5u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A9F5: ;
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA00: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA08u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018AA08: ;
    POP32(esp, edi);
    MEM16(esi + 0x30) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA14: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40CFD4C1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x40CFD4C1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018AA1C: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA24u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018AA24: ;
    POP32(esp, edi);
    MEM32(esi + 0x40) = eax;
    MEM8(esi + 0x6C) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA33: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA3Bu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018AA3B: ;
    POP32(esp, edi);
    MEM32(esi + 0x44) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA46: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50EB9816) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x50EB9816 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA89; /* je: equal / zero */

loc_0018AA4E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50FB5A9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x50FB5A9B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA76; /* je: equal / zero */

loc_0018AA56: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6428F6ED) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x6428F6ED (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018AA5E: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA66u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018AA66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x72) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA76: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA7Eu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018AA7E: ;
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA89: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA91u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018AA91: ;
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */

loc_0018AA94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018A6F0
 * Original: 0x0018A6F0 - 0x0018AA9C (940 bytes, 350 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A6F0(void)
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

loc_0018A6F0: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    esi = esi << 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0018A756; /* je: equal / zero */

loc_0018A70D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 4) = ebx;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x44) = ebx;
    MEM16(esi + 0x66) = 1;
    ecx = MEM32(eax);
    MEM32(esi + 4) = ecx;

loc_0018A756: ;
    edi = MEM32(esp + 0x20);
    ecx = edi;
    PUSH32(esp, 0x0018A761u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_0018A761: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5234F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x5234F4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A7F2; /* jne: not equal / not zero */

loc_0018A76F: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018A77Au); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_0018A77A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A86B; /* je: equal / zero */

loc_0018A789: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x323FE0);
    PUSH32(esp, 0x0018A79Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0018A79A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A7DF; /* je: equal / zero */

loc_0018A7A1: ;
    MEM32(eax) = 0x310C84;
    MEM32(eax + 0x10) = ebx;
    MEM8(eax + 0x14) = 1;
    MEM8(eax + 0x15) = 1;
    MEM8(eax + 0x16) = 1;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x50) = ebx;
    MEM32(eax + 0x54) = ebx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x58) = ebx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0018A7DAu); RECOMP_ABI_CALL(0x0014EF90u, sub_0014EF90); /* call 0x0014EF90 */

loc_0018A7DA: ;
    goto loc_0018A86B;

loc_0018A7DF: ;
    ecx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0018A7F0u); RECOMP_ABI_CALL(0x0014EF90u, sub_0014EF90); /* call 0x0014EF90 */

loc_0018A7F0: ;
    goto loc_0018A86B;

loc_0018A7F2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5234F8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x5234F8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A80C; /* jne: not equal / not zero */

loc_0018A7FA: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018A804u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_0018A804: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    goto loc_0018A86B;

loc_0018A80C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5234FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x5234FC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A821; /* jne: not equal / not zero */

loc_0018A814: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A81Cu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A81C: ;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0018A86B;

loc_0018A821: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x523500)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x523500) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A843; /* jne: not equal / not zero */

loc_0018A829: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018A86B; /* jge: greater or equal (signed >=) */

loc_0018A82F: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A837u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A837: ;
    ecx = MEM32(esi + 0x20);
    MEM32(esi + ecx * 4 + 0x18) = eax;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0018A86B;

loc_0018A843: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x523504)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x523504) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A858; /* jne: not equal / not zero */

loc_0018A84B: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A853u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A853: ;
    MEM32(esi + 0x24) = eax;
    goto loc_0018A86B;

loc_0018A858: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x523508)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x523508) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A86B; /* jne: not equal / not zero */

loc_0018A860: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A868u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A868: ;
    MEM32(esi + 0x28) = eax;

loc_0018A86B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x150B90A4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x150B90A4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018A9AE; /* jg: greater (signed >) */

loc_0018A877: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A996; /* je: equal / zero */

loc_0018A87D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF7475F1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xBF7475F1u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018A91D; /* jg: greater (signed >) */

loc_0018A889: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A90A; /* je: equal / zero */

loc_0018A88B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAEB8F060u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xAEB8F060u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018A8EB; /* jg: greater (signed >) */

loc_0018A893: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A8D5; /* je: equal / zero */

loc_0018A895: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x83EC6C6Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x83EC6C6Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A8C1; /* je: equal / zero */

loc_0018A89D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x87B71023u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x87B71023u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018A8A9: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A8B1u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A8B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x76) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A8C1: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A8C9u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A8C9: ;
    POP32(esp, edi);
    MEM16(esi + 0x64) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A8D5: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A8DDu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A8DD: ;
    POP32(esp, edi);
    MEM8(esi + 0x6C) = LO8(ebx);
    MEM32(esi + 0x40) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A8EB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBE787D19u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xBE787D19u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018A8F7: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A8FFu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A8FF: ;
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A90A: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A912u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A912: ;
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A91D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDD5C06D9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xDD5C06D9u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018A977; /* jg: greater (signed >) */

loc_0018A925: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A963; /* je: equal / zero */

loc_0018A927: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCBE25099u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xCBE25099u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A94F; /* je: equal / zero */

loc_0018A92F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD0622602u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xD0622602u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018A93B: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A943u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A943: ;
    POP32(esp, edi);
    MEM16(esi + 0x70) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A94F: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A957u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A957: ;
    POP32(esp, edi);
    MEM16(esi + 0x6E) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A963: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A96Bu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A96B: ;
    POP32(esp, edi);
    MEM16(esi + 0x32) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A977: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCACDCBB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xCACDCBB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018A983: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A98Bu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A98B: ;
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A996: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A99Eu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018A99E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x73) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A9AE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F2C21A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x4F2C21A8 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018AA46; /* jg: greater (signed >) */

loc_0018A9BA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA33; /* je: equal / zero */

loc_0018A9BC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32A20F02) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x32A20F02 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018AA14; /* jg: greater (signed >) */

loc_0018A9C4: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA00; /* je: equal / zero */

loc_0018A9C6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1DE165E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x1DE165E4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A9ED; /* je: equal / zero */

loc_0018A9CE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22CCF15C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x22CCF15C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018A9DA: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A9E2u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A9E2: ;
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018A9ED: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018A9F5u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018A9F5: ;
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA00: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA08u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018AA08: ;
    POP32(esp, edi);
    MEM16(esi + 0x30) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA14: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40CFD4C1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x40CFD4C1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018AA1C: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA24u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018AA24: ;
    POP32(esp, edi);
    MEM32(esi + 0x40) = eax;
    MEM8(esi + 0x6C) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA33: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA3Bu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018AA3B: ;
    POP32(esp, edi);
    MEM32(esi + 0x44) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA46: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50EB9816) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x50EB9816 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA89; /* je: equal / zero */

loc_0018AA4E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50FB5A9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x50FB5A9B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA76; /* je: equal / zero */

loc_0018AA56: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6428F6ED) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x6428F6ED (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AA94; /* jne: not equal / not zero */

loc_0018AA5E: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA66u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0018AA66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x72) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA76: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA7Eu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018AA7E: ;
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0018AA89: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018AA91u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0018AA91: ;
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */

loc_0018AA94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018AAA0
 * Original: 0x0018AAA0 - 0x0018AB21 (129 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AAA0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0018AB14; /* ja: above (unsigned >) */

loc_0018AAAC: ;
    eax = ZX8(MEM8(eax + 0x18AB34));
    { uint32_t _jt = MEM32(eax * 4 + 0x18AB24); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0018AABAu) goto loc_0018AABA;
    if (_jt == 0x0018AAD6u) goto loc_0018AAD6;
    if (_jt == 0x0018AAF2u) goto loc_0018AAF2;
    if (_jt == 0x0018AB14u) goto loc_0018AB14;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018AABA: ;
    edx = MEM32(ecx + 0x1C0);
    SET_LO8(eax, MEM8(edx + 0x40));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA)) >> 32) & 1);
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x1E4) = eax;
    esp += 8; return; /* ret 4 */

loc_0018AAD6: ;
    edx = MEM32(ecx + 0x1C0);
    SET_LO8(eax, MEM8(edx + 0x40));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(9)) >> 32) & 1);
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x1E4) = eax;
    esp += 8; return; /* ret 4 */

loc_0018AAF2: ;
    edx = MEM32(ecx + 0x1C0);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x40));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    eax = eax * 4 + 7;
    MEM32(ecx + 0x1E4) = eax;
    esp += 8; return; /* ret 4 */

loc_0018AB14: ;
    MEM32(ecx + 0x1E4) = 0xFF;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018AB50
 * Original: 0x0018AB50 - 0x0018AB58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AB50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0018ABA0(); return; /* tail jmp 0x0018ABA0 */

}

/**
 * sub_0018AB60
 * Original: 0x0018AB60 - 0x0018AB6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AB60: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0018ABA0(); return; /* tail jmp 0x0018ABA0 */

}

/**
 * sub_0018AB70
 * Original: 0x0018AB70 - 0x0018AB99 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AB70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + 0x210);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x214);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x218);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018ABA0
 * Original: 0x0018ABA0 - 0x0018ABAE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABA0(void)
{

loc_0018ABA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018ABA8u); RECOMP_ABI_CALL(0x00188A30u, sub_00188A30); /* call 0x00188A30 */

loc_0018ABA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018ABB0
 * Original: 0x0018ABB0 - 0x0018ABB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABB0(void)
{

loc_0018ABB0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0018ABC0
 * Original: 0x0018ABC0 - 0x0018ABC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABC0(void)
{

loc_0018ABC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018ABD0
 * Original: 0x0018ABD0 - 0x0018ABDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ABD0: ;
    ecx = 0x523520;
    g_seh_ebp = ebp; sub_000EF3E0(); return; /* tail jmp 0x000EF3E0 */

}

/**
 * sub_0018ABE0
 * Original: 0x0018ABE0 - 0x0018AC15 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018ABE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018ABEBu); RECOMP_ABI_CALL(0x000F44E0u, sub_000F44E0); /* call 0x000F44E0 */

loc_0018ABEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018ABFB; /* je: equal / zero */

loc_0018ABF2: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018ABFB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018AC01u); RECOMP_ABI_CALL(0x001890B0u, sub_001890B0); /* call 0x001890B0 */

loc_0018AC01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AC0F; /* je: equal / zero */

loc_0018AC08: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018AC0F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018AC20
 * Original: 0x0018AC20 - 0x0018AC2B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC20(void)
{

loc_0018AC20: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018AC2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018AC28u); } /* indirect call */
    }

loc_0018AC2A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AC30
 * Original: 0x0018AC30 - 0x0018AC65 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AC30: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 1);
    PUSH32(esp, 0x324070);
    PUSH32(esp, 0x0018AC41u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0018AC41: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0xFA);
    PUSH32(esp, 0x2E0);
    PUSH32(esp, 0x3075B4);
    ecx = 0x523520;
    MEM32(0x523510) = eax;
    PUSH32(esp, 0x0018AC64u); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_0018AC64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AC70
 * Original: 0x0018AC70 - 0x0018AC97 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AC70: ;
    ecx = 0x523520;
    PUSH32(esp, 0x0018AC7Au); RECOMP_ABI_CALL(0x000EF3F0u, sub_000EF3F0); /* call 0x000EF3F0 */

loc_0018AC7A: ;
    eax = MEM32(0x523510);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AC8C; /* je: equal / zero */

loc_0018AC83: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018AC89u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0018AC89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018AC8C: ;
    MEM32(0x523510) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0018ACA0
 * Original: 0x0018ACA0 - 0x0018AD22 (130 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ACA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018ACA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AD0E; /* je: equal / zero */

loc_0018ACAC: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0018ACBAu); RECOMP_ABI_CALL(0x000F44E0u, sub_000F44E0); /* call 0x000F44E0 */

loc_0018ACBA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018ACC8; /* je: equal / zero */

loc_0018ACC1: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0018ACD8;

loc_0018ACC8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018ACCEu); RECOMP_ABI_CALL(0x001890B0u, sub_001890B0); /* call 0x001890B0 */

loc_0018ACCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AD17; /* je: equal / zero */

loc_0018ACD5: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018ACD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AD17; /* je: equal / zero */

loc_0018ACDC: ;
    SET_LO16(ecx, MEM16(esp + 0x20));
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x1C);
    edx = esp + 4;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEM16(esp + 0x14) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = 0x523520;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x0018AD0Au); RECOMP_ABI_CALL(0x0018AD30u, sub_0018AD30); /* call 0x0018AD30 */

loc_0018AD0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AD17; /* jne: not equal / not zero */

loc_0018AD0E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0018AD17: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0018AD30
 * Original: 0x0018AD30 - 0x0018ADA0 (112 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AD30: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018AD9A; /* jge: greater or equal (signed >=) */

loc_0018AD3B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0018AD5Au); RECOMP_ABI_CALL(0x000EF230u, sub_000EF230); /* call 0x000EF230 */

loc_0018AD5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AD6C; /* je: equal / zero */

loc_0018AD5E: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0018AD6Au); RECOMP_ABI_CALL(0x001890F0u, sub_001890F0); /* call 0x001890F0 */

loc_0018AD6A: ;
    goto loc_0018AD6E;

loc_0018AD6C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018AD6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0018AD7B; /* je: equal / zero */

loc_0018AD74: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0018AD7D;

loc_0018AD7B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018AD7D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018AD8Au); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_0018AD8A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0018AD9A; /* je: equal / zero */

loc_0018AD91: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0018AD9A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018ADA0
 * Original: 0x0018ADA0 - 0x0018ADD8 (56 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ADA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018ADA0: ;
    PUSH32(esp, 0x3789E0);
    PUSH32(esp, 0x3240DC);
    PUSH32(esp, 0x0018ADAFu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018ADAF: ;
    PUSH32(esp, 0x3789B0);
    PUSH32(esp, 0x3240C4);
    PUSH32(esp, 0x0018ADBEu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018ADBE: ;
    PUSH32(esp, 0x3789F0);
    PUSH32(esp, 0x3240AC);
    PUSH32(esp, 0x0018ADCDu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018ADCD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x523550) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0018ADE0
 * Original: 0x0018ADE0 - 0x0018AE09 (41 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ADE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018ADE0: ;
    PUSH32(esp, 0x3240DC);
    PUSH32(esp, 0x0018ADEAu); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_0018ADEA: ;
    PUSH32(esp, 0x3240AC);
    PUSH32(esp, 0x0018ADF4u); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_0018ADF4: ;
    PUSH32(esp, 0x3240C4);
    PUSH32(esp, 0x0018ADFEu); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_0018ADFE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x523550) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AE10
 * Original: 0x0018AE10 - 0x0018AE13 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE10(void)
{

loc_0018AE10: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018AE20
 * Original: 0x0018AE20 - 0x0018AE23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AE20: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018AE30
 * Original: 0x0018AE30 - 0x0018AE35 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AE30: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018AE40
 * Original: 0x0018AE40 - 0x0018B0E1 (673 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AE40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0018B0DE; /* ja: above (unsigned >) */

loc_0018AE4D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x18B0E4); /* switch: 20 entries, 17 targets */
    if (_jt == 0x0018AE54u) goto loc_0018AE54;
    if (_jt == 0x0018AE81u) goto loc_0018AE81;
    if (_jt == 0x0018AE9Eu) goto loc_0018AE9E;
    if (_jt == 0x0018AECBu) goto loc_0018AECB;
    if (_jt == 0x0018AEF8u) goto loc_0018AEF8;
    if (_jt == 0x0018AF25u) goto loc_0018AF25;
    if (_jt == 0x0018AF52u) goto loc_0018AF52;
    if (_jt == 0x0018AF7Fu) goto loc_0018AF7F;
    if (_jt == 0x0018AFACu) goto loc_0018AFAC;
    if (_jt == 0x0018AFB9u) goto loc_0018AFB9;
    if (_jt == 0x0018AFC6u) goto loc_0018AFC6;
    if (_jt == 0x0018AFD3u) goto loc_0018AFD3;
    if (_jt == 0x0018B000u) goto loc_0018B000;
    if (_jt == 0x0018B02Du) goto loc_0018B02D;
    if (_jt == 0x0018B05Au) goto loc_0018B05A;
    if (_jt == 0x0018B087u) goto loc_0018B087;
    if (_jt == 0x0018B0B4u) goto loc_0018B0B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018AE54: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30105C)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x317728)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018AE81: ;
    xmm0 = XMM_SCALAR(MEMF(0x3053C4)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3003A4)); /* movss */
    goto loc_0018B0CC;

loc_0018AE9E: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x319278)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x300914)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018AECB: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3240F4)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x317728)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018AEF8: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3240F4)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x317728)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018AF25: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x300914)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018AF52: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FF224)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x317728)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018AF7F: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FF224)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x307660)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018AFAC: ;
    xmm0 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    goto loc_0018B0BC;

loc_0018AFB9: ;
    xmm0 = XMM_SCALAR(MEMF(0x30076C)); /* movss */
    goto loc_0018B0BC;

loc_0018AFC6: ;
    xmm0 = XMM_SCALAR(MEMF(0x31A180)); /* movss */
    goto loc_0018B0BC;

loc_0018AFD3: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x307660)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30075C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018B000: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x307660)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x307EE4)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018B02D: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x30076C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x307660)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30075C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018B05A: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x307660)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30075C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018B087: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x307660)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x307EE4)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0018B0B4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */

loc_0018B0BC: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x307660)); /* movss */

loc_0018B0CC: ;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30105C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_0018B0DE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018B000
 * Original: 0x0018B000 - 0x0018B0E1 (225 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B000(void)
{

loc_0018B000: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x307660)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x307EE4)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018B140
 * Original: 0x0018B140 - 0x0018B180 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B140: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x420);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x2FEE58;
    MEM32(esi + 8) = 0x2FEE4C;
    if (CMP_EQ(_fa, _fb)) goto loc_0018B16D; /* je: equal / zero */

loc_0018B15A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B160u); RECOMP_ABI_CALL(0x00035DF0u, sub_00035DF0); /* call 0x00035DF0 */

loc_0018B160: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x420) = 0;

loc_0018B16D: ;
    ecx = esi + 0x424;
    PUSH32(esp, 0x0018B178u); RECOMP_ABI_CALL(0x00159270u, sub_00159270); /* call 0x00159270 */

loc_0018B178: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_0018B180
 * Original: 0x0018B180 - 0x0018B2AD (301 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B180: ;
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
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B2A3; /* je: equal / zero */

loc_0018B198: ;
    eax = MEM32(esi);
    ecx = edi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x0018B1A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018B1A0u); } /* indirect call */
    }

loc_0018B1A6: ;
    edx = MEM32(edi + 0xB0);
    MEM32(esi + 0xB0) = edx;
    eax = MEM32(edi + 0xB4);
    MEM32(esi + 0xB4) = eax;
    ecx = MEM32(edi + 0xB8);
    MEM32(esi + 0xB8) = ecx;
    edx = MEM32(edi + 0xBC);
    MEM32(esi + 0xBC) = edx;
    eax = MEM32(edi + 0xC0);
    MEM32(esi + 0xC0) = eax;
    ecx = MEM32(edi + 0xC4);
    MEM32(esi + 0xC4) = ecx;
    xmm0 = XMM_MEM(edi + 0xE0); /* movaps */
    xmm1 = XMM_MEM(edi + 0xD0); /* movaps */
    XMM_STORE(esi + 0xD0, xmm1); /* movaps */
    XMM_STORE(esi + 0xE0, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x100); /* movaps */
    xmm1 = XMM_MEM(edi + 0xF0); /* movaps */
    XMM_STORE(esi + 0xF0, xmm1); /* movaps */
    XMM_STORE(esi + 0x100, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x120); /* movaps */
    xmm1 = XMM_MEM(edi + 0x110); /* movaps */
    XMM_STORE(esi + 0x110, xmm1); /* movaps */
    XMM_STORE(esi + 0x120, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x140); /* movaps */
    xmm1 = XMM_MEM(edi + 0x130); /* movaps */
    XMM_STORE(esi + 0x130, xmm1); /* movaps */
    XMM_STORE(esi + 0x140, xmm0); /* movaps */
    SET_LO8(edx, MEM8(edi + 0x190));
    MEM8(esi + 0x190) = LO8(edx);
    eax = MEM32(edi + 0x420);
    MEM32(esi + 0x420) = eax;
    ecx = MEM32(edi + 0x39E8);
    MEM32(esi + 0x39E8) = ecx;
    SET_LO8(edx, MEM8(edi + 0x39EC));
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x39EC) = LO8(edx);
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x192) = LO8(eax);
    MEM8(esi + 0x194) = 1;

loc_0018B2A3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B2B0
 * Original: 0x0018B2B0 - 0x0018B2D5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B2B0(void)
{

loc_0018B2B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x424;
    PUSH32(esp, 0x0018B2C4u); RECOMP_ABI_CALL(0x00158DF0u, sub_00158DF0); /* call 0x00158DF0 */

loc_0018B2C4: ;
    MEM32(esi + 0x39E8) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x3A6C) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B2E0
 * Original: 0x0018B2E0 - 0x0018B345 (101 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B2E0(void)
{

loc_0018B2E0: ;
    xmm0 = XMM_MEM(ecx + 0xE0); /* movaps */
    xmm1 = XMM_MEM(ecx + 0xD0); /* movaps */
    XMM_STORE(0x3789F0, xmm1); /* movaps */
    XMM_STORE(0x378A00, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x100); /* movaps */
    xmm1 = XMM_MEM(ecx + 0xF0); /* movaps */
    XMM_STORE(0x378A10, xmm1); /* movaps */
    XMM_STORE(0x378A20, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x30); /* movaps */
    XMM_STORE(0x3789B0, xmm1); /* movaps */
    XMM_STORE(0x3789C0, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x60); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    XMM_STORE(0x3789D0, xmm1); /* movaps */
    XMM_STORE(0x3789E0, xmm0); /* movaps */
    esp += 4; return; /* ret */

}

/**
 * sub_0018B350
 * Original: 0x0018B350 - 0x0018B36F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B350: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0018B35Du); RECOMP_ABI_CALL(0x001312E0u, sub_001312E0); /* call 0x001312E0 */

loc_0018B35D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B370
 * Original: 0x0018B370 - 0x0018B38F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B370: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0018B37Du); RECOMP_ABI_CALL(0x00131320u, sub_00131320); /* call 0x00131320 */

loc_0018B37D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B390
 * Original: 0x0018B390 - 0x0018B3AF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B390: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0018B39Du); RECOMP_ABI_CALL(0x00131B40u, sub_00131B40); /* call 0x00131B40 */

loc_0018B39D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B3B0
 * Original: 0x0018B3B0 - 0x0018B3CF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B3B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0018B3BDu); RECOMP_ABI_CALL(0x00130520u, sub_00130520); /* call 0x00130520 */

loc_0018B3BD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B3D0
 * Original: 0x0018B3D0 - 0x0018B3DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B3D0: ;
    _fb = (uint32_t)(0x39F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x39F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0018AE40(); return; /* tail jmp 0x0018AE40 */

}

/**
 * sub_0018B3E0
 * Original: 0x0018B3E0 - 0x0018B41E (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B3E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B3E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x30;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018B3F3u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_0018B3F3: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0018B3FFu); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_0018B3FF: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0018B40Bu); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_0018B40B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0018B420
 * Original: 0x0018B420 - 0x0018B442 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B420: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018B430u); RECOMP_ABI_CALL(0x00265060u, sub_00265060); /* call 0x00265060 */

loc_0018B430: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B450
 * Original: 0x0018B450 - 0x0018B473 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B450: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018B45Bu); RECOMP_ABI_CALL(0x00265550u, sub_00265550); /* call 0x00265550 */

loc_0018B45B: ;
    ecx = esi + 0x70;
    PUSH32(esp, 0x0018B463u); RECOMP_ABI_CALL(0x00265550u, sub_00265550); /* call 0x00265550 */

loc_0018B463: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B480
 * Original: 0x0018B480 - 0x0018B4E7 (103 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B480(void)
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

loc_0018B480: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM8(ecx + 0x192) = LO8(eax);
    MEM8(ecx + 0x193) = LO8(eax);
    SET_LO8(eax, 1);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0xC4) = xmm1.f[0]; /* movss */
    MEM8(ecx + 0x190) = LO8(eax);
    MEM8(ecx + 0x194) = LO8(eax);
    fp_pop(); /* fstp st(0) */
    MEMF(ecx + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    MEMF(ecx + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018B4F0
 * Original: 0x0018B4F0 - 0x0018B53D (77 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B4F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B4F0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC4) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x192) = LO8(eax);
    MEM8(ecx + 0x193) = LO8(eax);
    MEM8(ecx + 0x190) = LO8(eax);
    MEM8(ecx + 0x194) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018B540
 * Original: 0x0018B540 - 0x0018B6B9 (377 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B540: ;
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
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x2C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x3C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(esp + 0x4C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    XMM_STORE(esp + 0x5C, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    edi = esi + 0xD0;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B5A7u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_0018B5A7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    ecx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B5D7u); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_0018B5D7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    edx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B607u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_0018B607: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm4; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm3; /* movaps */
    eax = esp + 0x20;
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B6ACu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_0018B6AC: ;
    MEM8(esi + 0x191) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B6C0
 * Original: 0x0018B6C0 - 0x0018B73C (124 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x190));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B70C; /* je: equal / zero */

loc_0018B6CD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3011DC); /* mulss */
    eax = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xB8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xBC);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x110;
    PUSH32(esp, 0x0018B703u); RECOMP_ABI_CALL(0x00265F30u, sub_00265F30); /* call 0x00265F30 */

loc_0018B703: ;
    MEM8(esi + 0x192) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018B70C: ;
    eax = MEM32(esi + 0xB4);
    ecx = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xBC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xB8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0x110;
    PUSH32(esp, 0x0018B733u); RECOMP_ABI_CALL(0x00265FF0u, sub_00265FF0); /* call 0x00265FF0 */

loc_0018B733: ;
    MEM8(esi + 0x192) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B740
 * Original: 0x0018B740 - 0x0018B774 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B740: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x192));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B752; /* jne: not equal / not zero */

loc_0018B74D: ;
    PUSH32(esp, 0x0018B752u); RECOMP_ABI_CALL(0x0018B6C0u, sub_0018B6C0); /* call 0x0018B6C0 */

loc_0018B752: ;
    eax = esi + 0x110;
    PUSH32(esp, eax);
    ecx = esi + 0xD0;
    PUSH32(esp, ecx);
    ecx = esi + 0x150;
    PUSH32(esp, 0x0018B76Bu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018B76B: ;
    MEM8(esi + 0x193) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B780
 * Original: 0x0018B780 - 0x0018B88E (270 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B780(void)
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

loc_0018B780: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(esp) = eax;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x203D)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x203D), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B7BC; /* je: equal / zero */

loc_0018B7A9: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEB00); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_0018B7BC: ;
    eax = MEM32(ecx + 0x39E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3240A0); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_0018B837; /* ja: above (unsigned >) */

loc_0018B7D4: ;
    eax = ZX8(MEM8(eax + 0x18B89C));
    { uint32_t _jt = MEM32(eax * 4 + 0x18B890); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0018B7E2u) goto loc_0018B7E2;
    if (_jt == 0x0018B804u) goto loc_0018B804;
    if (_jt == 0x0018B80Fu) goto loc_0018B80F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018B7E2: ;
    fp_push(MEMF(esp)); /* fld float */

loc_0018B7E5: ;
    fp_push(1.0); /* fld1 */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018B800u); RECOMP_ABI_CALL(0x0018B480u, sub_0018B480); /* call 0x0018B480 */

loc_0018B800: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0018B804: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    goto loc_0018B7E5;

loc_0018B80F: ;
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0018B833u); RECOMP_ABI_CALL(0x0018B480u, sub_0018B480); /* call 0x0018B480 */

loc_0018B833: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0018B837: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    SET_LO8(eax, 1);
    fp_push(1.0); /* fld1 */
    MEM8(ecx + 0x192) = LO8(edx);
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEM8(ecx + 0x193) = LO8(edx);
    MEM8(ecx + 0x190) = LO8(eax);
    MEM8(ecx + 0x194) = LO8(eax);
    fp_push(MEMF(esp)); /* fld float */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    MEMF(ecx + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    MEMF(ecx + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(ecx + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(ecx + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018B8B0
 * Original: 0x0018B8B0 - 0x0018BE3F (1423 bytes, 344 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B8B0(void)
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

loc_0018B8B0: ;
    edx = MEM32(esp + 4);
    xmm5 = XMM_SCALAR(MEMF(edx + 0xB8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0xBC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm6.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0xB0); /* subss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(edx + 0xB4);
    MEM32(ecx + 0x30) = eax;
    MEMF(ecx + 0x40) = xmm6.f[0]; /* movss */
    xmm3 = xmm0; /* movaps */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    MEMF(ecx + 0x44) = xmm3.f[0]; /* movss */
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    fp_push(MEMF(ecx + 0x40)); /* fld float */
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
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018B99A; /* jnp: not parity */

loc_0018B969: ;
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] / MEMF(esp + 4); /* divss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(ecx + 0x40) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 0x44)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(ecx + 0x44) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(ecx + 0x48) = xmm7.f[0]; /* movss */

loc_0018B99A: ;
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x60) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x64) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x68) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ecx + 0x68)); /* fld float */
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    fp_push(MEMF(ecx + 0x60)); /* fld float */
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
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018BA13; /* jnp: not parity */

loc_0018B9E7: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 4); /* divss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0x60) = xmm5.f[0]; /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x64); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 0x68); /* mulss */
    MEMF(ecx + 0x64) = xmm5.f[0]; /* movss */
    MEMF(ecx + 0x68) = xmm3.f[0]; /* movss */

loc_0018BA13: ;
    MEMF(ecx + 0x70) = xmm0.f[0]; /* movss */
    xmm3 = xmm0; /* movaps */
    MEMF(ecx + 0x80) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 0x88) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 0x84) = xmm3.f[0]; /* movss */
    fp_push(MEMF(ecx + 0x88)); /* fld float */
    fp_push(MEMF(ecx + 0x84)); /* fld float */
    fp_push(MEMF(ecx + 0x80)); /* fld float */
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
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018BABD; /* jnp: not parity */

loc_0018BA7D: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 4); /* divss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0x80) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x84)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0x84) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x88)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0x88) = xmm5.f[0]; /* movss */

loc_0018BABD: ;
    MEMF(ecx + 0x90) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xA0) = xmm0.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    MEMF(ecx + 0xA8) = xmm6.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 0xA4) = xmm3.f[0]; /* movss */
    fp_push(MEMF(ecx + 0xA8)); /* fld float */
    fp_push(MEMF(ecx + 0xA4)); /* fld float */
    fp_push(MEMF(ecx + 0xA0)); /* fld float */
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
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018BB66; /* jnp: not parity */

loc_0018BB26: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 4); /* divss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0xA0) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xA4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0xA4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xA8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0xA8) = xmm4.f[0]; /* movss */

loc_0018BB66: ;
    xmm5 = XMM_SCALAR(MEMF(0x3240F8)); /* movss */
    MEMF(ecx + 0xB0) = xmm0.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0xB8)); /* movss */
    xmm4.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] / xmm4.f[0]; /* divss */
    xmm4 = XMM_SCALAR(MEMF(edx + 0xBC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm5.f[0] = (float)(int32_t)MEM32(0x38DC60); /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] / xmm5.f[0]; /* divss */
    MEMF(ecx + 0xC0) = xmm6.f[0]; /* movss */
    xmm5 = xmm0; /* movaps */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx + 0xC4) = xmm5.f[0]; /* movss */
    fp_push(MEMF(ecx + 0xC8)); /* fld float */
    fp_push(MEMF(ecx + 0xC4)); /* fld float */
    fp_push(MEMF(ecx + 0xC0)); /* fld float */
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
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018BC47; /* jnp: not parity */

loc_0018BC07: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 4); /* divss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0xC0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 0xC4)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0xC4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 0xC8)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0xC8) = xmm7.f[0]; /* movss */

loc_0018BC47: ;
    MEMF(ecx + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE0) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xE4) = xmm5.f[0]; /* movss */
    MEMF(ecx + 0xE8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ecx + 0xE8)); /* fld float */
    fp_push(MEMF(ecx + 0xE4)); /* fld float */
    fp_push(MEMF(ecx + 0xE0)); /* fld float */
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
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018BCE4; /* jnp: not parity */

loc_0018BCA9: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 4); /* divss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0xE0) = xmm5.f[0]; /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0xE4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 0xE8); /* mulss */
    MEMF(ecx + 0xE4) = xmm5.f[0]; /* movss */
    MEMF(ecx + 0xE8) = xmm3.f[0]; /* movss */

loc_0018BCE4: ;
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */
    xmm3 = xmm0; /* movaps */
    MEMF(ecx + 0x100) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 0x108) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 0x104) = xmm3.f[0]; /* movss */
    fp_push(MEMF(ecx + 0x108)); /* fld float */
    fp_push(MEMF(ecx + 0x104)); /* fld float */
    fp_push(MEMF(ecx + 0x100)); /* fld float */
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
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018BD91; /* jnp: not parity */

loc_0018BD51: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 4); /* divss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x100) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x104)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0x104) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x108)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx + 0x108) = xmm5.f[0]; /* movss */

loc_0018BD91: ;
    MEMF(ecx + 0x110) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x120) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x128) = xmm6.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 0x124) = xmm2.f[0]; /* movss */
    fp_push(MEMF(ecx + 0x128)); /* fld float */
    fp_push(MEMF(ecx + 0x124)); /* fld float */
    fp_push(MEMF(ecx + 0x120)); /* fld float */
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
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018BE34; /* jnp: not parity */

loc_0018BDF7: ;
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 4); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x120) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x124)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x124) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x128)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x128) = xmm2.f[0]; /* movss */

loc_0018BE34: ;
    MEMF(ecx + 0x130) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018BE40
 * Original: 0x0018BE40 - 0x0018C14A (778 bytes, 237 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BE40(void)
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

loc_0018BE40: ;
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
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ebp + 0x18);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(ecx + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm6.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm2.f[0]; /* movss */
    edx = ecx + 0x40;
    MEMF(edx) = xmm6.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_push(MEMF(edx + 4)); /* fld float */
    xmm5 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    fp_push(MEMF(edx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
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
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018BF22; /* jnp: not parity */

loc_0018BEF2: ;
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] / MEMF(esp + 0x18); /* divss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    MEMF(edx) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    MEMF(edx + 4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    MEMF(edx + 8) = xmm7.f[0]; /* movss */

loc_0018BF22: ;
    esi = ecx + 0x60;
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
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
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018BFA0; /* jnp: not parity */

loc_0018BF70: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 0x18); /* divss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi + 8) = xmm4.f[0]; /* movss */

loc_0018BFA0: ;
    edi = ecx + 0x80;
    MEMF(ecx + 0x70) = xmm0.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(edi + 8) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(edi + 4) = xmm2.f[0]; /* movss */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
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
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018C02C; /* jnp: not parity */

loc_0018BFFC: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 0x18); /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(edi) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(edi + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(edi + 8) = xmm4.f[0]; /* movss */

loc_0018C02C: ;
    ebx = ecx + 0xA0;
    MEMF(ecx + 0x90) = xmm0.f[0]; /* movss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    MEMF(ebx + 8) = xmm6.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    MEMF(ebx + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_push(MEMF(ebx + 4)); /* fld float */
    MEM32(esp + 0x1C) = ebx;
    fp_push(MEMF(ebx)); /* fld float */
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
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018C0B5; /* jnp: not parity */

loc_0018C088: ;
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 0x18); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ebx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ebx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ebx + 8) = xmm1.f[0]; /* movss */

loc_0018C0B5: ;
    eax = ecx + 0xC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(ecx + 0xB0) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C0E1; /* je: equal / zero */

loc_0018C0C7: ;
    ebx = MEM32(edx);
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(eax + 8) = ebx;
    edx = MEM32(edx + 0x10);
    ebx = MEM32(esp + 0x1C);
    MEM32(eax + 0x10) = edx;

loc_0018C0E1: ;
    eax = ecx + 0xE0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018C101; /* je: equal / zero */

loc_0018C0EB: ;
    edx = MEM32(esi);
    MEM32(eax) = edx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = edx;

loc_0018C101: ;
    eax = ecx + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018C121; /* je: equal / zero */

loc_0018C10B: ;
    edx = MEM32(edi);
    MEM32(eax) = edx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(edi + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(edi + 0x10);
    MEM32(eax + 0x10) = edx;

loc_0018C121: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x120)) >> 32) & 1);
    ecx = ecx + 0x120;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018C141; /* je: equal / zero */

loc_0018C12B: ;
    eax = MEM32(ebx);
    MEM32(ecx) = eax;
    edx = MEM32(ebx + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(ebx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(ebx + 0x10);
    MEM32(ecx + 0x10) = edx;

loc_0018C141: ;
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
 * sub_0018C150
 * Original: 0x0018C150 - 0x0018C1E3 (147 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C150(void)
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

loc_0018C150: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 8;
    ebp = 0xA;

loc_0018C160: ;
    edi = esi + -8;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0018C16Bu); RECOMP_ABI_CALL(0x00267080u, sub_00267080); /* call 0x00267080 */

loc_0018C16B: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
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
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018C1D6; /* jnp: not parity */

loc_0018C1A2: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + -4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */

loc_0018C1D6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018C160; /* jne: not equal / not zero */

loc_0018C1DC: ;
    POP32(esp, edi);
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
 * sub_0018C1F0
 * Original: 0x0018C1F0 - 0x0018C219 (41 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C1F0(void)
{

loc_0018C1F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x7C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C220
 * Original: 0x0018C220 - 0x0018C373 (339 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C220: ;
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
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C232u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_0018C232: ;
    eax = MEM32(ebp + 8);
    MEM32(esi) = 0x2FEE58;
    MEM32(esi + 8) = 0x2FEE4C;
    ecx = MEM32(eax + 0xB0);
    MEM32(esi + 0xB0) = ecx;
    edx = MEM32(eax + 0xB4);
    MEM32(esi + 0xB4) = edx;
    ecx = MEM32(eax + 0xB8);
    MEM32(esi + 0xB8) = ecx;
    edx = MEM32(eax + 0xBC);
    MEM32(esi + 0xBC) = edx;
    ecx = MEM32(eax + 0xC0);
    MEM32(esi + 0xC0) = ecx;
    edx = MEM32(eax + 0xC4);
    MEM32(esi + 0xC4) = edx;
    xmm0 = XMM_MEM(eax + 0xE0); /* movaps */
    xmm1 = XMM_MEM(eax + 0xD0); /* movaps */
    XMM_STORE(esi + 0xD0, xmm1); /* movaps */
    XMM_STORE(esi + 0xE0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x100); /* movaps */
    xmm1 = XMM_MEM(eax + 0xF0); /* movaps */
    XMM_STORE(esi + 0xF0, xmm1); /* movaps */
    XMM_STORE(esi + 0x100, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x120); /* movaps */
    xmm1 = XMM_MEM(eax + 0x110); /* movaps */
    XMM_STORE(esi + 0x110, xmm1); /* movaps */
    XMM_STORE(esi + 0x120, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x140); /* movaps */
    xmm1 = XMM_MEM(eax + 0x130); /* movaps */
    XMM_STORE(esi + 0x130, xmm1); /* movaps */
    XMM_STORE(esi + 0x140, xmm0); /* movaps */
    SET_LO8(eax, MEM8(eax + 0x190));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x424;
    MEM8(esi + 0x190) = LO8(eax);
    MEM8(esi + 0x194) = 1;
    MEM32(esi + 0x420) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C320u); RECOMP_ABI_CALL(0x00159110u, sub_00159110); /* call 0x00159110 */

loc_0018C320: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi + 0x39E8) = ebx;
    MEM8(esi + 0x39EC) = LO8(ebx);
    MEMF(esi + 0x3A30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3A34) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x3A38) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x3A6C) = ebx;
    MEMF(esi + 0x3A40) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x191) = LO8(ebx);
    MEM8(esi + 0x192) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C380
 * Original: 0x0018C380 - 0x0018C419 (153 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
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
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x0018C406u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018C400u); } /* indirect call */
    }

loc_0018C406: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C420
 * Original: 0x0018C420 - 0x0018C495 (117 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C420: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0018C42Du); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_0018C42D: ;
    SET_LO8(eax, MEM8(esi + 0x191));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C43E; /* jne: not equal / not zero */

loc_0018C437: ;
    ecx = esi;
    PUSH32(esp, 0x0018C43Eu); RECOMP_ABI_CALL(0x0018B540u, sub_0018B540); /* call 0x0018B540 */

loc_0018C43E: ;
    SET_LO8(eax, MEM8(esi + 0x192));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C44F; /* jne: not equal / not zero */

loc_0018C448: ;
    ecx = esi;
    PUSH32(esp, 0x0018C44Fu); RECOMP_ABI_CALL(0x0018B6C0u, sub_0018B6C0); /* call 0x0018B6C0 */

loc_0018C44F: ;
    SET_LO8(eax, MEM8(esi + 0x193));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C48A; /* jne: not equal / not zero */

loc_0018C459: ;
    SET_LO8(eax, MEM8(esi + 0x192));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C46A; /* jne: not equal / not zero */

loc_0018C463: ;
    ecx = esi;
    PUSH32(esp, 0x0018C46Au); RECOMP_ABI_CALL(0x0018B6C0u, sub_0018B6C0); /* call 0x0018B6C0 */

loc_0018C46A: ;
    ecx = esi + 0x110;
    PUSH32(esp, ecx);
    edx = esi + 0xD0;
    PUSH32(esp, edx);
    ecx = esi + 0x150;
    PUSH32(esp, 0x0018C483u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018C483: ;
    MEM8(esi + 0x193) = 1;

loc_0018C48A: ;
    ecx = esi;
    PUSH32(esp, 0x0018C491u); RECOMP_ABI_CALL(0x0018B2E0u, sub_0018B2E0); /* call 0x0018B2E0 */

loc_0018C491: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C4A0
 * Original: 0x0018C4A0 - 0x0018C4C7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C4A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C4A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018C4B5u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_0018C4B5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018C4D0
 * Original: 0x0018C4D0 - 0x0018C526 (86 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C4D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    esi = ecx;
    eax = esp + 0x14;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C511u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_0018C511: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C530
 * Original: 0x0018C530 - 0x0018C586 (86 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C530: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    esi = ecx;
    eax = esp + 0x14;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C571u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_0018C571: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C590
 * Original: 0x0018C590 - 0x0018C5E6 (86 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    esi = ecx;
    eax = esp + 0x14;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C5D1u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_0018C5D1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C5F0
 * Original: 0x0018C5F0 - 0x0018C78A (410 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C5F0(void)
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

loc_0018C5F0: ;
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
    SET_LO8(eax, MEM8(esi + 0x193));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C635; /* jne: not equal / not zero */

loc_0018C606: ;
    SET_LO8(eax, MEM8(esi + 0x192));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C615; /* jne: not equal / not zero */

loc_0018C610: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C615u); RECOMP_ABI_CALL(0x0018B6C0u, sub_0018B6C0); /* call 0x0018B6C0 */

loc_0018C615: ;
    eax = esi + 0x110;
    PUSH32(esp, eax);
    ecx = esi + 0xD0;
    PUSH32(esp, ecx);
    ecx = esi + 0x150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C62Eu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018C62E: ;
    MEM8(esi + 0x193) = 1;

loc_0018C635: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(esi + 0x15C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x160)); /* movss */
    fp_push(MEMF(esi + 0x16C)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x170)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x164)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0x17C)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x168)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x150); /* mulss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x154)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18C)); /* fadd dword ptr [esi + 0x18c] */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x180); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x174)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x158)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x184); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x178)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x188); /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018C716; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0018C711: ;
    ecx = 1;

loc_0018C716: ;
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018C728; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0018C725: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0018C728: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018C730; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0018C72D: ;
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0018C730: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018C738; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0018C735: ;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0018C738: ;
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018C740; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_0018C73D: ;
    ecx = ecx | 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0018C740: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018C748; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0018C745: ;
    ecx = ecx | 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0018C748: ;
    eax = MEM32(ebp + 0xC);
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x108) = ecx;
    MEMF(eax + 0x10C) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x110) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x114) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x118) = xmm5.f[0]; /* movss */
    ecx = MEM32(eax + 0x108);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
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
 * sub_0018C790
 * Original: 0x0018C790 - 0x0018CB5F (975 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C790(void)
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

loc_0018C790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C7A5u); RECOMP_ABI_CALL(0x0012F2B0u, sub_0012F2B0); /* call 0x0012F2B0 */

loc_0018C7A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CB57; /* jne: not equal / not zero */

loc_0018C7AD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0018CB57; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_0018C7C0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x54)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0018CB57; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0018C7D3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018C851; /* jp: parity */

loc_0018C84A: ;
    MEMF(esi + 0x5C) = xmm0.f[0]; /* movss */
    goto loc_0018C85A;

loc_0018C851: ;
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    MEMF(esi + 0x5C) = xmm2.f[0]; /* movss */

loc_0018C85A: ;
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CA8D; /* je: equal / zero */

loc_0018C865: ;
    eax = MEM32(esi + 0x7C);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEM8(esi + 0x80) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C87Eu); RECOMP_ABI_CALL(0x00012760u, sub_00012760); /* call 0x00012760 */

loc_0018C87E: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm7 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm3 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm6.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    if ((_fca > _fcb)) goto loc_0018C93E; /* ja: above (unsigned >) (xmm4.f[0] vs xmm6.f[0]) */

loc_0018C93B: ;
    xmm6 = xmm7; /* movaps */

loc_0018C93E: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = esp + 0x10;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm1 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C99Fu); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_0018C99F: ;
    fp_pop(); /* fstp st(0) */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C9AFu); RECOMP_ABI_CALL(0x002651E0u, sub_002651E0); /* call 0x002651E0 */

loc_0018C9AF: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x48) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x301054); /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0018CA7B; /* jp: parity */

loc_0018CA6E: ;
    MEMF(esi + 0x74) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0018CA7B: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x50); /* divss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0018CA8D: ;
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, 0);
    MEM8(esi + 0x80) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CAA0u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018CAA0: ;
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x301054)); /* fmul dword ptr [0x301054] */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018CAD0; /* jnp: not parity */

loc_0018CAC6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_0018CAD0: ;
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, 0);
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CAE1u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018CAE1: ;
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x301054)); /* fmul dword ptr [0x301054] */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018CB11; /* jnp: not parity */

loc_0018CB07: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_0018CB11: ;
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, 0);
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CB22u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018CB22: ;
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x301054)); /* fmul dword ptr [0x301054] */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018CB52; /* jnp: not parity */

loc_0018CB48: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_0018CB52: ;
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */

loc_0018CB57: ;
    POP32(esp, edi);
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
 * sub_0018CB60
 * Original: 0x0018CB60 - 0x0018CE78 (792 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CB60(void)
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

loc_0018CB60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi + 0x50) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018CB8E; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0018CB89: ;
    MEMF(edi + 0x50) = xmm2.f[0]; /* movss */

loc_0018CB8E: ;
    xmm3 = XMM_SCALAR(MEMF(edi + 0x5C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x54)); /* movss */
    SET_LO8(eax, MEM8(edi + 0x80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x54) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CC9F; /* je: equal / zero */

loc_0018CBB9: ;
    xmm3 = XMM_SCALAR(MEMF(edi + 0x74)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    esi = MEM32(ebp + 0xC);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEMF(edi + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE99C)); /* fadd dword ptr [0x2fe99c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x300C04)); /* fmul dword ptr [0x300c04] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CC3Au); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_0018CC3A: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edx = edi + 0x40;
    PUSH32(esp, edx);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CC4Cu); RECOMP_ABI_CALL(0x00264DC0u, sub_00264DC0); /* call 0x00264DC0 */

loc_0018CC4C: ;
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    eax = esp + 0x40;
    XMM_STORE(0x534370, xmm1); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    PUSH32(esp, eax);
    PUSH32(esp, 0x534370);
    ecx = esi;
    XMM_STORE(0x534390, xmm1); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CC88u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018CC88: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CC94u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_0018CC94: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0018CC9F: ;
    xmm3 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x70)); /* movss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x74)); /* movss */
    MEMF(edi + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    esi = MEM32(ebp + 0xC);
    MEMF(edi + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    edx = esp + 0x30;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x300BA0)); /* fmul dword ptr [0x300ba0] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x300BA0)); /* fmul dword ptr [0x300ba0] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x300BA0)); /* fmul dword ptr [0x300ba0] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CD7Cu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_0018CD7C: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CD8Bu); RECOMP_ABI_CALL(0x00264DC0u, sub_00264DC0); /* call 0x00264DC0 */

loc_0018CD8B: ;
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    ecx = esp + 0x40;
    ebx = esi + 0x10;
    PUSH32(esp, ecx);
    XMM_STORE(0x534370, xmm1); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    PUSH32(esp, 0x534370);
    ecx = esi;
    XMM_STORE(0x534390, xmm1); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CDCAu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018CDCA: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CDDCu); RECOMP_ABI_CALL(0x00264DC0u, sub_00264DC0); /* call 0x00264DC0 */

loc_0018CDDC: ;
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    XMM_STORE(0x534370, xmm1); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x534370);
    ecx = esi;
    XMM_STORE(0x534390, xmm1); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CE17u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018CE17: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CE26u); RECOMP_ABI_CALL(0x00264DC0u, sub_00264DC0); /* call 0x00264DC0 */

loc_0018CE26: ;
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    edx = esp + 0x40;
    XMM_STORE(0x534370, xmm1); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    PUSH32(esp, edx);
    PUSH32(esp, 0x534370);
    ecx = esi;
    XMM_STORE(0x534390, xmm1); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CE61u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018CE61: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CE6Du); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_0018CE6D: ;
    eax = edi;
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
 * sub_0018CE80
 * Original: 0x0018CE80 - 0x0018CF65 (229 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CE80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0018CE80: ;
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
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CE96u); RECOMP_ABI_CALL(0x001306D0u, sub_001306D0); /* call 0x001306D0 */

loc_0018CE96: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3A40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    MEM8(esi + 0x191) = 0;
    MEM8(esi + 0x193) = 0;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018CEF9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0018CEB5: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    PUSH32(esp, edi);
    ecx = esi + 0x39F0;
    XMM_STORE(esp + 0x48, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CEEAu); RECOMP_ABI_CALL(0x0018CB60u, sub_0018CB60); /* call 0x0018CB60 */

loc_0018CEEA: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0018CEF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018CEF3u); } /* indirect call */
    }

loc_0018CEF9: ;
    SET_LO8(eax, MEM8(esi + 0x191));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CF0A; /* jne: not equal / not zero */

loc_0018CF03: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CF0Au); RECOMP_ABI_CALL(0x0018B540u, sub_0018B540); /* call 0x0018B540 */

loc_0018CF0A: ;
    SET_LO8(eax, MEM8(esi + 0x192));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CF1B; /* jne: not equal / not zero */

loc_0018CF14: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CF1Bu); RECOMP_ABI_CALL(0x0018B6C0u, sub_0018B6C0); /* call 0x0018B6C0 */

loc_0018CF1B: ;
    SET_LO8(eax, MEM8(esi + 0x193));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CF56; /* jne: not equal / not zero */

loc_0018CF25: ;
    SET_LO8(eax, MEM8(esi + 0x192));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CF36; /* jne: not equal / not zero */

loc_0018CF2F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CF36u); RECOMP_ABI_CALL(0x0018B6C0u, sub_0018B6C0); /* call 0x0018B6C0 */

loc_0018CF36: ;
    ecx = esi + 0x110;
    PUSH32(esp, ecx);
    edx = esi + 0xD0;
    PUSH32(esp, edx);
    ecx = esi + 0x150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CF4Fu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018CF4F: ;
    MEM8(esi + 0x193) = 1;

loc_0018CF56: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018CF5Du); RECOMP_ABI_CALL(0x0018B2E0u, sub_0018B2E0); /* call 0x0018B2E0 */

loc_0018CF5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018CF70
 * Original: 0x0018CF70 - 0x0018CFC5 (85 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CF70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CF70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x10);
    eax = esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x39F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x39F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0018CF9Cu); RECOMP_ABI_CALL(0x0018AE40u, sub_0018AE40); /* call 0x0018AE40 */

loc_0018CF9C: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x0018CFBFu); RECOMP_ABI_CALL(0x0018C790u, sub_0018C790); /* call 0x0018C790 */

loc_0018CFBF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018CFD0
 * Original: 0x0018CFD0 - 0x0018CFFC (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CFD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CFD0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x39F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x39F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x0018CFF9u); RECOMP_ABI_CALL(0x0018C790u, sub_0018C790); /* call 0x0018C790 */

loc_0018CFF9: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0018D000
 * Original: 0x0018D000 - 0x0018D001 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D000(void)
{

loc_0018D000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D010
 * Original: 0x0018D010 - 0x0018D02E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D010: ;
    eax = MEM32(esp + 4);
    edx = ZX8(MEM8(eax + 2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 3));
    SET_LO8(ecx, MEM8(eax + 1));
    eax = ZX8(MEM8(eax));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D030
 * Original: 0x0018D030 - 0x0018D058 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D030(void)
{

loc_0018D030: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM32(0x378A60) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x378A64) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x378A68) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x378A6C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D060
 * Original: 0x0018D060 - 0x0018D098 (56 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D060(void)
{

loc_0018D060: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(0x378A70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(0x378A74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(0x378A78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(0x378A7C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D0A0
 * Original: 0x0018D0A0 - 0x0018D114 (116 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D0A0(void)
{

loc_0018D0A0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax));
    xmm4 = XMM_SCALAR(MEMF(0x305FE4)); /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(0x378A60) = xmm0.f[0]; /* movss */
    edx = ZX8(MEM8(eax + 1));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(0x378A64) = xmm1.f[0]; /* movss */
    ecx = ZX8(MEM8(eax + 2));
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(0x378A68) = xmm2.f[0]; /* movss */
    edx = ZX8(MEM8(eax + 3));
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    MEMF(0x378A60) = xmm0.f[0]; /* movss */
    MEMF(0x378A64) = xmm1.f[0]; /* movss */
    MEMF(0x378A68) = xmm2.f[0]; /* movss */
    MEMF(0x378A6C) = xmm3.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D120
 * Original: 0x0018D120 - 0x0018D194 (116 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D120(void)
{

loc_0018D120: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax));
    xmm4 = XMM_SCALAR(MEMF(0x305FE4)); /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(0x378A70) = xmm0.f[0]; /* movss */
    edx = ZX8(MEM8(eax + 1));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(0x378A74) = xmm1.f[0]; /* movss */
    ecx = ZX8(MEM8(eax + 2));
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(0x378A78) = xmm2.f[0]; /* movss */
    edx = ZX8(MEM8(eax + 3));
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    MEMF(0x378A70) = xmm0.f[0]; /* movss */
    MEMF(0x378A74) = xmm1.f[0]; /* movss */
    MEMF(0x378A78) = xmm2.f[0]; /* movss */
    MEMF(0x378A7C) = xmm3.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D1A0
 * Original: 0x0018D1A0 - 0x0018D20D (109 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D1A0(void)
{

loc_0018D1A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x5235C4)); /* movss */
    eax = MEM32(0x378A50);
    ecx = MEM32(0x378A54);
    edx = MEM32(0x378A58);
    MEMF(0x378A70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5235C8)); /* movss */
    MEMF(0x378A74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5235CC)); /* movss */
    MEM32(0x378A60) = eax;
    eax = MEM32(0x378A5C);
    MEMF(0x378A78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5235D0)); /* movss */
    MEM32(0x378A64) = ecx;
    MEM32(0x378A68) = edx;
    MEM32(0x378A6C) = eax;
    MEMF(0x378A7C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D210
 * Original: 0x0018D210 - 0x0018D272 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0018D210: ;
    eax = MEM32(ecx + 0xE8);
    ecx = MEM32(eax + 0x50);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm0 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_0018D258; /* jne: not equal / not zero */

loc_0018D227: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018D248; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0018D243: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0018D258;

loc_0018D248: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018D258; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0018D255: ;
    xmm0 = xmm1; /* movaps */

loc_0018D258: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018D26D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0018D265: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_0018D26D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018D280
 * Original: 0x0018D280 - 0x0018D2C9 (73 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D280: ;
    eax = MEM32(ecx + 0x858);
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    edx = 0x26;
    if (CMP_NE(_fa, _fb)) goto loc_0018D297; /* jne: not equal / not zero */

loc_0018D292: ;
    edx = 1;

loc_0018D297: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018D2B3; /* jle: less or equal (signed <=) */

loc_0018D29B: ;
    goto loc_0018D2A0;

    /* nop */

loc_0018D2A0: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018D2A0; /* jne: not equal / not zero */

loc_0018D2B3: ;
    eax = MEM32(ecx + 0x860);
    edx = MEM32(ecx + eax * 4 + 0x130);
    MEM32(ecx + 0x12C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D2D0
 * Original: 0x0018D2D0 - 0x0018D315 (69 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D2D0: ;
    eax = MEM32(ecx + 0x860);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x130);
    edx = edx + ecx + 0x138;
    MEM32(ecx + 0x858) = edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x260);
    edx = edx + ecx + 0x398;
    MEM32(ecx + 0x85C) = edx;
    edx = MEM32(ecx + 0x12C);
    MEM32(ecx + 0x860) = eax;
    MEM32(ecx + eax * 4 + 0x130) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D320
 * Original: 0x0018D320 - 0x0018D365 (69 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D320: ;
    eax = MEM32(ecx + 0x860);
    edx = MEM32(ecx + eax * 4 + 0x130);
    MEM32(ecx + 0x12C) = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x130);
    edx = edx + ecx + 0x138;
    MEM32(ecx + 0x858) = edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x260);
    edx = edx + ecx + 0x398;
    MEM32(ecx + 0x85C) = edx;
    MEM32(ecx + 0x860) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D370
 * Original: 0x0018D370 - 0x0018D376 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D370(void)
{

loc_0018D370: ;
    eax = MEM32(0x3C2F14);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D380
 * Original: 0x0018D380 - 0x0018D38B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D380: ;
    ecx = MEM32(ecx + 0x8C4);
    g_seh_ebp = ebp; sub_001C6680(); return; /* tail jmp 0x001C6680 */

}

/**
 * sub_0018D390
 * Original: 0x0018D390 - 0x0018D3AE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D390(void)
{

loc_0018D390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 4);
    ecx = 0x5236A0;
    PUSH32(esp, 0x0018D39Fu); RECOMP_ABI_CALL(0x001D0B60u, sub_001D0B60); /* call 0x001D0B60 */

loc_0018D39F: ;
    ecx = MEM32(esi + 0x8C4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0018D3ACu); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_0018D3AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D3B0
 * Original: 0x0018D3B0 - 0x0018D3FE (78 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D3B0: ;
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
 * sub_0018D400
 * Original: 0x0018D400 - 0x0018D40B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D400: ;
    ecx = MEM32(ecx + 0x8C4);
    g_seh_ebp = ebp; sub_001C66F0(); return; /* tail jmp 0x001C66F0 */

}

/**
 * sub_0018D410
 * Original: 0x0018D410 - 0x0018D420 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D410: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D430
 * Original: 0x0018D430 - 0x0018D473 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D430: ;
    SET_LO8(eax, MEM8(0x3C6288));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0018D471; /* je: equal / zero */

loc_0018D43C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D457; /* je: equal / zero */

loc_0018D443: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D457; /* je: equal / zero */

loc_0018D44A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D450u); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_0018D450: ;
    MEM32(esi + 4) = 0;

loc_0018D457: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D471; /* je: equal / zero */

loc_0018D45E: ;
    ecx = MEM32(0x4F7410);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D46Au); RECOMP_ABI_CALL(0x001C1890u, sub_001C1890); /* call 0x001C1890 */

loc_0018D46A: ;
    MEM32(esi + 8) = 0;

loc_0018D471: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D480
 * Original: 0x0018D480 - 0x0018D4D4 (84 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D480: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x86C;
    edi = 5;
    /* nop */

loc_0018D490: ;
    SET_LO8(eax, MEM8(0x3C6288));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D4CB; /* je: equal / zero */

loc_0018D499: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D4B3; /* je: equal / zero */

loc_0018D4A0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D4CB; /* je: equal / zero */

loc_0018D4A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D4ACu); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_0018D4AC: ;
    MEM32(esi + -4) = 0;

loc_0018D4B3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D4CB; /* je: equal / zero */

loc_0018D4B9: ;
    ecx = MEM32(0x4F7410);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D4C5u); RECOMP_ABI_CALL(0x001C1890u, sub_001C1890); /* call 0x001C1890 */

loc_0018D4C5: ;
    MEM32(esi) = 0;

loc_0018D4CB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018D490; /* jne: not equal / not zero */

loc_0018D4D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D4E0
 * Original: 0x0018D4E0 - 0x0018D501 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D4E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D4FF; /* je: equal / zero */

loc_0018D4EA: ;
    ecx = MEM32(esi + 4);
    MEM8(esi + 0xC) = 0;
    PUSH32(esp, 0x0018D4F6u); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_0018D4F6: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_0018D4FF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D510
 * Original: 0x0018D510 - 0x0018D5AD (157 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D510: ;
    xmm0 = XMM_SCALAR(MEMF(0x5235C4)); /* movss */
    eax = MEM32(0x378A50);
    ecx = MEM32(0x378A54);
    edx = MEM32(0x378A58);
    MEMF(0x378A70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5235C8)); /* movss */
    MEMF(0x378A74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5235CC)); /* movss */
    MEM32(0x378A60) = eax;
    eax = MEM32(0x378A5C);
    MEMF(0x378A78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5235D0)); /* movss */
    PUSH32(esp, 0x378A60);
    PUSH32(esp, 0x324158);
    MEM32(0x378A64) = ecx;
    MEM32(0x378A68) = edx;
    MEM32(0x378A6C) = eax;
    MEMF(0x378A7C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0018D58Bu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018D58B: ;
    PUSH32(esp, 0x378A70);
    PUSH32(esp, 0x324144);
    PUSH32(esp, 0x0018D59Au); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018D59A: ;
    PUSH32(esp, 0x378A30);
    PUSH32(esp, 0x324130);
    PUSH32(esp, 0x0018D5A9u); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018D5A9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D5B0
 * Original: 0x0018D5B0 - 0x0018D5DE (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D5B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D5B0: ;
    eax = MEM32(esp + 4);
    edx = eax + 0xD0;
    MEM32(ecx + 0xE4) = eax;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(ecx + 0xD4) = edx;
    MEM32(ecx + 0xD8) = eax;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018D5DBu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018D5DB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D5E0
 * Original: 0x0018D5E0 - 0x0018D620 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D5E0(void)
{

loc_0018D5E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(esi + 0x11C) = ecx;
    PUSH32(esp, 0x0018D5F3u); RECOMP_ABI_CALL(0x00194C70u, sub_00194C70); /* call 0x00194C70 */

loc_0018D5F3: ;
    ecx = MEM32(esi + 0xE0);
    PUSH32(esp, ecx);
    edi = esi + 0x50;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0xDC) = eax;
    PUSH32(esp, 0x0018D60Bu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018D60B: ;
    PUSH32(esp, edi);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    ecx = esi + 0x90;
    PUSH32(esp, 0x0018D61Bu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018D61B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D620
 * Original: 0x0018D620 - 0x0018D6A2 (130 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0018D620: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D67B; /* je: equal / zero */

loc_0018D628: ;
    eax = MEM32(ecx + 0x858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(eax + edi * 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D67E; /* je: equal / zero */

loc_0018D63D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x40); /* comiss */
    if ((_fca > _fcb)) goto loc_0018D65E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx + 0x40)) */

loc_0018D648: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x40); /* comiss */
    if ((_fca > _fcb)) goto loc_0018D67E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax + 0x40)) */

loc_0018D653: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x44); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018D67E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x44)) */

loc_0018D65E: ;
    esi = eax;
    eax = MEM32(eax + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018D63D; /* jne: not equal / not zero */

loc_0018D667: ;
    MEM32(esi + 0x60) = edx;
    ecx = MEM32(ecx + 0x858);
    eax = ecx + edi * 8 + 4;
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);

loc_0018D67B: ;
    esp += 12; return; /* ret 8 */

loc_0018D67E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edx + 0x60) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0018D667; /* jne: not equal / not zero */

loc_0018D685: ;
    eax = MEM32(ecx + 0x858);
    MEM32(eax + edi * 8) = edx;
    ecx = MEM32(ecx + 0x858);
    eax = ecx + edi * 8 + 4;
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018D6B0
 * Original: 0x0018D6B0 - 0x0018D767 (183 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D6B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xD0);
    ebx = MEM32(edi + 0x85C);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = 0x26;
    if (CMP_NE(_fa, _fb)) goto loc_0018D6E1; /* jne: not equal / not zero */

loc_0018D6DD: ;
    MEM32(esp + 0xC) = eax;

loc_0018D6E1: ;
    eax = MEM32(esp + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018D758; /* jle: less or equal (signed <=) */

loc_0018D6EB: ;
    PUSH32(esp, esi);
    /* nop */

loc_0018D6F0: ;
    eax = MEM32(edi + 0x858);
    esi = MEM32(eax + ebp * 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D738; /* je: equal / zero */

loc_0018D6FD: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D710; /* je: equal / zero */

loc_0018D703: ;
    ecx = MEM32(ebx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0018D709u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0018D707u); } /* indirect call */
    }

loc_0018D709: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0018D710: ;
    edx = esi + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(edi + 0xD0) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 0x58); PUSH32(esp, 0x0018D71Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D71Bu); } /* indirect call */
    }

loc_0018D71E: ;
    esi = MEM32(esi + 0x60);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018D710; /* jne: not equal / not zero */

loc_0018D728: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D738; /* je: equal / zero */

loc_0018D72F: ;
    ecx = MEM32(ebx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0018D735u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0018D733u); } /* indirect call */
    }

loc_0018D735: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018D738: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018D6F0; /* jl: less (signed <) */

loc_0018D744: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(edi + 0xD0) = edx;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0018D758: ;
    MEM32(edi + 0xD0) = ecx;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D770
 * Original: 0x0018D770 - 0x0018D78A (26 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D770(void)
{

loc_0018D770: ;
    MEMF(eax + 0x148) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    MEMF(eax + 0x14C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D790
 * Original: 0x0018D790 - 0x0018D8E3 (339 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D790: ;
    SET_LO8(eax, MEM8(0x5235C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018D8E2; /* jne: not equal / not zero */

loc_0018D79D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    ecx = 0x523650;
    PUSH32(esp, 0x0018D7ABu); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_0018D7AB: ;
    PUSH32(esp, 1);
    ecx = 0x523650;
    PUSH32(esp, 0x0018D7B7u); RECOMP_ABI_CALL(0x001CF090u, sub_001CF090); /* call 0x001CF090 */

loc_0018D7B7: ;
    PUSH32(esp, 0);
    ecx = 0x523650;
    PUSH32(esp, 0x0018D7C3u); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_0018D7C3: ;
    PUSH32(esp, 0);
    ecx = 0x523650;
    PUSH32(esp, 0x0018D7CFu); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_0018D7CF: ;
    PUSH32(esp, 0);
    ecx = 0x523650;
    PUSH32(esp, 0x0018D7DBu); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_0018D7DB: ;
    PUSH32(esp, 0);
    ecx = 0x523650;
    PUSH32(esp, 0x0018D7E7u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_0018D7E7: ;
    PUSH32(esp, 0x206);
    ecx = 0x523650;
    PUSH32(esp, 0x0018D7F6u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_0018D7F6: ;
    PUSH32(esp, 0x523624);
    ecx = 0x5236A0;
    PUSH32(esp, 0x0018D805u); RECOMP_ABI_CALL(0x001D02B0u, sub_001D02B0); /* call 0x001D02B0 */

loc_0018D805: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = 0x5236A0;
    PUSH32(esp, 0x0018D811u); RECOMP_ABI_CALL(0x001D0350u, sub_001D0350); /* call 0x001D0350 */

loc_0018D811: ;
    PUSH32(esp, 0x311640);
    ecx = 0x5236A0;
    PUSH32(esp, 0x0018D820u); RECOMP_ABI_CALL(0x001D0460u, sub_001D0460); /* call 0x001D0460 */

loc_0018D820: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x523580);
    PUSH32(esp, 0x30FFE8);
    ecx = 0x5236A0;
    PUSH32(esp, 0x0018D838u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_0018D838: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 4);
    PUSH32(esp, 0x378A80);
    PUSH32(esp, 0x311638);
    ecx = 0x5236A0;
    PUSH32(esp, 0x0018D850u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_0018D850: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x523570);
    PUSH32(esp, 0x311640);
    ecx = 0x5236A0;
    PUSH32(esp, 0x0018D868u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_0018D868: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x523650);
    PUSH32(esp, 0x311628);
    ecx = 0x5236A0;
    PUSH32(esp, 0x0018D880u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_0018D880: ;
    eax = MEM32(0x37DC44);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x32418C);
    ecx = 0x5236A0;
    PUSH32(esp, 0x0018D899u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_0018D899: ;
    PUSH32(esp, 0x5235D8);
    PUSH32(esp, 0x32416C);
    PUSH32(esp, 0x0018D8A8u); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018D8A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018D8B0u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_0018D8B0: ;
    ecx = eax;
    PUSH32(esp, 0x0018D8B7u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_0018D8B7: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018D8C1u); RECOMP_ABI_CALL(0x001C4100u, sub_001C4100); /* call 0x001C4100 */

loc_0018D8C1: ;
    ecx = 0x13;
    esi = eax;
    edi = 0x5235D8;
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
    MEM32(0x5235EC) = 1;
    MEM8(0x5235C0) = 1;
    POP32(esp, esi);

loc_0018D8E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D8F0
 * Original: 0x0018D8F0 - 0x0018DBE4 (756 bytes, 203 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D8F0: ;
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
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x8CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0018D960; /* jne: not equal / not zero */

loc_0018D90F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xAC);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x0018D91Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D916u); } /* indirect call */
    }

loc_0018D91C: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D92E; /* je: equal / zero */

loc_0018D925: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D92Cu); RECOMP_ABI_CALL(0x001D05C0u, sub_001D05C0); /* call 0x001D05C0 */

loc_0018D92C: ;
    goto loc_0018D930;

loc_0018D92E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018D930: ;
    MEM32(edi + 0x8CC) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x207);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D945u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_0018D945: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D94Eu); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_0018D94E: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D957u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_0018D957: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D960u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_0018D960: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D965u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_0018D965: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D96Cu); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_0018D96C: ;
    ecx = esp + 0x50;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D977u); RECOMP_ABI_CALL(0x001C7670u, sub_001C7670); /* call 0x001C7670 */

loc_0018D977: ;
    eax = MEM32(ebx);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018D988u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D985u); } /* indirect call */
    }

loc_0018D988: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D98Fu); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_0018D98F: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x3F800000);
    esi = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esp + 0x44) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D9B1u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_0018D9B1: ;
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D9BFu); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_0018D9BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D9C9u); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_0018D9C9: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D9D0u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_0018D9D0: ;
    ecx = ebx + 0x10;
    PUSH32(esp, 0x1000000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D9DDu); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_0018D9DD: ;
    edx = MEM32(ebp + 8);
    eax = esp + 0x28;
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D9F3u); RECOMP_ABI_CALL(0x001C2D30u, sub_001C2D30); /* call 0x001C2D30 */

loc_0018D9F3: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018D9FCu); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_0018D9FC: ;
    edi = MEM32(edi + 0x8CC);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
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
    esi = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x8CC);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DA21u); RECOMP_ABI_CALL(0x001D0BF0u, sub_001D0BF0); /* call 0x001D0BF0 */

loc_0018DA21: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x18;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esi + 0x8CC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DA79u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_0018DA79: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x18;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esi + 0x8CC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DAD7u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_0018DAD7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x18;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esi + 0x8CC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DB35u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_0018DB35: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x18;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esi + 0x8CC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DB99u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_0018DB99: ;
    ecx = MEM32(esi + 0x8CC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DBA4u); RECOMP_ABI_CALL(0x001D0700u, sub_001D0700); /* call 0x001D0700 */

loc_0018DBA4: ;
    ecx = MEM32(esi + 0x8CC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DBAFu); RECOMP_ABI_CALL(0x001D0780u, sub_001D0780); /* call 0x001D0780 */

loc_0018DBAF: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DBBBu); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_0018DBBB: ;
    PUSH32(esp, 0x1010101);
    ecx = ebx + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DBC8u); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_0018DBC8: ;
    esi = MEM32(esp + 0x2C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DBD3u); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_0018DBD3: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DBDBu); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_0018DBDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DBF0
 * Original: 0x0018DBF0 - 0x0018DC36 (70 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DBF0: ;
    eax = MEM32(0x523564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018DC25; /* jne: not equal / not zero */

loc_0018DBF9: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(0x378A48), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018DC0Cu); RECOMP_ABI_CALL(0x001CDA30u, sub_001CDA30); /* call 0x001CDA30 */

loc_0018DC0C: ;
    ecx = 3;
    MEM32(0x523564) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;

loc_0018DC25: ;
    ecx = MEM32(0x523564);
    PUSH32(esp, 0x0018DC30u); RECOMP_ABI_CALL(0x001CCDB0u, sub_001CCDB0); /* call 0x001CCDB0 */

loc_0018DC30: ;
    eax = MEM32(0x523564);
    esp += 4; return; /* ret */

}

/**
 * sub_0018DC40
 * Original: 0x0018DC40 - 0x0018DD02 (194 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018DC71; /* jne: not equal / not zero */

loc_0018DC48: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(0x378A44), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018DC5Bu); RECOMP_ABI_CALL(0x001CDA30u, sub_001CDA30); /* call 0x001CDA30 */

loc_0018DC5B: ;
    ecx = 3;
    MEM32(esi) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;

loc_0018DC71: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x0018DC78u); RECOMP_ABI_CALL(0x001CCDB0u, sub_001CCDB0); /* call 0x001CCDB0 */

loc_0018DC78: ;
    SET_LO8(eax, MEM8(0x3C6288));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DC8E; /* je: equal / zero */

loc_0018DC81: ;
    ecx = MEM32(0x4F7410);
    PUSH32(esp, 0x0018DC8Cu); RECOMP_ABI_CALL(0x001C1810u, sub_001C1810); /* call 0x001C1810 */

loc_0018DC8C: ;
    goto loc_0018DC93;

loc_0018DC8E: ;
    eax = MEM32(0x3C6294);

loc_0018DC93: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0018DCA2u); RECOMP_ABI_CALL(0x001D1370u, sub_001D1370); /* call 0x001D1370 */

loc_0018DCA2: ;
    SET_LO8(eax, MEM8(0x3C6288));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DCB8; /* je: equal / zero */

loc_0018DCAB: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x0018DCB3u); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_0018DCB3: ;
    MEM32(esi + 4) = eax;
    goto loc_0018DCC1;

loc_0018DCB8: ;
    edx = MEM32(0x3C6298);
    MEM32(esi + 4) = edx;

loc_0018DCC1: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(0x378A44); /* divss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0018DCE6u); RECOMP_ABI_CALL(0x001C6840u, sub_001C6840); /* call 0x001C6840 */

loc_0018DCE6: ;
    eax = MEM32(0x378A44);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0018DD00u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_0018DD00: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018DD10
 * Original: 0x0018DD10 - 0x0018DD9D (141 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DD10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DD10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018DD1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DD18u); } /* indirect call */
    }

loc_0018DD1A: ;
    eax = MEM32(0x378A44);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0018DD34u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_0018DD34: ;
    ecx = MEM32(0x378A40);
    edx = MEM32(0x378A3C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEAFC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF504); /* mulss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0018DD6Bu); RECOMP_ABI_CALL(0x001C68C0u, sub_001C68C0); /* call 0x001C68C0 */

loc_0018DD6B: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0018DD73u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_0018DD73: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018DD7Eu); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_0018DD7E: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0018DD88u); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_0018DD88: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018DD95u); RECOMP_ABI_CALL(0x001C71E0u, sub_001C71E0); /* call 0x001C71E0 */

loc_0018DD95: ;
    MEM8(esi + 0xC) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018DDA0
 * Original: 0x0018DDA0 - 0x0018DDB1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DDA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DDA0: ;
    eax = MEM32(esp + 4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 0x864);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DDC0
 * Original: 0x0018DDC0 - 0x0018DDE9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DDC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx + 0xE4);
    edx = MEM32(eax + 0x60);
    ecx = MEM32(ebp + 8);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DDF0
 * Original: 0x0018DDF0 - 0x0018DE31 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DDF0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x8B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DE2F; /* je: equal / zero */

loc_0018DDFE: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = eax + edi + 0x864;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DE24; /* je: equal / zero */

loc_0018DE10: ;
    ecx = MEM32(esi + 4);
    MEM8(esi + 0xC) = 0;
    PUSH32(esp, 0x0018DE1Cu); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_0018DE1C: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018DE24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DE21u); } /* indirect call */
    }

loc_0018DE24: ;
    MEM32(edi + 0x8B4) = 0xFFFFFFFFu;
    POP32(esp, esi);

loc_0018DE2F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018DE40
 * Original: 0x0018DE40 - 0x0018DE92 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DE40: ;
    eax = MEM32(ecx + 0x12C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018DE8F; /* jae: above or equal (unsigned >=) */

loc_0018DE4D: ;
    edx = MEM32(ecx + 0x128);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0018DE7F; /* je: equal / zero */

loc_0018DE5A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x48) = edx;
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x60) = edx;
    MEM32(ecx + 0x12C) = MEM32(ecx + 0x12C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x12C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0018DE7F: ;
    edx = MEM32(ecx + 0x12C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x12C) = edx;
    esp += 4; return; /* ret */

loc_0018DE8F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018DEA0
 * Original: 0x0018DEA0 - 0x0018DF16 (118 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DEA0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x12C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018DF10; /* jae: above or equal (unsigned >=) */

loc_0018DEB0: ;
    ecx = MEM32(ebx + 0x128);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0018DEFD; /* je: equal / zero */

loc_0018DEBD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax + 0x40;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x10) = edx;
    MEM32(edi + 0xC) = edx;
    MEM32(edi + 8) = edx;
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    ecx = 7;
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
    MEM32(eax + 0x60) = edx;
    ecx = MEM32(ebx + 0x12C);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebx + 0x12C) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018DEFD: ;
    ecx = MEM32(ebx + 0x12C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x12C) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018DF10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DF20
 * Original: 0x0018DF20 - 0x0018E0BD (413 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0018DF20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD4);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x30); /* movaps */
    eax = MEM32(esi + 0xD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x534370);
    ecx = esp + 0x18;
    XMM_STORE(esp + 0x18, xmm0); /* movaps */
    XMM_STORE(esp + 0x28, xmm1); /* movaps */
    XMM_STORE(esp + 0x38, xmm2); /* movaps */
    XMM_STORE(esp + 0x48, xmm3); /* movaps */
    XMM_STORE(0x534370, xmm0); /* movaps */
    XMM_STORE(0x534380, xmm1); /* movaps */
    XMM_STORE(0x534390, xmm2); /* movaps */
    XMM_STORE(0x5343A0, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018DF86u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018DF86: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x44); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x48); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x3C); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x4C); /* addss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm5 = xmm4; /* movaps */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018E05D; /* jnp: not parity */

loc_0018E059: ;
    xmm5.f[0] = xmm5.f[0] / xmm2.f[0]; /* divss */

loc_0018E05D: ;
    eax = MEM32(esi + 0x11C);
    xmm6 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x40); /* addss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esi = MEM32(esi + 0x11C);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0x44); /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018E0C0
 * Original: 0x0018E0C0 - 0x0018E14E (142 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0018E0C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0018E0CDu); RECOMP_ABI_CALL(0x0018DEA0u, sub_0018DEA0); /* call 0x0018DEA0 */

loc_0018E0CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E124; /* je: equal / zero */

loc_0018E0D1: ;
    ecx = MEM32(esi + 0x858);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(ecx + edi * 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E128; /* je: equal / zero */

loc_0018E0E5: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x40); /* comiss */
    if ((_fca > _fcb)) goto loc_0018E106; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax + 0x40)) */

loc_0018E0F0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x40); /* comiss */
    if ((_fca > _fcb)) goto loc_0018E128; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x40)) */

loc_0018E0FB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x44); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018E128; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x44)) */

loc_0018E106: ;
    edx = ecx;
    ecx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E0E5; /* jne: not equal / not zero */

loc_0018E10F: ;
    MEM32(edx + 0x60) = eax;
    edx = MEM32(esi + 0x858);
    ecx = MEM32(edx + edi * 8 + 4);
    eax = edx + edi * 8 + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    POP32(esp, edi);

loc_0018E124: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0018E128: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 0x60) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0018E10F; /* jne: not equal / not zero */

loc_0018E12F: ;
    ecx = MEM32(esi + 0x858);
    MEM32(ecx + edi * 8) = eax;
    edx = MEM32(esi + 0x858);
    ecx = MEM32(edx + edi * 8 + 4);
    eax = edx + edi * 8 + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018E150
 * Original: 0x0018E150 - 0x0018E332 (482 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0xE4);
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018E199u); RECOMP_ABI_CALL(0x00265BC0u, sub_00265BC0); /* call 0x00265BC0 */

loc_0018E199: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(0x534370, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    PUSH32(esp, 0x534370);
    XMM_STORE(0x534390, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x54); /* movaps */
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018E1D8u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018E1D8: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x8C4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018E1E8u); RECOMP_ABI_CALL(0x001C71E0u, sub_001C71E0); /* call 0x001C71E0 */

loc_0018E1E8: ;
    eax = MEM32(esi + 0x11C);
    SET_LO8(ecx, MEM8(eax + 0x65));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E1FD; /* jne: not equal / not zero */

loc_0018E1F5: ;
    _fa = (uint32_t)(MEM32(esi + 0x120)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x120), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E271; /* je: equal / zero */

loc_0018E1FD: ;
    ecx = MEM32(esi + 0x8C4);
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0x120) = eax;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x44); /* subss */
    edx = MEM32(eax + 0x44);
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x40); /* subss */
    eax = MEM32(eax + 0x40);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018E23Fu); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_0018E23F: ;
    ecx = MEM32(esi + 0x11C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x54)); /* movss */
    eax = MEM32(esi + 0x8C4);
    ecx = MEM32(ecx + 0x50);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x140;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x11C);
    MEM8(edx + 0x65) = 0;

loc_0018E271: ;
    eax = MEM32(esi + 0xE4);
    SET_LO8(ecx, MEM8(eax + 0x194));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E2E6; /* je: equal / zero */

loc_0018E281: ;
    SET_LO8(ecx, MEM8(eax + 0x190));
    edx = MEM32(eax + 0xB0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x8C4);
    PUSH32(esp, edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0018E2D4; /* je: equal / zero */

loc_0018E29F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0xBC); /* divss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEAFC); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018E2D2u); RECOMP_ABI_CALL(0x001C68C0u, sub_001C68C0); /* call 0x001C68C0 */

loc_0018E2D2: ;
    goto loc_0018E2D9;

loc_0018E2D4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018E2D9u); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_0018E2D9: ;
    eax = MEM32(esi + 0xE4);
    MEM8(eax + 0x194) = 0;

loc_0018E2E6: ;
    ecx = MEM32(esi + 0x8C4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018E2F1u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_0018E2F1: ;
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E32A; /* je: equal / zero */

loc_0018E2F8: ;
    ecx = MEM32(0x38A054);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018E305u); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_0018E305: ;
    ecx = MEM32(esi + 0x124);
    edx = MEM32(ecx);
    edi = 6;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0018E315u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E312u); } /* indirect call */
    }

loc_0018E315: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E31E; /* je: equal / zero */

loc_0018E319: ;
    edi = 7;

loc_0018E31E: ;
    ecx = MEM32(esi + 0x8C4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018E32Au); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_0018E32A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E340
 * Original: 0x0018E340 - 0x0018E383 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E340: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E35A; /* je: equal / zero */

loc_0018E347: ;
    ecx = esi;
    PUSH32(esp, 0x0018E34Eu); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_0018E34E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x0018E357u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0018E351u); } /* indirect call */
    }

loc_0018E357: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E35A: ;
    ecx = MEM32(0x523564);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E381; /* je: equal / zero */

loc_0018E364: ;
    esi = ecx;
    PUSH32(esp, 0x0018E36Bu); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_0018E36B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x0018E374u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0018E36Eu); } /* indirect call */
    }

loc_0018E374: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x523564) = 0;

loc_0018E381: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018E390
 * Original: 0x0018E390 - 0x0018E3C9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E390: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    eax = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = eax + esi + 0x864;
    ecx = edi;
    PUSH32(esp, 0x0018E3ACu); RECOMP_ABI_CALL(0x0018DC40u, sub_0018DC40); /* call 0x0018DC40 */

loc_0018E3AC: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0018E3BDu); RECOMP_ABI_CALL(0x0018DD10u, sub_0018DD10); /* call 0x0018DD10 */

loc_0018E3BD: ;
    POP32(esp, edi);
    MEM32(esi + 0x8B4) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0018E3D0
 * Original: 0x0018E3D0 - 0x0018E582 (434 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E3D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi + 0x110;
    eax = edi + 0xD0;
    MEM32(esi + 0xD8) = ecx;
    ecx = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x3241C8;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xD4) = eax;
    PUSH32(esp, 0x0018E409u); RECOMP_ABI_CALL(0x00194C70u, sub_00194C70); /* call 0x00194C70 */

loc_0018E409: ;
    ebp = MEM32(esp + 0x1C);
    MEM32(esi + 0xDC) = eax;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0018E41Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E418u); } /* indirect call */
    }

loc_0018E41B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi + 0xE0) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0xE4) = edi;
    MEM32(esi + 0xE8) = ebx;
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    edx = esi + 0x138;
    MEM32(esi + 0x11C) = eax;
    MEM32(esi + 0x100) = ebx;
    MEM32(esi + 0x104) = ebx;
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x124) = ebp;
    MEM32(esi + 0x128) = ebx;
    MEM32(esi + 0x12C) = ebx;
    eax = edx;
    ecx = 0x4C;

loc_0018E488: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018E488; /* jne: not equal / not zero */

loc_0018E493: ;
    ecx = esi + 0x398;
    eax = ecx;
    edi = 0x4C;

loc_0018E4A0: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018E4A0; /* jne: not equal / not zero */

loc_0018E4B1: ;
    MEM32(esi + 0x85C) = ecx;
    MEM32(esi + 0x858) = edx;
    MEM32(esi + 0x860) = ebx;
    MEM32(esi + 0x864) = ebx;
    MEM32(esi + 0x868) = ebx;
    MEM32(esi + 0x86C) = ebx;
    MEM8(esi + 0x870) = LO8(ebx);
    eax = esi + 0x864;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM8(eax + 0xC) = LO8(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM8(eax + 0xC) = LO8(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM8(eax + 0xC) = LO8(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM8(eax + 0xC) = LO8(ebx);
    ecx = MEM32(esi + 0xD8);
    edx = MEM32(esi + 0xD4);
    PUSH32(esp, ecx);
    edi = esi + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0018E531u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018E531: ;
    eax = MEM32(esi + 0xE0);
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, eax);
    ebp = esi + 0x50;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0018E549u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018E549: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x90;
    PUSH32(esp, 0x0018E556u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0018E556: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xE000);
    PUSH32(esp, 0x324198);
    MEM32(esi + 0x130) = ebx;
    PUSH32(esp, 0x0018E570u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0018E570: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x128) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0018E590
 * Original: 0x0018E590 - 0x0018E619 (137 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E590: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x3241C8;
    if (CMP_EQ(_fa, _fb)) goto loc_0018E5AE; /* je: equal / zero */

loc_0018E5A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E5ABu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0018E5AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E5AE: ;
    MEM32(esi + 0x128) = 0;
    ecx = MEM32(0x523564);
    edi = esi + 0x8B4;
    ebx = 5;
    /* nop */

loc_0018E5D0: ;
    esi = MEM32(edi + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E5F3; /* je: equal / zero */

loc_0018E5DA: ;
    ecx = esi;
    PUSH32(esp, 0x0018E5E1u); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_0018E5E1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x0018E5EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E5E4u); } /* indirect call */
    }

loc_0018E5EA: ;
    ecx = MEM32(0x523564);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E5F3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E612; /* je: equal / zero */

loc_0018E5F7: ;
    esi = ecx;
    PUSH32(esp, 0x0018E5FEu); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_0018E5FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x0018E607u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0018E601u); } /* indirect call */
    }

loc_0018E607: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x523564) = ecx;

loc_0018E612: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018E5D0; /* jne: not equal / not zero */

loc_0018E615: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018E620
 * Original: 0x0018E620 - 0x0018E667 (71 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E620(void)
{

loc_0018E620: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0018E639u); RECOMP_ABI_CALL(0x0018E3D0u, sub_0018E3D0); /* call 0x0018E3D0 */

loc_0018E639: ;
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esi + 0x8C4) = eax;
    MEM32(esi) = 0x3241E0;
    MEMF(esi + 0x8C0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x8CC) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0018E670
 * Original: 0x0018E670 - 0x0018E6AD (61 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E670: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x8CC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x3241E0;
    MEM32(esi + 0x8C4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0018E6A4; /* je: equal / zero */

loc_0018E68E: ;
    ecx = edi;
    PUSH32(esp, 0x0018E695u); RECOMP_ABI_CALL(0x001D0BA0u, sub_001D0BA0); /* call 0x001D0BA0 */

loc_0018E695: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x0018E6A1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0018E69Bu); } /* indirect call */
    }

loc_0018E6A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E6A4: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0018E590(); return; /* tail jmp 0x0018E590 */

}

/**
 * sub_0018E6B0
 * Original: 0x0018E6B0 - 0x0018E716 (102 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E6B0: ;
    ecx = MEM32(0x523624);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0018E6CE; /* je: equal / zero */

loc_0018E6BD: ;
    PUSH32(esp, 0x0018E6C2u); RECOMP_ABI_CALL(0x001D2B50u, sub_001D2B50); /* call 0x001D2B50 */

loc_0018E6C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x34);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x0018E6CBu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0018E6C5u); } /* indirect call */
    }

loc_0018E6CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E6CE: ;
    ecx = 0x523624;
    PUSH32(esp, 0x0018E6D8u); RECOMP_ABI_CALL(0x0018E720u, sub_0018E720); /* call 0x0018E720 */

loc_0018E6D8: ;
    ecx = 0x523650;
    PUSH32(esp, 0x0018E6E2u); RECOMP_ABI_CALL(0x001CF8A0u, sub_001CF8A0); /* call 0x001CF8A0 */

loc_0018E6E2: ;
    ecx = 0x523650;
    PUSH32(esp, 0x0018E6ECu); RECOMP_ABI_CALL(0x001CF930u, sub_001CF930); /* call 0x001CF930 */

loc_0018E6EC: ;
    ecx = 0x5236A0;
    PUSH32(esp, 0x0018E6F6u); RECOMP_ABI_CALL(0x001D0AE0u, sub_001D0AE0); /* call 0x001D0AE0 */

loc_0018E6F6: ;
    ecx = 0x5236A0;
    PUSH32(esp, 0x0018E700u); RECOMP_ABI_CALL(0x001D0230u, sub_001D0230); /* call 0x001D0230 */

loc_0018E700: ;
    PUSH32(esp, 0x32416C);
    PUSH32(esp, 0x0018E70Au); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_0018E70A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x5235C0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018E720
 * Original: 0x0018E720 - 0x0018E783 (99 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E720: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x34);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x0018E730u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0018E72Au); } /* indirect call */
    }

loc_0018E730: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E745; /* je: equal / zero */

loc_0018E737: ;
    PUSH32(esp, 0x529D1C);
    ecx = eax;
    PUSH32(esp, 0x0018E743u); RECOMP_ABI_CALL(0x001D2B00u, sub_001D2B00); /* call 0x001D2B00 */

loc_0018E743: ;
    goto loc_0018E747;

loc_0018E745: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018E747: ;
    MEM32(esi) = eax;
    eax = esp + 0xB;
    PUSH32(esp, eax);
    PUSH32(esp, 0x324104);
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x0018E764u); RECOMP_ABI_CALL(0x001C56A0u, sub_001C56A0); /* call 0x001C56A0 */

loc_0018E764: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x18) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x14) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018E790
 * Original: 0x0018E790 - 0x0018E7AE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E790: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018E798u); RECOMP_ABI_CALL(0x0018E590u, sub_0018E590); /* call 0x0018E590 */

loc_0018E798: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E7A8; /* je: equal / zero */

loc_0018E79F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018E7A5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0018E7A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E7A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E7B0
 * Original: 0x0018E7B0 - 0x0018E802 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E7B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x8CC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x3241E0;
    MEM32(esi + 0x8C4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0018E7E4; /* je: equal / zero */

loc_0018E7CE: ;
    ecx = edi;
    PUSH32(esp, 0x0018E7D5u); RECOMP_ABI_CALL(0x001D0BA0u, sub_001D0BA0); /* call 0x001D0BA0 */

loc_0018E7D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x0018E7E1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0018E7DBu); } /* indirect call */
    }

loc_0018E7E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E7E4: ;
    ecx = esi;
    PUSH32(esp, 0x0018E7EBu); RECOMP_ABI_CALL(0x0018E590u, sub_0018E590); /* call 0x0018E590 */

loc_0018E7EB: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E7FB; /* je: equal / zero */

loc_0018E7F2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018E7F8u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0018E7F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E7FB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E810
 * Original: 0x0018E810 - 0x0018E821 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E810: ;
    ecx = MEM32(0x4F7414);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018E820u); RECOMP_ABI_CALL(0x001C33A0u, sub_001C33A0); /* call 0x001C33A0 */

loc_0018E820: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E830
 * Original: 0x0018E830 - 0x0018E841 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E830: ;
    ecx = MEM32(0x4F7414);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018E840u); RECOMP_ABI_CALL(0x001C33A0u, sub_001C33A0); /* call 0x001C33A0 */

loc_0018E840: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E850
 * Original: 0x0018E850 - 0x0018E851 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E850(void)
{

loc_0018E850: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E860
 * Original: 0x0018E860 - 0x0018E861 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E860(void)
{

loc_0018E860: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E870
 * Original: 0x0018E870 - 0x0018E8A2 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E870: ;
    SET_LO8(eax, MEM8(0x523710));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E8A1; /* jne: not equal / not zero */

loc_0018E879: ;
    PUSH32(esp, 0x523700);
    PUSH32(esp, 0x324204);
    PUSH32(esp, 0x0018E888u); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018E888: ;
    PUSH32(esp, 0x5236F0);
    PUSH32(esp, 0x3241F8);
    MEM8(0x523710) = 1;
    PUSH32(esp, 0x0018E89Eu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018E89E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E8A1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E8B0
 * Original: 0x0018E8B0 - 0x0018E8F7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E8B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx + 0x50) = eax;
    edi = MEM32(0x4F7414);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018E8D7; /* jle: less or equal (signed <=) */

loc_0018E8C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018E8D7; /* jg: greater (signed >) */

loc_0018E8CB: ;
    MEM8(esp + 0xC) = 1;
    esi = 3;
    goto loc_0018E8DE;

loc_0018E8D7: ;
    MEM8(esp + 0xC) = 0;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018E8DE: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018E8EAu); RECOMP_ABI_CALL(0x001C33A0u, sub_001C33A0); /* call 0x001C33A0 */

loc_0018E8EA: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0018E8F2u); RECOMP_ABI_CALL(0x001C3400u, sub_001C3400); /* call 0x001C3400 */

loc_0018E8F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E900
 * Original: 0x0018E900 - 0x0018E952 (82 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E900: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = MEM32(esp + 4);
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x4F7414);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018E91Eu); RECOMP_ABI_CALL(0x001C3450u, sub_001C3450); /* call 0x001C3450 */

loc_0018E91E: ;
    SET_LO8(eax, MEM8(0x523710));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E94F; /* jne: not equal / not zero */

loc_0018E927: ;
    PUSH32(esp, 0x523700);
    PUSH32(esp, 0x324204);
    PUSH32(esp, 0x0018E936u); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018E936: ;
    PUSH32(esp, 0x5236F0);
    PUSH32(esp, 0x3241F8);
    MEM8(0x523710) = 1;
    PUSH32(esp, 0x0018E94Cu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018E94C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E94F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E960
 * Original: 0x0018E960 - 0x0018E9B2 (82 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E960: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = MEM32(esp + 4);
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x4F7414);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018E97Eu); RECOMP_ABI_CALL(0x001C34B0u, sub_001C34B0); /* call 0x001C34B0 */

loc_0018E97E: ;
    SET_LO8(eax, MEM8(0x523710));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E9AF; /* jne: not equal / not zero */

loc_0018E987: ;
    PUSH32(esp, 0x523700);
    PUSH32(esp, 0x324204);
    PUSH32(esp, 0x0018E996u); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018E996: ;
    PUSH32(esp, 0x5236F0);
    PUSH32(esp, 0x3241F8);
    MEM8(0x523710) = 1;
    PUSH32(esp, 0x0018E9ACu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018E9AC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E9AF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E9C0
 * Original: 0x0018E9C0 - 0x0018EA07 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E9C0(void)
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

loc_0018E9C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0018E9CCu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0018E9CC: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0018E9D6u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0018E9D6: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x0018E9E2u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0018E9E2: ;
    fp_push(MEMF(edi)); /* fld float */
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, 0x0018E9EDu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0018E9ED: ;
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
 * sub_0018EA10
 * Original: 0x0018EA10 - 0x0018EA43 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EA10(void)
{

loc_0018EA10: ;
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
 * sub_0018EA50
 * Original: 0x0018EA50 - 0x0018EA95 (69 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EA50(void)
{

loc_0018EA50: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0018EAA0
 * Original: 0x0018EAA0 - 0x0018EB7D (221 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EAA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    edx = ZX8(MEM8(eax + 1));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX8(MEM8(eax));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(eax + 2));
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax + 3));
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 8);
    edi = esi + 0x40;
    ecx = edi;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0xC) = edx;
    edx = ZX8(MEM8(eax + 1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 3));
    SET_LO8(ecx, MEM8(eax));
    eax = ZX8(MEM8(eax + 2));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x4F7414);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018EB2Au); RECOMP_ABI_CALL(0x001C3570u, sub_001C3570); /* call 0x001C3570 */

loc_0018EB2A: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x305FE4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x5236F0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x5236F4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x5236F8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x5236FC) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018EB80
 * Original: 0x0018EB80 - 0x0018EC33 (179 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EB80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    edx = ZX8(MEM8(eax));
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax + 1));
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax + 2));
    eax = ZX8(MEM8(eax + 3));
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = ecx + 0x70;
    MEM32(edx) = eax;
    eax = MEM32(esp + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 8);
    MEMF(ecx + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(ecx + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FF460)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0xC);
    MEMF(ecx + 0x88) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(edx + 0xC) = eax;
    MEMF(ecx + 0x8C) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0018EC40
 * Original: 0x0018EC40 - 0x0018EE7B (571 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EC40(void)
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

loc_0018EC40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FEFB4); /* comiss */
    PUSH32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018ED4C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2FEFB4)) */

loc_0018EC57: ;
    xmm1 = XMM_SCALAR(MEMF(0x3727C8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x6C); /* divss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018EC7D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0018EC7A: ;
    xmm0 = xmm2; /* movaps */

loc_0018EC7D: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x40); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x40); /* addss */
    MEMF(esi + 0x40) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x44); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x44); /* addss */
    MEMF(esi + 0x44) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x48); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x48); /* addss */
    MEMF(esi + 0x48) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    MEMF(esi + 0x4C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x54); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x54); /* addss */
    MEMF(esi + 0x54) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x5C); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x5C); /* addss */
    MEMF(esi + 0x5C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x64); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x64); /* addss */
    MEMF(esi + 0x64) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x68); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x68); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x68) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */

loc_0018ED4C: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    PUSH32(esp, 0x0018ED54u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0018ED54: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0018ED5Eu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0018ED5E: ;
    fp_push(MEMF(esi + 0x48)); /* fld float */
    MEM8(esp + 0x11) = LO8(eax);
    PUSH32(esp, 0x0018ED6Au); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0018ED6A: ;
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    MEM8(esp + 0x12) = LO8(eax);
    PUSH32(esp, 0x0018ED76u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0018ED76: ;
    edx = ZX8(MEM8(esp + 0x11));
    edi = MEM32(0x4F7414);
    eax = ZX8(LO8(eax));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX8(LO8(ebx));
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(esp + 0x12));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018EDA6u); RECOMP_ABI_CALL(0x001C3570u, sub_001C3570); /* call 0x001C3570 */

loc_0018EDA6: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x305FE4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x5236F0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x5236F4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x5236F8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x5236FC) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0018EDFDu); RECOMP_ABI_CALL(0x001C3450u, sub_001C3450); /* call 0x001C3450 */

loc_0018EDFD: ;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018EE08u); RECOMP_ABI_CALL(0x001C34B0u, sub_001C34B0); /* call 0x001C34B0 */

loc_0018EE08: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x54)); /* movss */
    SET_LO8(eax, MEM8(0x523710));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(0x523700) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    MEMF(0x523704) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x68); /* subss */
    POP32(esp, edi);
    MEMF(0x523708) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    POP32(esp, esi);
    MEMF(0x52370C) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0018EE78; /* jne: not equal / not zero */

loc_0018EE50: ;
    PUSH32(esp, 0x523700);
    PUSH32(esp, 0x324204);
    PUSH32(esp, 0x0018EE5Fu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018EE5F: ;
    PUSH32(esp, 0x5236F0);
    PUSH32(esp, 0x3241F8);
    MEM8(0x523710) = 1;
    PUSH32(esp, 0x0018EE75u); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018EE75: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018EE78: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018EE80
 * Original: 0x0018EE80 - 0x0018EEB8 (56 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EE80: ;
    PUSH32(esp, 0x523740);
    PUSH32(esp, 0x324250);
    PUSH32(esp, 0x0018EE8Fu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018EE8F: ;
    PUSH32(esp, 0x5237B0);
    PUSH32(esp, 0x324238);
    PUSH32(esp, 0x0018EE9Eu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018EE9E: ;
    PUSH32(esp, 0x523720);
    PUSH32(esp, 0x324220);
    PUSH32(esp, 0x0018EEADu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0018EEAD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x523730) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0018EEC0
 * Original: 0x0018EEC0 - 0x0018EED5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EEC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EEC0: ;
    PUSH32(esp, 0x324250);
    PUSH32(esp, 0x0018EECAu); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_0018EECA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x523730) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0018EEE0
 * Original: 0x0018EEE0 - 0x0018EEE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EEE0(void)
{

loc_0018EEE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018EEF0
 * Original: 0x0018EEF0 - 0x0018EEF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EEF0(void)
{

loc_0018EEF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018EF00
 * Original: 0x0018EF00 - 0x0018EF19 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018EF00: ;
    SET_LO8(eax, MEM8(ecx + 0xB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018EF16; /* jne: not equal / not zero */

loc_0018EF0A: ;
    MEM8(ecx + 0xB8) = 1;
    g_seh_ebp = ebp; sub_00131F10(); return; /* tail jmp 0x00131F10 */

loc_0018EF16: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018EF20
 * Original: 0x0018EF20 - 0x0018EF26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EF20(void)
{

loc_0018EF20: ;
    eax = 0x324210;
    esp += 4; return; /* ret */

}

/**
 * sub_0018EF30
 * Original: 0x0018EF30 - 0x0018EF42 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018EF30: ;
    MEM32(ecx) = 0x324270;
    MEM32(ecx + 8) = 0x324264;
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_0018EF50
 * Original: 0x0018EF50 - 0x0018F041 (241 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EF50(void)
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

loc_0018EF50: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    MEM32(esi + 0xFC) = eax;
    MEM32(esi + 0x100) = eax;
    eax = MEM32(esi + 0xF0);
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x104) = 1;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018F03F; /* jle: less or equal (signed <=) */

loc_0018EF94: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018F015; /* jle: less or equal (signed <=) */

loc_0018EF99: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F03F; /* jne: not equal / not zero */

loc_0018EFA2: ;
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018EFAFu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018EFAF: ;
    MEMF(esi + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0xF0);
    eax = MEM32(eax + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0018EFCBu); RECOMP_ABI_CALL(0x000E7000u, sub_000E7000); /* call 0x000E7000 */

loc_0018EFCB: ;
    ecx = MEM32(esi + 0xF0);
    MEM32(esi + 0xFC) = eax;
    eax = MEM32(ecx + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0018EFE7u); RECOMP_ABI_CALL(0x000E7000u, sub_000E7000); /* call 0x000E7000 */

loc_0018EFE7: ;
    ecx = MEM32(esi + 0xFC);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x100) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0018F03F; /* jne: not equal / not zero */

loc_0018EFFA: ;
    edx = MEM32(esi + 0xF0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x100) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x24) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018F03F; /* jl: less (signed <) */

loc_0018F00C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x100) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018F015: ;
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018F022u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018F022: ;
    MEMF(esi + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xFC) = 0;
    MEM32(esi + 0x100) = 1;

loc_0018F03F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0018F050
 * Original: 0x0018F050 - 0x0018F062 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F050: ;
    MEM32(ecx) = 0x324270;
    MEM32(ecx + 8) = 0x324264;
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_0018F070
 * Original: 0x0018F070 - 0x0018F0BF (79 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F070(void)
{

loc_0018F070: ;
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0018F0C0
 * Original: 0x0018F0C0 - 0x0018F2CE (526 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F0C0(void)
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

loc_0018F0C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    if ((_fa == 0)) goto loc_0018F1CF; /* je: equal / zero */

loc_0018F0D6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0018F155; /* je: equal / zero */

loc_0018F0D9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018F2C8; /* jne: not equal / not zero */

loc_0018F0E0: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF460); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0018F11B; /* ja: above (unsigned >) (xmm4.f[0] vs xmm1.f[0]) */

loc_0018F115: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_0018F11B: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0018F130; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0018F12A: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0018F130: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018F13Fu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018F13F: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x20)); /* fdiv dword ptr [esp + 0x20] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    goto loc_0018F217;

loc_0018F155: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018F195; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_0018F162: ;
    edx = MEM32(ebp);
    MEM32(edi) = edx;
    eax = MEM32(ebp + 4);
    MEM32(edi + 4) = eax;
    ecx = MEM32(ebp + 8);
    MEM32(edi + 8) = ecx;
    edx = MEM32(ebp + 0xC);
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ebx);
    MEM32(esi) = eax;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(esi + 8) = edx;
    eax = MEM32(ebx + 0xC);
    POP32(esp, ebp);
    MEM32(esi + 0xC) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018F195: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x24);
    MEM32(edi + 0xC) = edx;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    POP32(esp, ebp);
    MEM32(esi + 0xC) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018F1CF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018F213; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0018F1E0: ;
    eax = MEM32(ebp);
    MEM32(edi) = eax;
    ecx = MEM32(ebp + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(ebp + 8);
    MEM32(edi + 8) = edx;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0xC) = eax;
    ecx = MEM32(ebx);
    MEM32(esi) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(ebx + 8);
    MEM32(esi + 8) = eax;
    ecx = MEM32(ebx + 0xC);
    POP32(esp, ebp);
    MEM32(esi + 0xC) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018F213: ;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */

loc_0018F217: ;
    xmm3 = XMM_SCALAR(MEMF(ebp)); /* movss */
    eax = MEM32(esp + 0x1C);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(edi) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(edi + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(esp + 0x24);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(edi + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */

loc_0018F2C8: ;
    POP32(esp, ebp);
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
 * sub_0018F2D0
 * Original: 0x0018F2D0 - 0x0018F2D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F2D0(void)
{

loc_0018F2D0: ;
    eax = 0x523734;
    esp += 4; return; /* ret */

}

/**
 * sub_0018F2E0
 * Original: 0x0018F2E0 - 0x0018F2E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F2E0(void)
{

loc_0018F2E0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0018F2F0
 * Original: 0x0018F2F0 - 0x0018F30A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F2F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F2F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018F2FBu); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_0018F2FB: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018F306u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F304u); } /* indirect call */
    }

loc_0018F306: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F310
 * Original: 0x0018F310 - 0x0018F31A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F310: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018F316u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0018F316: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018F320
 * Original: 0x0018F320 - 0x0018F5AB (651 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0018F320: ;
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = ecx;
    MEM32(eax + 4) = edx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 0x24) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = eax + 0x28;
    edx = ecx;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = eax + 0x78;
    edx = esi;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    edi = MEM32(edx);
    ecx = eax + 0x38;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x44);
    edi = MEM32(edx);
    ecx = eax + 0x48;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x4C);
    edi = MEM32(edx);
    ecx = eax + 0x58;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x54);
    edi = MEM32(edx);
    ecx = eax + 0x68;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    MEM32(esi) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esi + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esi + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(esp + 0x40);
    esi = MEM32(ecx);
    edx = eax + 0x88;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x48);
    esi = MEM32(ecx);
    edx = eax + 0x98;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x50);
    esi = MEM32(ecx);
    edx = eax + 0xA8;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x58);
    esi = MEM32(ecx);
    edx = eax + 0xB8;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    POP32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018F59D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0018F597: ;
    edx = MEM32(eax + 0x10);
    MEM32(eax + 0xC) = edx;

loc_0018F59D: ;
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018F5A8; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_0018F5A2: ;
    ecx = MEM32(eax + 0x1C);
    MEM32(eax + 0x18) = ecx;

loc_0018F5A8: ;
    esp += 84; return; /* ret 80 */

}

/**
 * sub_0018F5B0
 * Original: 0x0018F5B0 - 0x0018F82B (635 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F5B0(void)
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

loc_0018F5B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(0x523720) = xmm0.f[0]; /* movss */
    MEMF(0x523724) = xmm0.f[0]; /* movss */
    MEMF(0x523728) = xmm0.f[0]; /* movss */
    MEMF(0x52372C) = xmm0.f[0]; /* movss */
    ecx = 0x5237B0;
    if (CMP_EQ(_fa, _fb)) goto loc_0018F5F0; /* je: equal / zero */

loc_0018F5ED: ;
    PUSH32(esp, eax);
    goto loc_0018F5F5;

loc_0018F5F0: ;
    PUSH32(esp, 0x378D78);

loc_0018F5F5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F5FAu); RECOMP_ABI_CALL(0x001D30D0u, sub_001D30D0); /* call 0x001D30D0 */

loc_0018F5FA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F824; /* je: equal / zero */

loc_0018F604: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F824; /* je: equal / zero */

loc_0018F60F: ;
    eax = MEM32(eax + 0x100);
    edi = MEM32(eax);
    ecx = MEM32(eax + 8);
    edx = edi;
    eax = edx + ecx * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F824; /* je: equal / zero */

loc_0018F627: ;
    ebx = MEM32(ebp + 0xC);
    /* nop */

loc_0018F630: ;
    esi = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xDC)); /* movss */
    PUSH32(esp, ebx);
    ecx = esp + 0x54;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F66Bu); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_0018F66B: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x10); /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018F808; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(esp + 0x18)) */

loc_0018F68F: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    xmm5 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx)); /* fsub dword ptr [ebx] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 4)); /* fsub dword ptr [ebx + 4] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 8)); /* fsub dword ptr [ebx + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0018F711; /* jnp: not parity */

loc_0018F6F5: ;
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    goto loc_0018F717;

loc_0018F711: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */

loc_0018F717: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x10)); /* fsub dword ptr [ebp + 0x10] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0018F74E; /* jbe: below or equal (unsigned <=) */

loc_0018F734: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    goto loc_0018F751;

loc_0018F74E: ;
    xmm1 = xmm5; /* movaps */

loc_0018F751: ;
    xmm0 = XMM_SCALAR(MEMF(0x378E10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x305FE4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xBC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC0)); /* movss */
    edx = MEM32(esp + 0x30);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC4)); /* movss */
    eax = MEM32(esp + 0x44);
    ecx = esp;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x48);
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x4C);
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x60) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x60);
    ecx = esp;
    MEM32(ecx) = edx;
    MEMF(esp + 0x64) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x64);
    MEM32(ecx + 4) = eax;
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x68);
    MEMF(esp + 0x6C) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x6C);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = 0x5237B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F808u); RECOMP_ABI_CALL(0x001D3790u, sub_001D3790); /* call 0x001D3790 */

loc_0018F808: ;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ecx + 0x100);
    edx = MEM32(eax + 8);
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + edx * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F630; /* jne: not equal / not zero */

loc_0018F824: ;
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
 * sub_0018F830
 * Original: 0x0018F830 - 0x0018F89C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0018F896; /* ja: above (unsigned >) */

loc_0018F842: ;
    eax = ZX8(MEM8(eax + 0x18F8A8));
    { uint32_t _jt = MEM32(eax * 4 + 0x18F89C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0018F850u) goto loc_0018F850;
    if (_jt == 0x0018F88Cu) goto loc_0018F88C;
    if (_jt == 0x0018F896u) goto loc_0018F896;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018F850: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    edx = MEM32(ecx + -8);
    XMM_STORE(esp, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0018F886u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F880u); } /* indirect call */
    }

loc_0018F886: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0018F88C: ;
    edx = MEM32(ecx + -8);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018F896u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F894u); } /* indirect call */
    }

loc_0018F896: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018F8B0
 * Original: 0x0018F8B0 - 0x0018F8FF (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F8B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F8F8; /* je: equal / zero */

loc_0018F8BC: ;
    eax = MEM32(esi);
    ecx = edi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x0018F8CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F8C4u); } /* indirect call */
    }

loc_0018F8CA: ;
    edx = edi + 0xBC;
    ecx = MEM32(edx);
    eax = esi + 0xBC;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(edi + 0xDC);
    MEM32(esi + 0xDC) = eax;

loc_0018F8F8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F900
 * Original: 0x0018F900 - 0x0018F9C0 (192 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 4); /* mulss */
    PUSH32(esp, esi);
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    esi = ecx;
    edx = MEM32(esi);
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    PUSH32(esp, eax);
    eax = esp + 0x28;
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x0018F9AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F9A9u); } /* indirect call */
    }

loc_0018F9AF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x0018F9B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F9B3u); } /* indirect call */
    }

loc_0018F9B9: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F9C0
 * Original: 0x0018F9C0 - 0x0018FE49 (1161 bytes, 280 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F9C0(void)
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

loc_0018F9C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018F9D7u); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_0018F9D7: ;
    eax = MEM32(ebx + 0xF0);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_0018FD07; /* ja: above (unsigned >) */

loc_0018F9FB: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x18FE4C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0018FA02u) goto loc_0018FA02;
    if (_jt == 0x0018FA45u) goto loc_0018FA45;
    if (_jt == 0x0018FAC6u) goto loc_0018FAC6;
    if (_jt == 0x0018FB50u) goto loc_0018FB50;
    if (_jt == 0x0018FC0Du) goto loc_0018FC0D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018FA02: ;
    ecx = eax + 0x28;
    esi = MEM32(ecx);
    edx = ebx + 0xBC;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = ebx + 0xCC;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    goto loc_0018FD07;

loc_0018FA45: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xF4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xF8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018FC8F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebx + 0xF8)) */

loc_0018FA5A: ;
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ebx + 0x100);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018FA79; /* jne: not equal / not zero */

loc_0018FA68: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018FA70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FA6Eu); } /* indirect call */
    }

loc_0018FA70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0018FA79: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xF8); /* subss */
    MEMF(ebx + 0xF4) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FA9Eu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018FA9E: ;
    MEMF(ebx + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 0xFC);
    eax = MEM32(ebx + 0x100);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0xFC) = ecx;
    MEM32(ebx + 0x100) = eax;
    goto loc_0018FC8F;

loc_0018FAC6: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xF4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xF8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018FC95; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebx + 0xF8)) */

loc_0018FADB: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xF8); /* subss */
    MEMF(ebx + 0xF4) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FAF8u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018FAF8: ;
    MEMF(ebx + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(ebx + 0xFC);
    eax = MEM32(ebx + 0xF0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0xFC) = esi;
    edx = MEM32(eax + 0x24);
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018FB27; /* jl: less (signed <) */

loc_0018FB1D: ;
    MEM32(ebx + 0xFC) = 0;

loc_0018FB27: ;
    esi = MEM32(ebx + 0x100);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x100) = esi;
    edx = MEM32(eax + 0x24);
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018FC95; /* jl: less (signed <) */

loc_0018FB41: ;
    MEM32(ebx + 0x100) = 0;
    goto loc_0018FC95;

loc_0018FB50: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xF4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xF8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018FC8F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebx + 0xF8)) */

loc_0018FB65: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xF8); /* subss */
    MEMF(ebx + 0xF4) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FB82u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018FB82: ;
    MEMF(ebx + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(ebx + 0x104));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018FBD7; /* je: equal / zero */

loc_0018FB95: ;
    edi = MEM32(ebx + 0xFC);
    esi = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0xF0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0xFC) = edi;
    MEM32(ebx + 0x100) = esi;
    eax = MEM32(edx + 0x24);
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018FC8F; /* jl: less (signed <) */

loc_0018FBC2: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebx + 0x104) = 0;
    MEM32(ebx + 0x100) = eax;
    goto loc_0018FC8F;

loc_0018FBD7: ;
    ecx = MEM32(ebx + 0xFC);
    eax = MEM32(ebx + 0x100);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0xFC) = ecx;
    MEM32(ebx + 0x100) = eax;
    if ((_fas >= 0)) goto loc_0018FC8F; /* jns: not sign (positive) */

loc_0018FBF7: ;
    eax = 1;
    MEM8(ebx + 0x104) = LO8(eax);
    MEM32(ebx + 0x100) = eax;
    goto loc_0018FC8F;

loc_0018FC0D: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xF4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xF8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018FC8F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebx + 0xF8)) */

loc_0018FC1E: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xF8); /* subss */
    MEMF(ebx + 0xF4) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FC3Bu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0018FC3B: ;
    MEMF(ebx + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 0x100);
    edx = MEM32(ebx + 0xF0);
    MEM32(ebx + 0xFC) = ecx;
    eax = MEM32(edx + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FC63u); RECOMP_ABI_CALL(0x000E7000u, sub_000E7000); /* call 0x000E7000 */

loc_0018FC63: ;
    ecx = MEM32(ebx + 0xFC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebx + 0x100) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0018FC8F; /* jne: not equal / not zero */

loc_0018FC76: ;
    edx = MEM32(ebx + 0xF0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x100) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x24) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018FC8F; /* jl: less (signed <) */

loc_0018FC88: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0x100) = ecx;

loc_0018FC8F: ;
    eax = MEM32(ebx + 0xF0);

loc_0018FC95: ;
    edx = MEM32(ebx + 0xFC);
    ecx = MEM32(ebx + 0x100);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 0x14);
    MEM32(esp + 0x18) = edx;
    edx = ecx + 0x78;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x78;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0xF8);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0xF4);
    PUSH32(esp, edx);
    edi = ebx + 0xBC;
    esi = ebx + 0xCC;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FCEEu); RECOMP_ABI_CALL(0x0018F0C0u, sub_0018F0C0); /* call 0x0018F0C0 */

loc_0018FCEE: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ebx + 0xF4) = xmm0.f[0]; /* movss */

loc_0018FD07: ;
    eax = MEM32(0x3E8CF8);
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    eax = MEM32(ebx + 0xF0);
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018FDA9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0018FD6D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xD4) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0018FDA9: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018FE40; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0018FDB2: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018FE40; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0018FDBB: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xBC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ebx + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ebx + 0xC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ebx + 0xC4) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0xCC); /* mulss */
    MEMF(ebx + 0xCC) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0xD0); /* mulss */
    MEMF(ebx + 0xD0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xD4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ebx + 0xD4) = xmm0.f[0]; /* movss */

loc_0018FE40: ;
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
 * sub_0018FE60
 * Original: 0x0018FE60 - 0x0018FF13 (179 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0018FE60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x68)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0xF0);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm7.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018FEDB; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm0.f[0]) */

loc_0018FED3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0018FEDB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xDC)); /* movss */
    PUSH32(esp, edx);
    ecx = esp + 4;
    MEM32(esp + 4) = 0x302260;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018FF0Du); RECOMP_ABI_CALL(0x001814A0u, sub_001814A0); /* call 0x001814A0 */

loc_0018FF0D: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018FF20
 * Original: 0x0018FF20 - 0x0018FFAA (138 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FF20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018FF28u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_0018FF28: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x324270;
    MEM32(esi + 8) = 0x324264;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM8(esi + 0xB8) = LO8(eax);
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xE0) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018FFB0
 * Original: 0x0018FFB0 - 0x00190038 (136 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FFB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FFB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0018FFBAu); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_0018FFBA: ;
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x324270;
    MEM32(esi + 8) = 0x324264;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xB0) = ecx;
    MEM32(esi + 0xB4) = ecx;
    edx = eax + 0xBC;
    ebx = MEM32(edx);
    edi = esi + 0xBC;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(edi + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(edi + 0xC) = edx;
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD8) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 0xDC);
    MEM32(esi + 0xDC) = eax;
    POP32(esp, edi);
    MEM8(esi + 0xB8) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190040
 * Original: 0x00190040 - 0x00190072 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190040(void)
{

loc_00190040: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00190051u); RECOMP_ABI_CALL(0x0018FF20u, sub_0018FF20); /* call 0x0018FF20 */

loc_00190051: ;
    ecx = esi;
    MEM32(esi) = 0x3243D8;
    MEM32(esi + 8) = 0x3243CC;
    MEM32(esi + 0xF0) = edi;
    PUSH32(esp, 0x0019006Bu); RECOMP_ABI_CALL(0x0018EF50u, sub_0018EF50); /* call 0x0018EF50 */

loc_0019006B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190080
 * Original: 0x00190080 - 0x001900C4 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190080: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = 0x3243C4;
    if (CMP_EQ(_fa, _fb)) goto loc_001900B1; /* je: equal / zero */

loc_0019009B: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001900ABu); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_001900AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001900B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001900BEu); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_001900BE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001900D0
 * Original: 0x001900D0 - 0x00190112 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001900D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001900D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x523734);
    edx = MEM32(ecx + 4);
    MEM32(esp) = 0x3243C4;
    MEM32(esp + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00190101; /* je: equal / zero */

loc_001900ED: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001900FDu); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_001900FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00190101: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019010Eu); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_0019010E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00190120
 * Original: 0x00190120 - 0x0019020F (239 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190120: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    ecx = eax + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00190139; /* je: equal / zero */

loc_00190132: ;
    _fb = (uint32_t)(0xFFFFFEF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFEF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0019013B;

loc_00190139: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0019013B: ;
    eax = MEM32(eax + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019014D; /* je: equal / zero */

loc_00190145: ;
    esi = eax + -272;
    goto loc_00190150;

loc_0019014D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00190150: ;
    eax = MEM32(ebp);
    edx = eax + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190161; /* je: equal / zero */

loc_0019015A: ;
    _fb = (uint32_t)(0xFFFFFEF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFEF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00190163;

loc_00190161: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190163: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001901CF; /* je: equal / zero */

loc_00190167: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019016Du); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_0019016D: ;
    SET_LO8(eax, MEM8(esi + 0xB8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001901BD; /* jne: not equal / not zero */

loc_0019017A: ;
    eax = MEM32(esi + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0019018F; /* je: equal / zero */

loc_00190187: ;
    edi = eax + -272;
    goto loc_00190191;

loc_0019018F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190191: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x110;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0x3243C4;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x001901B1u); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_001901B1: ;
    MEM32(esp + 0xC) = 0x3027A0;
    esi = edi;
    goto loc_00190150;

loc_001901BD: ;
    esi = MEM32(esi + 0x114);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019014D; /* je: equal / zero */

loc_001901C7: ;
    _fb = (uint32_t)(0xFFFFFEF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFEF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00190150;

loc_001901CF: ;
    ecx = MEM32(ebp);
    PUSH32(esp, 0x001901D7u); RECOMP_ABI_CALL(0x00190ED0u, sub_00190ED0); /* call 0x00190ED0 */

loc_001901D7: ;
    esi = MEM32(ebp + 4);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190208; /* je: equal / zero */

loc_001901E1: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001901EEu); RECOMP_ABI_CALL(0x00190F30u, sub_00190F30); /* call 0x00190F30 */

loc_001901EE: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    edx = MEM32(esi);
    MEM32(edx + 4) = 0;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = 0;

loc_00190208: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00190210
 * Original: 0x00190210 - 0x001902E3 (211 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190210: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x3245D4);
    ebp = ecx;
    PUSH32(esp, 0x00190225u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00190225: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190258; /* je: equal / zero */

loc_0019022E: ;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    eax = esi + 8;
    MEM32(esi) = 0;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x120);
    ecx = edi;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    PUSH32(esp, 0x0019024Fu); RECOMP_ABI_CALL(0x001565D0u, sub_001565D0); /* call 0x001565D0 */

loc_0019024F: ;
    MEM32(edi) = 0x30FE98;
    POP32(esp, edi);
    goto loc_0019025A;

loc_00190258: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0019025A: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3245AC);
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0019026Eu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0019026E: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001902AB; /* je: equal / zero */

loc_00190277: ;
    PUSH32(esp, 0xDC);
    MEM32(esi) = 0;
    PUSH32(esp, 0x00190287u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00190287: ;
    MEM32(esi) = eax;
    MEM32(esi + 4) = 0;
    MEM8(eax) = 0;
    eax = MEM32(esi);
    MEM32(eax + 4) = 0;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = eax;
    goto loc_001902AD;

loc_001902AB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001902AD: ;
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0x001902B5u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001902B5: ;
    eax = MEM32(eax + 0x1F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001902D4; /* jle: less or equal (signed <=) */

loc_001902C2: ;
    PUSH32(esp, 0x324530);
    PUSH32(esp, 0x001902CCu); RECOMP_ABI_CALL(0x002BF339u, sub_002BF339); /* call 0x002BF339 */

loc_001902CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x80;

loc_001902D4: ;
    ecx = MEM32(ebp);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001902E0u); RECOMP_ABI_CALL(0x00156730u, sub_00156730); /* call 0x00156730 */

loc_001902E0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001902F0
 * Original: 0x001902F0 - 0x0019032F (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001902F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001902F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    ecx = 0x32;
    edi = esp + 0x18;
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
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190327u); RECOMP_ABI_CALL(0x00191070u, sub_00191070); /* call 0x00191070 */

loc_00190327: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00190330
 * Original: 0x00190330 - 0x001907E9 (1209 bytes, 283 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190330(void)
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

loc_00190330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x254) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x254;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190349u); RECOMP_ABI_CALL(0x00039DA0u, sub_00039DA0); /* call 0x00039DA0 */

loc_00190349: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019034Fu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0019034F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + 8;
    PUSH32(esp, 0x787387E0);
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190363u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190363: ;
    PUSH32(esp, 0x15AE630B);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190373u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190373: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0x819736F);
    ecx = esi;
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019039Bu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0019039B: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x4DE54332);
    ecx = esi;
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001903C0u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001903C0: ;
    PUSH32(esp, 0x2038A7D9);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001903D0u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001903D0: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0x3D8FB7BD);
    ecx = esi;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001903F2u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001903F2: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xCA535BF0u);
    ecx = esi;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190411u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190411: ;
    PUSH32(esp, 0xA78EBF1Bu);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190421u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190421: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0xBA39AF7Fu);
    ecx = esi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190443u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190443: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x50E0738A);
    ecx = esi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190462u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190462: ;
    PUSH32(esp, 0x3D3D9761);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190472u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190472: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0x208A8705);
    ecx = esi;
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190494u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190494: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xF7337240u);
    ecx = esi;
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001904B3u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001904B3: ;
    PUSH32(esp, 0x9AEE96ABu);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001904C3u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001904C3: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0x875986CFu);
    ecx = esi;
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001904EBu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001904EB: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x9BBCA02Fu);
    ecx = esi;
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190510u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190510: ;
    PUSH32(esp, 0xF66144C4u);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190520u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190520: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0xEBD654A0u);
    ecx = esi;
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190548u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190548: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xB0930890u);
    ecx = esi;
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019056Du); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0019056D: ;
    PUSH32(esp, 0xDD4EEC7Bu);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019057Du); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0019057D: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0xC0F9FC1Fu);
    ecx = esi;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019059Fu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0019059F: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x1D28D281);
    ecx = esi;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001905BEu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001905BE: ;
    PUSH32(esp, 0x70F5366A);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001905CEu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001905CE: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0x6D42260E);
    ecx = esi;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001905F0u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001905F0: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x8DF32120u);
    ecx = esi;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019060Fu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0019060F: ;
    PUSH32(esp, 0xE02EC5CBu);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019061Fu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0019061F: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0xFD99D5AFu);
    ecx = esi;
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190644u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190644: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xD6740124u);
    ecx = esi;
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190669u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190669: ;
    PUSH32(esp, 0xBBA9E5CFu);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190679u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190679: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    PUSH32(esp, 0xA61EF5ABu);
    ecx = esi;
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001906A1u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001906A1: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x4126C902);
    ecx = esi;
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001906C6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001906C6: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x103471E1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001906D6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001906D6: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2C394EB8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001906E6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001906E6: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xDEA5393Du);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001906F6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001906F6: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xE89AB58Fu);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190706u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00190706: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3CD06B6C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190716u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00190716: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 0xBC;
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    edx = esp + 0x9C;
    PUSH32(esp, edx);
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6782BABD);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190767u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190767: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x49D17678);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190783u); RECOMP_ABI_CALL(0x0003A890u, sub_0003A890); /* call 0x0003A890 */

loc_00190783: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2CECF817);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001907A1u); RECOMP_ABI_CALL(0x0003A890u, sub_0003A890); /* call 0x0003A890 */

loc_001907A1: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1E8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001907AEu); RECOMP_ABI_CALL(0x0018F320u, sub_0018F320); /* call 0x0018F320 */

loc_001907AE: ;
    MEM32(esp + 0xCC) = ebx;
    ecx = 0x32;
    esi = esp + 0x198;
    edi = esp + 0xD0;
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
    ecx = esp + 0xCC;
    PUSH32(esp, ecx);
    ecx = MEM32(0x523738);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001907E2u); RECOMP_ABI_CALL(0x00191070u, sub_00191070); /* call 0x00191070 */

loc_001907E2: ;
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
 * sub_001907F0
 * Original: 0x001907F0 - 0x00190B19 (809 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001907F0(void)
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

loc_001907F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x244) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x244;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFE11D138u);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190811u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_00190811: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190817u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00190817: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8DECEA92u);
    ecx = esi;
    edi = eax;
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001908DFu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001908DF: ;
    PUSH32(esp, 0xE422CD1Du);
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001908EDu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001908ED: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    PUSH32(esp, 0x80297B4Eu);
    ecx = esi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019090Du); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0019090D: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x8DECEA92u);
    ecx = esi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019092Cu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0019092C: ;
    PUSH32(esp, 0xE422CD1Du);
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019093Au); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0019093A: ;
    xmm0 = XMM_SCALAR(MEMF(0x300764)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, 0x80297B4Eu);
    ecx = esi;
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019096Au); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0019096A: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x300764); /* mulss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xBC04F00Fu);
    ecx = esi;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190991u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190991: ;
    ebx = eax;
    PUSH32(esp, 0xA382B7CDu);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019099Fu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0019099F: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    PUSH32(esp, 0x6BD09E0);
    ecx = esi;
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001909BFu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001909BF: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xBC04F00Fu);
    ecx = esi;
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001909DEu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001909DE: ;
    PUSH32(esp, 0xA382B7CDu);
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001909ECu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001909EC: ;
    xmm0 = XMM_SCALAR(MEMF(0x300764)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, 0x6BD09E0);
    ecx = esi;
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190A22u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00190A22: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x300764); /* mulss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x9344CFEBu);
    ecx = esi;
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190A4Fu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00190A4F: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3CD06B6C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190A5Fu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00190A5F: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0xB4;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9344CFEBu);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190AB4u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00190AB4: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esp + 0x1D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190ADEu); RECOMP_ABI_CALL(0x0018F320u, sub_0018F320); /* call 0x0018F320 */

loc_00190ADE: ;
    MEM32(esp + 0xBC) = edi;
    ecx = 0x32;
    esi = esp + 0x188;
    edi = esp + 0xC0;
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
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x523738);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00190B12u); RECOMP_ABI_CALL(0x00191070u, sub_00191070); /* call 0x00191070 */

loc_00190B12: ;
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
 * sub_00190B20
 * Original: 0x00190B20 - 0x00190C69 (329 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190B20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    ecx = eax + 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00190B3B; /* je: equal / zero */

loc_00190B34: ;
    _fb = (uint32_t)(0xFFFFFEF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFEF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00190B3D;

loc_00190B3B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190B3D: ;
    eax = MEM32(eax + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190B4F; /* je: equal / zero */

loc_00190B47: ;
    esi = eax + -272;
    goto loc_00190B51;

loc_00190B4F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190B51: ;
    PUSH32(esp, edi);

loc_00190B52: ;
    eax = MEM32(ebp);
    edx = eax + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190B63; /* je: equal / zero */

loc_00190B5C: ;
    _fb = (uint32_t)(0xFFFFFEF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFEF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00190B65;

loc_00190B63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190B65: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190BD8; /* je: equal / zero */

loc_00190B69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190B6Fu); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_00190B6F: ;
    SET_LO8(eax, MEM8(esi + 0xB8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190BBF; /* jne: not equal / not zero */

loc_00190B7C: ;
    eax = MEM32(esi + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = MEM32(ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00190B91; /* je: equal / zero */

loc_00190B89: ;
    edi = eax + -272;
    goto loc_00190B93;

loc_00190B91: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190B93: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x110;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 0x3243C4;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00190BB3u); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_00190BB3: ;
    MEM32(esp + 0x10) = 0x3027A0;
    esi = edi;
    goto loc_00190B52;

loc_00190BBF: ;
    esi = MEM32(esi + 0x114);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190BD1; /* je: equal / zero */

loc_00190BC9: ;
    _fb = (uint32_t)(0xFFFFFEF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFEF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00190B52;

loc_00190BD1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00190B52;

loc_00190BD8: ;
    esi = MEM32(ebp + 4);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00190C00; /* je: equal / zero */

loc_00190BE1: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00190BEEu); RECOMP_ABI_CALL(0x00190F30u, sub_00190F30); /* call 0x00190F30 */

loc_00190BEE: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    edx = MEM32(esi);
    MEM32(edx + 4) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = ebx;

loc_00190C00: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190C1F; /* je: equal / zero */

loc_00190C07: ;
    ecx = esi;
    PUSH32(esp, 0x00190C0Eu); RECOMP_ABI_CALL(0x00190ED0u, sub_00190ED0); /* call 0x00190ED0 */

loc_00190C0E: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x00190C16u); RECOMP_ABI_CALL(0x00156700u, sub_00156700); /* call 0x00156700 */

loc_00190C16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190C1Cu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00190C1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00190C1F: ;
    esi = MEM32(ebp + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190C62; /* je: equal / zero */

loc_00190C26: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190C4A; /* je: equal / zero */

loc_00190C2B: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00190C38u); RECOMP_ABI_CALL(0x00190F30u, sub_00190F30); /* call 0x00190F30 */

loc_00190C38: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    edx = MEM32(esi);
    MEM32(edx + 4) = ebx;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = ebx;

loc_00190C4A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190C59; /* je: equal / zero */

loc_00190C50: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00190C56u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00190C56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00190C59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190C5Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00190C5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00190C62: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00190C70
 * Original: 0x00190C70 - 0x00190D17 (167 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190C70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00190C89u); RECOMP_ABI_CALL(0x00067EC0u, sub_00067EC0); /* call 0x00067EC0 */

loc_00190C89: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190D0F; /* je: equal / zero */

loc_00190C91: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 4);
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00190D0F; /* je: equal / zero */

loc_00190C9E: ;
    eax = ecx + 0x14;
    ecx = esi + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190CB0; /* je: equal / zero */

loc_00190CA8: ;
    edi = esi + -264;
    goto loc_00190CB2;

loc_00190CB0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190CB2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00190CBAu); RECOMP_ABI_CALL(0x00191130u, sub_00191130); /* call 0x00191130 */

loc_00190CBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190CC6; /* je: equal / zero */

loc_00190CBE: ;
    ecx = eax + 0x110;
    goto loc_00190CC8;

loc_00190CC6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190CC8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190CD4; /* je: equal / zero */

loc_00190CCC: ;
    eax = edi + 0x110;
    goto loc_00190CD6;

loc_00190CD4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190CD6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00190CDFu); RECOMP_ABI_CALL(0x001568B0u, sub_001568B0); /* call 0x001568B0 */

loc_00190CDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190CEB; /* je: equal / zero */

loc_00190CE3: ;
    esi = eax + -272;
    goto loc_00190CED;

loc_00190CEB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190CED: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190CF5u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_00190CF5: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00190D07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190D01u); } /* indirect call */
    }

loc_00190D07: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00190D0F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00190D20
 * Original: 0x00190D20 - 0x00190DA6 (134 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190D20: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00190DA0; /* je: equal / zero */

loc_00190D2E: ;
    edx = esi + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00190D3E; /* je: equal / zero */

loc_00190D36: ;
    edi = esi + -264;
    goto loc_00190D40;

loc_00190D3E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190D40: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00190D4Cu); RECOMP_ABI_CALL(0x00191130u, sub_00191130); /* call 0x00191130 */

loc_00190D4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190D58; /* je: equal / zero */

loc_00190D50: ;
    ecx = eax + 0x110;
    goto loc_00190D5A;

loc_00190D58: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190D5A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190D66; /* je: equal / zero */

loc_00190D5E: ;
    eax = edi + 0x110;
    goto loc_00190D68;

loc_00190D66: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190D68: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00190D71u); RECOMP_ABI_CALL(0x001568B0u, sub_001568B0); /* call 0x001568B0 */

loc_00190D71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00190D7E; /* je: equal / zero */

loc_00190D76: ;
    esi = eax + -272;
    goto loc_00190D80;

loc_00190D7E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190D80: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190D88u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_00190D88: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00190D9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190D94u); } /* indirect call */
    }

loc_00190D9A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00190DA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00190DB0
 * Original: 0x00190DB0 - 0x00190DCE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00190DB8u); RECOMP_ABI_CALL(0x00156700u, sub_00156700); /* call 0x00156700 */

loc_00190DB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190DC8; /* je: equal / zero */

loc_00190DBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190DC5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00190DC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00190DC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190DD0
 * Original: 0x00190DD0 - 0x00190DE2 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190DD0: ;
    MEM32(ecx) = 0x324270;
    MEM32(ecx + 8) = 0x324264;
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_00190DF0
 * Original: 0x00190DF0 - 0x00190DF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190DF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00190E00
 * Original: 0x00190E00 - 0x00190E84 (132 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190E00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(ecx);
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x00190E80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190E7Au); } /* indirect call */
    }

loc_00190E80: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00190E90
 * Original: 0x00190E90 - 0x00190E98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190E90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00190EA0(); return; /* tail jmp 0x00190EA0 */

}

/**
 * sub_00190EA0
 * Original: 0x00190EA0 - 0x00190ECB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x324270;
    MEM32(esi + 8) = 0x324264;
    PUSH32(esp, 0x00190EB5u); RECOMP_ABI_CALL(0x00130500u, sub_00130500); /* call 0x00130500 */

loc_00190EB5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190EC5; /* je: equal / zero */

loc_00190EBC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190EC2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00190EC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00190EC5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190ED0
 * Original: 0x00190ED0 - 0x00190F30 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190ED0: ;
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
    MEM32(esp + 8) = 0x3243C4;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00190EF5; /* je: equal / zero */

loc_00190EED: ;
    eax = esi + -264;
    goto loc_00190EF7;

loc_00190EF5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190EF7: ;
    eax = MEM32(eax + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190F0F; /* je: equal / zero */

loc_00190F01: ;
    _fb = (uint32_t)(0xFFFFFEF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFEF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00190F0F; /* je: equal / zero */

loc_00190F08: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00190F11;

loc_00190F0F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190F11: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00190F1Fu); RECOMP_ABI_CALL(0x001565A0u, sub_001565A0); /* call 0x001565A0 */

loc_00190F1F: ;
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
 * sub_00190F30
 * Original: 0x00190F30 - 0x00190F63 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190F30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00190F5E; /* je: equal / zero */

loc_00190F3C: ;
    PUSH32(esp, edi);
    /* nop */

loc_00190F40: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00190F4Bu); RECOMP_ABI_CALL(0x00190F30u, sub_00190F30); /* call 0x00190F30 */

loc_00190F4B: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190F54u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00190F54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00190F40; /* jne: not equal / not zero */

loc_00190F5D: ;
    POP32(esp, edi);

loc_00190F5E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190F70
 * Original: 0x00190F70 - 0x00190F9B (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190F70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00190F84; /* je: equal / zero */

loc_00190F7C: ;
    esi = eax + -272;
    goto loc_00190F86;

loc_00190F84: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190F86: ;
    ecx = esi;
    PUSH32(esp, 0x00190F8Du); RECOMP_ABI_CALL(0x00190DD0u, sub_00190DD0); /* call 0x00190DD0 */

loc_00190F8D: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00190F96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190F93u); } /* indirect call */
    }

loc_00190F96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190FA0
 * Original: 0x00190FA0 - 0x0019106F (207 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190FA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx) (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00190FFF; /* je: equal / zero */

loc_00190FB2: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190FC9; /* jne: not equal / not zero */

loc_00190FBA: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190FFF; /* jne: not equal / not zero */

loc_00190FC2: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00190FFF; /* jb: below (unsigned <) */

loc_00190FC9: ;
    PUSH32(esp, 0xDC);
    PUSH32(esp, 0x00190FD3u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00190FD3: ;
    ecx = eax + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190FEE; /* je: equal / zero */

loc_00190FDD: ;
    edx = MEM32(esi);
    MEM32(ecx) = edx;
    edi = ecx + 4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x32;
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

loc_00190FEE: ;
    MEM32(ebp + 0xC) = eax;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 0xC) (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00191041; /* jne: not equal / not zero */

loc_00190FFA: ;
    MEM32(ecx + 0xC) = eax;
    goto loc_00191041;

loc_00190FFF: ;
    PUSH32(esp, 0xDC);
    PUSH32(esp, 0x00191009u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00191009: ;
    ecx = eax + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191024; /* je: equal / zero */

loc_00191013: ;
    edx = MEM32(esi);
    MEM32(ecx) = edx;
    edi = ecx + 4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x32;
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

loc_00191024: ;
    MEM32(ebp + 8) = eax;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00191039; /* jne: not equal / not zero */

loc_0019102F: ;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ebx);
    MEM32(ecx + 0xC) = eax;
    goto loc_00191041;

loc_00191039: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00191041; /* jne: not equal / not zero */

loc_0019103E: ;
    MEM32(ecx + 8) = eax;

loc_00191041: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191058u); RECOMP_ABI_CALL(0x00036060u, sub_00036060); /* call 0x00036060 */

loc_00191058: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = eax;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00191070
 * Original: 0x00191070 - 0x00191124 (180 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00191070: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_001910A8; /* je: equal / zero */

loc_00191088: ;
    edx = MEM32(ebx);
    /* nop */

loc_00191090: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001910A1; /* je: equal / zero */

loc_0019109C: ;
    esi = MEM32(esi + 8);
    goto loc_001910A4;

loc_001910A1: ;
    esi = MEM32(esi + 0xC);

loc_001910A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00191090; /* jne: not equal / not zero */

loc_001910A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = edi;
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001910E8; /* je: equal / zero */

loc_001910B2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001910DB; /* jne: not equal / not zero */

loc_001910B7: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001910C8u); RECOMP_ABI_CALL(0x00190FA0u, sub_00190FA0); /* call 0x00190FA0 */

loc_001910C8: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001910DB: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x001910E4u); RECOMP_ABI_CALL(0x0015A7D0u, sub_0015A7D0); /* call 0x0015A7D0 */

loc_001910E4: ;
    edx = MEM32(esp + 0x18);

loc_001910E8: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00191113; /* jae: above or equal (unsigned >=) */

loc_001910EF: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00191100u); RECOMP_ABI_CALL(0x00190FA0u, sub_00190FA0); /* call 0x00190FA0 */

loc_00191100: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 1;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00191113: ;
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
 * sub_00191130
 * Original: 0x00191130 - 0x0019119F (111 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191130: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0019113Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00191139u); } /* indirect call */
    }

loc_0019113C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191186; /* je: equal / zero */

loc_00191142: ;
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00191151u); RECOMP_ABI_CALL(0x0018FF20u, sub_0018FF20); /* call 0x0018FF20 */

loc_00191151: ;
    ecx = esi;
    MEM32(esi) = 0x3243D8;
    MEM32(esi + 8) = 0x3243CC;
    MEM32(esi + 0xF0) = edi;
    PUSH32(esp, 0x0019116Bu); RECOMP_ABI_CALL(0x0018EF50u, sub_0018EF50); /* call 0x0018EF50 */

loc_0019116B: ;
    POP32(esp, edi);
    MEM32(esi + 0x110) = 0;
    MEM32(esi + 0x114) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00191186: ;
    edx = edi + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191198; /* je: equal / zero */

loc_0019118D: ;
    eax = edi + -264;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00191198: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001911A0
 * Original: 0x001911A0 - 0x001911DA (58 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001911A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001911A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x98) = eax;
    MEM32(ecx + 0x9C) = eax;
    MEM32(ecx + 0xA0) = eax;
    MEMF(ecx + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xA8) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0xB0) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001911E0
 * Original: 0x001911E0 - 0x001911E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001911E0(void)
{

loc_001911E0: ;
    eax = ecx + 0xAC;
    esp += 4; return; /* ret */

}

/**
 * sub_001911F0
 * Original: 0x001911F0 - 0x001912C4 (212 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001911F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001911F0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001912C2; /* je: equal / zero */

loc_001911FD: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esi + ebx * 4 + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + ebx * 4); /* subss */
    ebx = ebx ^ 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191255; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00191224: ;
    eax = MEM32(edi + 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191231u); RECOMP_ABI_CALL(0x001911F0u, sub_001911F0); /* call 0x001911F0 */

loc_00191231: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0019128D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0019124B: ;
    ecx = MEM32(edi + 0x94);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    goto loc_00191284;

loc_00191255: ;
    edx = MEM32(edi + 0x94);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191262u); RECOMP_ABI_CALL(0x001911F0u, sub_001911F0); /* call 0x001911F0 */

loc_00191262: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0019128D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0019127C: ;
    eax = MEM32(edi + 0x90);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);

loc_00191284: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019128Au); RECOMP_ABI_CALL(0x001911F0u, sub_001911F0); /* call 0x001911F0 */

loc_0019128A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019128D: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 8); /* subss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xC); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001912C0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001912B9: ;
    MEM32(esi) = edi;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */

loc_001912C0: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001912C2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001912D0
 * Original: 0x001912D0 - 0x00191311 (65 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001912D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001912D0: ;
    eax = MEM32(ecx + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019130E; /* je: equal / zero */

loc_001912DA: ;
    xmm1 = XMM_SCALAR(MEMF(0x3727C8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0xA4) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0019130E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00191304: ;
    MEM32(ecx + 0xA0) = 0;

loc_0019130E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00191320
 * Original: 0x00191320 - 0x00191340 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + 0x70);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x74);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x78);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00191340
 * Original: 0x00191340 - 0x001913BC (124 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00191340: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001913B8; /* jne: not equal / not zero */

loc_0019134E: ;
    eax = MEM32(0x3A6558);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx + 0x90;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    ebp = MEM32(eax);
    PUSH32(esp, edi);
    edi = 4;
    /* nop */

loc_00191370: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019138A; /* je: equal / zero */

loc_00191376: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001913A2; /* je: equal / zero */

loc_0019137A: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019138E; /* jae: above or equal (unsigned >=) */

loc_00191382: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00191370; /* jne: not equal / not zero */

loc_00191388: ;
    goto loc_001913A2;

loc_0019138A: ;
    MEM32(eax) = esi;
    goto loc_001913A2;

loc_0019138E: ;
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001913A2; /* je: equal / zero */

loc_00191396: ;
    esi = MEM32(eax);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    if ((_fa != 0)) goto loc_00191396; /* jne: not equal / not zero */

loc_001913A2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001913B4; /* je: equal / zero */

loc_001913A6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001913B4; /* je: equal / zero */

loc_001913AA: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001913B4u); RECOMP_ABI_CALL(0x00191EA0u, sub_00191EA0); /* call 0x00191EA0 */

loc_001913B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001913B8: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001913C0
 * Original: 0x001913C0 - 0x0019141A (90 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001913C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001913C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(0x3A6558);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx + 0x90;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    ebx = MEM32(eax);
    esi = 4;

loc_001913E0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001913F0; /* je: equal / zero */

loc_001913E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001913E0; /* jne: not equal / not zero */

loc_001913EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001913F0: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001913FE; /* je: equal / zero */

loc_001913F3: ;
    edx = MEM32(eax + 4);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001913F3; /* jne: not equal / not zero */

loc_001913FE: ;
    MEM32(eax) = 0;
    eax = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191414; /* je: equal / zero */

loc_0019140A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191414; /* je: equal / zero */

loc_0019140E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00191414u); RECOMP_ABI_CALL(0x00191EA0u, sub_00191EA0); /* call 0x00191EA0 */

loc_00191414: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00191420
 * Original: 0x00191420 - 0x001917BB (923 bytes, 234 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191420(void)
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

loc_00191420: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    xmm6 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(ecx); /* subss */
    xmm4 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ecx + 4); /* subss */
    edx = MEM32(esp + 0x28);
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx); /* subss */
    xmm7 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(ecx + 4); /* subss */
    edx = MEM32(esp + 0x2C);
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(edx + 4); /* subss */
    xmm5 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(edx); /* subss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm7; /* movaps */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp) = xmm7.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp); /* mulss */
    MEMF(esp + 4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm7; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm6 = xmm3; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    xmm5 = xmm2; /* movaps */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm6.f[0]; _fcb = xmm7.f[0]; /* comiss */
    xmm7 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191605; /* jb: below (unsigned <) (xmm6.f[0] vs xmm7.f[0]) */

loc_0019154F: ;
    _fca = xmm6.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001915B6; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(esp + 0x24)) */

loc_00191556: ;
    _fca = xmm6.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm0 = xmm6; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191594; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm5.f[0]) */

loc_0019155E: ;
    _fca = xmm6.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191577; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm2.f[0]) */

loc_00191563: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3 = xmm6; /* movaps */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001915D7; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0019156F: ;
    xmm0 = xmm7; /* movaps */
    goto loc_0019173E;

loc_00191577: ;
    _fca = xmm3.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0019172B; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm6.f[0]) */

loc_00191580: ;
    xmm6.f[0] = xmm6.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm6; /* movaps */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001915AD; /* jb: below (unsigned <) (xmm3.f[0] vs xmm4.f[0]) */

loc_0019158C: ;
    xmm3 = xmm7; /* movaps */
    goto loc_0019173E;

loc_00191594: ;
    _fca = xmm3.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0019172B; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm6.f[0]) */

loc_0019159D: ;
    xmm6.f[0] = xmm6.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm6; /* movaps */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00191706; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm4.f[0]) */

loc_001915AD: ;
    xmm3.f[0] = xmm3.f[0] / xmm4.f[0]; /* divss */
    goto loc_0019173E;

loc_001915B6: ;
    _fca = xmm6.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001915E0; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm5.f[0]) */

loc_001915BB: ;
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    xmm3 = xmm6; /* movaps */
    if ((_fca >= _fcb)) goto loc_001916E5; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm6.f[0]) */

loc_001915C7: ;
    xmm6.f[0] = xmm6.f[0] - xmm2.f[0]; /* subss */
    xmm0 = xmm6; /* movaps */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_001916D3; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001915D7: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    goto loc_0019173E;

loc_001915E0: ;
    xmm7 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 0x20); /* divss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    SET_LO8(eax, 1);
    goto loc_00191795;

loc_00191605: ;
    _fca = xmm6.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0019167A; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(esp + 0x24)) */

loc_0019160C: ;
    xmm5 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0019164D; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm2.f[0]) */

loc_0019161C: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF504); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00191728; /* jae: above or equal (unsigned >=) (xmm5.f[0] vs xmm1.f[0]) */

loc_00191641: ;
    xmm5.f[0] = xmm5.f[0] / xmm1.f[0]; /* divss */
    xmm0 = xmm5; /* movaps */
    goto loc_00191737;

loc_0019164D: ;
    _fca = xmm6.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm0 = xmm6; /* movaps */
    if ((_fca >= _fcb)) goto loc_001916FE; /* jae: above or equal (unsigned >=) (xmm6.f[0] vs xmm5.f[0]) */

loc_00191659: ;
    _fca = xmm3.f[0]; _fcb = xmm6.f[0]; /* comiss */
    xmm7 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    if ((_fca >= _fcb)) goto loc_0019172B; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm6.f[0]) */

loc_0019166A: ;
    xmm3.f[0] = xmm3.f[0] / xmm4.f[0]; /* divss */
    xmm6.f[0] = xmm6.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm6; /* movaps */
    goto loc_0019173E;

loc_0019167A: ;
    _fca = xmm6.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001916EA; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm5.f[0]) */

loc_0019167F: ;
    xmm7 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm5.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001916CB; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm3.f[0]) */

loc_00191697: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF504); /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm3 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001916BE; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_001916B3: ;
    xmm3 = xmm7; /* movaps */
    xmm0 = xmm6; /* movaps */
    goto loc_0019173E;

loc_001916BE: ;
    xmm3.f[0] = xmm3.f[0] / xmm1.f[0]; /* divss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    goto loc_0019173E;

loc_001916CB: ;
    _fca = xmm6.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm3 = xmm6; /* movaps */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001916D8; /* jb: below (unsigned <) (xmm6.f[0] vs xmm5.f[0]) */

loc_001916D3: ;
    xmm0 = xmm7; /* movaps */
    goto loc_0019173E;

loc_001916D8: ;
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_001916E5; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm6.f[0]) */

loc_001916DD: ;
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm6.f[0] = xmm6.f[0] - xmm2.f[0]; /* subss */

loc_001916E5: ;
    xmm0 = xmm6; /* movaps */
    goto loc_0019173E;

loc_001916EA: ;
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm6.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0019170B; /* jb: below (unsigned <) (xmm6.f[0] vs xmm3.f[0]) */

loc_001916FB: ;
    xmm0 = xmm6; /* movaps */

loc_001916FE: ;
    xmm7 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */

loc_00191706: ;
    xmm3 = xmm7; /* movaps */
    goto loc_0019173E;

loc_0019170B: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF504); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191730; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_00191728: ;
    xmm0 = xmm7; /* movaps */

loc_0019172B: ;
    xmm3 = xmm6; /* movaps */
    goto loc_0019173E;

loc_00191730: ;
    xmm3.f[0] = xmm3.f[0] / xmm1.f[0]; /* divss */
    xmm0 = xmm3; /* movaps */

loc_00191737: ;
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_0019173E: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx); /* addss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 4); /* addss */
    ecx = MEM32(esp + 0x10);
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + 4); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */

loc_00191795: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */
    MEMF(edx) = xmm7.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(edx) = xmm3.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001917C0
 * Original: 0x001917C0 - 0x00191949 (393 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001917C0(void)
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

loc_001917C0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 0x88);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00191943; /* je: equal / zero */

loc_001917DF: ;
    ecx = MEM32(esp + 0x34);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x84);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = ecx + 4;
    esi = ecx + 8;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FF3A8)); /* movss */
    PUSH32(esp, ebx);
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0xC) = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);

loc_00191834: ;
    esi = ZX8(MEM8(ebp));
    edi = ZX8(MEM8(ebp + 1));
    ebx = ZX8(MEM8(ebp + 2));
    eax = MEM32(esp + 0x48);
    eax = MEM32(eax);
    esi = esi + esi * 4;
    edi = edi + edi * 4;
    ebx = ebx + ebx * 4;
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, 0x0019187Bu); RECOMP_ABI_CALL(0x00191420u, sub_00191420); /* call 0x00191420 */

loc_0019187B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001918E7; /* jne: not equal / not zero */

loc_0019187F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001918CC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00191890: ;
    edx = MEM32(esp + 0x44);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_001918CC: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_001918FD; /* je: equal / zero */

loc_001918DA: ;
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x44);
    goto loc_00191834;

loc_001918E7: ;
    eax = MEM32(esp + 0x40);
    MEM32(eax + 4) = edi;
    POP32(esp, edi);
    MEM32(eax + 8) = ebx;
    POP32(esp, ebx);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_001918FD: ;
    eax = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    POP32(esp, ebx);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    POP32(esp, esi);
    MEMF(edx) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);

loc_00191943: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00191950
 * Original: 0x00191950 - 0x00191DE7 (1175 bytes, 365 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191950(void)
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

loc_00191950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    PUSH32(esp, edi);
    ebx = ecx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001919C3; /* je: equal / zero */

loc_0019197D: ;
    SET_LO8(eax, MEM8(ebx + 0xB0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001919C3; /* je: equal / zero */

loc_00191987: ;
    edi = ebx + 0x80;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191995u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00191995: ;
    fp_push(MEMF(0x2FE9A0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001919BC; /* jbe: below or equal (unsigned <=) */

loc_001919A1: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 8);
    MEM32(edi + 8) = edx;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001919BC: ;
    MEM8(ebx + 0xB0) = 0;

loc_001919C3: ;
    eax = MEM32(ebx + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebx + 0x90);
    if (CMP_NE(_fa, _fb)) goto loc_00191AF0; /* jne: not equal / not zero */

loc_001919D7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191ACB; /* je: equal / zero */

loc_001919DF: ;
    SET_LO16(eax, MEM16(esi + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001919F0; /* jne: not equal / not zero */

loc_001919E9: ;
    esi = MEM32(esi);
    goto loc_00191AD2;

loc_001919F0: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00191A36; /* jae: above or equal (unsigned >=) */

loc_001919F6: ;
    esi = MEM32(esi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edi = esi + 0xA0;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191A16u); RECOMP_ABI_CALL(0x00191DF0u, sub_00191DF0); /* call 0x00191DF0 */

loc_00191A16: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191A24u); RECOMP_ABI_CALL(0x00192FB0u, sub_00192FB0); /* call 0x00192FB0 */

loc_00191A24: ;
    MEM8(ebx + 0xB0) = 1;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00191A36: ;
    eax = ZX16(MEM16(esi + 6));
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x2FF3A8)); /* movss */
    eax = eax + eax * 4;
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esi);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x58) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = esi;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191A7Bu); RECOMP_ABI_CALL(0x001911F0u, sub_001911F0); /* call 0x001911F0 */

loc_00191A7B: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191AB9; /* je: equal / zero */

loc_00191A86: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191A9Eu); RECOMP_ABI_CALL(0x001917C0u, sub_001917C0); /* call 0x001917C0 */

loc_00191A9E: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191AB9u); RECOMP_ABI_CALL(0x001933C0u, sub_001933C0); /* call 0x001933C0 */

loc_00191AB9: ;
    MEM8(ebx + 0xB0) = 1;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00191ACB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191AD0u); RECOMP_ABI_CALL(0x0018EF20u, sub_0018EF20); /* call 0x0018EF20 */

loc_00191AD0: ;
    esi = MEM32(eax);

loc_00191AD2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1B;
    edi = ebx;
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
    MEM8(ebx + 0xB0) = 1;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00191AF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00191AFB; /* jne: not equal / not zero */

loc_00191AF4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191AF9u); RECOMP_ABI_CALL(0x0018EF20u, sub_0018EF20); /* call 0x0018EF20 */

loc_00191AF9: ;
    esi = eax;

loc_00191AFB: ;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0xA8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edi = MEM32(ebx + 0xA0);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191B1D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00191B11: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_00191B1D: ;
    SET_LO16(eax, MEM16(esi + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00191B5B; /* jne: not equal / not zero */

loc_00191B41: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191B56u); RECOMP_ABI_CALL(0x00192D90u, sub_00192D90); /* call 0x00192D90 */

loc_00191B56: ;
    goto loc_00191C79;

loc_00191B5B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00191BC0; /* jae: above or equal (unsigned >=) */

loc_00191B61: ;
    esi = MEM32(esi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esi + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191B81u); RECOMP_ABI_CALL(0x00191DF0u, sub_00191DF0); /* call 0x00191DF0 */

loc_00191B81: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = esi + 0xA0;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    PUSH32(esp, esi);
    edx = esp + 0x38;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191BBBu); RECOMP_ABI_CALL(0x00192FB0u, sub_00192FB0); /* call 0x00192FB0 */

loc_00191BBB: ;
    goto loc_00191C79;

loc_00191BC0: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x2FF3A8)); /* movss */
    MEM32(esp + 0x54) = eax;
    eax = ZX16(MEM16(esi + 6));
    edx = eax + eax * 4;
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esi);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = esi;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191C05u); RECOMP_ABI_CALL(0x001911F0u, sub_001911F0); /* call 0x001911F0 */

loc_00191C05: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191C79; /* je: equal / zero */

loc_00191C10: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191C28u); RECOMP_ABI_CALL(0x001917C0u, sub_001917C0); /* call 0x001917C0 */

loc_00191C28: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    PUSH32(esp, edx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = ebx;
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191C79u); RECOMP_ABI_CALL(0x001933C0u, sub_001933C0); /* call 0x001933C0 */

loc_00191C79: ;
    SET_LO16(eax, MEM16(edi + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00191CB0; /* jne: not equal / not zero */

loc_00191C83: ;
    edx = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191C9Eu); RECOMP_ABI_CALL(0x00191F30u, sub_00191F30); /* call 0x00191F30 */

loc_00191C9E: ;
    MEM8(ebx + 0xB0) = 0;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00191CB0: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00191D1C; /* jae: above or equal (unsigned >=) */

loc_00191CB6: ;
    edi = MEM32(edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    esi = edi + 0xA0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191CD6u); RECOMP_ABI_CALL(0x00191DF0u, sub_00191DF0); /* call 0x00191DF0 */

loc_00191CD6: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, esi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = ebx;
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191D0Au); RECOMP_ABI_CALL(0x00192210u, sub_00192210); /* call 0x00192210 */

loc_00191D0A: ;
    MEM8(ebx + 0xB0) = 0;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00191D1C: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x2FF3A8)); /* movss */
    MEM32(esp + 0x58) = eax;
    eax = ZX16(MEM16(edi + 6));
    MEM32(esp + 0x54) = edx;
    edx = MEM32(edi);
    ecx = eax + eax * 4;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = edi;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191D61u); RECOMP_ABI_CALL(0x001911F0u, sub_001911F0); /* call 0x001911F0 */

loc_00191D61: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00191DD5; /* je: equal / zero */

loc_00191D6C: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191D84u); RECOMP_ABI_CALL(0x001917C0u, sub_001917C0); /* call 0x001917C0 */

loc_00191D84: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    PUSH32(esp, edx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = ebx;
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191DD5u); RECOMP_ABI_CALL(0x001926D0u, sub_001926D0); /* call 0x001926D0 */

loc_00191DD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0xB0) = 0;
    eax = ebx;
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
 * sub_00191DF0
 * Original: 0x00191DF0 - 0x00191E9C (172 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191DF0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00191DF0: ;
    ecx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    eax = MEM32(esp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191E5E; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00191E59: ;
    xmm1 = xmm3; /* movaps */
    goto loc_00191E66;

loc_00191E5E: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191E66; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00191E63: ;
    xmm1 = xmm2; /* movaps */

loc_00191E66: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191E81; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00191E6B: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm0 = xmm3; /* movaps */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 24; return; /* ret 20 */

loc_00191E81: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191E89; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00191E86: ;
    xmm0 = xmm2; /* movaps */

loc_00191E89: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00191EA0
 * Original: 0x00191EA0 - 0x00191F23 (131 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191EA0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00191EA0: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xA8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(ecx + 0xA0) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191F05; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00191EBA: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xA4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191F05; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00191EC7: ;
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0xA8); /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00191EDF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00191EDC: ;
    xmm1 = xmm0; /* movaps */

loc_00191EDF: ;
    edx = MEM32(ecx + 0x90);
    xmm2 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ecx + 0xA8) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xA4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_00191F05: ;
    eax = MEM32(ecx + 0x90);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(ecx + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xA4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00191F30
 * Original: 0x00191F30 - 0x00192204 (724 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191F30(void)
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

loc_00191F30: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xC); /* addss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x10); /* addss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x14); /* addss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x18); /* addss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x1C); /* addss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x20); /* addss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x24); /* addss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x28); /* addss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x2C); /* addss */
    MEMF(esi + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x30); /* addss */
    MEMF(esi + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x34); /* addss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x38); /* addss */
    MEMF(esi + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x3C); /* addss */
    MEMF(esi + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x40); /* addss */
    MEMF(esi + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x44); /* addss */
    MEMF(esi + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x48); /* addss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esi + 0x48) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x4C); /* addss */
    MEMF(esi + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x50); /* addss */
    MEMF(esi + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x54); /* addss */
    MEMF(esi + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x58); /* addss */
    MEMF(esi + 0x58) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x5C); /* addss */
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x60); /* addss */
    MEMF(esi + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x64); /* addss */
    MEMF(esi + 0x64) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x68); /* addss */
    MEMF(esi + 0x68) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00192154u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00192154: ;
    ecx = ZX8(MEM8(edi + 0x80));
    SET_LO8(edx, MEM8(esi + 0xAC));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(esi + 0xAD));
    MEM8(esi + 0xAC) = LO8(edx);
    edx = ZX8(MEM8(edi + 0x81));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esi + 0xAE));
    MEM8(esi + 0xAD) = LO8(ecx);
    ecx = ZX8(MEM8(edi + 0x82));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0xAE) = LO8(edx);
    edx = ZX8(MEM8(edi + 0x83));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    SET_LO8(eax, MEM8(esi + 0xAF));
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0xAF) = LO8(eax);
    xmm1 = XMM_SCALAR(MEMF(edi + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x70); /* addss */
    MEMF(esi + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x74); /* addss */
    MEMF(esi + 0x74) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x78); /* addss */
    POP32(esp, edi);
    MEMF(esi + 0x78) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00192210
 * Original: 0x00192210 - 0x001926C6 (1206 bytes, 274 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192210(void)
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

loc_00192210: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0xC); /* addss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x10); /* addss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x14); /* addss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x18); /* addss */
    MEMF(esi + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x1C); /* addss */
    MEMF(esi + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x20); /* addss */
    MEMF(esi + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x24); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x28); /* addss */
    MEMF(esi + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x2C); /* addss */
    MEMF(esi + 0x2C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x30); /* addss */
    MEMF(esi + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x3C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x34); /* addss */
    MEMF(esi + 0x34) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x40)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x38); /* addss */
    MEMF(esi + 0x38) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x3C); /* addss */
    MEMF(esi + 0x3C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x40); /* addss */
    MEMF(esi + 0x40) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x4C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x44); /* addss */
    MEMF(esi + 0x44) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x48); /* addss */
    MEMF(esi + 0x48) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x54)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x54)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x4C); /* addss */
    MEMF(esi + 0x4C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x58)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x50); /* addss */
    MEMF(esi + 0x50) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x5C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x5C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x54); /* addss */
    MEMF(esi + 0x54) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x58); /* addss */
    MEMF(esi + 0x58) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x64)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x5C); /* addss */
    MEMF(esi + 0x5C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x60); /* addss */
    MEMF(esi + 0x60) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x6C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x64); /* addss */
    MEMF(esi + 0x64) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x70)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x68); /* addss */
    MEMF(esi + 0x68) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x001925A5u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001925A5: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    ebp = eax;
    PUSH32(esp, 0x001925B6u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001925B6: ;
    ecx = ZX8(MEM8(edi + 0x80));
    edx = ZX8(MEM8(ebx + 0x80));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esi + 0xAC));
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0xAC) = LO8(edx);
    ecx = ZX8(MEM8(edi + 0x81));
    edx = ZX8(MEM8(ebx + 0x81));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esi + 0xAD));
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0xAD) = LO8(edx);
    ecx = ZX8(MEM8(edi + 0x82));
    edx = ZX8(MEM8(ebx + 0x82));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esi + 0xAE));
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0xAE) = LO8(edx);
    ecx = ZX8(MEM8(edi + 0x83));
    edx = ZX8(MEM8(ebx + 0x83));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    SET_LO8(eax, MEM8(esi + 0xAF));
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM8(esi + 0xAF) = LO8(eax);
    xmm2 = XMM_SCALAR(MEMF(edi + 0x74)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x74)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x70); /* addss */
    MEMF(esi + 0x70) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x78)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x78)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x74); /* addss */
    MEMF(esi + 0x74) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x7C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    POP32(esp, edi);
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x78); /* addss */
    MEMF(esi + 0x78) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001926D0
 * Original: 0x001926D0 - 0x00192D84 (1716 bytes, 385 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001926D0(void)
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

loc_001926D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    xmm4 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    xmm3 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0xC); /* addss */
    MEMF(esi + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x10); /* addss */
    MEMF(esi + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x14); /* addss */
    MEMF(esi + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x18); /* addss */
    MEMF(esi + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x1C); /* addss */
    MEMF(esi + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x20); /* addss */
    MEMF(esi + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x2C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x24); /* addss */
    MEMF(esi + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x28); /* addss */
    MEMF(esi + 0x28) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x2C); /* addss */
    MEMF(esi + 0x2C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x30); /* addss */
    MEMF(esi + 0x30) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x3C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x3C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x3C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x34); /* addss */
    MEMF(esi + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x40)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x40)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x38); /* addss */
    MEMF(esi + 0x38) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x44)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x44)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x44)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x3C); /* addss */
    MEMF(esi + 0x3C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x48)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x48)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x40); /* addss */
    MEMF(esi + 0x40) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x4C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x4C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x44); /* addss */
    MEMF(esi + 0x44) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x50)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x50)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x48); /* addss */
    MEMF(esi + 0x48) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x54)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x54)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x54)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x4C); /* addss */
    MEMF(esi + 0x4C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x58)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x58)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x58)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x50); /* addss */
    MEMF(esi + 0x50) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x5C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x5C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x5C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x54); /* addss */
    MEMF(esi + 0x54) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x60)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x58); /* addss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esi + 0x58) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x64)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x64)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x5C); /* addss */
    MEMF(esi + 0x5C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x68)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x60); /* addss */
    MEMF(esi + 0x60) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x6C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x6C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x64); /* addss */
    MEMF(esi + 0x64) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x70)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x70)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x70)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x68); /* addss */
    MEMF(esi + 0x68) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x00192BD5u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00192BD5: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00192BE8u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00192BE8: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00192BFBu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00192BFB: ;
    ecx = ZX8(MEM8(edi + 0x80));
    edx = ZX8(MEM8(ebx + 0x80));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x20));
    MEM32(esp + 0x28) = eax;
    eax = ZX8(MEM8(ebp + 0x80));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esi + 0xAC));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0xAC) = LO8(edx);
    ecx = ZX8(MEM8(edi + 0x81));
    edx = ZX8(MEM8(ebx + 0x81));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x28));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x20));
    eax = ZX8(MEM8(ebp + 0x81));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esi + 0xAD));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0xAD) = LO8(edx);
    ecx = ZX8(MEM8(edi + 0x82));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x28));
    edx = ZX8(MEM8(ebx + 0x82));
    eax = ZX8(MEM8(ebp + 0x82));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x20));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esi + 0xAE));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0xAE) = LO8(edx);
    ecx = ZX8(MEM8(edi + 0x83));
    edx = ZX8(MEM8(ebx + 0x83));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x28));
    eax = ZX8(MEM8(ebp + 0x83));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x20));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi + 0xAF));
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0xAF) = LO8(eax);
    xmm3 = XMM_SCALAR(MEMF(edi + 0x74)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x74)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x74)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x70); /* addss */
    MEMF(esi + 0x70) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x78)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x78)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x78)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x74); /* addss */
    MEMF(esi + 0x74) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x7C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x7C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x7C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    POP32(esp, edi);
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x78); /* addss */
    MEMF(esi + 0x78) = xmm3.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00192D90
 * Original: 0x00192D90 - 0x00192FAF (543 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192D90(void)
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

loc_00192D90: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x58) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esi + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x64) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x68) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00192F2Eu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00192F2E: ;
    ecx = ZX8(MEM8(edi + 0x80));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAC) = LO8(ecx);
    edx = ZX8(MEM8(edi + 0x81));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAD) = LO8(edx);
    ecx = ZX8(MEM8(edi + 0x82));
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAE) = LO8(ecx);
    edx = ZX8(MEM8(edi + 0x83));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAF) = LO8(edx);
    xmm1 = XMM_SCALAR(MEMF(edi + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x74) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    POP32(esp, edi);
    MEMF(esi + 0x78) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00192FB0
 * Original: 0x00192FB0 - 0x001933B1 (1025 bytes, 236 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192FB0(void)
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

loc_00192FB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x2C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x3C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x34) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x40)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x38) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x3C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x40) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x4C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x44) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x48) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x54)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x54)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x4C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x58)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x50) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x5C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x5C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x54) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x58) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x64)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x5C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x60) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x6C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x64) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x70)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x68) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x001932BFu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001932BF: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    ebp = eax;
    PUSH32(esp, 0x001932D0u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001932D0: ;
    ecx = ZX8(MEM8(edi + 0x80));
    edx = ZX8(MEM8(ebx + 0x80));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAC) = LO8(ecx);
    ecx = ZX8(MEM8(edi + 0x81));
    edx = ZX8(MEM8(ebx + 0x81));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAD) = LO8(ecx);
    ecx = ZX8(MEM8(edi + 0x82));
    edx = ZX8(MEM8(ebx + 0x82));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAE) = LO8(ecx);
    ecx = ZX8(MEM8(edi + 0x83));
    edx = ZX8(MEM8(ebx + 0x83));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAF) = LO8(ecx);
    xmm2 = XMM_SCALAR(MEMF(edi + 0x74)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x74)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x70) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x78)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x78)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x74) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x7C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x7C)); /* movss */
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x78) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001933C0
 * Original: 0x001933C0 - 0x001939BF (1535 bytes, 347 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001933C0(void)
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

loc_001933C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    xmm4 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    xmm3 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    esi = ecx;
    MEMF(esi) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x2C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x28) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x2C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x30) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x3C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x3C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x3C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x40)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x38) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x44)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x44)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x44)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x3C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x48)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x48)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x40) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x4C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x4C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x44) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x50)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x50)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x48) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x54)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x54)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x54)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x4C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x58)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x58)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x58)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x50) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x5C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x5C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x5C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x54) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x60)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x58) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x64)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x64)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x5C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x68)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x60) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x6C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x6C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x64) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x70)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x70)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x70)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x68) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x0019383Fu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0019383F: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00193852u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00193852: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31C8B8)); /* fmul dword ptr [0x31c8b8] */
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00193865u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00193865: ;
    ecx = ZX8(MEM8(edi + 0x80));
    edx = ZX8(MEM8(ebx + 0x80));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x20));
    MEM32(esp + 0x28) = eax;
    eax = ZX8(MEM8(ebp + 0x80));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAC) = LO8(ecx);
    ecx = ZX8(MEM8(edi + 0x81));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x28));
    edx = ZX8(MEM8(ebx + 0x81));
    eax = ZX8(MEM8(ebp + 0x81));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x20));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAD) = LO8(ecx);
    ecx = ZX8(MEM8(edi + 0x82));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x28));
    edx = ZX8(MEM8(ebx + 0x82));
    eax = ZX8(MEM8(ebp + 0x82));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x20));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAE) = LO8(ecx);
    ecx = ZX8(MEM8(edi + 0x83));
    edx = ZX8(MEM8(ebx + 0x83));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x28));
    eax = ZX8(MEM8(ebp + 0x83));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x20));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0xAF) = LO8(ecx);
    xmm3 = XMM_SCALAR(MEMF(edi + 0x74)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x74)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x74)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x70) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x78)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x78)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x78)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x74) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x7C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x7C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x7C)); /* movss */
    POP32(esp, edi);
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x78) = xmm3.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001939C0
 * Original: 0x001939C0 - 0x001939DD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001939C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001939C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001939D7u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_001939D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001939E0
 * Original: 0x001939E0 - 0x001939EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001939E0(void)
{

loc_001939E0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001939F0
 * Original: 0x001939F0 - 0x001939F5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001939F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001939F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00193A00
 * Original: 0x00193A00 - 0x00193A05 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193A00: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00193A10
 * Original: 0x00193A10 - 0x00193BAD (413 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193A10(void)
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

loc_00193A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193BA9; /* je: equal / zero */

loc_00193A1E: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x00193A2Au); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_00193A2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF879BB85u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF879BB85u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00193AF9; /* jg: greater (signed >) */

loc_00193A35: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00193AE5; /* je: equal / zero */

loc_00193A3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE64BF983u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE64BF983u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00193AAC; /* jg: greater (signed >) */

loc_00193A42: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00193A98; /* je: equal / zero */

loc_00193A44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81728B86u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81728B86u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193A85; /* je: equal / zero */

loc_00193A4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E629C15u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8E629C15u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193A71; /* je: equal / zero */

loc_00193A52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD67EB32Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD67EB32Fu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193B5A; /* jne: not equal / not zero */

loc_00193A5D: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00193A66u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00193A66: ;
    eax = MEM32(esi + 8);
    POP32(esp, edi);
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193A71: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00193A7Au); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00193A7A: ;
    ecx = MEM32(esi + 8);
    POP32(esp, edi);
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193A85: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00193A8Du); RECOMP_ABI_CALL(0x001939C0u, sub_001939C0); /* call 0x001939C0 */

loc_00193A8D: ;
    edx = MEM32(esi + 8);
    POP32(esp, edi);
    MEM32(edx + 4) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193A98: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00193AA1u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00193AA1: ;
    eax = MEM32(esi + 8);
    POP32(esp, edi);
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193AAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9915EB8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9915EB8u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193AD2; /* je: equal / zero */

loc_00193AB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF2E1E039u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF2E1E039u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193B5A; /* jne: not equal / not zero */

loc_00193ABE: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00193AC7u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00193AC7: ;
    ecx = MEM32(esi + 8);
    POP32(esp, edi);
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193AD2: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00193ADBu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00193ADB: ;
    edx = MEM32(esi + 8);
    POP32(esp, edi);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193AE5: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00193AEEu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00193AEE: ;
    eax = MEM32(esi + 8);
    POP32(esp, edi);
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193AF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49BB6296) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49BB6296 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00193B4C; /* jg: greater (signed >) */

loc_00193B00: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00193B38; /* je: equal / zero */

loc_00193B02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x176BCDAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x176BCDAF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193B24; /* je: equal / zero */

loc_00193B09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2CECF817) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2CECF817 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193B5A; /* jne: not equal / not zero */

loc_00193B10: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00193B19u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00193B19: ;
    ecx = MEM32(esi + 8);
    POP32(esp, edi);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193B24: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00193B2Du); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00193B2D: ;
    edx = MEM32(esi + 8);
    POP32(esp, edi);
    MEMF(edx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193B38: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00193B41u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00193B41: ;
    eax = MEM32(esi + 8);
    POP32(esp, edi);
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193B4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DDB6A2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DDB6A2B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193B99; /* je: equal / zero */

loc_00193B53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x606CFD39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x606CFD39 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193B85; /* je: equal / zero */

loc_00193B5A: ;
    ecx = edi;
    PUSH32(esp, 0x00193B61u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_00193B61: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00193B67u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00193B67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00193B72u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_00193B72: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x324620);
    PUSH32(esp, 0x00193B7Du); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00193B7D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193B85: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00193B8Eu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00193B8E: ;
    ecx = MEM32(esi + 8);
    POP32(esp, edi);
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00193B99: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00193BA2u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00193BA2: ;
    edx = MEM32(esi + 8);
    MEMF(edx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);

loc_00193BA9: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193BB0
 * Original: 0x00193BB0 - 0x00193BBD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193BB0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00193BC0
 * Original: 0x00193BC0 - 0x00193BDE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193BC0(void)
{

loc_00193BC0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    ecx = 0xD;
    esi = edx;
    edi = eax;
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
    ecx = MEM32(edx + 0x34);
    POP32(esp, edi);
    MEM32(eax + 0x34) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193BE0
 * Original: 0x00193BE0 - 0x00193C03 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00193BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC0;
    MEM32(esi) = 0x324670;
    MEM32(esi + 8) = 0x324668;
    PUSH32(esp, 0x00193BFBu); RECOMP_ABI_CALL(0x0017FF60u, sub_0017FF60); /* call 0x0017FF60 */

loc_00193BFB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_00193C10
 * Original: 0x00193C10 - 0x00193C2F (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193C10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193C2B; /* je: equal / zero */

loc_00193C19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00193C1Fu); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_00193C1F: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00193C2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193C28u); } /* indirect call */
    }

loc_00193C2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00193C30
 * Original: 0x00193C30 - 0x00193C52 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193C30: ;
    ecx = MEM32(0x5238A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(0x523898) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00193C51; /* je: equal / zero */

loc_00193C41: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00193C47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193C45u); } /* indirect call */
    }

loc_00193C47: ;
    MEM32(0x5238A0) = 0;

loc_00193C51: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00193C60
 * Original: 0x00193C60 - 0x00193CD9 (121 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193C60: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x154); PUSH32(esp, 0x00193C69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193C63u); } /* indirect call */
    }

loc_00193C69: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(esp + 8);
    ecx = esi;
    if ((_fa == 0)) goto loc_00193CBC; /* je: equal / zero */

loc_00193C72: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8006);
    if ((_fa == 0)) goto loc_00193CAE; /* je: equal / zero */

loc_00193C7A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00193C8B; /* je: equal / zero */

loc_00193C7D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x00193C89u); RECOMP_ABI_CALL(0x001CF320u, sub_001CF320); /* call 0x001CF320 */

loc_00193C89: ;
    goto loc_00193CC3;

loc_00193C8B: ;
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x00193C9Au); RECOMP_ABI_CALL(0x001CF320u, sub_001CF320); /* call 0x001CF320 */

loc_00193C9A: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00193CA3u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_00193CA3: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00193CACu); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_00193CAC: ;
    goto loc_00193CC3;

loc_00193CAE: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00193CBAu); RECOMP_ABI_CALL(0x001CF320u, sub_001CF320); /* call 0x001CF320 */

loc_00193CBA: ;
    goto loc_00193CC3;

loc_00193CBC: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00193CC3u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_00193CC3: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00193CCCu); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_00193CCC: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00193CD5u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_00193CD5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
