/**
 * Medal of Honor European Assault - Recompiled code chunk 43
 * Functions: 250 (0x0016EA40 - 0x00177D70)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0016EA40
 * Original: 0x0016EA40 - 0x0016EA41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EA40(void)
{

loc_0016EA40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016EA50
 * Original: 0x0016EA50 - 0x0016EAD5 (133 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016EA50: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x406) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 8), 0x406 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EAD4; /* je: equal / zero */

loc_0016EA5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x51DFF4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x804);
    _fb = (uint32_t)(0x51E010) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x51E010;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x51DF60;

loc_0016EA73: ;
    eax = MEM32(0x51DFE0);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016EA80u); RECOMP_ABI_CALL(0x001CE640u, sub_001CE640); /* call 0x001CE640 */

loc_0016EA80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51DFA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x51DFA0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016EA73; /* jl: less (signed <) */

loc_0016EA8B: ;
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016EAA4; /* je: equal / zero */

loc_0016EA97: ;
    ecx = MEM32(edi);
    edx = MEM32(esi + 4);
    MEM32(edi + ecx * 4 + 4) = edx;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0016EAB4;

loc_0016EAA4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016EAB4; /* je: equal / zero */

loc_0016EAAB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016EAB1u); RECOMP_ABI_CALL(0x001BA030u, sub_001BA030); /* call 0x001BA030 */

loc_0016EAB1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016EAB4: ;
    ecx = MEM32(esi + 0x48);
    ecx = ecx & 0xFFFFFBFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = 0;
    MEM32(esi + 0x48) = ecx;
    eax = MEM32(0x51DFFC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x51DFFC) = eax;
    POP32(esp, esi);

loc_0016EAD4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016EAE0
 * Original: 0x0016EAE0 - 0x0016EAF9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016EAE0: ;
    eax = MEM32(0x51E004);
    ecx = MEM32(esp + 4);
    edx = MEM32(0x51D90C);
    MEM32(edx + eax * 4) = ecx;
    MEM32(0x51E004) = MEM32(0x51E004) + 1;
    _fa = (uint32_t)(MEM32(0x51E004)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0016EB00
 * Original: 0x0016EB00 - 0x0016EB45 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016EB00: ;
    eax = MEM32(0x51E004);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016EB39; /* jle: less or equal (signed <=) */

loc_0016EB0C: ;
    /* nop */

loc_0016EB10: ;
    eax = MEM32(0x51D90C);
    ecx = MEM32(eax + esi * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x534414); PUSH32(esp, 0x0016EB1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016EB19u); } /* indirect call */
    }

loc_0016EB1F: ;
    edx = MEM32(0x51D90C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + esi * 4) = 0;
    eax = MEM32(0x51E004);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016EB10; /* jl: less (signed <) */

loc_0016EB39: ;
    MEM32(0x51E004) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016EB50
 * Original: 0x0016EB50 - 0x0016EB51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EB50(void)
{

loc_0016EB50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016EB60
 * Original: 0x0016EB60 - 0x0016EB61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EB60(void)
{

loc_0016EB60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016EB70
 * Original: 0x0016EB70 - 0x0016EB73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016EB70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016EB80
 * Original: 0x0016EB80 - 0x0016EB87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EB80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016EB80: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016EB90
 * Original: 0x0016EB90 - 0x0016EB91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EB90(void)
{

loc_0016EB90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016EBA0
 * Original: 0x0016EBA0 - 0x0016EBAA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EBA0(void)
{

loc_0016EBA0: ;
    eax = MEM32(esp + 4);
    MEM32(0x3788AC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016EBB0
 * Original: 0x0016EBB0 - 0x0016EBB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EBB0(void)
{

loc_0016EBB0: ;
    eax = MEM32(0x3788AC);
    esp += 4; return; /* ret */

}

/**
 * sub_0016EBC0
 * Original: 0x0016EBC0 - 0x0016EBCA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EBC0(void)
{

loc_0016EBC0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x51E008) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0016EBD0
 * Original: 0x0016EBD0 - 0x0016EBD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EBD0(void)
{

loc_0016EBD0: ;
    SET_LO8(eax, MEM8(0x51E008));
    esp += 4; return; /* ret */

}

/**
 * sub_0016EBE0
 * Original: 0x0016EBE0 - 0x0016EBEA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EBE0(void)
{

loc_0016EBE0: ;
    eax = MEM32(esp + 4);
    MEM32(0x3788B0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016EBF0
 * Original: 0x0016EBF0 - 0x0016EBF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EBF0(void)
{

loc_0016EBF0: ;
    eax = MEM32(0x3788B0);
    esp += 4; return; /* ret */

}

/**
 * sub_0016EC00
 * Original: 0x0016EC00 - 0x0016EC01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EC00(void)
{

loc_0016EC00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016EC10
 * Original: 0x0016EC10 - 0x0016EC37 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EC10(void)
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

loc_0016EC10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51DFCC);
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016EC2Fu); RECOMP_ABI_CALL(0x001C6420u, sub_001C6420); /* call 0x001C6420 */

loc_0016EC2F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
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
 * sub_0016EC40
 * Original: 0x0016EC40 - 0x0016EC67 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EC40(void)
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

loc_0016EC40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51DFCC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016EC5Fu); RECOMP_ABI_CALL(0x001C6420u, sub_001C6420); /* call 0x001C6420 */

loc_0016EC5F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
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
 * sub_0016EC70
 * Original: 0x0016EC70 - 0x0016EC7A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EC70(void)
{

loc_0016EC70: ;
    eax = MEM32(esp + 4);
    MEM32(0x3788B4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016EC80
 * Original: 0x0016EC80 - 0x0016ECCA (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EC80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016EC80: ;
    eax = MEM32(0x3788B4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x0016EC8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016EC86u); } /* indirect call */
    }

loc_0016EC8C: ;
    MEM32(0x51DFEC) = eax;
    PUSH32(esp, 0x0016EC96u); RECOMP_ABI_CALL(0x001BA402u, sub_001BA402); /* call 0x001BA402 */

loc_0016EC96: ;
    ecx = MEM32(0x3788B4);
    edx = MEM32(0x51DFEC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x320F44);
    PUSH32(esp, eax);
    MEM32(0x51DFF0) = eax;
    PUSH32(esp, 0x0016ECC6u); RECOMP_ABI_CALL(0x001BA214u, sub_001BA214); /* call 0x001BA214 */

loc_0016ECC6: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016ECD0
 * Original: 0x0016ECD0 - 0x0016ECD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ECD0(void)
{

loc_0016ECD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016ECE0
 * Original: 0x0016ECE0 - 0x0016ECE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ECE0(void)
{

loc_0016ECE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016ECF0
 * Original: 0x0016ECF0 - 0x0016ECF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ECF0(void)
{

loc_0016ECF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016ED00
 * Original: 0x0016ED00 - 0x0016ED06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ED00(void)
{

loc_0016ED00: ;
    eax = 0x51DEF8;
    esp += 4; return; /* ret */

}

/**
 * sub_0016ED10
 * Original: 0x0016ED10 - 0x0016ED27 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ED10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016ED10: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x17) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016ED30
 * Original: 0x0016ED30 - 0x0016ED35 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ED30(void)
{

loc_0016ED30: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0016ED40
 * Original: 0x0016ED40 - 0x0016ED45 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ED40(void)
{

loc_0016ED40: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    esp += 4; return; /* ret */

}

/**
 * sub_0016ED50
 * Original: 0x0016ED50 - 0x0016ED62 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ED50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016ED50: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016ED5E; /* je: equal / zero */

loc_0016ED58: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0016ED5E: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0016ED70
 * Original: 0x0016ED70 - 0x0016ED74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ED70(void)
{

loc_0016ED70: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0016ED80
 * Original: 0x0016ED80 - 0x0016ED87 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ED80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016ED80: ;
    eax = MEM32(ecx + eax * 8 + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016ED90
 * Original: 0x0016ED90 - 0x0016EE1F (143 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ED90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016ED90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x94);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016EDA7; /* jne: not equal / not zero */

loc_0016EDA1: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0016EDA7: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x336000);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0016EDC6u); RECOMP_ABI_CALL(0x001C5630u, sub_001C5630); /* call 0x001C5630 */

loc_0016EDC6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016EE03; /* je: equal / zero */

loc_0016EDCA: ;
    /* nop */

loc_0016EDD0: ;
    eax = MEM32(esp + 0x14);
    ebx = eax;
    eax = MEM32(eax + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016EDE2u); RECOMP_ABI_CALL(0x002BF4AAu, sub_002BF4AA); /* call 0x002BF4AA */

loc_0016EDE2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016EE0A; /* je: equal / zero */

loc_0016EDE9: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x336000);
    ecx = esi;
    PUSH32(esp, 0x0016EDFFu); RECOMP_ABI_CALL(0x001C5630u, sub_001C5630); /* call 0x001C5630 */

loc_0016EDFF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016EDD0; /* jne: not equal / not zero */

loc_0016EE03: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0016EE0A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xA8) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016EE18; /* jle: less or equal (signed <=) */

loc_0016EE12: ;
    MEM32(ebp + 0xA8) = edi;

loc_0016EE18: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016EE20
 * Original: 0x0016EE20 - 0x0016EE96 (118 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016EE20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xC);
    edi = MEM32(eax + 0x94);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x336000);
    ecx = edi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0016EE50u); RECOMP_ABI_CALL(0x001C5630u, sub_001C5630); /* call 0x001C5630 */

loc_0016EE50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016EE93; /* je: equal / zero */

loc_0016EE54: ;
    PUSH32(esp, esi);
    goto loc_0016EE60;

    /* nop */
    edi = edi;

loc_0016EE60: ;
    eax = MEM32(esp + 0x10);
    esi = eax;
    eax = MEM32(eax + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016EE72u); RECOMP_ABI_CALL(0x002BF4AAu, sub_002BF4AA); /* call 0x002BF4AA */

loc_0016EE72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + eax * 4) = esi;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x336000);
    ecx = edi;
    PUSH32(esp, 0x0016EE8Eu); RECOMP_ABI_CALL(0x001C5630u, sub_001C5630); /* call 0x001C5630 */

loc_0016EE8E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016EE60; /* jne: not equal / not zero */

loc_0016EE92: ;
    POP32(esp, esi);

loc_0016EE93: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016EEA0
 * Original: 0x0016EEA0 - 0x0016EF92 (242 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016EEA0: ;
    edx = esp + -256;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0016EEB0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016EEB0; /* jne: not equal / not zero */

loc_0016EEBA: ;
    PUSH32(esp, edi);
    edi = esp + 0xC;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016EEC0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016EEC0; /* jne: not equal / not zero */

loc_0016EEC8: ;
    SET_LO16(eax, MEM16(0x320F60));
    SET_LO8(ecx, MEM8(0x320F62));
    MEM16(edi) = LO16(eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 4);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM8(edi + 2) = LO8(ecx);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016EEF4u); RECOMP_ABI_CALL(0x001B8B3Bu, sub_001B8B3B); /* call 0x001B8B3B */

loc_0016EEF4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016EF8A; /* je: equal / zero */

loc_0016EEFF: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x81) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x81;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x0016EF10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016EF0Au); } /* indirect call */
    }

loc_0016EF10: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(ebx + 4);
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    edi = eax + 0x7F;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0x90) = eax;
    edi = edi & 0xFFFFFF80u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x8C) = edi;
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
    ecx = edx;
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
    eax = MEM32(ebx + 0x8C);
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(ecx + eax + 1) = 0;
    esi = MEM32(ebx + 0x8C);
    PUSH32(esp, 0x30);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x0016EF5Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0016EF56u); } /* indirect call */
    }

loc_0016EF5C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016EF81; /* je: equal / zero */

loc_0016EF63: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0016EF72u); RECOMP_ABI_CALL(0x001C60A0u, sub_001C60A0); /* call 0x001C60A0 */

loc_0016EF72: ;
    POP32(esp, esi);
    MEM32(ebx + 0x94) = eax;
    POP32(esp, edi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0016EF81: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x94) = eax;
    POP32(esp, esi);

loc_0016EF8A: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016EFA0
 * Original: 0x0016EFA0 - 0x0016F032 (146 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016EFA0: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x120);
    PUSH32(esp, edi);
    PUSH32(esp, 0x31B4EC);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x31C524);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016EFC9u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0016EFC9: ;
    eax = MEM32(esi + 4);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016EFD7u); RECOMP_ABI_CALL(0x001B8C29u, sub_001B8C29); /* call 0x001B8C29 */

loc_0016EFD7: ;
    esi = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016F018; /* jle: less or equal (signed <=) */

loc_0016EFE5: ;
    ebp = esi + 0x14;

loc_0016EFE8: ;
    edi = MEM32(ebp);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016EFF9u); RECOMP_ABI_CALL(0x001B3500u, sub_001B3500); /* call 0x001B3500 */

loc_0016EFF9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016EFFFu); RECOMP_ABI_CALL(0x002BF4AAu, sub_002BF4AA); /* call 0x002BF4AA */

loc_0016EFFF: ;
    ecx = MEM32(esp + 0x138);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016F025; /* je: equal / zero */

loc_0016F00D: ;
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016EFE8; /* jl: less (signed <) */

loc_0016F018: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0016F025: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016F040
 * Original: 0x0016F040 - 0x0016F055 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F040(void)
{

loc_0016F040: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(0x51DFCC);
    PUSH32(esp, 0x0016F054u); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_0016F054: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F060
 * Original: 0x0016F060 - 0x0016F074 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F060: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016F06Fu); RECOMP_ABI_CALL(0x0016ED90u, sub_0016ED90); /* call 0x0016ED90 */

loc_0016F06F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016F080
 * Original: 0x0016F080 - 0x0016F29C (540 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x51DF58);
    PUSH32(esp, ebx);
    ebx = MEM32(0x51DFD4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F09Fu); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_0016F09F: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 0x207);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F0AFu); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_0016F0AF: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F0BCu); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_0016F0BC: ;
    eax = MEM32(0x51DFA0);
    esi = eax + 4;
    edi = eax;
    eax = MEM32(0x51DF58);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F0D3u); RECOMP_ABI_CALL(0x001CF050u, sub_001CF050); /* call 0x001CF050 */

loc_0016F0D3: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F0DDu); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_0016F0DD: ;
    ecx = MEM32(0x51DFCC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F0E8u); RECOMP_ABI_CALL(0x001C7340u, sub_001C7340); /* call 0x001C7340 */

loc_0016F0E8: ;
    esi = eax;
    ecx = 0x10;
    edi = esp + 0x30;
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
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F0FEu); RECOMP_ABI_CALL(0x001C9CC0u, sub_001C9CC0); /* call 0x001C9CC0 */

loc_0016F0FE: ;
    edi = MEM32(0x51DFA0);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5C;
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
    ecx = MEM32(0x51DFA0);
    PUSH32(esp, 5);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F128u); RECOMP_ABI_CALL(0x001D0BF0u, sub_001D0BF0); /* call 0x001D0BF0 */

loc_0016F128: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    ecx = eax;
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x51DFCC);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F171u); RECOMP_ABI_CALL(0x001C6420u, sub_001C6420); /* call 0x001C6420 */

loc_0016F171: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x51DFA0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F199u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_0016F199: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = esp + 0x1C;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, edx);
    ecx = MEM32(0x51DFA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F1C7u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_0016F1C7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x51DFA0);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F1F8u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_0016F1F8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x51DFA0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F220u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_0016F220: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x51DFA0);
    edx = esp + 0x24;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F251u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_0016F251: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x51DFA0);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F27Fu); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_0016F27F: ;
    ecx = MEM32(0x51DFA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F28Au); RECOMP_ABI_CALL(0x001D0700u, sub_001D0700); /* call 0x001D0700 */

loc_0016F28A: ;
    ecx = MEM32(0x51DFA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016F295u); RECOMP_ABI_CALL(0x001D0780u, sub_001D0780); /* call 0x001D0780 */

loc_0016F295: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016F2A0
 * Original: 0x0016F2A0 - 0x0016F3B3 (275 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F2A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016F2D6; /* je: equal / zero */

loc_0016F2BB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    eax = edi;
    if (CMP_GE(_fas, _fbs)) eax = esi; /* cmovge */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x14);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((0x17) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x7F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0016F2D6: ;
    ecx = MEM32(esp + 0x24);
    eax = ecx;
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016F321; /* ja: above (unsigned >) */

loc_0016F2E7: ;
    edx = ZX8(MEM8(eax + 0x16F3CC));
    { uint32_t _jt = MEM32(edx * 4 + 0x16F3B4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0016F2F5u) goto loc_0016F2F5;
    if (_jt == 0x0016F2FDu) goto loc_0016F2FD;
    if (_jt == 0x0016F304u) goto loc_0016F304;
    if (_jt == 0x0016F313u) goto loc_0016F313;
    if (_jt == 0x0016F31Au) goto loc_0016F31A;
    if (_jt == 0x0016F321u) goto loc_0016F321;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016F2F5: ;
    MEM32(esp + 0x10) = 0x20;

loc_0016F2FD: ;
    ebx = 8;
    goto loc_0016F330;

loc_0016F304: ;
    MEM32(esp + 0x10) = 0x20;
    ebx = 4;
    goto loc_0016F330;

loc_0016F313: ;
    ebx = 0x10;
    goto loc_0016F330;

loc_0016F31A: ;
    ebx = 0x20;
    goto loc_0016F330;

loc_0016F321: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x320F70);
    { uint32_t _icall_target = MEM32(0x534424); PUSH32(esp, 0x0016F32Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0016F327u); } /* indirect call */
    }

loc_0016F32D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016F330: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016F342u); RECOMP_ABI_CALL(0x001B3970u, sub_001B3970); /* call 0x001B3970 */

loc_0016F342: ;
    ecx = MEM32(0x51DFF0);
    ecx = ecx | MEM32(esp + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    edi = eax;
    PUSH32(esp, 0x80);
    edx = edi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x320F64);
    PUSH32(esp, 0x0016F364u); RECOMP_ABI_CALL(0x001B9F5Bu, sub_001B9F5B); /* call 0x001B9F5B */

loc_0016F364: ;
    esi = eax;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x40);
    ecx = edx;
    edx = MEM32(esp + 0x50);
    PUSH32(esp, 0);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016F395u); RECOMP_ABI_CALL(0x001B3A30u, sub_001B3A30); /* call 0x001B3A30 */

loc_0016F395: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    SET_LO8(eax, MEM8(esp + 0x24));
    POP32(esp, edi);
    MEM8(esi) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016F450
 * Original: 0x0016F450 - 0x0016F505 (181 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F450(void)
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

loc_0016F450: ;
    fp_push(MEMD(0x320F90)); /* fld double */
    PUSH32(esp, ebx);
    fp_push(0.69314718055994530942); /* fldln2 */
    PUSH32(esp, ebp);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) / fp_top()); /* fdivr dword ptr [0x2fe99c] */
    fp_push((double)SMEM32(ebp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2FE99C)); /* fsub dword ptr [0x2fe99c] */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x0016F480u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016F480: ;
    ecx = eax;
    eax = MEM32(esp + 0x18);
    fp_push((double)SMEM32(eax)); /* fild */
    esi = 2;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2FE99C)); /* fsub dword ptr [0x2fe99c] */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x0016F4A2u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016F4A2: ;
    fp_pop(); /* fstp st(0) */
    ecx = eax;
    edi = 2;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0016F4BDu); RECOMP_ABI_CALL(0x0016F2A0u, sub_0016F2A0); /* call 0x0016F2A0 */

loc_0016F4BD: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0016F4C5u); RECOMP_ABI_CALL(0x001B3CB0u, sub_001B3CB0); /* call 0x001B3CB0 */

loc_0016F4C5: ;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016F4D7; /* je: equal / zero */

loc_0016F4D0: ;
    edx = MEM32(eax + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016F4DA;

loc_0016F4D7: ;
    edx = eax + 0x10;

loc_0016F4DA: ;
    ecx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0016F4E6: ;
    MEM32(edx + eax * 4) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016F4E6; /* jl: less (signed <) */

loc_0016F4F5: ;
    edx = MEM32(esp + 0x18);
    MEM32(ebp) = esi;
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016F510
 * Original: 0x0016F510 - 0x0016F5DF (207 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016F510: ;
    eax = MEM32(0x51DFDC);
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x51DF60);
    MEM32(0x51DFD0) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x51DFDC) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016F538u); RECOMP_ABI_CALL(0x001CE640u, sub_001CE640); /* call 0x001CE640 */

loc_0016F538: ;
    eax = 3;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016F556u); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_0016F556: ;
    ecx = MEM32(0x51DFA4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016F562u); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_0016F562: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(0x51DF58);
    if (CMP_EQ(_fa, _fb)) goto loc_0016F577; /* je: equal / zero */

loc_0016F570: ;
    PUSH32(esp, 0x207);
    goto loc_0016F57C;

loc_0016F577: ;
    PUSH32(esp, 0x203);

loc_0016F57C: ;
    PUSH32(esp, 0x0016F581u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_0016F581: ;
    eax = MEM32(0x51DFA4);
    ecx = MEM32(0x51DF58);
    esi = eax + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0016F599u); RECOMP_ABI_CALL(0x001CF050u, sub_001CF050); /* call 0x001CF050 */

loc_0016F599: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016F5A3u); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_0016F5A3: ;
    edi = MEM32(0x51DFA4);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = 0x51DEB8;
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
    SET_LO8(ecx, MEM8(esp + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(0x51DFA4);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016F5D2u); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_0016F5D2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0016F5D9u); RECOMP_ABI_CALL(0x0016E870u, sub_0016E870); /* call 0x0016E870 */

loc_0016F5D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016F5E0
 * Original: 0x0016F5E0 - 0x0016F614 (52 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F5E0(void)
{

loc_0016F5E0: ;
    ecx = MEM32(0x51DFA4);
    PUSH32(esp, 0x0016F5EBu); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_0016F5EB: ;
    ecx = MEM32(0x51DFA4);
    PUSH32(esp, 0x0016F5F6u); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_0016F5F6: ;
    eax = MEM32(0x51DFD0);
    ecx = MEM32(eax * 4 + 0x51DF60);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016F609u); RECOMP_ABI_CALL(0x001CE640u, sub_001CE640); /* call 0x001CE640 */

loc_0016F609: ;
    MEM32(0x51DFD0) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F620
 * Original: 0x0016F620 - 0x0016F643 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F620(void)
{

loc_0016F620: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51DFA4);
    edx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016F642u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_0016F642: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016F650
 * Original: 0x0016F650 - 0x0016F693 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F650(void)
{

loc_0016F650: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016F65Fu); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_0016F65F: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 0x207);
    PUSH32(esp, 0x0016F66Fu); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_0016F66F: ;
    eax = MEM32(0x51DFA4);
    esi = eax + 4;
    edi = eax;
    eax = MEM32(0x51DF58);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016F686u); RECOMP_ABI_CALL(0x001CF050u, sub_001CF050); /* call 0x001CF050 */

loc_0016F686: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016F690u); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_0016F690: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016F6A0
 * Original: 0x0016F6A0 - 0x0016F7DD (317 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F6A0: ;
    ecx = MEM32(0x51DFD8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0016F6E9; /* jle: less or equal (signed <=) */

loc_0016F6B9: ;
    esi = MEM32(0x51DEB4);
    ecx = esi;

loc_0016F6C1: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016F6D3; /* je: equal / zero */

loc_0016F6C6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016F6C1; /* jl: less (signed <) */

loc_0016F6D1: ;
    goto loc_0016F6E9;

loc_0016F6D3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    MEM32(eax + esi) = 1;
    edx = MEM32(0x51DEB4);
    ebx = eax + edx;

loc_0016F6E9: ;
    eax = MEM32(esp + 0x110);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x118);
    ecx = ebx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = 0;
    eax = ebp;
    edx = ecx + 0xC;
    goto loc_0016F710;

    /* nop */

loc_0016F710: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016F710; /* jne: not equal / not zero */

loc_0016F71A: ;
    eax = ebp;
    PUSH32(esp, 0x0016F721u); RECOMP_ABI_CALL(0x0016EEA0u, sub_0016EEA0); /* call 0x0016EEA0 */

loc_0016F721: ;
    _fa = (uint32_t)(MEM32(0x534464)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16E600) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x534464), 0x16E600 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016F736; /* jne: not equal / not zero */

loc_0016F72D: ;
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0x0016F736u); RECOMP_ABI_CALL(0x0016E130u, sub_0016E130); /* call 0x0016E130 */

loc_0016F736: ;
    esi = esp + 0x10;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_0016F740: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016F740; /* jne: not equal / not zero */

loc_0016F74A: ;
    edi = esp + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0016F750: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016F750; /* jne: not equal / not zero */

loc_0016F758: ;
    edx = MEM32(0x320FA0);
    SET_LO8(eax, MEM8(0x320FA4));
    MEM32(edi) = edx;
    ecx = esp + 0x10;
    MEM8(edi + 4) = LO8(eax);
    edx = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016F776u); RECOMP_ABI_CALL(0x001B8C29u, sub_001B8C29); /* call 0x001B8C29 */

loc_0016F776: ;
    ecx = MEM32(esp + 0x124);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = ebp;
    POP32(esp, ebp);

loc_0016F785: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016F785; /* jne: not equal / not zero */

loc_0016F78F: ;
    edi = esp + 0xC;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016F794: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016F794; /* jne: not equal / not zero */

loc_0016F79C: ;
    edx = MEM32(0x320F98);
    SET_LO16(eax, MEM16(0x320F9C));
    SET_LO8(ecx, MEM8(0x320F9E));
    MEM32(edi) = edx;
    MEM16(edi + 4) = LO16(eax);
    edx = esp + 0xC;
    MEM8(edi + 6) = LO8(ecx);
    eax = MEM32(ebx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016F7C5u); RECOMP_ABI_CALL(0x001B8C29u, sub_001B8C29); /* call 0x001B8C29 */

loc_0016F7C5: ;
    ecx = MEM32(esp + 0x124);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016F7E0
 * Original: 0x0016F7E0 - 0x0016F9C4 (484 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F7E0(void)
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

loc_0016F7E0: ;
    _fb = (uint32_t)(0xA8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xAA0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0xA0;
    PUSH32(esp, 0x320FA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016F804u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0016F804: ;
    PUSH32(esp, esi);
    ecx = esp + 0x1AC;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016F817u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0016F817: ;
    edx = MEM32(esp + 0xAB8);
    PUSH32(esp, edx);
    ecx = 0x200;
    ebx = esp + 0x2B8;
    PUSH32(esp, 0x0016F830u); RECOMP_ABI_CALL(0x0016EE20u, sub_0016EE20); /* call 0x0016EE20 */

loc_0016F830: ;
    fp_push(MEMD(0x320F90)); /* fld double */
    fp_push(0.69314718055994530942); /* fldln2 */
    esi = MEM32(esp + 0xAC4);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) / fp_top()); /* fdivr dword ptr [0x2fe99c] */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x0016F866u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016F866: ;
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    edx = 2;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_push(0.69314718055994530942); /* fldln2 */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x0016F8BAu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016F8BA: ;
    fp_pop(); /* fstp st(0) */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = 2;
    ecx = eax;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;

loc_0016F923: ;
    esi = MEM32(esp + edi * 4 + 0x29C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016F9A8; /* je: equal / zero */

loc_0016F92E: ;
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016F942u); RECOMP_ABI_CALL(0x001CC190u, sub_001CC190); /* call 0x001CC190 */

loc_0016F942: ;
    ebx = MEM32(eax);
    edx = esp + 0x9C;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016F958u); RECOMP_ABI_CALL(0x001CC200u, sub_001CC200); /* call 0x001CC200 */

loc_0016F958: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016F98C; /* je: equal / zero */

loc_0016F95E: ;
    edi = edi;

loc_0016F960: ;
    edi = MEM32(ebx + 0xC);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016F973u); RECOMP_ABI_CALL(0x001B2DE0u, sub_001B2DE0); /* call 0x001B2DE0 */

loc_0016F973: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    ecx = 0x10;
    esi = esp + 0x5C;
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
    if (CMP_NE(_fa, _fb)) goto loc_0016F960; /* jne: not equal / not zero */

loc_0016F988: ;
    edi = MEM32(esp + 0x10);

loc_0016F98C: ;
    eax = MEM32(esp + 0xAA8);
    PUSH32(esp, eax);
    ecx = esp + 0x1A0;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + edi * 4 + 0x2A4);
    PUSH32(esp, 0x0016F9A8u); RECOMP_ABI_CALL(0x001CC160u, sub_001CC160); /* call 0x001CC160 */

loc_0016F9A8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x200 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0016F923; /* jl: less (signed <) */

loc_0016F9B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016F9D0
 * Original: 0x0016F9D0 - 0x0016FA2A (90 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016F9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F9D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x31E1C4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0016F9EEu); RECOMP_ABI_CALL(0x001CC190u, sub_001CC190); /* call 0x001CC190 */

loc_0016F9EE: ;
    esi = MEM32(eax);
    PUSH32(esp, 0x31E1C4);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0016FA01u); RECOMP_ABI_CALL(0x001CC200u, sub_001CC200); /* call 0x001CC200 */

loc_0016FA01: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FA22; /* je: equal / zero */

loc_0016FA07: ;
    edi = MEM32(esi + 0xC);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0016FA12u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_0016FA12: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0016FA1Bu); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_0016FA1B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FA07; /* jne: not equal / not zero */

loc_0016FA22: ;
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
 * sub_0016FA30
 * Original: 0x0016FA30 - 0x0016FC48 (536 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016FA30: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 1 (32-bit) */
    edx = MEM32(0x51DD90);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0016FA72; /* jne: not equal / not zero */

loc_0016FA3F: ;
    ecx = MEM32(esp + 0x10);
    eax = edx + edx * 8;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x51D910) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x51D914) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0016FA6F; /* jne: not equal / not zero */

loc_0016FA5D: ;
    edi = eax + 0x51D918;
    ecx = 0x10;
    esi = 0x51DEF8;
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

loc_0016FA6F: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0016FAC7;

loc_0016FA72: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016FC2F; /* jle: less or equal (signed <=) */

loc_0016FA7C: ;
    esi = MEM32(esp + 0xC);
    ecx = 0x51D914;

loc_0016FA85: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FA93; /* je: equal / zero */

loc_0016FA89: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016FA85; /* jl: less (signed <) */

loc_0016FA91: ;
    goto loc_0016FABE;

loc_0016FA93: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + eax * 8;
    edx = edx + edx * 8;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    eax = ecx + 0x51D958;
    PUSH32(esp, eax);
    ecx = ecx + 0x51D910;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016FAB5u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0016FAB5: ;
    edx = MEM32(0x51DD90);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016FABE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016FC2F; /* jle: less or equal (signed <=) */

loc_0016FAC6: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016FAC7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x51DD90) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0016FC2F; /* jle: less or equal (signed <=) */

loc_0016FAD5: ;
    ecx = MEM32(0x51DFC8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016FAE6u); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_0016FAE6: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(0x3788A0);
    MEMF(0x51DFB8) = xmm0.f[0]; /* movss */
    MEMF(0x51DFBC) = xmm0.f[0]; /* movss */
    MEMF(0x51DFC0) = xmm0.f[0]; /* movss */
    MEMF(0x51DFC4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    MEMF(0x51DFA8) = xmm0.f[0]; /* movss */
    MEMF(0x51DFAC) = xmm0.f[0]; /* movss */
    MEMF(0x51DFB0) = xmm0.f[0]; /* movss */
    MEMF(0x51DFB4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016FB3Du); RECOMP_ABI_CALL(0x0016F080u, sub_0016F080); /* call 0x0016F080 */

loc_0016FB3D: ;
    eax = MEM32(0x51DD90);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016FC18; /* jle: less or equal (signed <=) */

loc_0016FB4F: ;
    PUSH32(esp, ebx);
    ebx = 0x51D914;

loc_0016FB55: ;
    eax = MEM32(ebx + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FB89; /* jne: not equal / not zero */

loc_0016FB5C: ;
    esi = MEM32(ebx);
    PUSH32(esp, 0x207);
    eax = esi;
    PUSH32(esp, 0x0016FB6Au); RECOMP_ABI_CALL(0x0016F9D0u, sub_0016F9D0); /* call 0x0016F9D0 */

loc_0016FB6A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016FB78u); RECOMP_ABI_CALL(0x001CBBC0u, sub_001CBBC0); /* call 0x001CBBC0 */

loc_0016FB78: ;
    PUSH32(esp, 0x203);
    eax = esi;
    PUSH32(esp, 0x0016FB84u); RECOMP_ABI_CALL(0x0016F9D0u, sub_0016F9D0); /* call 0x0016F9D0 */

loc_0016FB84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016FC06;

loc_0016FB89: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016FB96u); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_0016FB96: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 0x207);
    PUSH32(esp, 0x0016FBA6u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_0016FBA6: ;
    eax = MEM32(0x51DFA4);
    ecx = MEM32(0x51DF58);
    esi = eax + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0016FBBEu); RECOMP_ABI_CALL(0x001CF050u, sub_001CF050); /* call 0x001CF050 */

loc_0016FBBE: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016FBC8u); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_0016FBC8: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 0x203);
    PUSH32(esp, 0x0016FBD8u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_0016FBD8: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016FBE5u); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_0016FBE5: ;
    eax = MEM32(0x51DFA4);
    esi = eax + 4;
    edi = eax;
    eax = MEM32(0x51DF58);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016FBFCu); RECOMP_ABI_CALL(0x001CF050u, sub_001CF050); /* call 0x001CF050 */

loc_0016FBFC: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016FC06u); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_0016FC06: ;
    eax = MEM32(0x51DD90);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x48;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016FB55; /* jl: less (signed <) */

loc_0016FC17: ;
    POP32(esp, ebx);

loc_0016FC18: ;
    ecx = MEM32(0x51DFC8);
    PUSH32(esp, 0x1010101);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016FC2Bu); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_0016FC2B: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0016FC2F: ;
    SET_LO8(eax, MEM8(0x51DD94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FC45; /* jne: not equal / not zero */

loc_0016FC38: ;
    ecx = MEM32(0x51DFCC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0016FC45u); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_0016FC45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016FC50
 * Original: 0x0016FC50 - 0x0016FCC9 (121 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016FC50: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016FC5Fu); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_0016FC5F: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 0x203);
    PUSH32(esp, 0x0016FC6Fu); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_0016FC6F: ;
    eax = MEM32(0x51DFA4);
    esi = eax + 4;
    edi = eax;
    eax = MEM32(0x51DF58);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016FC86u); RECOMP_ABI_CALL(0x001CF050u, sub_001CF050); /* call 0x001CF050 */

loc_0016FC86: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016FC90u); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_0016FC90: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FCB6; /* je: equal / zero */

loc_0016FC98: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016FCA5u); RECOMP_ABI_CALL(0x0016FA30u, sub_0016FA30); /* call 0x0016FA30 */

loc_0016FCA5: ;
    eax = MEM32(esi + 0x48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0x48) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0016FCB6: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x48);
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(eax + 0x48) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016FCD0
 * Original: 0x0016FCD0 - 0x0016FF08 (568 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016FCD0: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20C);
    eax = esi;
    PUSH32(esp, edi);
    edx = eax + 1;

loc_0016FCE5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FCE5; /* jne: not equal / not zero */

loc_0016FCEC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016FD19; /* jb: below (unsigned <) */

loc_0016FCF6: ;
    goto loc_0016FD00;

    /* nop */
    /* nop */

loc_0016FD00: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FDB2; /* je: equal / zero */

loc_0016FD0B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FDB2; /* je: equal / zero */

loc_0016FD14: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0016FD00; /* jae: above or equal (unsigned >=) */

loc_0016FD19: ;
    edx = esp + 0x10C;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0016FD24: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FD24; /* jne: not equal / not zero */

loc_0016FD2E: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, 0x320FDC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016FD3Eu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0016FD3E: ;
    eax = esp + 0x18;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_0016FD48: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FD48; /* jne: not equal / not zero */

loc_0016FD4F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0;
    if ((_fa == 0)) goto loc_0016FD69; /* je: equal / zero */

loc_0016FD58: ;
    _fa = (uint32_t)(MEM8(esp + ecx + 0xC)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + ecx + 0xC), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FD64; /* jne: not equal / not zero */

loc_0016FD5F: ;
    MEM8(esp + ecx + 0xC) = 0x5C;

loc_0016FD64: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016FD58; /* jb: below (unsigned <) */

loc_0016FD69: ;
    ecx = MEM32(0x51D908);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x220;
    goto loc_0016FD80;

    /* nop */

loc_0016FD80: ;
    edx = MEM32(eax + -544);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FDDE; /* je: equal / zero */

loc_0016FD8A: ;
    edx = MEM32(eax + -272);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FDD3; /* je: equal / zero */

loc_0016FD94: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FDD6; /* je: equal / zero */

loc_0016FD99: ;
    edx = MEM32(eax + 0x110);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FDDB; /* je: equal / zero */

loc_0016FDA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x440) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x440;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016FD80; /* jb: below (unsigned <) */

loc_0016FDB0: ;
    goto loc_0016FDDE;

loc_0016FDB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016FD19; /* jb: below (unsigned <) */

loc_0016FDBA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 0x10C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0016FDC4: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FDC4; /* jne: not equal / not zero */

loc_0016FDCE: ;
    goto loc_0016FD2E;

loc_0016FDD3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0016FDDE;

loc_0016FDD6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016FDDE;

loc_0016FDDB: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016FDDE: ;
    ebx = MEM32(esp + 0x214);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x110);
    edi = esi + ecx + 4;
    ecx = esp + 0x214;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FE27; /* je: equal / zero */

loc_0016FDFA: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FE18; /* je: equal / zero */

loc_0016FE00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016FE06u); RECOMP_ABI_CALL(0x0027A1D0u, sub_0027A1D0); /* call 0x0027A1D0 */

loc_0016FE06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FE18; /* jne: not equal / not zero */

loc_0016FE0D: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016FE15u); RECOMP_ABI_CALL(0x0027A4D0u, sub_0027A4D0); /* call 0x0027A4D0 */

loc_0016FE15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016FE18: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016FE27; /* je: equal / zero */

loc_0016FE1E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0016FE24u); RECOMP_ABI_CALL(0x0027A1C0u, sub_0027A1C0); /* call 0x0027A1C0 */

loc_0016FE24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016FE27: ;
    eax = MEM32(0x51D908);
    ecx = esp + 0x10C;
    edx = esi + eax + 8;

loc_0016FE37: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FE37; /* jne: not equal / not zero */

loc_0016FE41: ;
    SET_LO8(eax, MEM8(0x51E008));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FEAA; /* je: equal / zero */

loc_0016FE4A: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016FE54u); RECOMP_ABI_CALL(0x001B7FEBu, sub_001B7FEB); /* call 0x001B7FEB */

loc_0016FE54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016FEAA; /* je: equal / zero */

loc_0016FE5B: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016FE65u); RECOMP_ABI_CALL(0x001B803Fu, sub_001B803F); /* call 0x001B803F */

loc_0016FE65: ;
    edx = MEM32(0x3788AC);
    edi = eax;
    eax = MEM32(0x51FAB8);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x320FC8);
    PUSH32(esp, 0x0016FE85u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016FE85: ;
    ecx = MEM32(0x51D908);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + ecx + 0x10C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016FED7; /* je: equal / zero */

loc_0016FE99: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016FEA5u); RECOMP_ABI_CALL(0x001B6AE6u, sub_001B6AE6); /* call 0x001B6AE6 */

loc_0016FEA5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016FECA;

loc_0016FEAA: ;
    edx = MEM32(0x51FAB8);
    edx = edx | MEM32(0x3788AC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016FEC7u); RECOMP_ABI_CALL(0x001B6A7Cu, sub_001B6A7C); /* call 0x001B6A7C */

loc_0016FEC7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016FECA: ;
    ecx = MEM32(0x51D908);
    MEM32(esi + ecx + 0x108) = eax;

loc_0016FED7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edx = MEM32(0x51D908);
    MEM32(esi + edx) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0016FEFE; /* je: equal / zero */

loc_0016FEE8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0016FEEEu); RECOMP_ABI_CALL(0x0027A1D0u, sub_0027A1D0); /* call 0x0027A1D0 */

loc_0016FEEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FEFE; /* jne: not equal / not zero */

loc_0016FEF5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0016FEFBu); RECOMP_ABI_CALL(0x0027A4D0u, sub_0027A4D0); /* call 0x0027A4D0 */

loc_0016FEFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016FEFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016FF10
 * Original: 0x0016FF10 - 0x0017012F (543 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016FF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016FF10: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0016FF20: ;
    eax = MEM32(0x51D908);
    _fa = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170113; /* je: equal / zero */

loc_0016FF2E: ;
    eax = MEM32(esi + eax + 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016FF3Bu); RECOMP_ABI_CALL(0x001B6C20u, sub_001B6C20); /* call 0x001B6C20 */

loc_0016FF3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016FF51; /* jne: not equal / not zero */

loc_0016FF43: ;
    ecx = MEM32(0x51D908);
    MEM32(esi + ecx) = ebx;
    goto loc_00170113;

loc_0016FF51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170113; /* jne: not equal / not zero */

loc_0016FF5A: ;
    ecx = MEM32(0x51D908);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    edx = MEM32(esi + ecx + 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016FF7Fu); RECOMP_ABI_CALL(0x001B6C56u, sub_001B6C56); /* call 0x001B6C56 */

loc_0016FF7F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001700CD; /* jne: not equal / not zero */

loc_0016FF8B: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170007; /* jne: not equal / not zero */

loc_0016FF91: ;
    eax = MEM32(0x51D908);
    eax = MEM32(esi + eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016FFAF; /* je: equal / zero */

loc_0016FFA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016FFACu); RECOMP_ABI_CALL(0x0027A1C0u, sub_0027A1C0); /* call 0x0027A1C0 */

loc_0016FFAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016FFAF: ;
    PUSH32(esp, 0x0016FFB4u); RECOMP_ABI_CALL(0x00278B80u, sub_00278B80); /* call 0x00278B80 */

loc_0016FFB4: ;
    ecx = MEM32(0x51D908);
    MEM32(esi + ecx) = ebx;
    eax = MEM32(0x51D908);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi + eax + 4;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x0016FFD7u); RECOMP_ABI_CALL(0x00170560u, sub_00170560); /* call 0x00170560 */

loc_0016FFD7: ;
    ecx = MEM32(0x51D908);
    eax = MEM32(esi + ecx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170113; /* je: equal / zero */

loc_0016FFEC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016FFF2u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0016FFF2: ;
    edx = MEM32(0x51D908);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + edx + 0x10C) = ebx;
    goto loc_00170113;

loc_00170007: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170011u); RECOMP_ABI_CALL(0x001B2AA2u, sub_001B2AA2); /* call 0x001B2AA2 */

loc_00170011: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170076; /* je: equal / zero */

loc_00170018: ;
    ecx = MEM32(0x51D908);
    edi = MEM32(esp + 0xC);
    edx = esi + ecx + 8;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, 0x320FE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170036u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00170036: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00170040u); RECOMP_ABI_CALL(0x001B2B2Eu, sub_001B2B2E); /* call 0x001B2B2E */

loc_00170040: ;
    edx = MEM32(0x51FAB8);
    edx = edx | MEM32(0x3788B0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170062u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00170062: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0017006Du); RECOMP_ABI_CALL(0x001B2A9Du, sub_001B2A9D); /* call 0x001B2A9D */

loc_0017006D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00170073u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00170073: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00170076: ;
    eax = MEM32(0x51D908);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    ecx = esi + eax + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00170094u); RECOMP_ABI_CALL(0x0016F6A0u, sub_0016F6A0); /* call 0x0016F6A0 */

loc_00170094: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(eax + 8) = 1;
    eax = MEM32(esp + 0x20);
    edx = MEM32(0x51D908);
    PUSH32(esp, eax);
    eax = MEM32(esi + edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001700C5; /* je: equal / zero */

loc_001700BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001700C2u); RECOMP_ABI_CALL(0x0027A1C0u, sub_0027A1C0); /* call 0x0027A1C0 */

loc_001700C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001700C5: ;
    PUSH32(esp, 0x001700CAu); RECOMP_ABI_CALL(0x00278B80u, sub_00278B80); /* call 0x00278B80 */

loc_001700CA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001700CD: ;
    eax = MEM32(0x51D908);
    edi = esi + eax + 4;
    ecx = esp + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001700FE; /* je: equal / zero */

loc_001700DE: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001700FC; /* je: equal / zero */

loc_001700E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001700EAu); RECOMP_ABI_CALL(0x0027A1D0u, sub_0027A1D0); /* call 0x0027A1D0 */

loc_001700EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001700FC; /* jne: not equal / not zero */

loc_001700F1: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001700F9u); RECOMP_ABI_CALL(0x0027A4D0u, sub_0027A4D0); /* call 0x0027A4D0 */

loc_001700F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001700FC: ;
    MEM32(edi) = ebx;

loc_001700FE: ;
    eax = MEM32(0x51D908);
    MEM32(esi + eax) = ebx;
    ecx = MEM32(0x51D908);
    MEM32(esi + ecx + 0x10C) = ebx;

loc_00170113: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x110;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2200 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016FF20; /* jb: below (unsigned <) */

loc_00170125: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00170130
 * Original: 0x00170130 - 0x001701A4 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x94);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170175; /* je: equal / zero */

loc_00170143: ;
    ecx = edi;
    PUSH32(esp, 0x0017014Au); RECOMP_ABI_CALL(0x001C6150u, sub_001C6150); /* call 0x001C6150 */

loc_0017014A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x00170153u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0017014Du); } /* indirect call */
    }

loc_00170153: ;
    eax = MEM32(esi + 0x90);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534414); PUSH32(esp, 0x00170160u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0017015Au); } /* indirect call */
    }

loc_00170160: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;

loc_00170175: ;
    _fa = (uint32_t)(MEM32(0x534464)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16E600) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x534464), 0x16E600 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170198; /* jne: not equal / not zero */

loc_00170181: ;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x98), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170198; /* je: equal / zero */

loc_00170189: ;
    ecx = MEM32(esi + 0x9C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00170195u); RECOMP_ABI_CALL(0x00195807u, sub_00195807); /* call 0x00195807 */

loc_00170195: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00170198: ;
    POP32(esp, edi);
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001701B0
 * Original: 0x001701B0 - 0x001701E9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001701B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001701B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001701BBu); RECOMP_ABI_CALL(0x00170130u, sub_00170130); /* call 0x00170130 */

loc_001701BB: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001701E7; /* je: equal / zero */

loc_001701C7: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(0x51E004);
    PUSH32(esp, edi);
    edi = MEM32(0x51D90C);
    MEM32(edi + edx * 4) = ecx;
    MEM32(0x51E004) = MEM32(0x51E004) + 1;
    _fa = (uint32_t)(MEM32(0x51E004)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, edi);

loc_001701E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001701F0
 * Original: 0x001701F0 - 0x0017029C (172 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001701F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001701F0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017028B; /* jne: not equal / not zero */

loc_001701FC: ;
    xmm0 = XMM_SCALAR(MEMF(0x51DF4C)); /* movss */
    ecx = MEM32(esp + 4);
    MEMF(0x51DFB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x51DF50)); /* movss */
    MEMF(0x51DFBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x51DF54)); /* movss */
    MEMF(0x51DFC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x51DF48)); /* movss */
    MEMF(0x51DFC4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x51DF3C)); /* movss */
    MEMF(0x51DFA8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x51DF40)); /* movss */
    MEMF(0x51DFAC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x51DF44)); /* movss */
    MEMF(0x51DFB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x51DF38)); /* movss */
    PUSH32(esp, 0x51DEF8);
    MEMF(0x51DFB4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0017028Au); RECOMP_ABI_CALL(0x001CBBC0u, sub_001CBBC0); /* call 0x001CBBC0 */

loc_0017028A: ;
    esp += 4; return; /* ret */

loc_0017028B: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170298u); RECOMP_ABI_CALL(0x0016FA30u, sub_0016FA30); /* call 0x0016FA30 */

loc_00170298: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001702A0
 * Original: 0x001702A0 - 0x00170412 (370 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001702A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001702A0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x16E200;
    MEM32(0x534430) = 0x16FCD0;
    MEM32(0x534434) = 0x1701B0;
    MEM32(0x534438) = 0x16EC00;
    MEM32(0x53441C) = ecx;
    MEM32(0x534424) = 0x16E0C0;
    MEM32(0x53442C) = 0x16E0F0;
    MEM32(0x534428) = 0x16E100;
    MEM32(0x534440) = eax;
    MEM32(0x53444C) = eax;
    MEM32(0x534450) = 0x16E580;
    MEM32(0x534444) = 0x16E450;
    MEM32(0x534464) = 0x16E600;
    MEM32(0x534468) = 0x16E660;
    MEM32(0x53446C) = 0x16E670;
    MEM32(0x534470) = 0x16E6A0;
    MEM32(0x534474) = 0x16EFA0;
    MEM32(0x534478) = 0x16E1F0;
    MEM32(0x53447C) = 0x16F7E0;
    MEM32(0x53448C) = 0x16E820;
    MEM32(0x534488) = 0x16E700;
    MEM32(0x534420) = 0x16F040;
    MEM32(0x534480) = 0x16F060;
    MEM32(0x534484) = 0x16E970;
    MEM32(0x534490) = 0x1701F0;
    MEM32(0x534494) = 0x16E980;
    MEM32(0x53449C) = ecx;
    MEM32(0x5344A0) = 0x16E9B0;
    MEM32(0x534498) = 0x16E990;
    MEM32(0x534458) = 0x16EA20;
    MEM32(0x53445C) = 0x16EA50;
    MEM32(0x534460) = 0x16FC50;
    MEM32(0x534454) = 0x16E430;
    MEM32(0x534448) = 0x16E440;
    MEM32(0x5344A4) = 0x16E340;
    MEM32(0x5344A8) = 0x16E400;
    MEM32(0x53443C) = 0x16EB90;
    MEM32(0x5344B4) = 0x16EC10;
    MEM32(0x5344B8) = 0x16EC40;
    esp += 4; return; /* ret */

}

/**
 * sub_00170420
 * Original: 0x00170420 - 0x0017052A (266 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170420: ;
    eax = MEM32(0x534410);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    MEM32(0x51DFD8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0017043E; /* je: equal / zero */

loc_00170435: ;
    eax = MEM32(0x534414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170443; /* jne: not equal / not zero */

loc_0017043E: ;
    PUSH32(esp, 0x00170443u); RECOMP_ABI_CALL(0x001702A0u, sub_001702A0); /* call 0x001702A0 */

loc_00170443: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x00170452u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0017044Cu); } /* indirect call */
    }

loc_00170452: ;
    edi = eax;
    MEM32(0x51DEB4) = edi;
    ecx = MEM32(esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(0x51DFCC) = eax;
    eax = MEM32(esp + 0x18);
    edx = 0x51DD98;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51DFC8) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00170493: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170493; /* jne: not equal / not zero */

loc_0017049D: ;
    edx = MEM32(0x51DFD8);
    MEM32(0x51DFD0) = 0xFFFFFFFFu;
    MEM32(0x51DFD4) = 0xFFFF00FFu;
    MEM8(0x51DD94) = LO8(ecx);
    eax = MEM32(edx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x001704CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001704C4u); } /* indirect call */
    }

loc_001704CA: ;
    ecx = MEM32(0x51DFD8);
    edi = eax;
    MEM32(0x51DFF8) = edi;
    ecx = MEM32(ecx + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(0x51DFD8);
    ecx = MEM32(eax + 8);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x00170500u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001704FAu); } /* indirect call */
    }

loc_00170500: ;
    edx = MEM32(0x51DFD8);
    edi = eax;
    MEM32(0x51D90C) = edi;
    ecx = MEM32(edx + 8);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00170530
 * Original: 0x00170530 - 0x00170553 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170530: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170551; /* je: equal / zero */

loc_00170539: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017053Fu); RECOMP_ABI_CALL(0x0027A1D0u, sub_0027A1D0); /* call 0x0027A1D0 */

loc_0017053F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170551; /* jne: not equal / not zero */

loc_00170546: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017054Eu); RECOMP_ABI_CALL(0x0027A4D0u, sub_0027A4D0); /* call 0x0027A4D0 */

loc_0017054E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00170551: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00170560
 * Original: 0x00170560 - 0x001705A2 (66 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017059B; /* je: equal / zero */

loc_0017056C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017058A; /* je: equal / zero */

loc_00170572: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170578u); RECOMP_ABI_CALL(0x0027A1D0u, sub_0027A1D0); /* call 0x0027A1D0 */

loc_00170578: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017058A; /* jne: not equal / not zero */

loc_0017057F: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170587u); RECOMP_ABI_CALL(0x0027A4D0u, sub_0027A4D0); /* call 0x0027A4D0 */

loc_00170587: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0017058A: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0017059B; /* je: equal / zero */

loc_00170592: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170598u); RECOMP_ABI_CALL(0x0027A1C0u, sub_0027A1C0); /* call 0x0027A1C0 */

loc_00170598: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0017059B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001705B0
 * Original: 0x001705B0 - 0x0017060A (90 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001705B0(void)
{

loc_001705B0: ;
    eax = ecx;
    edx = 0x40;
    ecx = 0x100;
    MEM32(eax) = 0x200;
    MEM32(eax + 4) = 0x200;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = 0x180;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = 0x180;
    MEM32(eax + 0x24) = 0x20;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0x400;
    MEM32(eax + 0x30) = 0x80;
    MEM32(eax + 0x34) = 8;
    MEM8(eax + 0x38) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00170610
 * Original: 0x00170610 - 0x0017064C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170610: ;
    eax = MEM32(0x51FAB8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax | 0x480;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x320FEC);
    PUSH32(esp, 0x0017062Bu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0017062B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017064A; /* jne: not equal / not zero */

loc_00170632: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x320FEC);
    PUSH32(esp, 0x00170647u); RECOMP_ABI_CALL(0x001550D0u, sub_001550D0); /* call 0x001550D0 */

loc_00170647: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0017064A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00170650
 * Original: 0x00170650 - 0x00170655 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00170650: ;
    g_seh_ebp = ebp; sub_001551E0(); return; /* tail jmp 0x001551E0 */

}

/**
 * sub_00170660
 * Original: 0x00170660 - 0x001706CF (111 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170660: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00170695; /* jne: not equal / not zero */

loc_0017066A: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xA00000);
    PUSH32(esp, 0x320FF8);
    PUSH32(esp, 0x00170683u); RECOMP_ABI_CALL(0x001550D0u, sub_001550D0); /* call 0x001550D0 */

loc_00170683: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FABC) = esi;
    edi = 0xA00000;
    goto loc_00170699;

loc_00170695: ;
    edi = MEM32(esp + 0x10);

loc_00170699: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001706A0u); RECOMP_ABI_CALL(0x001C0283u, sub_001C0283); /* call 0x001C0283 */

loc_001706A0: ;
    PUSH32(esp, 0x001706A5u); RECOMP_ABI_CALL(0x001BA402u, sub_001BA402); /* call 0x001BA402 */

loc_001706A5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x320FF8);
    PUSH32(esp, eax);
    MEM32(0x51FAB8) = eax;
    PUSH32(esp, 0x001706C9u); RECOMP_ABI_CALL(0x001BA214u, sub_001BA214); /* call 0x001BA214 */

loc_001706C9: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001706D0
 * Original: 0x001706D0 - 0x00170729 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001706D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001706D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001706D6u); RECOMP_ABI_CALL(0x0016FF10u, sub_0016FF10); /* call 0x0016FF10 */

loc_001706D6: ;
    PUSH32(esp, 0x001706DBu); RECOMP_ABI_CALL(0x00170FC0u, sub_00170FC0); /* call 0x00170FC0 */

loc_001706DB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001706E3u); RECOMP_ABI_CALL(0x0027A020u, sub_0027A020); /* call 0x0027A020 */

loc_001706E3: ;
    PUSH32(esp, 0x001706E8u); RECOMP_ABI_CALL(0x00171990u, sub_00171990); /* call 0x00171990 */

loc_001706E8: ;
    eax = MEM32(0x51FAAC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001706F4u); RECOMP_ABI_CALL(0x00152100u, sub_00152100); /* call 0x00152100 */

loc_001706F4: ;
    eax = MEM32(0x51FAB8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170709; /* je: equal / zero */

loc_00170700: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170706u); RECOMP_ABI_CALL(0x001BA393u, sub_001BA393); /* call 0x001BA393 */

loc_00170706: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00170709: ;
    eax = MEM32(0x51FABC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017071B; /* je: equal / zero */

loc_00170712: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170718u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00170718: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0017071B: ;
    MEM32(0x51FAB8) = esi;
    MEM32(0x51FABC) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00170730
 * Original: 0x00170730 - 0x00170760 (48 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00170730: ;
    eax = MEM32(0x51FAD8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    MEM32(0x51FAD8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00170751; /* jne: not equal / not zero */

loc_00170742: ;
    PUSH32(esp, 0x00170747u); RECOMP_ABI_CALL(0x00277670u, sub_00277670); /* call 0x00277670 */

loc_00170747: ;
    MEM32(0x51FAD8) = 0;

loc_00170751: ;
    PUSH32(esp, 0x00170756u); RECOMP_ABI_CALL(0x0016EB00u, sub_0016EB00); /* call 0x0016EB00 */

loc_00170756: ;
    PUSH32(esp, 0x0017075Bu); RECOMP_ABI_CALL(0x0016FF10u, sub_0016FF10); /* call 0x0016FF10 */

loc_0017075B: ;
    g_seh_ebp = ebp; sub_00279D50(); return; /* tail jmp 0x00279D50 */

}

/**
 * sub_00170760
 * Original: 0x00170760 - 0x00170765 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00170760: ;
    g_seh_ebp = ebp; sub_00277470(); return; /* tail jmp 0x00277470 */

}

/**
 * sub_00170770
 * Original: 0x00170770 - 0x00170871 (257 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170770: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x32100C;
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
    ebx = 0x3021CE;
    if ((_flags == 0)) goto loc_001707F1; /* jne: not equal / not zero */

loc_00170791: ;
    eax = MEM32(0x321004);
    SET_LO8(ecx, MEM8(0x321008));
    MEM32(esp + 0x11) = edx;
    MEM32(esp + 0x15) = edx;
    MEM32(esp + 0x19) = edx;
    MEM16(esp + 0x1D) = LO16(edx);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    MEM8(esp + 0x1F) = LO8(edx);
    MEM8(esp + 0x10) = LO8(ecx);
    edx = eax + 1;

loc_001707C0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001707C0; /* jne: not equal / not zero */

loc_001707C7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x001707D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001707CBu); } /* indirect call */
    }

loc_001707D1: ;
    ecx = esp + 0x10;
    esi = eax;
    edx = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_001707E0: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001707E0; /* jne: not equal / not zero */

loc_001707EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001707F1: ;
    edi = 0x320F3C;
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
    if ((_flags == 0)) goto loc_00170841; /* jne: not equal / not zero */

loc_00170803: ;
    ebx = 0x3068D4;

loc_00170808: ;
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_00170810: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170810; /* jne: not equal / not zero */

loc_00170817: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x00170821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0017081Bu); } /* indirect call */
    }

loc_00170821: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00170830: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170830; /* jne: not equal / not zero */

loc_0017083A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00170841: ;
    ecx = MEM32(0x51FAA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170808; /* je: equal / zero */

loc_0017084B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00170853u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00170851u); } /* indirect call */
    }

loc_00170853: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0017085Du); RECOMP_ABI_CALL(0x0017B4A0u, sub_0017B4A0); /* call 0x0017B4A0 */

loc_0017085D: ;
    ecx = esp + 0xC;
    esi = eax;
    PUSH32(esp, 0x00170868u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00170868: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00170880
 * Original: 0x00170880 - 0x0017088C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00170880: ;
    eax = MEM32(0x51FAA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017088B; /* je: equal / zero */

loc_00170889: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_0017088B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00170890
 * Original: 0x00170890 - 0x0017089A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170890(void)
{

loc_00170890: ;
    eax = MEM32(esp + 4);
    MEM32(0x51FAA4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001708A0
 * Original: 0x001708A0 - 0x001708AA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001708A0(void)
{

loc_001708A0: ;
    eax = MEM32(esp + 4);
    MEM32(0x51FAA8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001708B0
 * Original: 0x001708B0 - 0x001708BA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001708B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001708B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001708B6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001708B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001708C0
 * Original: 0x001708C0 - 0x001708C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001708C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001708C0: ;
    fp_push(MEMF(0x38DC5C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001708D0
 * Original: 0x001708D0 - 0x001708DD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001708D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001708D0: ;
    fp_push((double)SMEM32(0x38DC60)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x321018)); /* fmul dword ptr [0x321018] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001708E0
 * Original: 0x001708E0 - 0x00170986 (166 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001708E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001708E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(0x38DC60); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x32101C); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x30FFF8); /* subss */
    PUSH32(esp, 0xC0A00000u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    ecx = esp + 0xC;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00170947u); RECOMP_ABI_CALL(0x001C7600u, sub_001C7600); /* call 0x001C7600 */

loc_00170947: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC60); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x321018); /* mulss */
    eax = MEM32(0x38DC5C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00170976u); RECOMP_ABI_CALL(0x001C95A0u, sub_001C95A0); /* call 0x001C95A0 */

loc_00170976: ;
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00170982u); RECOMP_ABI_CALL(0x001C71E0u, sub_001C71E0); /* call 0x001C71E0 */

loc_00170982: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00170990
 * Original: 0x00170990 - 0x00170A13 (131 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170990(void)
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

loc_00170990: ;
    fp_push((double)SMEM32(0x38DC64)); /* fild */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - (double)SMEM32(0x3788C4)); /* fisub dword ptr [0x3788c4] */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x8C4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    MEMF(0x51FAB0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(0x38DC60)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - (double)SMEM32(0x3788C8)); /* fisub dword ptr [0x3788c8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    MEMF(0x51FAB4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001709D7u); RECOMP_ABI_CALL(0x001C7340u, sub_001C7340); /* call 0x001C7340 */

loc_001709D7: ;
    edx = MEM32(0x51FAB0);
    esi = eax;
    ecx = 0x10;
    edi = esp + 0xC;
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
    ecx = MEM32(0x51FAB4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001709F8u); RECOMP_ABI_CALL(0x001708E0u, sub_001708E0); /* call 0x001708E0 */

loc_001709F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00170A00u); RECOMP_ABI_CALL(0x00277590u, sub_00277590); /* call 0x00277590 */

loc_00170A00: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00170A0Cu); RECOMP_ABI_CALL(0x001C71E0u, sub_001C71E0); /* call 0x001C71E0 */

loc_00170A0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00170A20
 * Original: 0x00170A20 - 0x00170AB8 (152 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170A20: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x9C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00170A35u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00170A35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x51FAC0;
    PUSH32(esp, 0x00170A50u); RECOMP_ABI_CALL(0x00081F50u, sub_00081F50); /* call 0x00081F50 */

loc_00170A50: ;
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x51FAC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x51FAC0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170A98; /* je: equal / zero */

loc_00170A5C: ;
    edx = MEM32(esp + 0xA4);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00170A6Du); RECOMP_ABI_CALL(0x0017B310u, sub_0017B310); /* call 0x0017B310 */

loc_00170A6D: ;
    PUSH32(esp, 0x3068D0);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00170A7Bu); RECOMP_ABI_CALL(0x0017B350u, sub_0017B350); /* call 0x0017B350 */

loc_00170A7B: ;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00170A83u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00170A80u); } /* indirect call */
    }

loc_00170A83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, 0x00170A8Fu); RECOMP_ABI_CALL(0x0017B410u, sub_0017B410); /* call 0x0017B410 */

loc_00170A8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00170A98: ;
    ecx = MEM32(esp + 0xA4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x321020);
    { uint32_t _icall_target = MEM32(0x534424); PUSH32(esp, 0x00170AACu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00170AA6u); } /* indirect call */
    }

loc_00170AAC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00170AC0
 * Original: 0x00170AC0 - 0x00170B7F (191 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170AC0: ;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xA8);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00170AD7u); RECOMP_ABI_CALL(0x0017B310u, sub_0017B310); /* call 0x0017B310 */

loc_00170AD7: ;
    PUSH32(esp, 0x2FE95C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00170AE5u); RECOMP_ABI_CALL(0x0017B350u, sub_0017B350); /* call 0x0017B350 */

loc_00170AE5: ;
    PUSH32(esp, 0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00170AF5u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00170AF5: ;
    edx = MEM32(esp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00170AFEu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00170AFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = 0x51FACC;
    PUSH32(esp, 0x00170B19u); RECOMP_ABI_CALL(0x00081F50u, sub_00081F50); /* call 0x00081F50 */

loc_00170B19: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x51FACC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x51FACC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170B5B; /* je: equal / zero */

loc_00170B25: ;
    PUSH32(esp, esi);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00170B33u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00170B30u); } /* indirect call */
    }

loc_00170B33: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x00170B3Du); RECOMP_ABI_CALL(0x0017B4A0u, sub_0017B4A0); /* call 0x0017B4A0 */

loc_00170B3D: ;
    ecx = esp + 0x10;
    esi = eax;
    PUSH32(esp, 0x00170B48u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00170B48: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00170B51u); RECOMP_ABI_CALL(0x0017B410u, sub_0017B410); /* call 0x0017B410 */

loc_00170B51: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00170B5B: ;
    edx = MEM32(esp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x321058);
    { uint32_t _icall_target = MEM32(0x534424); PUSH32(esp, 0x00170B6Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00170B64u); } /* indirect call */
    }

loc_00170B6A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, 0x00170B76u); RECOMP_ABI_CALL(0x0017B410u, sub_0017B410); /* call 0x0017B410 */

loc_00170B76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00170B80
 * Original: 0x00170B80 - 0x00170C7B (251 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170B80: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x31ED20);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, 0x31C524);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = 0x2F3A64;
    PUSH32(esp, 0x00170BA9u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00170BA9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00170BB1u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_00170BB1: ;
    ecx = eax;
    PUSH32(esp, 0x00170BB8u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_00170BB8: ;
    ecx = 0x389FD0;
    esi = eax;
    PUSH32(esp, 0x00170BC4u); RECOMP_ABI_CALL(0x000133F0u, sub_000133F0); /* call 0x000133F0 */

loc_00170BC4: ;
    edi = MEM32(eax + 0x8C4);
    PUSH32(esp, 0x00170BCFu); RECOMP_ABI_CALL(0x001702A0u, sub_001702A0); /* call 0x001702A0 */

loc_00170BCF: ;
    PUSH32(esp, 0x3788B8);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x534410) = 0x170610;
    MEM32(0x534414) = 0x170650;
    MEM32(0x534440) = 0x170A20;
    MEM32(0x534444) = 0x170AC0;
    MEM32(0x534450) = 0x170770;
    MEM32(0x53444C) = 0x170880;
    PUSH32(esp, 0x00170C1Cu); RECOMP_ABI_CALL(0x00171870u, sub_00171870); /* call 0x00171870 */

loc_00170C1C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, 0x00170C28u); RECOMP_ABI_CALL(0x001705B0u, sub_001705B0); /* call 0x001705B0 */

loc_00170C28: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170C32u); RECOMP_ABI_CALL(0x00279DD0u, sub_00279DD0); /* call 0x00279DD0 */

loc_00170C32: ;
    PUSH32(esp, 0x00170C37u); RECOMP_ABI_CALL(0x00277460u, sub_00277460); /* call 0x00277460 */

loc_00170C37: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00170C3Eu); RECOMP_ABI_CALL(0x00279D50u, sub_00279D50); /* call 0x00279D50 */

loc_00170C3E: ;
    PUSH32(esp, 0x00170C43u); RECOMP_ABI_CALL(0x0016FF10u, sub_0016FF10); /* call 0x0016FF10 */

loc_00170C43: ;
    PUSH32(esp, 0x31ED20);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, 0x321098);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00170C5Cu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00170C5C: ;
    PUSH32(esp, 0x51FAAC);
    PUSH32(esp, 0);
    eax = esp + 0x68;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170C6Fu); RECOMP_ABI_CALL(0x001520F0u, sub_001520F0); /* call 0x001520F0 */

loc_00170C6F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00170C80
 * Original: 0x00170C80 - 0x00170CA9 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170C80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = esp;
    MEM32(esp) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = 0x51FAC0;
    PUSH32(esp, 0x00170CA5u); RECOMP_ABI_CALL(0x00153CC0u, sub_00153CC0); /* call 0x00153CC0 */

loc_00170CA5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00170CB0
 * Original: 0x00170CB0 - 0x00170CD9 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170CB0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = esp;
    MEM32(esp) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = 0x51FACC;
    PUSH32(esp, 0x00170CD5u); RECOMP_ABI_CALL(0x00153CC0u, sub_00153CC0); /* call 0x00153CC0 */

loc_00170CD5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00170CE0
 * Original: 0x00170CE0 - 0x00170D17 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170CE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x51FAC0;
    PUSH32(esp, 0x00170CF7u); RECOMP_ABI_CALL(0x00170F60u, sub_00170F60); /* call 0x00170F60 */

loc_00170CF7: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax) = edx;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = 0x51FAC0;
    PUSH32(esp, 0x00170D13u); RECOMP_ABI_CALL(0x00170DE0u, sub_00170DE0); /* call 0x00170DE0 */

loc_00170D13: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00170D20
 * Original: 0x00170D20 - 0x00170D57 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170D20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x51FACC;
    PUSH32(esp, 0x00170D37u); RECOMP_ABI_CALL(0x00170F60u, sub_00170F60); /* call 0x00170F60 */

loc_00170D37: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax) = edx;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = 0x51FACC;
    PUSH32(esp, 0x00170D53u); RECOMP_ABI_CALL(0x00170EA0u, sub_00170EA0); /* call 0x00170EA0 */

loc_00170D53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00170D60
 * Original: 0x00170D60 - 0x00170D93 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170D60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00170D8E; /* je: equal / zero */

loc_00170D6C: ;
    PUSH32(esp, edi);
    /* nop */

loc_00170D70: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00170D7Bu); RECOMP_ABI_CALL(0x00170D60u, sub_00170D60); /* call 0x00170D60 */

loc_00170D7B: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00170D84u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00170D84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00170D70; /* jne: not equal / not zero */

loc_00170D8D: ;
    POP32(esp, edi);

loc_00170D8E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00170DA0
 * Original: 0x00170DA0 - 0x00170DD3 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170DA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00170DCE; /* je: equal / zero */

loc_00170DAC: ;
    PUSH32(esp, edi);
    /* nop */

loc_00170DB0: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00170DBBu); RECOMP_ABI_CALL(0x00170DA0u, sub_00170DA0); /* call 0x00170DA0 */

loc_00170DBB: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00170DC4u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00170DC4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00170DB0; /* jne: not equal / not zero */

loc_00170DCD: ;
    POP32(esp, edi);

loc_00170DCE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00170DE0
 * Original: 0x00170DE0 - 0x00170E9D (189 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170DE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170E2E; /* jne: not equal / not zero */

loc_00170DF4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170E2E; /* jne: not equal / not zero */

loc_00170DF8: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170E97; /* je: equal / zero */

loc_00170E03: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00170E0Eu); RECOMP_ABI_CALL(0x00170D60u, sub_00170D60); /* call 0x00170D60 */

loc_00170E0E: ;
    eax = MEM32(edi);
    MEM32(eax + 8) = eax;
    ecx = MEM32(edi);
    MEM32(ecx + 4) = 0;
    eax = MEM32(edi);
    MEM32(eax + 0xC) = eax;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00170E2E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170E97; /* je: equal / zero */

loc_00170E32: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00170E4F; /* je: equal / zero */

loc_00170E3B: ;
    esi = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170E68; /* je: equal / zero */

loc_00170E44: ;
    esi = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170E44; /* jne: not equal / not zero */

loc_00170E4D: ;
    goto loc_00170E68;

loc_00170E4F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170E61; /* jne: not equal / not zero */

loc_00170E57: ;
    esi = eax;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170E57; /* je: equal / zero */

loc_00170E61: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170E68; /* je: equal / zero */

loc_00170E66: ;
    esi = eax;

loc_00170E68: ;
    eax = MEM32(edi);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    edx = eax + 8;
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00170E7Cu); RECOMP_ABI_CALL(0x0003C160u, sub_0003C160); /* call 0x0003C160 */

loc_00170E7C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170E8C; /* je: equal / zero */

loc_00170E83: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170E89u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00170E89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00170E8C: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(edi + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00170E32; /* jne: not equal / not zero */

loc_00170E97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00170EA0
 * Original: 0x00170EA0 - 0x00170F5D (189 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170EA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170EEE; /* jne: not equal / not zero */

loc_00170EB4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170EEE; /* jne: not equal / not zero */

loc_00170EB8: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170F57; /* je: equal / zero */

loc_00170EC3: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00170ECEu); RECOMP_ABI_CALL(0x00170DA0u, sub_00170DA0); /* call 0x00170DA0 */

loc_00170ECE: ;
    eax = MEM32(edi);
    MEM32(eax + 8) = eax;
    ecx = MEM32(edi);
    MEM32(ecx + 4) = 0;
    eax = MEM32(edi);
    MEM32(eax + 0xC) = eax;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00170EEE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170F57; /* je: equal / zero */

loc_00170EF2: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00170F0F; /* je: equal / zero */

loc_00170EFB: ;
    esi = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170F28; /* je: equal / zero */

loc_00170F04: ;
    esi = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170F04; /* jne: not equal / not zero */

loc_00170F0D: ;
    goto loc_00170F28;

loc_00170F0F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170F21; /* jne: not equal / not zero */

loc_00170F17: ;
    esi = eax;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170F17; /* je: equal / zero */

loc_00170F21: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170F28; /* je: equal / zero */

loc_00170F26: ;
    esi = eax;

loc_00170F28: ;
    eax = MEM32(edi);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    edx = eax + 8;
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00170F3Cu); RECOMP_ABI_CALL(0x0003C160u, sub_0003C160); /* call 0x0003C160 */

loc_00170F3C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170F4C; /* je: equal / zero */

loc_00170F43: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00170F49u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00170F49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00170F4C: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(edi + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00170EF2; /* jne: not equal / not zero */

loc_00170F57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00170F60
 * Original: 0x00170F60 - 0x00170FB3 (83 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170F60: ;
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00170F89; /* je: equal / zero */

loc_00170F74: ;
    esi = MEM32(ebx);

loc_00170F76: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00170F82; /* jge: greater or equal (signed >=) */

loc_00170F7B: ;
    edi = eax;
    eax = MEM32(eax + 8);
    goto loc_00170F85;

loc_00170F82: ;
    eax = MEM32(eax + 0xC);

loc_00170F85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170F76; /* jne: not equal / not zero */

loc_00170F89: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170FA4; /* je: equal / zero */

loc_00170F8F: ;
    edx = MEM32(ebx);

loc_00170F91: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00170F9D; /* jl: less (signed <) */

loc_00170F96: ;
    ecx = eax;
    eax = MEM32(eax + 8);
    goto loc_00170FA0;

loc_00170F9D: ;
    eax = MEM32(eax + 0xC);

loc_00170FA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170F91; /* jne: not equal / not zero */

loc_00170FA4: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00170FC0
 * Original: 0x00170FC0 - 0x0017101A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00170FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00170FC0: ;
    PUSH32(esp, esi);

loc_00170FC1: ;
    PUSH32(esp, 0x00170FC6u); RECOMP_ABI_CALL(0x0016FF10u, sub_0016FF10); /* call 0x0016FF10 */

loc_00170FC6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00170FCDu); RECOMP_ABI_CALL(0x001BFB5Fu, sub_001BFB5F); /* call 0x001BFB5F */

loc_00170FCD: ;
    eax = MEM32(0x51D908);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x220;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 8;

loc_00170FE1: ;
    esi = MEM32(eax + -544);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170FED; /* je: equal / zero */

loc_00170FEB: ;
    SET_LO8(ecx, 1);

loc_00170FED: ;
    esi = MEM32(eax + -272);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00170FF9; /* je: equal / zero */

loc_00170FF7: ;
    SET_LO8(ecx, 1);

loc_00170FF9: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00171000; /* je: equal / zero */

loc_00170FFE: ;
    SET_LO8(ecx, 1);

loc_00171000: ;
    esi = MEM32(eax + 0x110);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017100C; /* je: equal / zero */

loc_0017100A: ;
    SET_LO8(ecx, 1);

loc_0017100C: ;
    _fb = (uint32_t)(0x440) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x440;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00170FE1; /* jne: not equal / not zero */

loc_00171014: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00170FC1; /* jne: not equal / not zero */

loc_00171018: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00171020
 * Original: 0x00171020 - 0x0017102F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171020(void)
{

loc_00171020: ;
    PUSH32(esp, ecx);
    MEM8(esp) = LO8(eax);
    MEM8(esp + 1) = 0;
    SET_LO16(eax, MEM16(esp));
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00171030
 * Original: 0x00171030 - 0x0017104D (29 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171030: ;
    SET_LO8(ecx, MEM8(edx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017104C; /* je: equal / zero */

loc_00171038: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017104C; /* je: equal / zero */

loc_0017103D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017104C; /* je: equal / zero */

loc_00171042: ;
    SET_LO8(ecx, MEM8(edx + 1));
    eax = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00171038; /* jne: not equal / not zero */

loc_0017104C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00171050
 * Original: 0x00171050 - 0x00171081 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171050: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x48);
    eax = MEM32(esi + 0x60);
    edx = edx & 0xFFFFFBFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x48) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00171079; /* je: equal / zero */

loc_00171068: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534414); PUSH32(esp, 0x0017106Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00171069u); } /* indirect call */
    }

loc_0017106F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x60) = 0;

loc_00171079: ;
    MEM32(0x51DFFC) = MEM32(0x51DFFC) - 1;
    _fa = (uint32_t)(MEM32(0x51DFFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00171090
 * Original: 0x00171090 - 0x0017109A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171090: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00171096u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00171096: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001710A0
 * Original: 0x001710A0 - 0x0017126A (458 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001710A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001710A0: ;
    _fb = (uint32_t)(0x888) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x888;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x890);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x894);
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0017122B; /* je: equal / zero */

loc_001710C6: ;
    SET_LO8(ebx, MEM8(ebp));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x24 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001710F1; /* je: equal / zero */

loc_001710CE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x23 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001710F1; /* je: equal / zero */

loc_001710D3: ;
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x11) = 0;
    SET_LO16(ecx, MEM16(esp + 0x10));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    goto loc_00171221;

loc_001710F1: ;
    esi = ebp + 1;
    edx = esi;
    SET_LO8(ecx, MEM8(edx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017123B; /* je: equal / zero */

loc_00171102: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00171116; /* je: equal / zero */

loc_00171107: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00171116; /* je: equal / zero */

loc_0017110C: ;
    SET_LO8(ecx, MEM8(edx + 1));
    eax = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00171102; /* jne: not equal / not zero */

loc_00171116: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017123B; /* je: equal / zero */

loc_0017111E: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = eax;
    edx = edi + 1;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00171132u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00171132: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x24 (8-bit) */
    MEM8(esp + edi + 0x19) = 0;
    esi = 0x3210B0;
    if (CMP_NE(_fa, _fb)) goto loc_00171185; /* jne: not equal / not zero */

loc_00171144: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0017114Eu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0017114E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00171154u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00171154: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0x3FF);
    esi = esp + 0x9C;
    if (CMP_EQ(_fa, _fb)) goto loc_00171175; /* je: equal / zero */

loc_00171167: ;
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00171170u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_00171170: ;
    goto loc_001711FB;

loc_00171175: ;
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00171183u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_00171183: ;
    goto loc_001711FB;

loc_00171185: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x23 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001711FE; /* jne: not equal / not zero */

loc_0017118A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00171194u); RECOMP_ABI_CALL(0x002BF4AAu, sub_002BF4AA); /* call 0x002BF4AA */

loc_00171194: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    PUSH32(esp, 0x0017119Eu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0017119E: ;
    ecx = MEM32(eax + 0x10D0);
    _fb = (uint32_t)(0x10D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10D0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001711B2; /* jne: not equal / not zero */

loc_001711AD: ;
    esi = eax + 4;
    goto loc_001711D9;

loc_001711B2: ;
    ecx = MEM32(eax + 0x3EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001711CD; /* jbe: below or equal (unsigned <=) */

loc_001711BC: ;
    _fb = (uint32_t)(0x3F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001711C1: ;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = eax; /* cmove */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001711C1; /* jne: not equal / not zero */

loc_001711CD: ;
    PUSH32(esp, 0x001711D2u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001711D2: ;
    MEM8(eax + 0x10A7) = 1;

loc_001711D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001711FE; /* jne: not equal / not zero */

loc_001711DD: ;
    edx = edi + 2;
    esi = esp + 0x98;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001711F1u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_001711F1: ;
    MEM16(esp + edi * 2 + 0xA8) = 0;

loc_001711FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001711FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00171204u); RECOMP_ABI_CALL(0x002BF6D1u, sub_002BF6D1); /* call 0x002BF6D1 */

loc_00171204: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00171211u); RECOMP_ABI_CALL(0x002BF685u, sub_002BF685); /* call 0x002BF685 */

loc_00171211: ;
    ecx = esi + ebx * 2;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    ebp = edi + ebp + 2;
    eax = ecx;

loc_00171221: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001710C6; /* jne: not equal / not zero */

loc_0017122B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(eax) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x888) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x888;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0017123B: ;
    eax = MEM32(esp + 0x8A0);
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x11) = 0;
    edx = ZX16(MEM16(esp + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, 0x3210A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017125Cu); RECOMP_ABI_CALL(0x002BFD20u, sub_002BFD20); /* call 0x002BFD20 */

loc_0017125C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x888) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x888;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00171270
 * Original: 0x00171270 - 0x0017153F (719 bytes, 225 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171270(void)
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

loc_00171270: ;
    _fb = (uint32_t)(0x814) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x814;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x51DFD8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_001712B3; /* jle: less or equal (signed <=) */

loc_0017128D: ;
    edx = MEM32(0x51DFF8);
    ecx = edx + 0x48;

loc_00171296: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0x400 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001712A8; /* je: equal / zero */

loc_0017129E: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00171296; /* jl: less (signed <) */

loc_001712A6: ;
    goto loc_001712AF;

loc_001712A8: ;
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x64);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001712AF: ;
    MEM32(esp + 0xC) = ebp;

loc_001712B3: ;
    edx = MEM32(0x51DFFC);
    edi = MEM32(esp + 0x824);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x51DFFC) = edx;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001712D9u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001712D9: ;
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(edi + 0x48), g_mxcsr, 1); /* cvttss2si */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ebx = esi + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001712F2u); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_001712F2: ;
    ecx = eax;
    PUSH32(esp, 0x001712F9u); RECOMP_ABI_CALL(0x001579A0u, sub_001579A0); /* call 0x001579A0 */

loc_001712F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00171314; /* jne: not equal / not zero */

loc_001712FD: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(edi + 0x48), g_mxcsr, 1); /* cvttss2si */
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3210B4);
    { uint32_t _icall_target = MEM32(0x534424); PUSH32(esp, 0x00171311u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0017130Bu); } /* indirect call */
    }

loc_00171311: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00171314: ;
    eax = MEM32(edi + 0x2C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(edi + 0x2E));
    eax = eax & 0xFF0000FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edi + 0x2D));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x48) = MEM32(esi + 0x48) | 0x400;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(edi + 4);
    MEM32(esi + 8) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ebx);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(edi + 0x14);
    MEM32(esi + 0x34) = edx;
    MEM32(esi + 0x30) = eax;
    fp_push(MEMF(edi + 0x48)); /* fld float */
    PUSH32(esp, 0x0017135Eu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0017135E: ;
    MEM8(esi + 0x48) = LO8(eax);
    ecx = MEM32(edi + 0x18);
    eax = MEM32(esi + 0x48);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(edi + 0x38);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x48) = eax;
    ecx = MEM32(edi + 0x3C);
    ecx = ecx << 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x48) = ecx;
    edx = MEM32(edi + 0x14);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(edi + 0x24);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x48) = ecx;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(edi + 0x30);
    MEM32(edi + 0x1C) = ecx;
    MEM32(esi + 0x40) = edx;
    eax = MEM32(edi + 0x34);
    MEM32(esi + 0x44) = eax;
    eax = MEM32(edi + 0x54);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x24 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001713F3; /* je: equal / zero */

loc_001713C4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x23 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001713F3; /* je: equal / zero */

loc_001713C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001713CFu); RECOMP_ABI_CALL(0x00154650u, sub_00154650); /* call 0x00154650 */

loc_001713CF: ;
    ebp = eax;
    ecx = ebp + ebp + 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x001713DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001713D6u); } /* indirect call */
    }

loc_001713DC: ;
    PUSH32(esp, ebp);
    MEM32(esi + 0x60) = eax;
    edx = MEM32(edi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001713EAu); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_001713EA: ;
    ebp = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00171423;

loc_001713F3: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001713FEu); RECOMP_ABI_CALL(0x001710A0u, sub_001710A0); /* call 0x001710A0 */

loc_001713FE: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00171408u); RECOMP_ABI_CALL(0x002BF6D1u, sub_002BF6D1); /* call 0x002BF6D1 */

loc_00171408: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x00171412u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0017140Cu); } /* indirect call */
    }

loc_00171412: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x60) = eax;
    PUSH32(esp, 0x00171420u); RECOMP_ABI_CALL(0x002BF685u, sub_002BF685); /* call 0x002BF685 */

loc_00171420: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00171423: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38DC5C); /* mulss */
    ecx = MEM32(esi);
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38DC58); /* mulss */
    eax = MEM32(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    edx = MEM32(esi + 0x30);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xC); /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    PUSH32(esp, edx);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x14); /* addss */
    PUSH32(esp, eax);
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0017148Eu); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_0017148E: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001714E4; /* je: equal / zero */

loc_00171496: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38DC5C); /* mulss */
    edx = MEM32(esi);
    eax = MEM32(esi + 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001714BDu); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_001714BD: ;
    ecx = eax;
    PUSH32(esp, 0x001714C4u); RECOMP_ABI_CALL(0x00157AF0u, sub_00157AF0); /* call 0x00157AF0 */

loc_001714C4: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    goto loc_0017151E;

loc_001714E4: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x60);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00171506u); RECOMP_ABI_CALL(0x001B5450u, sub_001B5450); /* call 0x001B5450 */

loc_00171506: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0017151E: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x51DFF8);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x814) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x814;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00171540
 * Original: 0x00171540 - 0x001716EC (428 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171540(void)
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

loc_00171540: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001716E7; /* je: equal / zero */

loc_00171550: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001716E7; /* je: equal / zero */

loc_00171559: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00171586; /* je: equal / zero */

loc_00171563: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0017156D; /* je: equal / zero */

loc_00171566: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    goto loc_00171590;

loc_0017156D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    edi = 2;
    goto loc_00171590;

loc_00171586: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    edi = 1;

loc_00171590: ;
    edx = MEM32(esi + 0xC);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001715AEu); RECOMP_ABI_CALL(0x0016E7C0u, sub_0016E7C0); /* call 0x0016E7C0 */

loc_001715AE: ;
    fp_push(MEMF(0x51FAB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x51FAB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001715D2u); RECOMP_ABI_CALL(0x001708C0u, sub_001708C0); /* call 0x001708C0 */

loc_001715D2: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) - fp_top()); /* fsubr dword ptr [0x2fe99c] */
    fp_push((double)SMEM32(0x38DC64)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001715F7u); RECOMP_ABI_CALL(0x001708D0u, sub_001708D0); /* call 0x001708D0 */

loc_001715F7: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) - fp_top()); /* fsubr dword ptr [0x2fe99c] */
    ecx = MEM32(esi);
    fp_push((double)SMEM32(0x38DC60)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0017161Eu); RECOMP_ABI_CALL(0x000AD050u, sub_000AD050); /* call 0x000AD050 */

loc_0017161E: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ebx = eax;
    PUSH32(esp, 0x00171631u); RECOMP_ABI_CALL(0x000AD6A0u, sub_000AD6A0); /* call 0x000AD6A0 */

loc_00171631: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x00171640u); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_00171640: ;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00171648u); RECOMP_ABI_CALL(0x000AD040u, sub_000AD040); /* call 0x000AD040 */

loc_00171648: ;
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00171651u); RECOMP_ABI_CALL(0x0016E870u, sub_0016E870); /* call 0x0016E870 */

loc_00171651: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017165Cu); RECOMP_ABI_CALL(0x000AD5D0u, sub_000AD5D0); /* call 0x000AD5D0 */

loc_0017165C: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00171683; /* je: equal / zero */

loc_00171664: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017167Au); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_0017167A: ;
    ecx = eax;
    PUSH32(esp, 0x00171681u); RECOMP_ABI_CALL(0x00157740u, sub_00157740); /* call 0x00157740 */

loc_00171681: ;
    goto loc_00171698;

loc_00171683: ;
    ecx = MEM32(esi + 0x60);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00171698u); RECOMP_ABI_CALL(0x000AD700u, sub_000AD700); /* call 0x000AD700 */

loc_00171698: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001716A9u); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_001716A9: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001716B1u); RECOMP_ABI_CALL(0x000AD040u, sub_000AD040); /* call 0x000AD040 */

loc_001716B1: ;
    PUSH32(esp, 0x001716B6u); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_001716B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001716E7; /* jne: not equal / not zero */

loc_001716BD: ;
    PUSH32(esp, 0x001716C2u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001716C2: ;
    SET_LO8(ecx, MEM8(eax + 0x1670));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001716E7; /* je: equal / zero */

loc_001716CC: ;
    PUSH32(esp, 0x001716D1u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001716D1: ;
    SET_LO8(ecx, MEM8(eax + 0x10A7));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001716E7; /* je: equal / zero */

loc_001716DB: ;
    PUSH32(esp, 0x001716E0u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001716E0: ;
    MEM8(eax + 0x10A6) = 1;

loc_001716E7: ;
    POP32(esp, esi);
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
 * sub_001716F0
 * Original: 0x001716F0 - 0x0017186D (381 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001716F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001716F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3210F0);
    { uint32_t _icall_target = MEM32(0x534424); PUSH32(esp, 0x001716FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001716F7u); } /* indirect call */
    }

loc_001716FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2204);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x00171708u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00171702u); } /* indirect call */
    }

loc_00171708: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00171748; /* je: equal / zero */

loc_00171711: ;
    edx = eax + 4;
    MEM32(eax) = 0x20;
    eax = edx;
    ecx = 0x20;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00171724: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0x108) = esi;
    MEM8(eax + 8) = LO8(ebx);
    MEM32(eax + 0x10C) = ebx;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00171724; /* jne: not equal / not zero */

loc_00171740: ;
    MEM32(0x51D908) = edx;
    goto loc_0017174E;

loc_00171748: ;
    MEM32(0x51D908) = ebx;

loc_0017174E: ;
    PUSH32(esp, 0x51DFB8);
    PUSH32(esp, 0x3210E0);
    PUSH32(esp, 0x0017175Du); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0017175D: ;
    PUSH32(esp, 0x51DFA8);
    PUSH32(esp, 0x3210D0);
    PUSH32(esp, 0x0017176Cu); RECOMP_ABI_CALL(0x001C5670u, sub_001C5670); /* call 0x001C5670 */

loc_0017176C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4C);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x00171775u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0017176Fu); } /* indirect call */
    }

loc_00171775: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00171785; /* je: equal / zero */

loc_0017177C: ;
    ecx = eax;
    PUSH32(esp, 0x00171783u); RECOMP_ABI_CALL(0x001CF930u, sub_001CF930); /* call 0x001CF930 */

loc_00171783: ;
    goto loc_00171787;

loc_00171785: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00171787: ;
    PUSH32(esp, 1);
    ecx = eax;
    MEM32(0x51DF58) = eax;
    PUSH32(esp, 0x00171795u); RECOMP_ABI_CALL(0x001CF090u, sub_001CF090); /* call 0x001CF090 */

loc_00171795: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001717A2u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_001717A2: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001717AFu); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_001717AF: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001717BCu); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_001717BC: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, 0x203);
    PUSH32(esp, 0x001717CCu); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_001717CC: ;
    ecx = MEM32(0x51DF58);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001717D8u); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_001717D8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAC);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001717E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001717DEu); } /* indirect call */
    }

loc_001717E4: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001717FC; /* je: equal / zero */

loc_001717ED: ;
    ecx = esi;
    PUSH32(esp, 0x001717F4u); RECOMP_ABI_CALL(0x001D05C0u, sub_001D05C0); /* call 0x001D05C0 */

loc_001717F4: ;
    MEM32(0x51DFA0) = esi;
    goto loc_00171802;

loc_001717FC: ;
    MEM32(0x51DFA0) = ebx;

loc_00171802: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB0);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x0017180Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00171808u); } /* indirect call */
    }

loc_0017180E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00171826; /* je: equal / zero */

loc_00171817: ;
    ecx = esi;
    PUSH32(esp, 0x0017181Eu); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_0017181E: ;
    MEM32(0x51DFA4) = esi;
    goto loc_0017182C;

loc_00171826: ;
    MEM32(0x51DFA4) = ebx;

loc_0017182C: ;
    ecx = MEM32(0x51DFA0);
    PUSH32(esp, 0x00171837u); RECOMP_ABI_CALL(0x001D0630u, sub_001D0630); /* call 0x001D0630 */

loc_00171837: ;
    ecx = MEM32(0x51DFA4);
    PUSH32(esp, 0x00171842u); RECOMP_ABI_CALL(0x001D0830u, sub_001D0830); /* call 0x001D0830 */

loc_00171842: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    POP32(esp, esi);
    MEMF(0x51DFB8) = xmm0.f[0]; /* movss */
    MEMF(0x51DFBC) = xmm0.f[0]; /* movss */
    MEMF(0x51DFC0) = xmm0.f[0]; /* movss */
    MEMF(0x51DFC4) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00171870
 * Original: 0x00171870 - 0x0017198D (285 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    MEM32(0x51DFD8) = esi;
    MEM32(0x534458) = 0x171270;
    MEM32(0x53445C) = 0x171050;
    MEM32(0x534460) = 0x171540;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x001718A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001718A3u); } /* indirect call */
    }

loc_001718A9: ;
    edi = eax;
    MEM32(0x51DEB4) = edi;
    ecx = MEM32(esi);
    esi = MEM32(esp + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = 0x51DD98;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51DFCC) = eax;
    MEM32(0x51DFC8) = ecx;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001718F0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001718F0; /* jne: not equal / not zero */

loc_001718FA: ;
    PUSH32(esp, esi);
    MEM32(0x51DFD0) = 0xFFFFFFFFu;
    MEM32(0x51DFD4) = 0xFFFF00FFu;
    MEM8(0x51DD94) = LO8(ecx);
    PUSH32(esp, 0x0017191Au); RECOMP_ABI_CALL(0x001716F0u, sub_001716F0); /* call 0x001716F0 */

loc_0017191A: ;
    edx = MEM32(0x51DFD8);
    eax = MEM32(edx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x0017192Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00171927u); } /* indirect call */
    }

loc_0017192D: ;
    ecx = MEM32(0x51DFD8);
    edi = eax;
    MEM32(0x51DFF8) = edi;
    ecx = MEM32(ecx + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(0x51DFD8);
    ecx = MEM32(eax + 8);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x00171963u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0017195Du); } /* indirect call */
    }

loc_00171963: ;
    edx = MEM32(0x51DFD8);
    edi = eax;
    MEM32(0x51D90C) = edi;
    ecx = MEM32(edx + 8);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00171990
 * Original: 0x00171990 - 0x00171B26 (406 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00171990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3210E0);
    PUSH32(esp, 0x0017199Du); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_0017199D: ;
    PUSH32(esp, 0x3210D0);
    PUSH32(esp, 0x001719A7u); RECOMP_ABI_CALL(0x001C5690u, sub_001C5690); /* call 0x001C5690 */

loc_001719A7: ;
    ecx = MEM32(0x51DF58);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001719C9; /* je: equal / zero */

loc_001719B8: ;
    PUSH32(esp, 0x001719BDu); RECOMP_ABI_CALL(0x001CF8A0u, sub_001CF8A0); /* call 0x001CF8A0 */

loc_001719BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001719C6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001719C0u); } /* indirect call */
    }

loc_001719C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001719C9: ;
    ecx = MEM32(0x51DFA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x51DF58) = ebx;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001719EF; /* je: equal / zero */

loc_001719DB: ;
    PUSH32(esp, 0x001719E0u); RECOMP_ABI_CALL(0x001D0BA0u, sub_001D0BA0); /* call 0x001D0BA0 */

loc_001719E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001719ECu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001719E6u); } /* indirect call */
    }

loc_001719EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001719EF: ;
    ecx = MEM32(0x51DFA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x51DFA0) = ebx;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00171A15; /* je: equal / zero */

loc_00171A01: ;
    PUSH32(esp, 0x00171A06u); RECOMP_ABI_CALL(0x001D0960u, sub_001D0960); /* call 0x001D0960 */

loc_00171A06: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x00171A12u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00171A0Cu); } /* indirect call */
    }

loc_00171A12: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00171A15: ;
    eax = MEM32(0x51D908);
    MEM32(0x51DFA4) = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00171A22: ;
    _fa = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00171A3C; /* je: equal / zero */

loc_00171A27: ;
    eax = MEM32(esi + eax + 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00171A34u); RECOMP_ABI_CALL(0x001B6CEFu, sub_001B6CEF); /* call 0x001B6CEF */

loc_00171A34: ;
    eax = MEM32(0x51D908);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00171A3C: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x110;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00171A22; /* jl: less (signed <) */

loc_00171A4A: ;
    /* nop */

loc_00171A50: ;
    PUSH32(esp, 0x00171A55u); RECOMP_ABI_CALL(0x0016FF10u, sub_0016FF10); /* call 0x0016FF10 */

loc_00171A55: ;
    PUSH32(esp, 0x00171A5Au); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_00171A5A: ;
    esi = MEM32(0x51D908);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = esi;
    ecx = 0x20;
    /* nop */

loc_00171A70: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00171A76; /* je: equal / zero */

loc_00171A74: ;
    SET_LO8(edx, 1);

loc_00171A76: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00171A70; /* jne: not equal / not zero */

loc_00171A7E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00171A50; /* jne: not equal / not zero */

loc_00171A82: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00171AD6; /* je: equal / zero */

loc_00171A86: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, ebp);
    ebp = esi + -4;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x110);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00171ACB; /* js: sign (negative) */

loc_00171A9A: ;
    esi = eax + 4;
    edi = ecx + 1;

loc_00171AA0: ;
    eax = MEM32(esi + -272);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x110;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00171AC8; /* je: equal / zero */

loc_00171AB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00171AB6u); RECOMP_ABI_CALL(0x0027A1D0u, sub_0027A1D0); /* call 0x0027A1D0 */

loc_00171AB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00171AC8; /* jne: not equal / not zero */

loc_00171ABD: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00171AC5u); RECOMP_ABI_CALL(0x0027A4D0u, sub_0027A4D0); /* call 0x0027A4D0 */

loc_00171AC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00171AC8: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00171AA0; /* jne: not equal / not zero */

loc_00171ACB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x534414); PUSH32(esp, 0x00171AD2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00171ACCu); } /* indirect call */
    }

loc_00171AD2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);

loc_00171AD6: ;
    MEM32(0x51D908) = ebx;
    PUSH32(esp, 0x00171AE1u); RECOMP_ABI_CALL(0x0016EB00u, sub_0016EB00); /* call 0x0016EB00 */

loc_00171AE1: ;
    edx = MEM32(0x51DEB4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x534414); PUSH32(esp, 0x00171AEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00171AE8u); } /* indirect call */
    }

loc_00171AEE: ;
    eax = MEM32(0x51DFF8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(0x51DEB4) = ebx;
    { uint32_t _icall_target = MEM32(0x534414); PUSH32(esp, 0x00171B00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00171AFAu); } /* indirect call */
    }

loc_00171B00: ;
    ecx = MEM32(0x51D90C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(0x51DFF8) = ebx;
    MEM32(0x51DFFC) = ebx;
    { uint32_t _icall_target = MEM32(0x534414); PUSH32(esp, 0x00171B19u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00171B13u); } /* indirect call */
    }

loc_00171B19: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x51D90C) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00171B30
 * Original: 0x00171B30 - 0x00171B80 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171B30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x51FB28);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x00171B48u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00171B48: ;
    PUSH32(esp, 0x321104);
    ecx = esp + 8;
    PUSH32(esp, 0x00171B56u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00171B56: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x00171B60u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00171B60: ;
    esi = MEM32(esp + 0x14);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00171B70u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00171B70: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00171B79u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00171B79: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00171B80
 * Original: 0x00171B80 - 0x00171BE5 (101 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171B80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x00171B92u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00171B92: ;
    PUSH32(esp, 0x321120);
    ecx = esp + 8;
    PUSH32(esp, 0x00171BA0u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00171BA0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00171BA2: ;
    ecx = 0x3888C0;
    PUSH32(esp, 0x00171BACu); RECOMP_ABI_CALL(0x00079A60u, sub_00079A60); /* call 0x00079A60 */

loc_00171BAC: ;
    eax = eax + esi + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00171BBAu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00171BBA: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00171BA2; /* jl: less (signed <) */

loc_00171BC5: ;
    esi = MEM32(esp + 0x14);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00171BD5u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00171BD5: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00171BDEu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00171BDE: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00171BF0
 * Original: 0x00171BF0 - 0x00171C41 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171BF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x00171C02u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00171C02: ;
    PUSH32(esp, 0x321140);
    ecx = esp + 8;
    PUSH32(esp, 0x00171C10u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00171C10: ;
    eax = ZX8(MEM8(0x51FB24));
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00171C21u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00171C21: ;
    esi = MEM32(esp + 0x14);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00171C31u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00171C31: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00171C3Au); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00171C3A: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00171C50
 * Original: 0x00171C50 - 0x00171CC1 (113 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171C50: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00171C6Cu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00171C6C: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171C7Au); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00171C7A: ;
    PUSH32(esp, 0x321164);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171C88u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00171C88: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00171C97u); RECOMP_ABI_CALL(0x00079550u, sub_00079550); /* call 0x00079550 */

loc_00171C97: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171CA1u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00171CA1: ;
    esi = MEM32(esp + 0x18);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00171CB1u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00171CB1: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00171CBAu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00171CBA: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00171CD0
 * Original: 0x00171CD0 - 0x00171D6F (159 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00171CD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00171CF0u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00171CF0: ;
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00171D06u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00171D06: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00171D15u); RECOMP_ABI_CALL(0x00079550u, sub_00079550); /* call 0x00079550 */

loc_00171D15: ;
    edi = MEM32(esp + 0x10);
    esi = eax;
    ecx = edi;
    /* nop */

loc_00171D20: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00171D48; /* jne: not equal / not zero */

loc_00171D2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00171D44; /* je: equal / zero */

loc_00171D2E: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00171D48; /* jne: not equal / not zero */

loc_00171D3A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00171D20; /* jne: not equal / not zero */

loc_00171D44: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00171D4D;

loc_00171D48: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00171D4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00171D68; /* je: equal / zero */

loc_00171D51: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00171D61u); RECOMP_ABI_CALL(0x00079510u, sub_00079510); /* call 0x00079510 */

loc_00171D61: ;
    MEM8(0x51FB24) = 1;

loc_00171D68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00171D70
 * Original: 0x00171D70 - 0x00171E04 (148 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171D70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00171D8Eu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00171D8E: ;
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00171DA4u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00171DA4: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00171DB3u); RECOMP_ABI_CALL(0x000795A0u, sub_000795A0); /* call 0x000795A0 */

loc_00171DB3: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00171DD5; /* je: equal / zero */

loc_00171DBF: ;
    edx = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00171DCEu); RECOMP_ABI_CALL(0x00079570u, sub_00079570); /* call 0x00079570 */

loc_00171DCE: ;
    MEM8(0x51FB24) = 1;

loc_00171DD5: ;
    ecx = 0x3888C0;
    PUSH32(esp, 0x00171DDFu); RECOMP_ABI_CALL(0x00079350u, sub_00079350); /* call 0x00079350 */

loc_00171DDF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00171E00; /* jne: not equal / not zero */

loc_00171DE3: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00171DF2u); RECOMP_ABI_CALL(0x000795A0u, sub_000795A0); /* call 0x000795A0 */

loc_00171DF2: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00171E00u); RECOMP_ABI_CALL(0x000C6C40u, sub_000C6C40); /* call 0x000C6C40 */

loc_00171E00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00171E10
 * Original: 0x00171E10 - 0x00171E84 (116 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171E10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00171E2Cu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00171E2C: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171E3Au); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00171E3A: ;
    PUSH32(esp, 0x321180);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171E48u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00171E48: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00171E57u); RECOMP_ABI_CALL(0x000795A0u, sub_000795A0); /* call 0x000795A0 */

loc_00171E57: ;
    edx = ZX8(LO8(eax));
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171E64u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00171E64: ;
    esi = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00171E74u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00171E74: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00171E7Du); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00171E7D: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00171E90
 * Original: 0x00171E90 - 0x00171F4A (186 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171E90: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171EA2u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00171EA2: ;
    PUSH32(esp, 0x3211A0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171EB0u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00171EB0: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00171EC8u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00171EC8: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00171ED7u); RECOMP_ABI_CALL(0x00079600u, sub_00079600); /* call 0x00079600 */

loc_00171ED7: ;
    esi = eax;
    edx = ZX8(MEM8(esi + 8));
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171EE7u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00171EE7: ;
    eax = ZX8(MEM8(esi + 0xA));
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171EF5u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00171EF5: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3011DC); /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171F0Fu); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00171F0F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3011DC); /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00171F2Au); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00171F2A: ;
    esi = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00171F3Au); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00171F3A: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00171F43u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00171F43: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00171F50
 * Original: 0x00171F50 - 0x00171FC8 (120 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171F50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x00171F62u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00171F62: ;
    PUSH32(esp, 0x321204);
    ecx = esp + 8;
    PUSH32(esp, 0x00171F70u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00171F70: ;
    PUSH32(esp, 0x3211F4);
    ecx = esp + 8;
    PUSH32(esp, 0x00171F7Eu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00171F7E: ;
    PUSH32(esp, 0x3211E8);
    ecx = esp + 8;
    PUSH32(esp, 0x00171F8Cu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00171F8C: ;
    PUSH32(esp, 0x3211D4);
    ecx = esp + 8;
    PUSH32(esp, 0x00171F9Au); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00171F9A: ;
    PUSH32(esp, 0x3211C4);
    ecx = esp + 8;
    PUSH32(esp, 0x00171FA8u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00171FA8: ;
    esi = MEM32(esp + 0x14);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00171FB8u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00171FB8: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00171FC1u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00171FC1: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00171FD0
 * Original: 0x00171FD0 - 0x0017214E (382 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00171FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00171FD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00171FECu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00171FEC: ;
    esi = MEM32(esp + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00172003u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00172003: ;
    PUSH32(esp, 0x321300);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00172011u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00172011: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001720A6; /* jne: not equal / not zero */

loc_0017201D: ;
    PUSH32(esp, 0xB0BA8B9Au);
    PUSH32(esp, 0x00172027u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00172027: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00172035; /* je: equal / zero */

loc_00172032: ;
    PUSH32(esp, eax);
    goto loc_0017203A;

loc_00172035: ;
    PUSH32(esp, 0x3212E4);

loc_0017203A: ;
    PUSH32(esp, 0x0017203Fu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_0017203F: ;
    PUSH32(esp, 0x24700CDA);
    PUSH32(esp, 0x00172049u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00172049: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00172057; /* je: equal / zero */

loc_00172054: ;
    PUSH32(esp, eax);
    goto loc_0017205C;

loc_00172057: ;
    PUSH32(esp, 0x3212C4);

loc_0017205C: ;
    PUSH32(esp, 0x00172061u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00172061: ;
    PUSH32(esp, 0x28A83F1);
    PUSH32(esp, 0x0017206Bu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0017206B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00172079; /* je: equal / zero */

loc_00172076: ;
    PUSH32(esp, eax);
    goto loc_0017207E;

loc_00172079: ;
    PUSH32(esp, 0x3212A8);

loc_0017207E: ;
    PUSH32(esp, 0x00172083u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00172083: ;
    PUSH32(esp, 0xCD1F736Au);
    PUSH32(esp, 0x0017208Du); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0017208D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 8;
    if (CMP_NE(_fa, _fb)) goto loc_00172121; /* jne: not equal / not zero */

loc_0017209C: ;
    PUSH32(esp, 0x321290);
    goto loc_00172129;

loc_001720A6: ;
    PUSH32(esp, 0xBB67C089u);
    PUSH32(esp, 0x001720B0u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_001720B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_001720BE; /* je: equal / zero */

loc_001720BB: ;
    PUSH32(esp, eax);
    goto loc_001720C3;

loc_001720BE: ;
    PUSH32(esp, 0x321274);

loc_001720C3: ;
    PUSH32(esp, 0x001720C8u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_001720C8: ;
    PUSH32(esp, 0x76AC3DA);
    PUSH32(esp, 0x001720D2u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_001720D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_001720E0; /* je: equal / zero */

loc_001720DD: ;
    PUSH32(esp, eax);
    goto loc_001720E5;

loc_001720E0: ;
    PUSH32(esp, 0x321258);

loc_001720E5: ;
    PUSH32(esp, 0x001720EAu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_001720EA: ;
    PUSH32(esp, 0xB7A46AA7u);
    PUSH32(esp, 0x001720F4u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_001720F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00172102; /* je: equal / zero */

loc_001720FF: ;
    PUSH32(esp, eax);
    goto loc_00172107;

loc_00172102: ;
    PUSH32(esp, 0x32123C);

loc_00172107: ;
    PUSH32(esp, 0x0017210Cu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_0017210C: ;
    PUSH32(esp, 0x3648523E);
    PUSH32(esp, 0x00172116u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00172116: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00172124; /* je: equal / zero */

loc_00172121: ;
    PUSH32(esp, eax);
    goto loc_00172129;

loc_00172124: ;
    PUSH32(esp, 0x321220);

loc_00172129: ;
    PUSH32(esp, 0x0017212Eu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_0017212E: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0017213Eu); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_0017213E: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00172147u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00172147: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00172150
 * Original: 0x00172150 - 0x001721FD (173 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172150: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x00172169u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00172169: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00172179u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00172179: ;
    PUSH32(esp, 0x321318);
    ecx = esp + 8;
    PUSH32(esp, 0x00172187u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00172187: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001721D1; /* jl: less (signed <) */

loc_0017218F: ;
    ecx = MEM32(0x3788D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001721B8; /* je: equal / zero */

loc_0017219A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001721B8; /* je: equal / zero */

loc_0017219F: ;
    ecx = MEM32(0x51FB3C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD4);
    edx = MEM32(eax + ecx + -296);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    goto loc_001721D3;

loc_001721B8: ;
    ecx = MEM32(0x51FB38);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD4);
    edx = MEM32(eax + ecx + -296);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    goto loc_001721D3;

loc_001721D1: ;
    PUSH32(esp, 1);

loc_001721D3: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001721DCu); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_001721DC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001721EDu); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_001721ED: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001721F6u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_001721F6: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00172200
 * Original: 0x00172200 - 0x001722ED (237 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172200: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 0x14;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0017222Au); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_0017222A: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017223Cu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_0017223C: ;
    PUSH32(esp, 2);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0017224Au); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_0017224A: ;
    PUSH32(esp, 0x32134C);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00172258u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00172258: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001722C2; /* jl: less (signed <) */

loc_00172270: ;
    edx = MEM32(0x3788D8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017228D; /* je: equal / zero */

loc_0017227B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017228D; /* je: equal / zero */

loc_00172280: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(0x51FB3C);
    goto loc_00172298;

loc_0017228D: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(0x51FB38);

loc_00172298: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD4);
    ecx = ecx + ecx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + eax + 0x84;
    PUSH32(esp, 0x321344);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001722B5u); RECOMP_ABI_CALL(0x002BF39Fu, sub_002BF39F); /* call 0x002BF39F */

loc_001722B5: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFCFu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFCFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    goto loc_001722C4;

loc_001722C2: ;
    PUSH32(esp, 1);

loc_001722C4: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x001722CDu); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_001722CD: ;
    esi = MEM32(esp + 0x20);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001722DDu); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_001722DD: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001722E6u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_001722E6: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001722F0
 * Original: 0x001722F0 - 0x00172301 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001722F0(void)
{

loc_001722F0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3788D8);
    PUSH32(esp, 0x00172300u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00172300: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00172310
 * Original: 0x00172310 - 0x00172376 (102 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172310: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x00172322u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00172322: ;
    eax = MEM32(0x3788D8);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00172337u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00172337: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x32136C);
    ecx = esp + 8;
    PUSH32(esp, 0x00172348u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00172348: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00172356u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00172356: ;
    esi = MEM32(esp + 0x34);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00172366u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00172366: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0017236Fu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_0017236F: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00172380
 * Original: 0x00172380 - 0x001723F3 (115 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172380: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00172393u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00172393: ;
    PUSH32(esp, 0x321378);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001723A1u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001723A1: ;
    eax = MEM32(0x51FB44);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001723D2; /* jbe: below or equal (unsigned <=) */

loc_001723AC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001723B0: ;
    eax = MEM32(0x51FB2C);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001723C2u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_001723C2: ;
    eax = MEM32(0x51FB44);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001723B0; /* jb: below (unsigned <) */

loc_001723D2: ;
    esi = MEM32(esp + 0x18);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001723E2u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_001723E2: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001723EBu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_001723EB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00172400
 * Original: 0x00172400 - 0x0017244E (78 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172400: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x00172412u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00172412: ;
    PUSH32(esp, 0x321380);
    ecx = esp + 8;
    PUSH32(esp, 0x00172420u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00172420: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x0017242Eu); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_0017242E: ;
    esi = MEM32(esp + 0x34);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0017243Eu); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_0017243E: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00172447u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00172447: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00172450
 * Original: 0x00172450 - 0x00172461 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172450(void)
{

loc_00172450: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3788DC);
    PUSH32(esp, 0x00172460u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00172460: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00172470
 * Original: 0x00172470 - 0x001724D6 (102 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172470: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x00172482u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00172482: ;
    eax = MEM32(0x3788DC);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00172497u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00172497: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x321394);
    ecx = esp + 8;
    PUSH32(esp, 0x001724A8u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001724A8: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x001724B6u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_001724B6: ;
    esi = MEM32(esp + 0x34);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001724C6u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_001724C6: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001724CFu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_001724CF: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001724E0
 * Original: 0x001724E0 - 0x00172594 (180 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001724E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001724E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001724F3u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_001724F3: ;
    PUSH32(esp, 0x32139C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00172501u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00172501: ;
    eax = MEM32(0x3788D8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00172544; /* jne: not equal / not zero */

loc_0017250D: ;
    eax = MEM32(0x51FB48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00172573; /* jbe: below or equal (unsigned <=) */

loc_00172516: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00172520;

    /* nop */

loc_00172520: ;
    eax = MEM32(0x51FB30);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00172532u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00172532: ;
    eax = MEM32(0x51FB48);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00172520; /* jb: below (unsigned <) */

loc_00172542: ;
    goto loc_00172573;

loc_00172544: ;
    eax = MEM32(0x51FB4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00172573; /* jbe: below or equal (unsigned <=) */

loc_0017254D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00172550: ;
    edx = MEM32(0x51FB34);
    eax = esi + edx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00172563u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00172563: ;
    eax = MEM32(0x51FB4C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00172550; /* jb: below (unsigned <) */

loc_00172573: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00172583u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00172583: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0017258Cu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_0017258C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001725A0
 * Original: 0x001725A0 - 0x00172616 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001725A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001725A0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x001725B2u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_001725B2: ;
    eax = MEM32(0x3788E0);
    ecx = MEM32(0x51FB30);
    eax = eax + eax * 4;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + -96;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x31B2E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001725D7u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001725D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3213B0);
    ecx = esp + 8;
    PUSH32(esp, 0x001725E8u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001725E8: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x001725F6u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_001725F6: ;
    esi = MEM32(esp + 0x34);
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00172606u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00172606: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0017260Fu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_0017260F: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00172620
 * Original: 0x00172620 - 0x00172631 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172620(void)
{

loc_00172620: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3788E0);
    PUSH32(esp, 0x00172630u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00172630: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00172640
 * Original: 0x00172640 - 0x001726A6 (102 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172640: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x00172652u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00172652: ;
    eax = MEM32(0x3788E0);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00172667u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00172667: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3213C8);
    ecx = esp + 8;
    PUSH32(esp, 0x00172678u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00172678: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00172686u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00172686: ;
    esi = MEM32(esp + 0x34);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00172696u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00172696: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0017269Fu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_0017269F: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001726B0
 * Original: 0x001726B0 - 0x00172769 (185 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001726B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001726B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001726C3u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_001726C3: ;
    PUSH32(esp, 0x3213E8);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001726D1u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001726D1: ;
    PUSH32(esp, 0x3213D4);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001726DFu); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_001726DF: ;
    eax = MEM32(0x3788D8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017271A; /* jne: not equal / not zero */

loc_001726EB: ;
    eax = MEM32(0x51FB50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00172748; /* jbe: below or equal (unsigned <=) */

loc_001726F4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001726F6: ;
    eax = MEM32(0x51FB38);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00172708u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00172708: ;
    eax = MEM32(0x51FB50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001726F6; /* jb: below (unsigned <) */

loc_00172718: ;
    goto loc_00172748;

loc_0017271A: ;
    eax = MEM32(0x51FB54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00172748; /* jbe: below or equal (unsigned <=) */

loc_00172723: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00172725: ;
    edx = MEM32(0x51FB3C);
    eax = esi + edx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00172738u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00172738: ;
    eax = MEM32(0x51FB54);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00172725; /* jb: below (unsigned <) */

loc_00172748: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00172758u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00172758: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00172761u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00172761: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00172770
 * Original: 0x00172770 - 0x00172DE6 (1654 bytes, 325 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00172770: ;
    _fb = (uint32_t)(0x298) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x298;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x400);
    ecx = esp + 0x1C;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00172792u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00172792: ;
    ecx = MEM32(esp + 0x2B0);
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001727A5u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_001727A5: ;
    PUSH32(esp, 0x321464);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001727B3u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001727B3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x33) = ebx;
    MEM32(esp + 0x37) = ebx;
    MEM32(esp + 0x3B) = ebx;
    MEM32(esp + 0x3F) = ebx;
    MEM32(esp + 0x43) = ebx;
    MEM8(esp + 0x47) = LO8(ebx);
    SET_LO16(ebx, MEM16(0x321460));
    MEM16(esp + 0x50) = LO16(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x52) = ebx;
    MEM32(esp + 0x56) = ebx;
    MEM32(esp + 0x5A) = ebx;
    MEM32(esp + 0x5E) = ebx;
    MEM32(esp + 0x62) = ebx;
    MEM16(esp + 0x66) = LO16(ebx);
    MEM32(esp + 0x73) = ebx;
    MEM32(esp + 0x77) = ebx;
    MEM32(esp + 0x7B) = ebx;
    MEM32(esp + 0x7F) = ebx;
    MEM32(esp + 0x83) = ebx;
    MEM8(esp + 0x87) = LO8(ebx);
    ebx = MEM32(0x32144C);
    MEM32(esp + 0x88) = ebx;
    ebx = MEM32(0x321450);
    MEM32(esp + 0x8C) = ebx;
    SET_LO16(ebx, MEM16(0x321454));
    MEM16(esp + 0x90) = LO16(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(0x321440);
    MEM32(esp + 0x92) = ebx;
    ecx = MEM32(0x321444);
    SET_LO16(esi, MEM16(0x321448));
    SET_LO8(edx, MEM8(0x32144A));
    edi = MEM32(0x321458);
    ebp = MEM32(0x32145C);
    MEM32(esp + 0x96) = ebx;
    MEM32(esp + 0x9A) = ebx;
    MEM32(esp + 0x9E) = ebx;
    MEM32(esp + 0xA2) = ebx;
    MEM16(esp + 0xA6) = LO16(ebx);
    SET_LO16(ebx, MEM16(0x321460));
    MEM16(esp + 0xB0) = LO16(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xB2) = ebx;
    MEM32(esp + 0xB6) = ebx;
    MEM32(esp + 0xBA) = ebx;
    MEM32(esp + 0xBE) = ebx;
    MEM32(esp + 0xC2) = ebx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM16(esp + 0x30) = LO16(esi);
    MEM8(esp + 0x32) = LO8(edx);
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x4C) = ebp;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x6C) = ecx;
    MEM16(esp + 0x70) = LO16(esi);
    MEM8(esp + 0x72) = LO8(edx);
    MEM32(esp + 0xA8) = edi;
    MEM32(esp + 0xAC) = ebp;
    MEM16(esp + 0xC6) = LO16(ebx);
    MEM32(esp + 0xC8) = eax;
    MEM32(esp + 0xD3) = ebx;
    MEM32(esp + 0xD7) = ebx;
    MEM32(esp + 0xDB) = ebx;
    MEM32(esp + 0xDF) = ebx;
    MEM32(esp + 0xE3) = ebx;
    MEM8(esp + 0xE7) = LO8(ebx);
    ebx = MEM32(0x32144C);
    MEM32(esp + 0xE8) = ebx;
    ebx = MEM32(0x321450);
    MEM32(esp + 0xEC) = ebx;
    SET_LO16(ebx, MEM16(0x321454));
    MEM16(esp + 0xF0) = LO16(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xF2) = ebx;
    MEM32(esp + 0xF6) = ebx;
    MEM32(esp + 0xFA) = ebx;
    MEM32(esp + 0xFE) = ebx;
    MEM32(esp + 0x102) = ebx;
    MEM16(esp + 0x106) = LO16(ebx);
    MEM32(esp + 0x113) = ebx;
    MEM32(esp + 0x117) = ebx;
    MEM32(esp + 0x11B) = ebx;
    MEM32(esp + 0x11F) = ebx;
    MEM32(esp + 0x123) = ebx;
    MEM8(esp + 0x127) = LO8(ebx);
    MEM32(esp + 0xCC) = ecx;
    MEM32(esp + 0x10C) = ecx;
    MEM32(esp + 0x12C) = ecx;
    MEM32(esp + 0x172) = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x176) = ebx;
    MEM32(esp + 0x133) = ecx;
    MEM32(esp + 0x17A) = ebx;
    MEM8(esp + 0xD2) = LO8(edx);
    MEM8(esp + 0x112) = LO8(edx);
    MEM8(esp + 0x132) = LO8(edx);
    MEM32(esp + 0x137) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x17E) = ebx;
    MEM32(esp + 0x13B) = ecx;
    MEM32(esp + 0x182) = ebx;
    MEM32(esp + 0x152) = edx;
    MEM32(esp + 0x13F) = ecx;
    MEM16(esp + 0x186) = LO16(ebx);
    MEM32(esp + 0x143) = ecx;
    MEM32(esp + 0x156) = edx;
    MEM32(esp + 0x192) = ebx;
    MEM8(esp + 0x147) = LO8(ecx);
    ecx = MEM32(0x32144C);
    MEM32(esp + 0x15A) = edx;
    MEM32(esp + 0x196) = ebx;
    MEM32(esp + 0x15E) = edx;
    MEM32(esp + 0x168) = ecx;
    MEM32(esp + 0x188) = ecx;
    MEM32(esp + 0x19A) = ebx;
    MEM32(esp + 0x1A8) = ecx;
    MEM32(esp + 0x162) = edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x19E) = ebx;
    MEM16(esp + 0xD0) = LO16(esi);
    MEM32(esp + 0x108) = eax;
    MEM16(esp + 0x110) = LO16(esi);
    MEM32(esp + 0x128) = eax;
    SET_LO16(eax, MEM16(0x321460));
    MEM16(esp + 0x130) = LO16(esi);
    SET_LO16(esi, MEM16(0x321454));
    MEM16(esp + 0x166) = LO16(edx);
    edx = MEM32(0x321450);
    MEM32(esp + 0x1A2) = ebx;
    MEM32(esp + 0x1B2) = ecx;
    MEM32(esp + 0x148) = edi;
    MEM32(esp + 0x14C) = ebp;
    MEM16(esp + 0x150) = LO16(eax);
    MEM32(esp + 0x16C) = edx;
    MEM16(esp + 0x170) = LO16(esi);
    MEM32(esp + 0x18C) = edx;
    MEM16(esp + 0x190) = LO16(esi);
    MEM16(esp + 0x1A6) = LO16(ebx);
    MEM32(esp + 0x1AC) = edx;
    MEM16(esp + 0x1B0) = LO16(esi);
    MEM32(esp + 0x1B6) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1D2) = edx;
    MEM32(esp + 0x1D6) = edx;
    MEM32(esp + 0x1DA) = edx;
    MEM32(esp + 0x1DE) = edx;
    MEM32(esp + 0x1E2) = edx;
    MEM16(esp + 0x1D0) = LO16(eax);
    MEM16(esp + 0x210) = LO16(eax);
    MEM16(esp + 0x1E6) = LO16(edx);
    edx = MEM32(0x321438);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1EC) = edx;
    MEM32(esp + 0x212) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x216) = eax;
    MEM32(esp + 0x1F1) = edx;
    MEM32(esp + 0x1BA) = ecx;
    MEM32(esp + 0x21A) = eax;
    MEM32(esp + 0x1F5) = edx;
    MEM32(esp + 0x1BE) = ecx;
    MEM32(esp + 0x21E) = eax;
    MEM32(esp + 0x1C2) = ecx;
    MEM32(esp + 0x1F9) = edx;
    MEM32(esp + 0x222) = eax;
    MEM16(esp + 0x1C6) = LO16(ecx);
    ecx = MEM32(0x321434);
    MEM32(esp + 0x1FD) = edx;
    MEM16(esp + 0x226) = LO16(eax);
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x201) = edx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1E8) = ecx;
    SET_LO8(ecx, MEM8(0x32143C));
    MEM16(esp + 0x205) = LO16(edx);
    MEM32(esp + 0x1C8) = edi;
    MEM32(esp + 0x1CC) = ebp;
    MEM8(esp + 0x1F0) = LO8(ecx);
    MEM8(esp + 0x207) = LO8(edx);
    MEM32(esp + 0x208) = edi;
    MEM32(esp + 0x20C) = ebp;
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00172C52; /* jne: not equal / not zero */

loc_00172C3F: ;
    PUSH32(esp, 0x321418);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00172C4Du); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00172C4D: ;
    goto loc_00172DBD;

loc_00172C52: ;
    eax = MEM32(0x3788D8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00172D20; /* jne: not equal / not zero */

loc_00172C62: ;
    goto loc_00172C70;

    /* nop */
    goto loc_00172C70;

    /* nop */

loc_00172C70: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(0x51FB38);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + edx + 0x84;
    eax = ecx;
    edi = eax + 1;
    edi = edi;

loc_00172C90: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00172C90; /* jne: not equal / not zero */

loc_00172C97: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = eax;
    if ((_fa == 0)) goto loc_00172D01; /* je: equal / zero */

loc_00172C9F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x321344);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00172CAFu); RECOMP_ABI_CALL(0x002BF39Fu, sub_002BF39F); /* call 0x002BF39F */

loc_00172CAF: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD4);
    _fb = (uint32_t)(0x33) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x33;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = eax;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + eax + 0x34;
    eax = MEM32(0x51FB38);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + eax + 0x84;
    PUSH32(esp, ecx);
    edx = esp + 0x23C;
    PUSH32(esp, 0x321400);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00172CEDu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00172CED: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x228;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00172D01u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00172D01: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00172C70; /* jb: below (unsigned <) */

loc_00172D0D: ;
    goto loc_00172DBD;

    goto loc_00172D20;

    /* nop */
    goto loc_00172D20;

    /* nop */

loc_00172D20: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(0x51FB3C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + edx + 0x84;
    eax = ecx;
    edi = eax + 1;
    edi = edi;

loc_00172D40: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00172D40; /* jne: not equal / not zero */

loc_00172D47: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = eax;
    if ((_fa == 0)) goto loc_00172DB1; /* je: equal / zero */

loc_00172D4F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x321344);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00172D5Fu); RECOMP_ABI_CALL(0x002BF39Fu, sub_002BF39F); /* call 0x002BF39F */

loc_00172D5F: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD4);
    _fb = (uint32_t)(0x33) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x33;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = eax;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + eax + 0x34;
    eax = MEM32(0x51FB3C);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + eax + 0x84;
    PUSH32(esp, ecx);
    edx = esp + 0x23C;
    PUSH32(esp, 0x321400);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00172D9Du); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00172D9D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x228;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00172DB1u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00172DB1: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00172D20; /* jb: below (unsigned <) */

loc_00172DBD: ;
    esi = MEM32(esp + 0x2AC);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00172DD0u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00172DD0: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00172DD9u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00172DD9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x298) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x298;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00172DF0
 * Original: 0x00172DF0 - 0x00172E9A (170 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172DF0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x00172E01u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00172E01: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00172E11u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00172E11: ;
    PUSH32(esp, 0x321480);
    ecx = esp + 8;
    PUSH32(esp, 0x00172E1Fu); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00172E1F: ;
    eax = MEM32(0x3788D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00172E46; /* je: equal / zero */

loc_00172E29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00172E46; /* je: equal / zero */

loc_00172E2E: ;
    ecx = MEM32(esp);
    edx = MEM32(0x51FB3C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD4);
    eax = MEM32(ecx + edx + -296);
    goto loc_00172E5C;

loc_00172E46: ;
    eax = MEM32(esp);
    ecx = MEM32(0x51FB38);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD4);
    eax = MEM32(eax + ecx + -296);

loc_00172E5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00172E6E; /* je: equal / zero */

loc_00172E60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00172E6E; /* je: equal / zero */

loc_00172E65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00172E6E; /* je: equal / zero */

loc_00172E6A: ;
    PUSH32(esp, 1);
    goto loc_00172E70;

loc_00172E6E: ;
    PUSH32(esp, 0);

loc_00172E70: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00172E79u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00172E79: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00172E8Au); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00172E8A: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00172E93u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00172E93: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00172EA0
 * Original: 0x00172EA0 - 0x00172F8F (239 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172EA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 8) = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00172F89; /* jne: not equal / not zero */

loc_00172EC7: ;
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00172ED4u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00172ED4: ;
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00172EE2u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00172EE2: ;
    PUSH32(esp, 2);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00172EF0u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00172EF0: ;
    PUSH32(esp, 3);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00172EFEu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00172EFE: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 8) = eax;
    ecx = eax + eax * 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00172F53; /* je: equal / zero */

loc_00172F1C: ;
    eax = MEM32(0x51FB40);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = eax + eax * 2;
    eax = MEM32(0x51FB40);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + edx * 4 + 4) = ecx;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x14);
    ecx = eax + eax * 2;
    eax = MEM32(0x51FB40);
    POP32(esp, edi);
    MEM32(eax + ecx * 4 + 8) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00172F53: ;
    edx = MEM32(0x51FB40);
    MEM32(edx + ecx * 4) = 0xFF;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x51FB40);
    eax = eax + eax * 2;
    MEM32(ecx + eax * 4 + 4) = 0xFF;
    eax = MEM32(esp + 8);
    edx = eax + eax * 2;
    eax = MEM32(0x51FB40);
    MEM32(eax + edx * 4 + 8) = 0xFFFFFFFFu;

loc_00172F89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00172F90
 * Original: 0x00172F90 - 0x00172FE1 (81 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00172F90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00172FAEu); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00172FAE: ;
    PUSH32(esp, 1);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00172FBCu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00172FBC: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x31B2E0);
    PUSH32(esp, 0x51FAE0);
    PUSH32(esp, 0x00172FD0u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00172FD0: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB20) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00172FF0
 * Original: 0x00172FF0 - 0x00173097 (167 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00172FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00172FF0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x00173001u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00173001: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00173019u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173019: ;
    PUSH32(esp, 0x3214B0);
    ecx = esp + 8;
    PUSH32(esp, 0x00173027u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00173027: ;
    eax = MEM32(0x3788D8);
    ecx = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    eax = MEM32(0x51FB38);
    if (CMP_NE(_fa, _fb)) eax = MEM32(0x51FB3C); /* cmovne */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD4);
    eax = MEM32(ecx + eax + -296);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0017306B; /* ja: above (unsigned >) */

loc_00173051: ;
    edx = ZX8(MEM8(eax + 0x1730A8));
    { uint32_t _jt = MEM32(edx * 4 + 0x173098); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0017305Fu) goto loc_0017305F;
    if (_jt == 0x00173063u) goto loc_00173063;
    if (_jt == 0x00173067u) goto loc_00173067;
    if (_jt == 0x0017306Bu) goto loc_0017306B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0017305F: ;
    PUSH32(esp, 0x14);
    goto loc_0017306D;

loc_00173063: ;
    PUSH32(esp, 5);
    goto loc_0017306D;

loc_00173067: ;
    PUSH32(esp, 0xA);
    goto loc_0017306D;

loc_0017306B: ;
    PUSH32(esp, 0);

loc_0017306D: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00173076u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00173076: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00173087u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00173087: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00173090u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00173090: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001730C0
 * Original: 0x001730C0 - 0x001730CD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001730C0(void)
{

loc_001730C0: ;
    PUSH32(esp, 1);
    ecx = 0x3C250C;
    PUSH32(esp, 0x001730CCu); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_001730CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001730D0
 * Original: 0x001730D0 - 0x001730F6 (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001730D0(void)
{

loc_001730D0: ;
    ecx = MEM32(0x3788F8);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x001730E0u); RECOMP_ABI_CALL(0x00177BD0u, sub_00177BD0); /* call 0x00177BD0 */

loc_001730E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    ecx = 0x3887D0;
    MEM8(0x51FB59) = 1;
    PUSH32(esp, 0x001730F5u); RECOMP_ABI_CALL(0x0015C860u, sub_0015C860); /* call 0x0015C860 */

loc_001730F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00173100
 * Original: 0x00173100 - 0x00173106 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173100(void)
{

loc_00173100: ;
    eax = MEM32(0x51FB2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00173110
 * Original: 0x00173110 - 0x00173116 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173110(void)
{

loc_00173110: ;
    eax = MEM32(0x51FB30);
    esp += 4; return; /* ret */

}

/**
 * sub_00173120
 * Original: 0x00173120 - 0x00173126 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173120(void)
{

loc_00173120: ;
    eax = MEM32(0x51FB38);
    esp += 4; return; /* ret */

}

/**
 * sub_00173130
 * Original: 0x00173130 - 0x00173136 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173130(void)
{

loc_00173130: ;
    eax = MEM32(0x51FB34);
    esp += 4; return; /* ret */

}

/**
 * sub_00173140
 * Original: 0x00173140 - 0x00173146 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173140(void)
{

loc_00173140: ;
    eax = MEM32(0x51FB3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00173150
 * Original: 0x00173150 - 0x0017316C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173150: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017316B; /* je: equal / zero */

loc_00173158: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0017316B; /* jbe: below or equal (unsigned <=) */

loc_00173160: ;
    MEM32(0x51FB2C) = ecx;
    MEM32(0x51FB44) = eax;

loc_0017316B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00173170
 * Original: 0x00173170 - 0x0017318C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173170: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017318B; /* je: equal / zero */

loc_00173178: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0017318B; /* jbe: below or equal (unsigned <=) */

loc_00173180: ;
    MEM32(0x51FB30) = ecx;
    MEM32(0x51FB48) = eax;

loc_0017318B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00173190
 * Original: 0x00173190 - 0x001731AC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173190: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001731AB; /* je: equal / zero */

loc_00173198: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001731AB; /* jbe: below or equal (unsigned <=) */

loc_001731A0: ;
    MEM32(0x51FB38) = ecx;
    MEM32(0x51FB50) = eax;

loc_001731AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001731B0
 * Original: 0x001731B0 - 0x001731CC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001731B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001731B0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001731CB; /* je: equal / zero */

loc_001731B8: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001731CB; /* jbe: below or equal (unsigned <=) */

loc_001731C0: ;
    MEM32(0x51FB34) = ecx;
    MEM32(0x51FB4C) = eax;

loc_001731CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001731D0
 * Original: 0x001731D0 - 0x001731EC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001731D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001731D0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001731EB; /* je: equal / zero */

loc_001731D8: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001731EB; /* jbe: below or equal (unsigned <=) */

loc_001731E0: ;
    MEM32(0x51FB3C) = ecx;
    MEM32(0x51FB54) = eax;

loc_001731EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001731F0
 * Original: 0x001731F0 - 0x00173217 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001731F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001731F0: ;
    eax = MEM32(0x51FB2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00173216; /* je: equal / zero */

loc_001731F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001731FFu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_001731FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB2C) = 0;
    MEM32(0x51FB44) = 0;

loc_00173216: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00173220
 * Original: 0x00173220 - 0x00173247 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173220: ;
    eax = MEM32(0x51FB30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00173246; /* je: equal / zero */

loc_00173229: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017322Fu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0017322F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB30) = 0;
    MEM32(0x51FB48) = 0;

loc_00173246: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00173250
 * Original: 0x00173250 - 0x00173277 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173250: ;
    eax = MEM32(0x51FB38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00173276; /* je: equal / zero */

loc_00173259: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017325Fu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0017325F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB38) = 0;
    MEM32(0x51FB50) = 0;

loc_00173276: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00173280
 * Original: 0x00173280 - 0x001732A7 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173280: ;
    eax = MEM32(0x51FB34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001732A6; /* je: equal / zero */

loc_00173289: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017328Fu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0017328F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB34) = 0;
    MEM32(0x51FB4C) = 0;

loc_001732A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001732B0
 * Original: 0x001732B0 - 0x001732D7 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001732B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001732B0: ;
    eax = MEM32(0x51FB3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001732D6; /* je: equal / zero */

loc_001732B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001732BFu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_001732BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB3C) = 0;
    MEM32(0x51FB54) = 0;

loc_001732D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001732E0
 * Original: 0x001732E0 - 0x001732E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001732E0(void)
{

loc_001732E0: ;
    eax = MEM32(0x51FB44);
    esp += 4; return; /* ret */

}

/**
 * sub_001732F0
 * Original: 0x001732F0 - 0x001732F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001732F0(void)
{

loc_001732F0: ;
    eax = MEM32(0x51FB48);
    esp += 4; return; /* ret */

}

/**
 * sub_00173300
 * Original: 0x00173300 - 0x00173306 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173300(void)
{

loc_00173300: ;
    eax = MEM32(0x51FB50);
    esp += 4; return; /* ret */

}

/**
 * sub_00173310
 * Original: 0x00173310 - 0x00173316 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173310(void)
{

loc_00173310: ;
    eax = MEM32(0x51FB4C);
    esp += 4; return; /* ret */

}

/**
 * sub_00173320
 * Original: 0x00173320 - 0x00173326 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173320(void)
{

loc_00173320: ;
    eax = MEM32(0x51FB54);
    esp += 4; return; /* ret */

}

/**
 * sub_00173330
 * Original: 0x00173330 - 0x001733CB (155 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173330: ;
    eax = MEM32(0x51FB2C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00173351; /* je: equal / zero */

loc_0017333C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00173342u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_00173342: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB2C) = esi;
    MEM32(0x51FB44) = esi;

loc_00173351: ;
    eax = MEM32(0x51FB30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017336F; /* je: equal / zero */

loc_0017335A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00173360u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_00173360: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB30) = esi;
    MEM32(0x51FB48) = esi;

loc_0017336F: ;
    eax = MEM32(0x51FB34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017338D; /* je: equal / zero */

loc_00173378: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017337Eu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0017337E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB34) = esi;
    MEM32(0x51FB4C) = esi;

loc_0017338D: ;
    eax = MEM32(0x51FB38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001733AB; /* je: equal / zero */

loc_00173396: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017339Cu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0017339C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB38) = esi;
    MEM32(0x51FB50) = esi;

loc_001733AB: ;
    eax = MEM32(0x51FB3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001733C9; /* je: equal / zero */

loc_001733B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001733BAu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_001733BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB3C) = esi;
    MEM32(0x51FB54) = esi;

loc_001733C9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001733D0
 * Original: 0x001733D0 - 0x001733DA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001733D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001733D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001733D6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001733D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001733E0
 * Original: 0x001733E0 - 0x001736E9 (777 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001733E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001733E0: ;
    PUSH32(esp, 0x001733E5u); RECOMP_ABI_CALL(0x000D0110u, sub_000D0110); /* call 0x000D0110 */

loc_001733E5: ;
    PUSH32(esp, 0x107E3DB3);
    PUSH32(esp, 0x001733EFu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001733EF: ;
    PUSH32(esp, 0xD91352E8u);
    PUSH32(esp, 0x001733F9u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001733F9: ;
    PUSH32(esp, 0x467A850A);
    PUSH32(esp, 0x00173403u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00173403: ;
    PUSH32(esp, 0xB52C9EDBu);
    PUSH32(esp, 0x0017340Du); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017340D: ;
    PUSH32(esp, 0xC6368797u);
    PUSH32(esp, 0x00173417u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173417: ;
    PUSH32(esp, 0x50E38DF8);
    PUSH32(esp, 0x00173421u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173421: ;
    PUSH32(esp, 0x511BC4C);
    PUSH32(esp, 0x0017342Bu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017342B: ;
    PUSH32(esp, 0x8324BB2Fu);
    PUSH32(esp, 0x00173435u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173435: ;
    PUSH32(esp, 0xD9901C3Fu);
    PUSH32(esp, 0x0017343Fu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017343F: ;
    eax = MEM32(0x51FB68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017344Au); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_0017344A: ;
    PUSH32(esp, 0x93C57469u);
    PUSH32(esp, 0x00173454u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173454: ;
    PUSH32(esp, 0x1884BA8D);
    PUSH32(esp, 0x0017345Eu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017345E: ;
    PUSH32(esp, 0x53D0F40F);
    PUSH32(esp, 0x00173468u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173468: ;
    PUSH32(esp, 0x6D30916C);
    PUSH32(esp, 0x00173472u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173472: ;
    PUSH32(esp, 0x906699A6u);
    PUSH32(esp, 0x0017347Cu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_0017347C: ;
    PUSH32(esp, 0xD296DD3Bu);
    PUSH32(esp, 0x00173486u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173486: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x81672D);
    PUSH32(esp, 0x00173493u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00173493: ;
    PUSH32(esp, 0x72A052DF);
    PUSH32(esp, 0x0017349Du); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017349D: ;
    PUSH32(esp, 0xF972D330u);
    PUSH32(esp, 0x001734A7u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_001734A7: ;
    PUSH32(esp, 0xCC8D90ADu);
    PUSH32(esp, 0x001734B1u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001734B1: ;
    PUSH32(esp, 0xAF720FC0u);
    PUSH32(esp, 0x001734BBu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_001734BB: ;
    PUSH32(esp, 0xAA541BF);
    PUSH32(esp, 0x001734C5u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001734C5: ;
    PUSH32(esp, 0x48550522);
    PUSH32(esp, 0x001734CFu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_001734CF: ;
    PUSH32(esp, 0x7E2D8E71);
    PUSH32(esp, 0x001734D9u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_001734D9: ;
    PUSH32(esp, 0x3B53FF90);
    PUSH32(esp, 0x001734E3u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001734E3: ;
    PUSH32(esp, 0xB5AFE02Du);
    PUSH32(esp, 0x001734EDu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_001734ED: ;
    PUSH32(esp, 0xE6206120u);
    PUSH32(esp, 0x001734F7u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_001734F7: ;
    PUSH32(esp, 0xCC3C8FBEu);
    PUSH32(esp, 0x00173501u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00173501: ;
    PUSH32(esp, 0x8ECCCB23u);
    PUSH32(esp, 0x0017350Bu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017350B: ;
    PUSH32(esp, 0xF09F98A0u);
    PUSH32(esp, 0x00173515u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00173515: ;
    PUSH32(esp, 0x9EF6DD89u);
    PUSH32(esp, 0x0017351Fu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017351F: ;
    PUSH32(esp, 0x8774712Fu);
    PUSH32(esp, 0x00173529u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173529: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3890E644);
    PUSH32(esp, 0x00173536u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173536: ;
    PUSH32(esp, 0x2D81C3D6);
    PUSH32(esp, 0x00173540u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00173540: ;
    PUSH32(esp, 0x73B88DC4);
    PUSH32(esp, 0x0017354Au); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017354A: ;
    PUSH32(esp, 0x3AC44624);
    PUSH32(esp, 0x00173554u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173554: ;
    PUSH32(esp, 0x831EAA08u);
    PUSH32(esp, 0x0017355Eu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017355E: ;
    PUSH32(esp, 0x5A7FB879);
    PUSH32(esp, 0x00173568u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00173568: ;
    PUSH32(esp, 0x18A34950);
    PUSH32(esp, 0x00173572u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173572: ;
    PUSH32(esp, 0xBCB7B152u);
    PUSH32(esp, 0x0017357Cu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017357C: ;
    PUSH32(esp, 0xB0E25E26u);
    PUSH32(esp, 0x00173586u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173586: ;
    PUSH32(esp, 0xBB2AB409u);
    PUSH32(esp, 0x00173590u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173590: ;
    PUSH32(esp, 0xEF9EB2D2u);
    PUSH32(esp, 0x0017359Au); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_0017359A: ;
    PUSH32(esp, 0xE649AFA9u);
    PUSH32(esp, 0x001735A4u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_001735A4: ;
    PUSH32(esp, 0xB0870733u);
    PUSH32(esp, 0x001735AEu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001735AE: ;
    PUSH32(esp, 0x6BB97672);
    PUSH32(esp, 0x001735B8u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001735B8: ;
    PUSH32(esp, 0xDEE7455Cu);
    PUSH32(esp, 0x001735C2u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_001735C2: ;
    PUSH32(esp, 0xB44609D6u);
    PUSH32(esp, 0x001735CCu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001735CC: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB605C741u);
    PUSH32(esp, 0x001735D9u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_001735D9: ;
    PUSH32(esp, 0x37C00D36);
    PUSH32(esp, 0x001735E3u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001735E3: ;
    PUSH32(esp, 0xB93C128Bu);
    PUSH32(esp, 0x001735EDu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_001735ED: ;
    PUSH32(esp, 0xC4CD29DAu);
    PUSH32(esp, 0x001735F7u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001735F7: ;
    PUSH32(esp, 0x4B7C4619);
    PUSH32(esp, 0x00173601u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00173601: ;
    PUSH32(esp, 0xE4E2DD7Bu);
    PUSH32(esp, 0x0017360Bu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_0017360B: ;
    PUSH32(esp, 0x70269009);
    PUSH32(esp, 0x00173615u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00173615: ;
    PUSH32(esp, 0x2F1FE8AB);
    PUSH32(esp, 0x0017361Fu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_0017361F: ;
    ecx = MEM32(0x51FB6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0017362Bu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017362B: ;
    PUSH32(esp, 0xA44547BEu);
    PUSH32(esp, 0x00173635u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173635: ;
    PUSH32(esp, 0x31D553BD);
    PUSH32(esp, 0x0017363Fu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017363F: ;
    PUSH32(esp, 0x3148FBFE);
    PUSH32(esp, 0x00173649u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173649: ;
    PUSH32(esp, 0x523D9ECD);
    PUSH32(esp, 0x00173653u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173653: ;
    PUSH32(esp, 0x838E4CBCu);
    PUSH32(esp, 0x0017365Du); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017365D: ;
    PUSH32(esp, 0x4AF52A76);
    PUSH32(esp, 0x00173667u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173667: ;
    PUSH32(esp, 0x144CFA2E);
    PUSH32(esp, 0x00173671u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00173671: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7C944370);
    PUSH32(esp, 0x0017367Eu); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_0017367E: ;
    PUSH32(esp, 0x1E9AB593);
    PUSH32(esp, 0x00173688u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00173688: ;
    PUSH32(esp, 0xCF18F795u);
    PUSH32(esp, 0x00173692u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00173692: ;
    PUSH32(esp, 0xEDF9441Cu);
    PUSH32(esp, 0x0017369Cu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_0017369C: ;
    PUSH32(esp, 0xFD06B331u);
    PUSH32(esp, 0x001736A6u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001736A6: ;
    PUSH32(esp, 0xD494C56Au);
    PUSH32(esp, 0x001736B0u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001736B0: ;
    PUSH32(esp, 0xF9BE1066u);
    PUSH32(esp, 0x001736BAu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001736BA: ;
    PUSH32(esp, 0x7B44B310);
    PUSH32(esp, 0x001736C4u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001736C4: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001736CCu); RECOMP_ABI_CALL(0x00173330u, sub_00173330); /* call 0x00173330 */

loc_001736CC: ;
    eax = MEM32(0x51FB40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001736E8; /* je: equal / zero */

loc_001736D5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001736DBu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_001736DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51FB40) = 0;

loc_001736E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001736F0
 * Original: 0x001736F0 - 0x001737C3 (211 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001736F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001736F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(0x51FB5C) = 1;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173716u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173716: ;
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017372Cu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_0017372C: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 3 (32-bit) */
    MEM32(esp + 0xC) = 8;
    if (CMP_NE(_fa, _fb)) goto loc_00173748; /* jne: not equal / not zero */

loc_0017373A: ;
    PUSH32(esp, 2);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00173748u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173748: ;
    esi = MEM32(0x3888C0);
    ecx = ZX8(MEM8(esi + 0x1ED0));
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + esi + 0x1E9C) = LO8(edx);
    edx = MEM32(0x3888C0);
    SET_LO8(ebx, MEM8(esp + 0x14));
    MEM8(eax + edx + 0x1E9E) = LO8(ebx);
    esi = MEM32(0x3888C0);
    SET_LO8(ebx, MEM8(esp + 0xC));
    edx = ecx + 0x1E9;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x80000001u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(edx + esi) = LO8(ebx);
    if ((_fas >= 0)) goto loc_00173799; /* jns: not sign (positive) */

loc_00173794: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00173799: ;
    edx = MEM32(0x3888C0);
    MEM8(eax + edx + 0x1E91) = LO8(ecx);
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x1ED0) = MEM8(eax + 0x1ED0) + 1;
    _fa = (uint32_t)(MEM8(eax + 0x1ED0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    PUSH32(esp, 0x001737BDu); RECOMP_ABI_CALL(0x000C68A0u, sub_000C68A0); /* call 0x000C68A0 */

loc_001737BD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001737D0
 * Original: 0x001737D0 - 0x0017387A (170 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001737D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001737D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001737EBu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_001737EB: ;
    edi = MEM32(0x3888C0);
    ecx = ZX8(MEM8(edi + 0x1ED0));
    esi = MEM32(esp + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00173859; /* jge: greater or equal (signed >=) */

loc_00173801: ;
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, MEM8(eax + edi + 0x1E9C));
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + edi + 0x1E9C) = LO8(edx);
    edx = MEM32(0x3888C0);
    SET_LO8(eax, MEM8(eax + edx + 0x1E9E));
    esi = MEM32(esp + 8);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + edx + 0x1E9E) = LO8(eax);
    edx = MEM32(esp + 8);
    eax = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1E9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1E9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(ecx + eax));
    _fb = (uint32_t)(0x1E9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1E9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edx + eax) = LO8(ecx);
    edi = MEM32(0x3888C0);

loc_00173859: ;
    MEM8(edi + 0x1ED0) = MEM8(edi + 0x1ED0) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x1ED0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(0x3888C0);
    SET_LO8(eax, MEM8(edx + 0x1ED0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00173878; /* jne: not equal / not zero */

loc_00173871: ;
    MEM8(0x51FB5C) = 0;

loc_00173878: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00173880
 * Original: 0x00173880 - 0x00173894 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173880: ;
    ecx = MEM32(0x3888C0);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x1ED0) = LO8(eax);
    MEM8(0x51FB5C) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001738A0
 * Original: 0x001738A0 - 0x001738F6 (86 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001738A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001738A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x001738B2u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_001738B2: ;
    PUSH32(esp, 0x3214DC);
    ecx = esp + 8;
    PUSH32(esp, 0x001738C0u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001738C0: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1ED0));
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x001738D6u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_001738D6: ;
    esi = MEM32(esp + 0x14);
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001738E6u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_001738E6: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001738EFu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_001738EF: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173900
 * Original: 0x00173900 - 0x00173977 (119 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173900: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017391Cu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_0017391C: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0017392Au); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_0017392A: ;
    PUSH32(esp, 0x3214F8);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173938u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00173938: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x3888C0);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(ecx + edx + 0x1E9C));
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173957u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00173957: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00173967u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00173967: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00173970u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00173970: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173980
 * Original: 0x00173980 - 0x001739F7 (119 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173980: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017399Cu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_0017399C: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001739AAu); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_001739AA: ;
    PUSH32(esp, 0x321514);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001739B8u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001739B8: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x3888C0);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(ecx + edx + 0x1E9E));
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001739D7u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_001739D7: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001739E7u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_001739E7: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001739F0u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_001739F0: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173A00
 * Original: 0x00173A00 - 0x00173A9D (157 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173A00: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173A1Cu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173A1C: ;
    edx = MEM32(0x3888C0);
    ecx = ZX8(MEM8(edx + 0x1ED0));
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00173A57; /* jle: less or equal (signed <=) */

loc_00173A32: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fb = (uint32_t)(0x1E9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1E9C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    edi = edi;

loc_00173A40: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00173A55; /* jne: not equal / not zero */

loc_00173A45: ;
    ebx = ZX8(MEM8(edx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = eax; /* cmove */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00173A40; /* jl: less (signed <) */

loc_00173A55: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_00173A57: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173A65u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00173A65: ;
    PUSH32(esp, 0x321534);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173A73u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00173A73: ;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173A7Du); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00173A7D: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00173A8Du); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00173A8D: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00173A96u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00173A96: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173AA0
 * Original: 0x00173AA0 - 0x00173B3D (157 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173AA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173ABCu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173ABC: ;
    edx = MEM32(0x3888C0);
    ecx = ZX8(MEM8(edx + 0x1ED0));
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00173AF7; /* jle: less or equal (signed <=) */

loc_00173AD2: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fb = (uint32_t)(0x1E9E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1E9E;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    edi = edi;

loc_00173AE0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00173AF5; /* jne: not equal / not zero */

loc_00173AE5: ;
    ebx = ZX8(MEM8(edx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = eax; /* cmove */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00173AE0; /* jl: less (signed <) */

loc_00173AF5: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_00173AF7: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173B05u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00173B05: ;
    PUSH32(esp, 0x321558);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173B13u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00173B13: ;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173B1Du); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00173B1D: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00173B2Du); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00173B2D: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00173B36u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00173B36: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173B40
 * Original: 0x00173B40 - 0x00173B93 (83 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173B40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173B5Eu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173B5E: ;
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173B74u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173B74: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1E9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1E9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edx + ecx) = LO8(eax);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173BA0
 * Original: 0x00173BA0 - 0x00173C19 (121 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173BA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173BBCu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173BBC: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173BCAu); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00173BCA: ;
    PUSH32(esp, 0x32157C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173BD8u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00173BD8: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1E9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1E9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(ecx + edx));
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173BF9u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00173BF9: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00173C09u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00173C09: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00173C12u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00173C12: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173C20
 * Original: 0x00173C20 - 0x00173CC0 (160 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173C20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173C3Du); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173C3D: ;
    edx = MEM32(0x3888C0);
    ecx = ZX8(MEM8(edx + 0x1ED0));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_00173C76; /* jle: less or equal (signed <=) */

loc_00173C52: ;
    esi = edx + 0x1E90;
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    /* nop */

loc_00173C60: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00173C75; /* je: equal / zero */

loc_00173C64: ;
    edi = ZX8(MEM8(esi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00173C6D; /* jne: not equal / not zero */

loc_00173C6B: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00173C6D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00173C60; /* jl: less (signed <) */

loc_00173C75: ;
    POP32(esp, edi);

loc_00173C76: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00173C84u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00173C84: ;
    PUSH32(esp, 0x32159C);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00173C92u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00173C92: ;
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00173C9Fu); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00173C9F: ;
    esi = MEM32(esp + 0x1C);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00173CAFu); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00173CAF: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173CB8u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00173CB8: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173CC0
 * Original: 0x00173CC0 - 0x00173D3A (122 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173CC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173CD3u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00173CD3: ;
    PUSH32(esp, 0x3215D4);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173CE1u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00173CE1: ;
    edi = MEM32(0x3C96C0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00173D19; /* jle: less or equal (signed <=) */

loc_00173CEB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00173CF0: ;
    eax = MEM32(0x3C94FC);
    eax = MEM32(esi + eax);
    PUSH32(esp, 0x3215C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00173D03u); RECOMP_ABI_CALL(0x00154E60u, sub_00154E60); /* call 0x00154E60 */

loc_00173D03: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173D10u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00173D10: ;
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x178;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00173CF0; /* jne: not equal / not zero */

loc_00173D19: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00173D29u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00173D29: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00173D32u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00173D32: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173D40
 * Original: 0x00173D40 - 0x00173E82 (322 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173D40(void)
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

loc_00173D40: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173D5Eu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173D5E: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00173D6Du); RECOMP_ABI_CALL(0x00079600u, sub_00079600); /* call 0x00079600 */

loc_00173D6D: ;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 8);
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00173D8Fu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173D8F: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    PUSH32(esp, 2);
    edx = esp + 0xC;
    MEM8(esp + 0x1C) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00173DAAu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173DAA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    ecx = 0x3C6600;
    MEM8(esp + 0x1E) = LO8(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00173DCCu); RECOMP_ABI_CALL(0x000C6150u, sub_000C6150); /* call 0x000C6150 */

loc_00173DCC: ;
    PUSH32(esp, 3);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00173DDAu); RECOMP_ABI_CALL(0x0017B3F0u, sub_0017B3F0); /* call 0x0017B3F0 */

loc_00173DDA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF460); /* mulss */
    PUSH32(esp, 4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00173DFCu); RECOMP_ABI_CALL(0x0017B3F0u, sub_0017B3F0); /* call 0x0017B3F0 */

loc_00173DFC: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF460); /* mulss */
    PUSH32(esp, edx);
    ecx = 0x3888C0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00173E1Fu); RECOMP_ABI_CALL(0x00079600u, sub_00079600); /* call 0x00079600 */

loc_00173E1F: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 8) (8-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00173E64; /* jne: not equal / not zero */

loc_00173E29: ;
    edx = MEM32(esp);
    PUSH32(esp, edx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00173E37u); RECOMP_ABI_CALL(0x00079600u, sub_00079600); /* call 0x00079600 */

loc_00173E37: ;
    SET_LO8(ecx, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0xA) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00173E64; /* jne: not equal / not zero */

loc_00173E40: ;
    edx = MEM32(esp);
    PUSH32(esp, edx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00173E4Eu); RECOMP_ABI_CALL(0x00079600u, sub_00079600); /* call 0x00079600 */

loc_00173E4E: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2FF460)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00173E7E; /* jbe: below or equal (unsigned <=) */

loc_00173E64: ;
    ecx = MEM32(esp);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00173E77u); RECOMP_ABI_CALL(0x000795C0u, sub_000795C0); /* call 0x000795C0 */

loc_00173E77: ;
    MEM8(0x51FB24) = 1;

loc_00173E7E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00173E90
 * Original: 0x00173E90 - 0x00173EE3 (83 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173E90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173EAEu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173EAE: ;
    PUSH32(esp, 1);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00173EC4u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173EC4: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = MEM32(esp + 8);
    ecx = MEM32(0x3888C0);
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + ecx + 0x1E91) = LO8(edx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173EF0
 * Original: 0x00173EF0 - 0x00173F68 (120 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173EF0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173F0Cu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173F0C: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173F1Au); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00173F1A: ;
    PUSH32(esp, 0x3215F0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173F28u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00173F28: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x3888C0);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(int32_t)SMEM8(ecx + edx + 0x1E91);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173F48u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00173F48: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00173F58u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00173F58: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00173F61u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00173F61: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173F70
 * Original: 0x00173F70 - 0x00173FC2 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173F70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173F8Eu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173F8E: ;
    PUSH32(esp, 1);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00173FA4u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173FA4: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(0x3888C0);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + ecx + 0x1E94) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00173FD0
 * Original: 0x00173FD0 - 0x00174047 (119 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00173FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00173FD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00173FECu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00173FEC: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00173FFAu); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00173FFA: ;
    PUSH32(esp, 0x32160C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00174008u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00174008: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x3888C0);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + edx + 0x1E94);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00174027u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00174027: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00174037u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00174037: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00174040u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00174040: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00174050
 * Original: 0x00174050 - 0x00174134 (228 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00174050: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017406Eu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_0017406E: ;
    PUSH32(esp, 1);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00174084u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00174084: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x3888C0);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax;
    SET_LO8(eax, MEM8(ecx + 0x1E91));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 4);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001740EB; /* jne: not equal / not zero */

loc_001740A2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001740AF; /* ja: above (unsigned >) */

loc_001740A8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x174134); /* switch: 8 entries, 8 targets */
    if (_jt == 0x001740AFu) goto loc_001740AF;
    if (_jt == 0x001740BEu) goto loc_001740BE;
    if (_jt == 0x001740CDu) goto loc_001740CD;
    if (_jt == 0x001740DCu) goto loc_001740DC;
    if (_jt == 0x001740F8u) goto loc_001740F8;
    if (_jt == 0x00174107u) goto loc_00174107;
    if (_jt == 0x00174116u) goto loc_00174116;
    if (_jt == 0x00174125u) goto loc_00174125;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001740AF: ;
    eax = 0x61829B73;
    MEM32(ecx + 0x1E98) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001740BE: ;
    eax = 0x256BF40B;
    MEM32(ecx + 0x1E98) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001740CD: ;
    eax = 0xD3B29318u;
    MEM32(ecx + 0x1E98) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001740DC: ;
    eax = 0xEFFD269Eu;
    MEM32(ecx + 0x1E98) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001740EB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00174125; /* ja: above (unsigned >) */

loc_001740F1: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x174144); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001740F8u) goto loc_001740F8;
    if (_jt == 0x00174107u) goto loc_00174107;
    if (_jt == 0x00174116u) goto loc_00174116;
    if (_jt == 0x00174125u) goto loc_00174125;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001740F8: ;
    eax = 0xA3F7A0CDu;
    MEM32(ecx + 0x1E98) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00174107: ;
    eax = 0x34D37203;
    MEM32(ecx + 0x1E98) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00174116: ;
    eax = 0x28B2770A;
    MEM32(ecx + 0x1E98) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00174125: ;
    eax = 0xF06CBFD9u;
    MEM32(ecx + 0x1E98) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00174160
 * Original: 0x00174160 - 0x001741D6 (118 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174160: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0017417Cu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_0017417C: ;
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0017418Au); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_0017418A: ;
    PUSH32(esp, 0x321628);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00174198u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00174198: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x3888C0);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + edx + 0x1E98);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001741B6u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_001741B6: ;
    esi = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001741C6u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_001741C6: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001741CFu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_001741CF: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001741E0
 * Original: 0x001741E0 - 0x0017423D (93 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001741E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001741E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x001741F2u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_001741F2: ;
    PUSH32(esp, 0x321644);
    ecx = esp + 8;
    PUSH32(esp, 0x00174200u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00174200: ;
    eax = MEM32(0x3888C0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x1359));
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x0017421Du); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_0017421D: ;
    esi = MEM32(esp + 0x14);
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0017422Du); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_0017422D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00174236u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00174236: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00174240
 * Original: 0x00174240 - 0x001742A2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174240: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    ecx = esp + 4;
    PUSH32(esp, 0x00174251u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00174251: ;
    PUSH32(esp, 0x321660);
    ecx = esp + 4;
    PUSH32(esp, 0x0017425Fu); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_0017425F: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x20 (8-bit) */
    ecx = esp;
    if (TEST_Z(_fa, _fb)) goto loc_00174277; /* je: equal / zero */

loc_00174270: ;
    PUSH32(esp, 0x3068D4);
    goto loc_0017427C;

loc_00174277: ;
    PUSH32(esp, 0x3068CC);

loc_0017427C: ;
    PUSH32(esp, 0x00174281u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00174281: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00174292u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00174292: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0017429Bu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_0017429B: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001742B0
 * Original: 0x001742B0 - 0x001742E8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001742B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001742B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001742C1u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_001742C1: ;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp), 1 (32-bit) */
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED4));
    if (CMP_NE(_fa, _fb)) goto loc_001742DD; /* jne: not equal / not zero */

loc_001742D2: ;
    SET_LO8(ecx, LO8(ecx) | 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0x1ED4) = LO8(ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001742DD: ;
    SET_LO8(ecx, LO8(ecx) & 0xDF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 0x1ED4) = LO8(ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001742F0
 * Original: 0x001742F0 - 0x0017433E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001742F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001742F0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00174301u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00174301: ;
    eax = MEM32(esp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0017431B; /* je: equal / zero */

loc_00174307: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0017430D; /* je: equal / zero */

loc_0017430A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00174314; /* je: equal / zero */

loc_0017430D: ;
    eax = 3;
    goto loc_0017431D;

loc_00174314: ;
    eax = 2;
    goto loc_0017431D;

loc_0017431B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0017431D: ;
    ecx = MEM32(0x3888C0);
    SET_LO8(edx, MEM8(ecx + 0x1ED4));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x1ED4));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x1ED4) = LO8(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00174340
 * Original: 0x00174340 - 0x001743CE (142 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174340: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    ecx = esp + 4;
    PUSH32(esp, 0x00174351u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00174351: ;
    eax = MEM32(0x3888C0);
    eax = ZX8(MEM8(eax + 0x1ED4));
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00174379; /* je: equal / zero */

loc_00174365: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00174372; /* je: equal / zero */

loc_0017436A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 2;
    goto loc_0017437E;

loc_00174372: ;
    eax = 3;
    goto loc_0017437E;

loc_00174379: ;
    eax = 1;

loc_0017437E: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0017438Fu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0017438F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x321674);
    ecx = esp + 8;
    PUSH32(esp, 0x001743A0u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001743A0: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x001743AEu); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_001743AE: ;
    esi = MEM32(esp + 0x34);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001743BEu); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_001743BE: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001743C7u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_001743C7: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001743D0
 * Original: 0x001743D0 - 0x00174448 (120 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001743D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001743D0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 5;
    MEM32(esp + 0x10) = 0xA;
    MEM32(esp + 0x14) = 0xF;
    MEM32(esp + 0x18) = 0x14;
    MEM32(esp + 0x1C) = 0x19;
    MEM32(esp + 0x20) = 0x1E;
    MEM32(esp + 0x24) = 0x2D;
    MEM32(esp + 0x28) = 0x3C;
    MEM32(esp + 0x2C) = 0x4B;
    MEM32(esp + 0x30) = 0x5A;
    PUSH32(esp, 0x00174433u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00174433: ;
    ecx = MEM32(esp);
    SET_LO8(edx, MEM8(esp + ecx * 4));
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x1ED2) = LO8(edx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00174450
 * Original: 0x00174450 - 0x00174538 (232 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174450: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    ecx = esp + 4;
    PUSH32(esp, 0x00174461u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00174461: ;
    PUSH32(esp, 0x321684);
    ecx = esp + 4;
    PUSH32(esp, 0x0017446Fu); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_0017446F: ;
    eax = MEM32(0x3888C0);
    eax = ZX8(MEM8(eax + 0x1ED2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    ecx = 4;
    if (CMP_NE(_fa, _fb)) goto loc_0017448C; /* jne: not equal / not zero */

loc_00174485: ;
    ecx = 1;
    goto loc_001744F6;

loc_0017448C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00174498; /* jne: not equal / not zero */

loc_00174491: ;
    ecx = 2;
    goto loc_001744F6;

loc_00174498: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001744A4; /* jne: not equal / not zero */

loc_0017449D: ;
    ecx = 3;
    goto loc_001744F6;

loc_001744A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001744B0; /* jne: not equal / not zero */

loc_001744A9: ;
    ecx = 4;
    goto loc_001744F6;

loc_001744B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001744BC; /* jne: not equal / not zero */

loc_001744B5: ;
    ecx = 5;
    goto loc_001744F6;

loc_001744BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001744C8; /* jne: not equal / not zero */

loc_001744C1: ;
    ecx = 6;
    goto loc_001744F6;

loc_001744C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001744D4; /* jne: not equal / not zero */

loc_001744CD: ;
    ecx = 7;
    goto loc_001744F6;

loc_001744D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001744E0; /* jne: not equal / not zero */

loc_001744D9: ;
    ecx = 8;
    goto loc_001744F6;

loc_001744E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001744EC; /* jne: not equal / not zero */

loc_001744E5: ;
    ecx = 9;
    goto loc_001744F6;

loc_001744EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001744F6; /* jne: not equal / not zero */

loc_001744F1: ;
    ecx = 0xA;

loc_001744F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00174507u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00174507: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00174518u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00174518: ;
    esi = MEM32(esp + 0x34);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00174528u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00174528: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00174531u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00174531: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00174540
 * Original: 0x00174540 - 0x00174566 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174540(void)
{

loc_00174540: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00174551u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00174551: ;
    SET_LO8(eax, MEM8(esp));
    edx = MEM32(0x3888C0);
    SET_LO8(ecx, 5);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(edx + 0x1ED3) = LO8(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00174570
 * Original: 0x00174570 - 0x001745F4 (132 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174570: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    ecx = esp + 4;
    PUSH32(esp, 0x00174581u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00174581: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1ED3));
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_001745A4; /* jne: not equal / not zero */

loc_0017459F: ;
    eax = 1;

loc_001745A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001745B5u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001745B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x321690);
    ecx = esp + 8;
    PUSH32(esp, 0x001745C6u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001745C6: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x001745D4u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_001745D4: ;
    esi = MEM32(esp + 0x34);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001745E4u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_001745E4: ;
    ecx = esp + 4;
    PUSH32(esp, 0x001745EDu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_001745ED: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00174600
 * Original: 0x00174600 - 0x0017489D (669 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174600: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x1ED5) = MEM8(eax + 0x1ED5) | 1;
    _fa = (uint32_t)(MEM8(eax + 0x1ED5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(0x3888C0);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x1EE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1EE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0017461Eu); RECOMP_ABI_CALL(0x000821C0u, sub_000821C0); /* call 0x000821C0 */

loc_0017461E: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x1359) = MEM8(eax + 0x1359) & 0xCF;
    _fa = (uint32_t)(MEM8(eax + 0x1359)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(0x3788D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017466B; /* jne: not equal / not zero */

loc_00174634: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174660; /* je: equal / zero */

loc_00174642: ;
    ecx = MEM32(0x51FB20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);

loc_0017464B: ;
    PUSH32(esp, 0x51FAE0);
    ecx = eax + 0x1EE8;
    PUSH32(esp, 0x0017465Bu); RECOMP_ABI_CALL(0x00082350u, sub_00082350); /* call 0x00082350 */

loc_0017465B: ;
    goto loc_00174851;

loc_00174660: ;
    edx = MEM32(0x51FB20);
    PUSH32(esp, edx);
    PUSH32(esp, 0xC);
    goto loc_0017464B;

loc_0017466B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001746AA; /* jne: not equal / not zero */

loc_00174670: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x1ED4) = MEM8(eax + 0x1ED4) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(0x51FB30);

loc_00174682: ;
    eax = MEM32(0x3788E0);
    eax = eax + eax * 4;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + -32;
    ecx = MEM32(0x3888C0);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1EE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1EE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001746A5u); RECOMP_ABI_CALL(0x000824B0u, sub_000824B0); /* call 0x000824B0 */

loc_001746A5: ;
    goto loc_00174851;

loc_001746AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001746C3; /* jne: not equal / not zero */

loc_001746AF: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x1ED4) = MEM8(eax + 0x1ED4) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(0x51FB34);
    goto loc_00174682;

loc_001746C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001746DC; /* jne: not equal / not zero */

loc_001746C8: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x1ED4) = MEM8(eax + 0x1ED4) & 0xDF;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(0x51FB34);
    goto loc_00174682;

loc_001746DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00174762; /* jne: not equal / not zero */

loc_001746E6: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x1ED4) = MEM8(eax + 0x1ED4) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(0x51FB40);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00174700: ;
    eax = MEM32(esi + edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174755; /* je: equal / zero */

loc_0017470B: ;
    ecx = MEM32(esi + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174755; /* je: equal / zero */

loc_00174716: ;
    edx = MEM32(esi + edx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD4);
    edi = MEM32(0x51FB38);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + edi + 0x80));
    eax = eax + ecx * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + edi + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1EE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1EE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0017474Fu); RECOMP_ABI_CALL(0x00082350u, sub_00082350); /* call 0x00082350 */

loc_0017474F: ;
    edx = MEM32(0x51FB40);

loc_00174755: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00174700; /* jb: below (unsigned <) */

loc_0017475D: ;
    goto loc_00174850;

loc_00174762: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED4));
    if (CMP_NE(_fa, _fb)) goto loc_001747E2; /* jne: not equal / not zero */

loc_00174772: ;
    SET_LO8(ecx, LO8(ecx) | 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0x1ED4) = LO8(ecx);
    edx = MEM32(0x51FB40);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00174783: ;
    eax = MEM32(esi + edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001747D8; /* je: equal / zero */

loc_0017478E: ;
    ecx = MEM32(esi + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001747D8; /* je: equal / zero */

loc_00174799: ;
    edx = MEM32(esi + edx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD4);
    edi = MEM32(0x51FB3C);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + edi + 0x80));
    eax = eax + ecx * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + edi + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1EE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1EE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001747D2u); RECOMP_ABI_CALL(0x00082350u, sub_00082350); /* call 0x00082350 */

loc_001747D2: ;
    edx = MEM32(0x51FB40);

loc_001747D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00174783; /* jb: below (unsigned <) */

loc_001747E0: ;
    goto loc_00174850;

loc_001747E2: ;
    SET_LO8(ecx, LO8(ecx) & 0xDF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 0x1ED4) = LO8(ecx);
    edx = MEM32(0x51FB40);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001747F3: ;
    eax = MEM32(esi + edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174848; /* je: equal / zero */

loc_001747FE: ;
    ecx = MEM32(esi + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174848; /* je: equal / zero */

loc_00174809: ;
    edx = MEM32(esi + edx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD4);
    edi = MEM32(0x51FB3C);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + edi + 0x80));
    eax = eax + ecx * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + edi + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1EE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1EE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00174842u); RECOMP_ABI_CALL(0x00082350u, sub_00082350); /* call 0x00082350 */

loc_00174842: ;
    edx = MEM32(0x51FB40);

loc_00174848: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001747F3; /* jb: below (unsigned <) */

loc_00174850: ;
    POP32(esp, edi);

loc_00174851: ;
    eax = MEM32(0x3788D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174860; /* je: equal / zero */

loc_0017485B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017489B; /* jne: not equal / not zero */

loc_00174860: ;
    ecx = MEM32(0x3888C0);
    SET_LO8(eax, MEM8(ecx + 0x1FA6));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0017489B; /* jbe: below or equal (unsigned <=) */

loc_00174872: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00174874: ;
    _fa = (uint32_t)(MEM8(eax + ecx + 0x1EF8)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx + 0x1EF8), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017488C; /* jne: not equal / not zero */

loc_0017487E: ;
    MEM8(eax + ecx + 0x1EF8) = 0xB;
    ecx = MEM32(0x3888C0);

loc_0017488C: ;
    esi = ZX8(MEM8(ecx + 0x1FA6));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00174874; /* jb: below (unsigned <) */

loc_0017489B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001748A0
 * Original: 0x001748A0 - 0x001749D8 (312 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001748A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001748A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001748BAu); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_001748BA: ;
    PUSH32(esp, 0x3216A0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001748C8u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001748C8: ;
    ecx = MEM32(0x3888C0);
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1F8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1F8C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x321344);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001748E4u); RECOMP_ABI_CALL(0x002BF39Fu, sub_002BF39F); /* call 0x002BF39F */

loc_001748E4: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFCEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFCEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001748F8u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_001748F8: ;
    ecx = MEM32(0x3888C0);
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1F3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1F3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x321344);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00174914u); RECOMP_ABI_CALL(0x002BF39Fu, sub_002BF39F); /* call 0x002BF39F */

loc_00174914: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFCEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFCEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00174928u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00174928: ;
    ecx = MEM32(0x3888C0);
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1EEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1EEC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x321344);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00174944u); RECOMP_ABI_CALL(0x002BF39Fu, sub_002BF39F); /* call 0x002BF39F */

loc_00174944: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFCEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFCEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00174958u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00174958: ;
    ecx = MEM32(0x3888C0);
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1F50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1F50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x321344);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00174974u); RECOMP_ABI_CALL(0x002BF39Fu, sub_002BF39F); /* call 0x002BF39F */

loc_00174974: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFCEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFCEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00174988u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00174988: ;
    ecx = MEM32(0x3888C0);
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1F78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1F78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x321344);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001749A4u); RECOMP_ABI_CALL(0x002BF39Fu, sub_002BF39F); /* call 0x002BF39F */

loc_001749A4: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFCEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFCEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001749B8u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_001749B8: ;
    esi = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001749C8u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_001749C8: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001749D1u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_001749D1: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001749E0
 * Original: 0x001749E0 - 0x00174AF7 (279 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001749E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001749E0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x001749F2u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_001749F2: ;
    PUSH32(esp, 0x3216D4);
    ecx = esp + 8;
    PUSH32(esp, 0x00174A00u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00174A00: ;
    eax = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1F8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F8C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x3216C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00174A1Au); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00174A1A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00174A2Bu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00174A2B: ;
    eax = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1F3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x3216C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00174A45u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00174A45: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00174A56u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00174A56: ;
    eax = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1EEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1EEC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x3216C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00174A70u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00174A70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00174A81u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00174A81: ;
    eax = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1F50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x3216C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00174A9Bu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00174A9B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00174AACu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00174AAC: ;
    eax = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1F78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x3216C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00174AC6u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00174AC6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00174AD7u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00174AD7: ;
    esi = MEM32(esp + 0x54);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00174AE7u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00174AE7: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00174AF0u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00174AF0: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00174B00
 * Original: 0x00174B00 - 0x00174BA3 (163 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174B00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    ecx = esp + 4;
    PUSH32(esp, 0x00174B11u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00174B11: ;
    PUSH32(esp, 0x3216F8);
    ecx = esp + 4;
    PUSH32(esp, 0x00174B1Fu); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00174B1F: ;
    ecx = MEM32(0x3888C0);
    SET_LO8(eax, MEM8(ecx + 0x1359));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00174B52; /* jne: not equal / not zero */

loc_00174B34: ;
    eax = ZX8(MEM8(ecx + 0x1FA0));
    eax = eax + eax * 4;
    ecx = ZX8(MEM8(ecx + eax * 4 + 0x1EF9));
    PUSH32(esp, ecx);
    ecx = esp + 4;
    PUSH32(esp, 0x00174B50u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00174B50: ;
    goto loc_00174B82;

loc_00174B52: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00174B74; /* jne: not equal / not zero */

loc_00174B56: ;
    eax = ZX8(MEM8(ecx + 0x1FA0));
    edx = eax + eax * 4;
    eax = ZX8(MEM8(ecx + edx * 4 + 0x1EFA));
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x00174B72u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00174B72: ;
    goto loc_00174B82;

loc_00174B74: ;
    PUSH32(esp, 0x3068CC);
    ecx = esp + 4;
    PUSH32(esp, 0x00174B82u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00174B82: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00174B93u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00174B93: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00174B9Cu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00174B9C: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00174BB0
 * Original: 0x00174BB0 - 0x00174C40 (144 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174BB0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    ecx = esp + 4;
    PUSH32(esp, 0x00174BC1u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00174BC1: ;
    PUSH32(esp, 0x32172C);
    ecx = esp + 4;
    PUSH32(esp, 0x00174BCFu); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00174BCF: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1359)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1359), 0x30 (8-bit) */
    PUSH32(esp, 7);
    if (TEST_NZ(_fa, _fb)) goto loc_00174BF4; /* jne: not equal / not zero */

loc_00174BDF: ;
    eax = ZX8(MEM8(eax + 0x1FA3));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x32171C);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    goto loc_00174C09;

loc_00174BF4: ;
    edx = ZX8(MEM8(eax + 0x1FA3));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x32171C);
    eax = esp + 0x18;
    PUSH32(esp, eax);

loc_00174C09: ;
    PUSH32(esp, 0x00174C0Eu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00174C0E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x00174C20u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00174C20: ;
    esi = MEM32(esp + 0x24);
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00174C30u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00174C30: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00174C39u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00174C39: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00174C91
 * Original: 0x00174C91 - 0x00174C94 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174C91(void)
{

loc_00174C91: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00174CA0
 * Original: 0x00174CA0 - 0x00174D71 (209 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174CA0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    ecx = esp + 4;
    PUSH32(esp, 0x00174CB1u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00174CB1: ;
    PUSH32(esp, 0x321780);
    ecx = esp + 4;
    PUSH32(esp, 0x00174CBFu); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00174CBF: ;
    SET_LO8(eax, MEM8(0x3788E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174D42; /* je: equal / zero */

loc_00174CC8: ;
    SET_LO8(eax, MEM8(0x38941C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174CD8; /* je: equal / zero */

loc_00174CD1: ;
    PUSH32(esp, 0x321774);
    goto loc_00174D47;

loc_00174CD8: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00174D03; /* je: equal / zero */

loc_00174CE6: ;
    SET_LO8(eax, MEM8(eax + 0x1359));
    SET_LO8(eax, LO8(eax) & 0x30);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    ecx = esp;
    if (CMP_NE(_fa, _fb)) goto loc_00174CFC; /* jne: not equal / not zero */

loc_00174CF5: ;
    PUSH32(esp, 0x321764);
    goto loc_00174D4B;

loc_00174CFC: ;
    PUSH32(esp, 0x321754);
    goto loc_00174D4B;

loc_00174D03: ;
    PUSH32(esp, 0x32174C);
    PUSH32(esp, 0x00174D0Du); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00174D0D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00174D13u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00174D13: ;
    ecx = MEM32(0x51FB60);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00174D28u); RECOMP_ABI_CALL(0x00079550u, sub_00079550); /* call 0x00079550 */

loc_00174D28: ;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, 0x316F90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00174D38u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00174D38: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    goto loc_00174D47;

loc_00174D42: ;
    PUSH32(esp, 0x3021CE);

loc_00174D47: ;
    ecx = esp + 4;

loc_00174D4B: ;
    PUSH32(esp, 0x00174D50u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00174D50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00174D61u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00174D61: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00174D6Au); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00174D6A: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00174D80
 * Original: 0x00174D80 - 0x00174DD4 (84 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174D80: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00174D9D; /* jle: less or equal (signed <=) */

loc_00174D91: ;
    MEM8(0x51FB58) = 1;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00174D9D: ;
    eax = 1;
    if (CMP_GE(_fas, _fbs)) goto loc_00174DAB; /* jge: greater or equal (signed >=) */

loc_00174DA4: ;
    MEM8(0x51FB58) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00174DAB: ;
    ecx = MEM32(0x389414);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174DD0; /* je: equal / zero */

loc_00174DB5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00174DD0; /* je: equal / zero */

loc_00174DBA: ;
    ecx = MEM32(edx + 4);
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00174DCE; /* jle: less or equal (signed <=) */

loc_00174DC4: ;
    MEM8(0x51FB58) = LO8(eax);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00174DCE: ;
    if (CMP_L(_fas, _fbs)) goto loc_00174DA4; /* jl: less (signed <) */

loc_00174DD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00174DE0
 * Original: 0x00174DE0 - 0x00174ED3 (243 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174DE0: ;
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, 0x00174DF5u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00174DF5: ;
    PUSH32(esp, 0x3217D0);
    ecx = esp + 8;
    PUSH32(esp, 0x00174E03u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00174E03: ;
    ecx = MEM32(0x3888C0);
    eax = ZX8(MEM8(ecx + 0x1FA0));
    eax = eax + eax * 4;
    ecx = ecx + eax * 4 + 0x1EEC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x3216C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00174E2Au); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00174E2A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00174E3Bu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00174E3B: ;
    ecx = MEM32(0x3888C0);
    eax = ZX8(MEM8(ecx + 0x1FA0));
    edx = eax + eax * 4;
    eax = ZX8(MEM8(ecx + edx * 4 + 0x1EF8));
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x3217B8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00174E63u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00174E63: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x00174E74u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00174E74: ;
    ecx = MEM32(0x3888C0);
    eax = ZX8(MEM8(ecx + 0x1FA0));
    eax = eax + eax * 4;
    ecx = ZX8(MEM8(ecx + eax * 4 + 0x1EF8));
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x321798);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00174E9Cu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00174E9C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00174EADu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00174EAD: ;
    esi = MEM32(esp + 0x214);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00174EC0u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00174EC0: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00174EC9u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00174EC9: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00174EE0
 * Original: 0x00174EE0 - 0x00174F1B (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174EE0: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1FA6));
    edx = ZX8(MEM8(eax + 0x1FA3));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00174F0E; /* jne: not equal / not zero */

loc_00174EFA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3217F0);
    PUSH32(esp, 0x00174F0Au); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00174F0A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00174F0E: ;
    PUSH32(esp, 1);
    ecx = 0x3C250C;
    PUSH32(esp, 0x00174F1Au); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_00174F1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00174F20
 * Original: 0x00174F20 - 0x00175018 (248 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00174F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174F20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1FFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1FFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(0x3888C0);
    MEM32(eax + 0x200C) = ebx;
    MEM32(eax + 0x2010) = ebx;
    MEM32(eax + 0x2014) = ebx;
    MEM32(eax + 0x2018) = ebx;
    _fb = (uint32_t)(0x200C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x3888C0);
    MEM32(eax + 0x201C) = ebx;
    MEM32(eax + 0x2020) = ebx;
    MEM32(eax + 0x2024) = ebx;
    MEM32(eax + 0x2028) = ebx;
    _fb = (uint32_t)(0x201C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x201C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x3888C0);
    _fb = (uint32_t)(0x202C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x202C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(0x3888C0);
    MEM32(eax + 0x1FB4) = ebx;
    ecx = MEM32(0x3888C0);
    MEM32(ecx + 0x1FB8) = ebx;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x1ED4) = MEM8(eax + 0x1ED4) | 0x10;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(0x3888C0);
    MEM8(0x51FB5C) = LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + 0x1ED0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x1ED0), LO8(ebx) (8-bit) */
    MEM8(esp + 4) = LO8(ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0017500E; /* jbe: below or equal (unsigned <=) */

loc_00174FCD: ;
    /* nop */

loc_00174FD0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00174FE3u); RECOMP_ABI_CALL(0x0007A300u, sub_0007A300); /* call 0x0007A300 */

loc_00174FE3: ;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xA), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = 0x3C6600;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00174FF4u); RECOMP_ABI_CALL(0x000C6150u, sub_000C6150); /* call 0x000C6150 */

loc_00174FF4: ;
    SET_LO8(eax, MEM8(esp + 4));
    ecx = MEM32(0x3888C0);
    SET_LO8(edx, MEM8(ecx + 0x1ED0));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    MEM8(esp + 4) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_00174FD0; /* jb: below (unsigned <) */

loc_0017500E: ;
    MEM8(0x3C250F) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00175020
 * Original: 0x00175020 - 0x001750D6 (182 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175020: ;
    ecx = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1EE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1EE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00175031u); RECOMP_ABI_CALL(0x000821A0u, sub_000821A0); /* call 0x000821A0 */

loc_00175031: ;
    ecx = MEM32(0x3888C0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x3C250F) = 1;
    MEM32(ecx + 0x1FFC) = eax;
    MEM32(ecx + 0x2000) = eax;
    MEM32(ecx + 0x2004) = eax;
    MEM32(ecx + 0x2008) = eax;
    _fb = (uint32_t)(0x1FFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1FFC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x3888C0);
    MEM32(ecx + 0x200C) = eax;
    MEM32(ecx + 0x2010) = eax;
    MEM32(ecx + 0x2014) = eax;
    MEM32(ecx + 0x2018) = eax;
    _fb = (uint32_t)(0x200C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x200C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x3888C0);
    MEM32(ecx + 0x201C) = eax;
    MEM32(ecx + 0x2020) = eax;
    MEM32(ecx + 0x2024) = eax;
    MEM32(ecx + 0x2028) = eax;
    _fb = (uint32_t)(0x201C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x201C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x3888C0);
    _fb = (uint32_t)(0x202C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x202C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(0x3888C0);
    MEM32(ecx + 0x1FB4) = eax;
    edx = MEM32(0x3888C0);
    MEM32(edx + 0x1FB8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001750E0
 * Original: 0x001750E0 - 0x00175145 (101 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001750E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001750E0: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x1ED5) = MEM8(eax + 0x1ED5) | 2;
    _fa = (uint32_t)(MEM8(eax + 0x1ED5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED0));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00175130; /* jbe: below or equal (unsigned <=) */

loc_001750FE: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00175101: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + eax + 0x1E9C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00175115u); RECOMP_ABI_CALL(0x000C5FE0u, sub_000C5FE0); /* call 0x000C5FE0 */

loc_00175115: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1ED0));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175101; /* jl: less (signed <) */

loc_00175129: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00175143; /* jge: greater or equal (signed >=) */

loc_0017512F: ;
    /* nop */

loc_00175130: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0017513Du); RECOMP_ABI_CALL(0x000C5FE0u, sub_000C5FE0); /* call 0x000C5FE0 */

loc_0017513D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175130; /* jl: less (signed <) */

loc_00175143: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00175150
 * Original: 0x00175150 - 0x001751BB (107 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175150: ;
    eax = MEM32(0x3888C0);
    SET_LO8(edx, MEM8(eax + 0x1ED5));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    SET_LO8(edx, LO8(edx) & 0xFD);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    MEM8(eax + 0x1ED5) = LO8(edx);
    PUSH32(esp, 0x00175172u); RECOMP_ABI_CALL(0x000C68A0u, sub_000C68A0); /* call 0x000C68A0 */

loc_00175172: ;
    ecx = 0x3C6600;
    PUSH32(esp, 0x0017517Cu); RECOMP_ABI_CALL(0x000C5200u, sub_000C5200); /* call 0x000C5200 */

loc_0017517C: ;
    ebp = ZX8(LO8(eax));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00175189; /* jle: less or equal (signed <=) */

loc_00175184: ;
    ebp = 4;

loc_00175189: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001751B8; /* jle: less or equal (signed <=) */

loc_0017518F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00175193: ;
    ebx = MEM32(0x3888C0);
    PUSH32(esp, esi);
    ecx = 0x3C6600;
    _fb = (uint32_t)(0x1E90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1E90;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001751AAu); RECOMP_ABI_CALL(0x000C5EC0u, sub_000C5EC0); /* call 0x000C5EC0 */

loc_001751AA: ;
    MEM8(edi + ebx + 0xC) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175193; /* jl: less (signed <) */

loc_001751B6: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001751B8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001751C0
 * Original: 0x001751C0 - 0x00175219 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001751C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001751C0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x4C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x83) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x83;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001751D1: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x321808);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001751E1u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001751E1: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001751EBu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001751EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001751F1u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_001751F1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017520A; /* je: equal / zero */

loc_001751F8: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    edx = edi + -11;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00175204u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00175204: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi) = 0;

loc_0017520A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001751D1; /* jl: less (signed <) */

loc_00175213: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00175220
 * Original: 0x00175220 - 0x00175276 (86 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175220: ;
    SET_LO8(eax, MEM8(0x51FB5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175275; /* je: equal / zero */

loc_00175229: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED5), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00175275; /* jne: not equal / not zero */

loc_00175237: ;
    _fa = (uint32_t)(MEM16(0x388876)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x388876), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175275; /* jne: not equal / not zero */

loc_00175241: ;
    MEM8(eax + 0x1ED0) = 0;
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    MEM8(0x51FB5C) = 0;
    PUSH32(esp, 0x0017525Bu); RECOMP_ABI_CALL(0x000C68A0u, sub_000C68A0); /* call 0x000C68A0 */

loc_0017525B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32181C);
    MEM8(0x51FB5C) = 1;
    PUSH32(esp, 0x00175272u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00175272: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00175275: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00175280
 * Original: 0x00175280 - 0x00175597 (791 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175280: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00175292u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00175292: ;
    PUSH32(esp, 0x3218C0);
    ecx = esp + 0x10;
    PUSH32(esp, 0x001752A0u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001752A0: ;
    SET_LO8(eax, MEM8(0x51FB5B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x3888C0);
    MEM8(0x3788E4) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00175301; /* je: equal / zero */

loc_001752B5: ;
    ecx = ZX8(MEM8(eax + 0x1FA6));
    edx = ZX8(MEM8(eax + 0x1FA3));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001752E9; /* jne: not equal / not zero */

loc_001752CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3217F0);
    PUSH32(esp, 0x001752DAu); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_001752DA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x51FB5B) = 0;
    goto loc_00175577;

loc_001752E9: ;
    PUSH32(esp, 1);
    ecx = 0x3C250C;
    PUSH32(esp, 0x001752F5u); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_001752F5: ;
    MEM8(0x51FB5B) = 0;
    goto loc_00175577;

loc_00175301: ;
    eax = ZX8(MEM8(eax + 0x1ED0));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x321888);
    PUSH32(esp, 0x00175321u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00175321: ;
    ecx = MEM32(0x3888C0);
    ebx = eax;
    eax = ZX8(MEM8(ecx + 0x1ED0));
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x321850);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x0017534Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0017534A: ;
    ecx = eax;
    eax = MEM32(0x3888C0);
    MEM8(0x51FB58) = 0;
    SET_LO8(edx, MEM8(eax + 0x1ED0));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00175425; /* jbe: below or equal (unsigned <=) */

loc_0017536F: ;
    edi = ebx;
    ebp = ecx + 8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00175376: ;
    PUSH32(esp, esi);
    MEM32(ebx + ebp) = esi;
    PUSH32(esp, 0x0017537Fu); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_0017537F: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0017538Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00175386u); } /* indirect call */
    }

loc_0017538C: ;
    ecx = MEM32(0x3888C0);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx + 0x1FC4);
    MEM32(edi + 4) = edx;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x20 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001753D4; /* je: equal / zero */

loc_001753AE: ;
    PUSH32(esp, 0x001753B3u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_001753B3: ;
    edx = MEM32(eax + 0x30);
    ecx = eax + 0x30;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x001753C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001753BCu); } /* indirect call */
    }

loc_001753C2: ;
    ecx = MEM32(0x3888C0);
    eax = ZX8(LO8(eax));
    edx = MEM32(ecx + eax * 4 + 0x1FAC);
    goto loc_001753F6;

loc_001753D4: ;
    PUSH32(esp, 0x001753D9u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_001753D9: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x001753E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001753E0u); } /* indirect call */
    }

loc_001753E6: ;
    ecx = MEM32(0x3888C0);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx + 0x1FC8);

loc_001753F6: ;
    MEM32(edi) = edx;
    MEM32(ebp) = esi;
    eax = MEM32(edi + 4);
    MEM32(ebp + -4) = eax;
    ecx = MEM32(edi);
    MEM32(ebp + -8) = ecx;
    eax = MEM32(0x3888C0);
    edx = ZX8(MEM8(eax + 0x1ED0));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175376; /* jl: less (signed <) */

loc_00175421: ;
    ebx = MEM32(esp + 0x10);

loc_00175425: ;
    eax = ZX8(MEM8(eax + 0x1ED0));
    PUSH32(esp, 0x174D80);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0017543Au); RECOMP_ABI_CALL(0x002BEF20u, sub_002BEF20); /* call 0x002BEF20 */

loc_0017543A: ;
    SET_LO8(eax, MEM8(0x51FB58));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017545D; /* jne: not equal / not zero */

loc_00175446: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0017544Cu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0017544C: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx;
    goto loc_00175461;

loc_0017545D: ;
    ebp = MEM32(esp + 0x14);

loc_00175461: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED0));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00175555; /* jbe: below or equal (unsigned <=) */

loc_00175476: ;
    esi = ebx + 8;
    /* nop */

loc_00175480: ;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x20 (8-bit) */
    ecx = esp + 0x18;
    if (TEST_Z(_fa, _fb)) goto loc_001754AE; /* je: equal / zero */

loc_0017548D: ;
    edx = MEM32(esi);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(int32_t)SMEM8(edx + eax + 0x1E91);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001754A7; /* jne: not equal / not zero */

loc_001754A0: ;
    PUSH32(esp, 0x321848);
    goto loc_001754B3;

loc_001754A7: ;
    PUSH32(esp, 0x321840);
    goto loc_001754B3;

loc_001754AE: ;
    PUSH32(esp, 0x321838);

loc_001754B3: ;
    PUSH32(esp, 0x001754B8u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_001754B8: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x001754C5u); RECOMP_ABI_CALL(0x00079550u, sub_00079550); /* call 0x00079550 */

loc_001754C5: ;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, 0x31B2E0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001754D5u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001754D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001754E6u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_001754E6: ;
    ecx = MEM32(esi + -8);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001754F9u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001754F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0017550Au); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_0017550A: ;
    ecx = MEM32(esi);
    edx = MEM32(0x3888C0);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + edx + 0x1FC4);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0017552Cu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0017552C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0017553Du); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_0017553D: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1ED0));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175480; /* jl: less (signed <) */

loc_00175555: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, ebx);
    MEM32(0x51FB60) = edx;
    PUSH32(esp, 0x00175564u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00175564: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175574; /* je: equal / zero */

loc_0017556B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00175571u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00175571: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00175574: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00175577: ;
    esi = MEM32(esp + 0x5C);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00175587u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00175587: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00175590u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00175590: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001755A0
 * Original: 0x001755A0 - 0x0017585B (699 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001755A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001755A0: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001755B1u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_001755B1: ;
    PUSH32(esp, 0x321948);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001755BFu); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_001755BF: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1FA6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1FA6), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001755D4; /* jbe: below or equal (unsigned <=) */

loc_001755CD: ;
    MEM8(0x3788E4) = 0;

loc_001755D4: ;
    eax = ZX8(MEM8(eax + 0x1ED0));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x321910);
    PUSH32(esp, 0x001755F5u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_001755F5: ;
    ebx = eax;
    eax = MEM32(0x3888C0);
    eax = ZX8(MEM8(eax + 0x1ED0));
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3218D8);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x0017561Du); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0017561D: ;
    ecx = eax;
    eax = MEM32(0x3888C0);
    MEM8(0x51FB58) = 0;
    SET_LO8(edx, MEM8(eax + 0x1ED0));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001756FF; /* jbe: below or equal (unsigned <=) */

loc_00175642: ;
    edi = ebx;
    ebp = ecx + 8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00175650: ;
    PUSH32(esp, esi);
    MEM32(ebx + ebp) = esi;
    PUSH32(esp, 0x00175659u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_00175659: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00175666u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00175660u); } /* indirect call */
    }

loc_00175666: ;
    ecx = MEM32(0x3888C0);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx + 0x2004);
    MEM32(edi + 4) = edx;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x20 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001756AE; /* je: equal / zero */

loc_00175688: ;
    PUSH32(esp, 0x0017568Du); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_0017568D: ;
    edx = MEM32(eax + 0x30);
    ecx = eax + 0x30;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x0017569Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00175696u); } /* indirect call */
    }

loc_0017569C: ;
    ecx = MEM32(0x3888C0);
    eax = ZX8(LO8(eax));
    edx = MEM32(ecx + eax * 4 + 0x1FB4);
    goto loc_001756D0;

loc_001756AE: ;
    PUSH32(esp, 0x001756B3u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_001756B3: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x001756C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001756BAu); } /* indirect call */
    }

loc_001756C0: ;
    ecx = MEM32(0x3888C0);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx + 0x2008);

loc_001756D0: ;
    MEM32(edi) = edx;
    MEM32(ebp) = esi;
    eax = MEM32(edi + 4);
    MEM32(ebp + -4) = eax;
    ecx = MEM32(edi);
    MEM32(ebp + -8) = ecx;
    eax = MEM32(0x3888C0);
    edx = ZX8(MEM8(eax + 0x1ED0));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175650; /* jl: less (signed <) */

loc_001756FB: ;
    ebx = MEM32(esp + 0x10);

loc_001756FF: ;
    eax = ZX8(MEM8(eax + 0x1ED0));
    PUSH32(esp, 0x174D80);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00175714u); RECOMP_ABI_CALL(0x002BEF20u, sub_002BEF20); /* call 0x002BEF20 */

loc_00175714: ;
    SET_LO8(eax, MEM8(0x51FB58));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175737; /* jne: not equal / not zero */

loc_00175720: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00175726u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00175726: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx;
    goto loc_0017573B;

loc_00175737: ;
    ebp = MEM32(esp + 0x14);

loc_0017573B: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED0));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00175819; /* jbe: below or equal (unsigned <=) */

loc_00175750: ;
    esi = ebx + 8;

loc_00175753: ;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x20 (8-bit) */
    ecx = esp + 0x18;
    if (TEST_Z(_fa, _fb)) goto loc_00175781; /* je: equal / zero */

loc_00175760: ;
    edx = MEM32(esi);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(int32_t)SMEM8(edx + eax + 0x1E91);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017577A; /* jne: not equal / not zero */

loc_00175773: ;
    PUSH32(esp, 0x321848);
    goto loc_00175786;

loc_0017577A: ;
    PUSH32(esp, 0x321840);
    goto loc_00175786;

loc_00175781: ;
    PUSH32(esp, 0x321838);

loc_00175786: ;
    PUSH32(esp, 0x0017578Bu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_0017578B: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00175798u); RECOMP_ABI_CALL(0x00079550u, sub_00079550); /* call 0x00079550 */

loc_00175798: ;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, 0x31B2E0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001757A8u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001757A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001757B9u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_001757B9: ;
    ecx = MEM32(esi + -8);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001757CCu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001757CC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001757DDu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_001757DD: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001757F0u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001757F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00175801u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00175801: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1ED0));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00175753; /* jl: less (signed <) */

loc_00175819: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, ebx);
    MEM32(0x51FB60) = edx;
    PUSH32(esp, 0x00175828u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00175828: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175838; /* je: equal / zero */

loc_0017582F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00175835u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00175835: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00175838: ;
    esi = MEM32(esp + 0x68);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00175848u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00175848: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00175851u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00175851: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00175860
 * Original: 0x00175860 - 0x00175D6B (1291 bytes, 270 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175860: ;
    PUSH32(esp, 0x1736F0);
    PUSH32(esp, 0x107E3DB3);
    PUSH32(esp, 0x0017586Fu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017586F: ;
    PUSH32(esp, 0x1737D0);
    PUSH32(esp, 0xD91352E8u);
    PUSH32(esp, 0x0017587Eu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017587E: ;
    PUSH32(esp, 0x173880);
    PUSH32(esp, 0x467A850A);
    PUSH32(esp, 0x0017588Du); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017588D: ;
    PUSH32(esp, 0x1738A0);
    PUSH32(esp, 0xB52C9EDBu);
    PUSH32(esp, 0x0017589Cu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_0017589C: ;
    PUSH32(esp, 0x173900);
    PUSH32(esp, 0xC6368797u);
    PUSH32(esp, 0x001758ABu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001758AB: ;
    PUSH32(esp, 0x173980);
    PUSH32(esp, 0x50E38DF8);
    PUSH32(esp, 0x001758BAu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001758BA: ;
    PUSH32(esp, 0x173A00);
    PUSH32(esp, 0x511BC4C);
    PUSH32(esp, 0x001758C9u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001758C9: ;
    PUSH32(esp, 0x173AA0);
    PUSH32(esp, 0x8324BB2Fu);
    PUSH32(esp, 0x001758D8u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001758D8: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x171B30);
    PUSH32(esp, 0xD9901C3Fu);
    PUSH32(esp, 0x001758EAu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001758EA: ;
    eax = MEM32(0x51FB68);
    PUSH32(esp, 0x173B40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001758FAu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_001758FA: ;
    PUSH32(esp, 0x173BA0);
    PUSH32(esp, 0x93C57469u);
    PUSH32(esp, 0x00175909u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175909: ;
    PUSH32(esp, 0x171B80);
    PUSH32(esp, 0x1884BA8D);
    PUSH32(esp, 0x00175918u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175918: ;
    PUSH32(esp, 0x173C20);
    PUSH32(esp, 0x53D0F40F);
    PUSH32(esp, 0x00175927u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175927: ;
    PUSH32(esp, 0x171BF0);
    PUSH32(esp, 0x6D30916C);
    PUSH32(esp, 0x00175936u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175936: ;
    PUSH32(esp, 0x171CD0);
    PUSH32(esp, 0x906699A6u);
    PUSH32(esp, 0x00175945u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175945: ;
    PUSH32(esp, 0x171C50);
    PUSH32(esp, 0xD296DD3Bu);
    PUSH32(esp, 0x00175954u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175954: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x171D70);
    PUSH32(esp, 0x81672D);
    PUSH32(esp, 0x00175966u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175966: ;
    PUSH32(esp, 0x173CC0);
    PUSH32(esp, 0x72A052DF);
    PUSH32(esp, 0x00175975u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175975: ;
    PUSH32(esp, 0x171E10);
    PUSH32(esp, 0xF972D330u);
    PUSH32(esp, 0x00175984u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175984: ;
    PUSH32(esp, 0x173D40);
    PUSH32(esp, 0xCC8D90ADu);
    PUSH32(esp, 0x00175993u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175993: ;
    PUSH32(esp, 0x171E90);
    PUSH32(esp, 0xAF720FC0u);
    PUSH32(esp, 0x001759A2u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001759A2: ;
    PUSH32(esp, 0x173E90);
    PUSH32(esp, 0xAA541BF);
    PUSH32(esp, 0x001759B1u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_001759B1: ;
    PUSH32(esp, 0x173EF0);
    PUSH32(esp, 0x48550522);
    PUSH32(esp, 0x001759C0u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001759C0: ;
    PUSH32(esp, 0x171F50);
    PUSH32(esp, 0x7E2D8E71);
    PUSH32(esp, 0x001759CFu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001759CF: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x173F70);
    PUSH32(esp, 0x3B53FF90);
    PUSH32(esp, 0x001759E1u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_001759E1: ;
    PUSH32(esp, 0x173FD0);
    PUSH32(esp, 0xB5AFE02Du);
    PUSH32(esp, 0x001759F0u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001759F0: ;
    PUSH32(esp, 0x171FD0);
    PUSH32(esp, 0xE6206120u);
    PUSH32(esp, 0x001759FFu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001759FF: ;
    PUSH32(esp, 0x174050);
    PUSH32(esp, 0xCC3C8FBEu);
    PUSH32(esp, 0x00175A0Eu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175A0E: ;
    PUSH32(esp, 0x174160);
    PUSH32(esp, 0x8ECCCB23u);
    PUSH32(esp, 0x00175A1Du); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175A1D: ;
    PUSH32(esp, 0x1722F0);
    PUSH32(esp, 0xF09F98A0u);
    PUSH32(esp, 0x00175A2Cu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175A2C: ;
    PUSH32(esp, 0x172310);
    PUSH32(esp, 0x9EF6DD89u);
    PUSH32(esp, 0x00175A3Bu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175A3B: ;
    PUSH32(esp, 0x172380);
    PUSH32(esp, 0x8774712Fu);
    PUSH32(esp, 0x00175A4Au); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175A4A: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x172400);
    PUSH32(esp, 0x3890E644);
    PUSH32(esp, 0x00175A5Cu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175A5C: ;
    PUSH32(esp, 0x172450);
    PUSH32(esp, 0x2D81C3D6);
    PUSH32(esp, 0x00175A6Bu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175A6B: ;
    PUSH32(esp, 0x172470);
    PUSH32(esp, 0x73B88DC4);
    PUSH32(esp, 0x00175A7Au); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175A7A: ;
    PUSH32(esp, 0x1724E0);
    PUSH32(esp, 0x3AC44624);
    PUSH32(esp, 0x00175A89u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175A89: ;
    PUSH32(esp, 0x1725A0);
    PUSH32(esp, 0x831EAA08u);
    PUSH32(esp, 0x00175A98u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175A98: ;
    PUSH32(esp, 0x172620);
    PUSH32(esp, 0x5A7FB879);
    PUSH32(esp, 0x00175AA7u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175AA7: ;
    PUSH32(esp, 0x172640);
    PUSH32(esp, 0x18A34950);
    PUSH32(esp, 0x00175AB6u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175AB6: ;
    PUSH32(esp, 0x1726B0);
    PUSH32(esp, 0xBCB7B152u);
    PUSH32(esp, 0x00175AC5u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175AC5: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x172DF0);
    PUSH32(esp, 0xB0E25E26u);
    PUSH32(esp, 0x00175AD7u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175AD7: ;
    PUSH32(esp, 0x172770);
    PUSH32(esp, 0xBB2AB409u);
    PUSH32(esp, 0x00175AE6u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175AE6: ;
    PUSH32(esp, 0x172EA0);
    PUSH32(esp, 0xEF9EB2D2u);
    PUSH32(esp, 0x00175AF5u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175AF5: ;
    PUSH32(esp, 0x174240);
    PUSH32(esp, 0xE649AFA9u);
    PUSH32(esp, 0x00175B04u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175B04: ;
    PUSH32(esp, 0x1742B0);
    PUSH32(esp, 0xB0870733u);
    PUSH32(esp, 0x00175B13u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175B13: ;
    PUSH32(esp, 0x1742F0);
    PUSH32(esp, 0x6BB97672);
    PUSH32(esp, 0x00175B22u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175B22: ;
    PUSH32(esp, 0x174340);
    PUSH32(esp, 0xDEE7455Cu);
    PUSH32(esp, 0x00175B31u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175B31: ;
    PUSH32(esp, 0x1743D0);
    PUSH32(esp, 0xB44609D6u);
    PUSH32(esp, 0x00175B40u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175B40: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x174450);
    PUSH32(esp, 0xB605C741u);
    PUSH32(esp, 0x00175B52u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175B52: ;
    PUSH32(esp, 0x174540);
    PUSH32(esp, 0x37C00D36);
    PUSH32(esp, 0x00175B61u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175B61: ;
    PUSH32(esp, 0x174570);
    PUSH32(esp, 0xB93C128Bu);
    PUSH32(esp, 0x00175B70u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175B70: ;
    PUSH32(esp, 0x172150);
    PUSH32(esp, 0xC4CD29DAu);
    PUSH32(esp, 0x00175B7Fu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175B7F: ;
    PUSH32(esp, 0x172200);
    PUSH32(esp, 0x4B7C4619);
    PUSH32(esp, 0x00175B8Eu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175B8E: ;
    PUSH32(esp, 0x1741E0);
    PUSH32(esp, 0xE4E2DD7Bu);
    PUSH32(esp, 0x00175B9Du); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175B9D: ;
    PUSH32(esp, 0x172F90);
    PUSH32(esp, 0x70269009);
    PUSH32(esp, 0x00175BACu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175BAC: ;
    PUSH32(esp, 0x174600);
    PUSH32(esp, 0x2F1FE8AB);
    PUSH32(esp, 0x00175BBBu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175BBB: ;
    ecx = MEM32(0x51FB6C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x172FF0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00175BCFu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175BCF: ;
    PUSH32(esp, 0x1748A0);
    PUSH32(esp, 0xA44547BEu);
    PUSH32(esp, 0x00175BDEu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175BDE: ;
    PUSH32(esp, 0x1749E0);
    PUSH32(esp, 0x31D553BD);
    PUSH32(esp, 0x00175BEDu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175BED: ;
    PUSH32(esp, 0x174B00);
    PUSH32(esp, 0x3148FBFE);
    PUSH32(esp, 0x00175BFCu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175BFC: ;
    PUSH32(esp, 0x174BB0);
    PUSH32(esp, 0x523D9ECD);
    PUSH32(esp, 0x00175C0Bu); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175C0B: ;
    PUSH32(esp, 0x174CA0);
    PUSH32(esp, 0x838E4CBCu);
    PUSH32(esp, 0x00175C1Au); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175C1A: ;
    PUSH32(esp, 0x175280);
    PUSH32(esp, 0x4AF52A76);
    PUSH32(esp, 0x00175C29u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175C29: ;
    PUSH32(esp, 0x1755A0);
    PUSH32(esp, 0x144CFA2E);
    PUSH32(esp, 0x00175C38u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175C38: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x174DE0);
    PUSH32(esp, 0x7C944370);
    PUSH32(esp, 0x00175C4Au); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00175C4A: ;
    PUSH32(esp, 0x174F20);
    PUSH32(esp, 0x1E9AB593);
    PUSH32(esp, 0x00175C59u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175C59: ;
    PUSH32(esp, 0x175020);
    PUSH32(esp, 0xCF18F795u);
    PUSH32(esp, 0x00175C68u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175C68: ;
    PUSH32(esp, 0x174EE0);
    PUSH32(esp, 0xEDF9441Cu);
    PUSH32(esp, 0x00175C77u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175C77: ;
    PUSH32(esp, 0x1730C0);
    PUSH32(esp, 0xFD06B331u);
    PUSH32(esp, 0x00175C86u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175C86: ;
    PUSH32(esp, 0x1730D0);
    PUSH32(esp, 0xD494C56Au);
    PUSH32(esp, 0x00175C95u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175C95: ;
    PUSH32(esp, 0x1750E0);
    PUSH32(esp, 0xF9BE1066u);
    PUSH32(esp, 0x00175CA4u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175CA4: ;
    PUSH32(esp, 0x175150);
    PUSH32(esp, 0x7B44B310);
    PUSH32(esp, 0x00175CB3u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00175CB3: ;
    eax = MEM32(0x51FB40);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175D5A; /* jne: not equal / not zero */

loc_00175CC3: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x00175CCAu); RECOMP_ABI_CALL(0x001552A0u, sub_001552A0); /* call 0x001552A0 */

loc_00175CCA: ;
    MEM32(0x51FB40) = eax;
    ecx = 0xFF;
    MEM32(eax) = ecx;
    edx = MEM32(0x51FB40);
    MEM32(edx + 4) = ecx;
    edx = MEM32(0x51FB40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 8) = eax;
    edx = MEM32(0x51FB40);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(0x51FB40);
    MEM32(edx + 0x10) = ecx;
    edx = MEM32(0x51FB40);
    MEM32(edx + 0x14) = eax;
    edx = MEM32(0x51FB40);
    MEM32(edx + 0x18) = ecx;
    edx = MEM32(0x51FB40);
    MEM32(edx + 0x1C) = ecx;
    edx = MEM32(0x51FB40);
    MEM32(edx + 0x20) = eax;
    edx = MEM32(0x51FB40);
    MEM32(edx + 0x24) = ecx;
    edx = MEM32(0x51FB40);
    MEM32(edx + 0x28) = ecx;
    edx = MEM32(0x51FB40);
    MEM32(edx + 0x2C) = eax;
    edx = MEM32(0x51FB40);
    MEM32(edx + 0x30) = ecx;
    edx = MEM32(0x51FB40);
    MEM32(edx + 0x34) = ecx;
    ecx = MEM32(0x51FB40);
    MEM32(ecx + 0x38) = eax;

loc_00175D5A: ;
    PUSH32(esp, 0x00175D5Fu); RECOMP_ABI_CALL(0x000D0730u, sub_000D0730); /* call 0x000D0730 */

loc_00175D5F: ;
    PUSH32(esp, 0x321964);
    PUSH32(esp, 0x00175D69u); RECOMP_ABI_CALL(0x000C99A0u, sub_000C99A0); /* call 0x000C99A0 */

loc_00175D69: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00175D70
 * Original: 0x00175D70 - 0x00175E18 (168 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00175D70: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x800);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00175D83u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00175D83: ;
    PUSH32(esp, 0x3219A0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00175D91u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00175D91: ;
    eax = MEM32(0x3C251C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00175DF7; /* jbe: below or equal (unsigned <=) */

loc_00175D9D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ZX16(LO16(eax));

loc_00175DA4: ;
    PUSH32(esp, esi);
    ecx = 0x3C2518;
    PUSH32(esp, 0x00175DAFu); RECOMP_ABI_CALL(0x00077910u, sub_00077910); /* call 0x00077910 */

loc_00175DAF: ;
    ecx = eax;
    PUSH32(esp, 0x00175DB6u); RECOMP_ABI_CALL(0x0007C480u, sub_0007C480); /* call 0x0007C480 */

loc_00175DB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x1C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00175DE3; /* je: equal / zero */

loc_00175DBE: ;
    SET_LO8(ecx, MEM8(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175DDC; /* je: equal / zero */

loc_00175DC6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175DCD; /* jne: not equal / not zero */

loc_00175DCB: ;
    SET_LO8(ecx, 0x2D);

loc_00175DCD: ;
    ebp = ZX16(LO16(edx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + ebp + 0x1C) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00175DC6; /* jne: not equal / not zero */

loc_00175DDC: ;
    eax = ZX16(LO16(edx));
    MEM8(esp + eax + 0x1C) = LO8(ebx);

loc_00175DE3: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00175DF1u); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00175DF1: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00175DA4; /* jne: not equal / not zero */

loc_00175DF5: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00175DF7: ;
    esi = MEM32(esp + 0x7C);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00175E07u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00175E07: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00175E10u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00175E10: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00175E20
 * Original: 0x00175E20 - 0x00175EA3 (131 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175E20: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00175E32u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00175E32: ;
    PUSH32(esp, 0x3219AC);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00175E40u); RECOMP_ABI_CALL(0x0017B550u, sub_0017B550); /* call 0x0017B550 */

loc_00175E40: ;
    eax = MEM32(0x3C251C);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00175E83; /* jbe: below or equal (unsigned <=) */

loc_00175E4A: ;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ZX16(LO16(eax));

loc_00175E50: ;
    PUSH32(esp, esi);
    ecx = 0x3C2518;
    PUSH32(esp, 0x00175E5Bu); RECOMP_ABI_CALL(0x00077910u, sub_00077910); /* call 0x00077910 */

loc_00175E5B: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00175E6Du); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00175E6D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00175E7Eu); RECOMP_ABI_CALL(0x0017B4C0u, sub_0017B4C0); /* call 0x0017B4C0 */

loc_00175E7E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00175E50; /* jne: not equal / not zero */

loc_00175E82: ;
    POP32(esp, edi);

loc_00175E83: ;
    esi = MEM32(esp + 0x20);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00175E93u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00175E93: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00175E9Cu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00175E9C: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00175EB0
 * Original: 0x00175EB0 - 0x00175EB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175EB0(void)
{

loc_00175EB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00175EC0
 * Original: 0x00175EC0 - 0x00175EC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175EC0(void)
{

loc_00175EC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00175ED0
 * Original: 0x00175ED0 - 0x00175ED8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175ED0(void)
{

loc_00175ED0: ;
    MEM8(0x3887D3) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00175EE0
 * Original: 0x00175EE0 - 0x00175F34 (84 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175EE0: ;
    PUSH32(esp, 0x57A0A80D);
    PUSH32(esp, 0x00175EEAu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00175EEA: ;
    PUSH32(esp, 0x72115B96);
    PUSH32(esp, 0x00175EF4u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00175EF4: ;
    PUSH32(esp, 0x37AAA03E);
    PUSH32(esp, 0x00175EFEu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00175EFE: ;
    PUSH32(esp, 0xD76D6C34u);
    PUSH32(esp, 0x00175F08u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00175F08: ;
    PUSH32(esp, 0xFF657A9Du);
    PUSH32(esp, 0x00175F12u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00175F12: ;
    PUSH32(esp, 0x3A9B32B6);
    PUSH32(esp, 0x00175F1Cu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00175F1C: ;
    PUSH32(esp, 0x7F2ED4E);
    PUSH32(esp, 0x00175F26u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00175F26: ;
    PUSH32(esp, 0xACF12D3Eu);
    PUSH32(esp, 0x00175F30u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00175F30: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00175F40
 * Original: 0x00175F40 - 0x00175F9E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175F40: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00175F59u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00175F59: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    ecx = 0x3C2518;
    PUSH32(esp, 0x00175F67u); RECOMP_ABI_CALL(0x00077970u, sub_00077970); /* call 0x00077970 */

loc_00175F67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00175F8A; /* je: equal / zero */

loc_00175F6B: ;
    edx = MEM32(esp);
    PUSH32(esp, edx);
    ecx = 0x3C2518;
    PUSH32(esp, 0x00175F79u); RECOMP_ABI_CALL(0x00077910u, sub_00077910); /* call 0x00077910 */

loc_00175F79: ;
    eax = MEM32(eax + 0xC);
    MEM32(0x3888C8) = eax;
    MEM8(0x3C250F) = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00175F8A: ;
    ecx = MEM32(esp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3219B8);
    { uint32_t _icall_target = MEM32(0x534424); PUSH32(esp, 0x00175F99u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00175F93u); } /* indirect call */
    }

loc_00175F99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00175FA0
 * Original: 0x00175FA0 - 0x00175FEC (76 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175FA0: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED5));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175FDA; /* je: equal / zero */

loc_00175FB2: ;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00175FDA; /* je: equal / zero */

loc_00175FBB: ;
    MEM8(0x51FB24) = 0;
    PUSH32(esp, 0xF);
    MEM8(eax + 0x1FA2) = LO8(ebx);
    PUSH32(esp, 0x00175FCFu); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00175FCF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x3C250F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00175FDA: ;
    MEM8(0x3C250F) = LO8(ebx);
    MEM32(0x3888C8) = 0x5FB22CE7;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00175FF0
 * Original: 0x00175FF0 - 0x0017603A (74 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00175FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00175FF0: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017600B; /* jne: not equal / not zero */

loc_00175FFE: ;
    PUSH32(esp, 1);
    ecx = 0x3C250C;
    PUSH32(esp, 0x0017600Au); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_0017600A: ;
    esp += 4; return; /* ret */

loc_0017600B: ;
    _fa = (uint32_t)(MEM8(eax + 0x1ED5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED5), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00176027; /* je: equal / zero */

loc_00176014: ;
    ecx = eax + 0x1EE8;
    PUSH32(esp, 0x0017601Fu); RECOMP_ABI_CALL(0x00082510u, sub_00082510); /* call 0x00082510 */

loc_0017601F: ;
    MEM8(0x3C250F) = 1;
    esp += 4; return; /* ret */

loc_00176027: ;
    eax = MEM32(eax + 0x135C);
    MEM32(0x3888C8) = eax;
    MEM8(0x3C250F) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00176040
 * Original: 0x00176040 - 0x001760BC (124 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176040: ;
    PUSH32(esp, 0x175F40);
    PUSH32(esp, 0x57A0A80D);
    PUSH32(esp, 0x0017604Fu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017604F: ;
    PUSH32(esp, 0x175EC0);
    PUSH32(esp, 0x72115B96);
    PUSH32(esp, 0x0017605Eu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017605E: ;
    PUSH32(esp, 0x175EB0);
    PUSH32(esp, 0x37AAA03E);
    PUSH32(esp, 0x0017606Du); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017606D: ;
    PUSH32(esp, 0x175FA0);
    PUSH32(esp, 0xD76D6C34u);
    PUSH32(esp, 0x0017607Cu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017607C: ;
    PUSH32(esp, 0x175FF0);
    PUSH32(esp, 0xFF657A9Du);
    PUSH32(esp, 0x0017608Bu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017608B: ;
    PUSH32(esp, 0x175ED0);
    PUSH32(esp, 0x3A9B32B6);
    PUSH32(esp, 0x0017609Au); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017609A: ;
    PUSH32(esp, 0x175D70);
    PUSH32(esp, 0x7F2ED4E);
    PUSH32(esp, 0x001760A9u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001760A9: ;
    PUSH32(esp, 0x175E20);
    PUSH32(esp, 0xACF12D3Eu);
    PUSH32(esp, 0x001760B8u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_001760B8: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001760C0
 * Original: 0x001760C0 - 0x00176127 (103 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001760C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001760C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001760D0;

    /* nop */

loc_001760D0: ;
    ecx = MEM32(esp + 0x14);
    eax = ebx + ebx * 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + ecx + 0x61C;

loc_001760E3: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = 0x3C2538;
    PUSH32(esp, 0x001760EFu); RECOMP_ABI_CALL(0x00077590u, sub_00077590); /* call 0x00077590 */

loc_001760EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5FB22CE7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5FB22CE7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176116; /* je: equal / zero */

loc_001760F6: ;
    SET_LO8(edx, MEM8(esi));
    SET_LO8(edx, LO8(edx) ^ MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    MEM32(esi + -4) = eax;
    MEM32(esi + -12) = ebp;
    MEM32(esi + -8) = edi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00176116: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001760E3; /* jl: less (signed <) */

loc_0017611C: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001760D0; /* jl: less (signed <) */

loc_00176122: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00176130
 * Original: 0x00176130 - 0x00176175 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176130: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x321A38);
    PUSH32(esp, 0x0017613Bu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017613B: ;
    eax = MEM32(0x51FB70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00176146u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00176146: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x321A00);
    MEM32(0x51FB70) = 0;
    PUSH32(esp, 0x0017615Fu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017615F: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00176170u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176170: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176180
 * Original: 0x00176180 - 0x001761C5 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176180: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x321AB4);
    PUSH32(esp, 0x0017618Bu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017618B: ;
    eax = MEM32(0x51FB70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00176196u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00176196: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x321A84);
    MEM32(0x51FB70) = 0;
    PUSH32(esp, 0x001761AFu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001761AF: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001761C0u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_001761C0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001761D0
 * Original: 0x001761D0 - 0x00176215 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001761D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001761D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x321B28);
    PUSH32(esp, 0x001761DBu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001761DB: ;
    eax = MEM32(0x51FB70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001761E6u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_001761E6: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x321AF4);
    MEM32(0x51FB70) = 0;
    PUSH32(esp, 0x001761FFu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001761FF: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00176210u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176210: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00176220
 * Original: 0x00176220 - 0x001762DC (188 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176220: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x321BC0);
    PUSH32(esp, 0x0017622Du); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017622D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00176235u); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_00176235: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001762D8; /* jne: not equal / not zero */

loc_0017623E: ;
    PUSH32(esp, 0x00176243u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176243: ;
    SET_LO8(ecx, MEM8(eax + 0x1670));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001762D8; /* je: equal / zero */

loc_00176251: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001762D7; /* jl: less (signed <) */

loc_0017625C: ;
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0017627Au); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_0017627A: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x321B94);
    PUSH32(esp, 0x00176289u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176289: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0017629Au); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_0017629A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x321B6C);
    PUSH32(esp, 0x001762A9u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001762A9: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001762D7; /* jl: less (signed <) */

loc_001762B4: ;
    PUSH32(esp, 0x001762B9u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001762B9: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14BC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001762D7; /* jge: greater or equal (signed >=) */

loc_001762C5: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001762D0u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001762D0: ;
    ecx = eax;
    PUSH32(esp, 0x001762D7u); RECOMP_ABI_CALL(0x00129C90u, sub_00129C90); /* call 0x00129C90 */

loc_001762D7: ;
    POP32(esp, esi);

loc_001762D8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001762E0
 * Original: 0x001762E0 - 0x00176328 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001762E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001762E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x321C40);
    PUSH32(esp, 0x001762ECu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001762EC: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001762FFu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_001762FF: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x321C04);
    PUSH32(esp, 0x0017630Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017630E: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0017631Fu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0017631F: ;
    MEM8(eax + 0x10A3) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00176330
 * Original: 0x00176330 - 0x00176378 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176330: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x321CC0);
    PUSH32(esp, 0x0017633Cu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017633C: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017634Fu); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_0017634F: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x321C80);
    PUSH32(esp, 0x0017635Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017635E: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0017636Fu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0017636F: ;
    MEM8(eax + 0x10A4) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00176380
 * Original: 0x00176380 - 0x001764A5 (293 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00176380: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00176391u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_00176391: ;
    PUSH32(esp, 0x00176396u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176396: ;
    edi = eax;
    PUSH32(esp, 0x321DB4);
    _fb = (uint32_t)(0x10D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10D0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001763A8u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001763A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x321DA4);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001763B9u); RECOMP_ABI_CALL(0x0017B690u, sub_0017B690); /* call 0x0017B690 */

loc_001763B9: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001763CBu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001763CB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001763DCu); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_001763DC: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x321D74);
    PUSH32(esp, 0x001763E9u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001763E9: ;
    PUSH32(esp, 0x321D40);
    PUSH32(esp, 0x001763F3u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001763F3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x321D30);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00176404u); RECOMP_ABI_CALL(0x0017B690u, sub_0017B690); /* call 0x0017B690 */

loc_00176404: ;
    eax = MEM32(edi + 0x3EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176478; /* je: equal / zero */

loc_0017640E: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00176483; /* jbe: below or equal (unsigned <=) */

loc_00176414: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    goto loc_00176420;

    /* nop */

loc_00176420: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    edx = MEM32(ecx + edi + 0x3F0);
    ebp = ecx + edi + 0x3F0;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00176443u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00176443: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00176454u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00176454: ;
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x321D04);
    PUSH32(esp, 0x00176463u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176463: ;
    eax = MEM32(edi + 0x3EC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esi = ZX8(LO8(ebx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00176420; /* jb: below (unsigned <) */

loc_00176475: ;
    POP32(esp, ebp);
    goto loc_00176483;

loc_00176478: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00176483u); RECOMP_ABI_CALL(0x0017B860u, sub_0017B860); /* call 0x0017B860 */

loc_00176483: ;
    esi = MEM32(esp + 0x28);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00176493u); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_00176493: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0017649Cu); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_0017649C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001764B0
 * Original: 0x001764B0 - 0x0017655E (174 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001764B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001764B0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    ecx = esp + 0x18;
    PUSH32(esp, 0x001764C3u); RECOMP_ABI_CALL(0x0017B450u, sub_0017B450); /* call 0x0017B450 */

loc_001764C3: ;
    ecx = 0x3888C0;
    PUSH32(esp, 0x001764CDu); RECOMP_ABI_CALL(0x00079A60u, sub_00079A60); /* call 0x00079A60 */

loc_001764CD: ;
    PUSH32(esp, 0x321E44);
    ecx = esp + 0x18;
    esi = eax;
    PUSH32(esp, 0x001764DDu); RECOMP_ABI_CALL(0x0017B690u, sub_0017B690); /* call 0x0017B690 */

loc_001764DD: ;
    _fb = (uint32_t)(0x614) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x614;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x19;

loc_001764E8: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176526; /* je: equal / zero */

loc_001764F0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00176526; /* je: equal / zero */

loc_001764F7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 8));
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, 0x321E38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00176513u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00176513: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00176524u); RECOMP_ABI_CALL(0x0017B780u, sub_0017B780); /* call 0x0017B780 */

loc_00176524: ;
    goto loc_00176537;

loc_00176526: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x321DE8);
    PUSH32(esp, 0x00176534u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176534: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00176537: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001764E8; /* jne: not equal / not zero */

loc_0017653D: ;
    esi = MEM32(esp + 0x24);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017654Du); RECOMP_ABI_CALL(0x0017B890u, sub_0017B890); /* call 0x0017B890 */

loc_0017654D: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00176556u); RECOMP_ABI_CALL(0x0017B480u, sub_0017B480); /* call 0x0017B480 */

loc_00176556: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00176560
 * Original: 0x00176560 - 0x00176604 (164 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176560: ;
    PUSH32(esp, 0x834B5B5);
    PUSH32(esp, 0x0017656Au); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_0017656A: ;
    PUSH32(esp, 0x5FBB23B3);
    PUSH32(esp, 0x00176574u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00176574: ;
    PUSH32(esp, 0xD1F3B6F5u);
    PUSH32(esp, 0x0017657Eu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_0017657E: ;
    PUSH32(esp, 0x254BDFE);
    PUSH32(esp, 0x00176588u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00176588: ;
    PUSH32(esp, 0xA52A26E2u);
    PUSH32(esp, 0x00176592u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_00176592: ;
    PUSH32(esp, 0xF9F03348u);
    PUSH32(esp, 0x0017659Cu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_0017659C: ;
    PUSH32(esp, 0xF568FA00u);
    PUSH32(esp, 0x001765A6u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001765A6: ;
    PUSH32(esp, 0xEEB529FAu);
    PUSH32(esp, 0x001765B0u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001765B0: ;
    PUSH32(esp, 0x57651BAD);
    PUSH32(esp, 0x001765BAu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001765BA: ;
    PUSH32(esp, 0x35D72336);
    PUSH32(esp, 0x001765C4u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001765C4: ;
    PUSH32(esp, 0xA8BC846Bu);
    PUSH32(esp, 0x001765CEu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001765CE: ;
    PUSH32(esp, 0x89986AD3u);
    PUSH32(esp, 0x001765D8u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001765D8: ;
    PUSH32(esp, 0xFF961FF4u);
    PUSH32(esp, 0x001765E2u); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001765E2: ;
    PUSH32(esp, 0x57DA2943);
    PUSH32(esp, 0x001765ECu); RECOMP_ABI_CALL(0x00170CE0u, sub_00170CE0); /* call 0x00170CE0 */

loc_001765EC: ;
    PUSH32(esp, 0xFBDDD985u);
    PUSH32(esp, 0x001765F6u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_001765F6: ;
    PUSH32(esp, 0x30A6CF0D);
    PUSH32(esp, 0x00176600u); RECOMP_ABI_CALL(0x00170D20u, sub_00170D20); /* call 0x00170D20 */

loc_00176600: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00176610
 * Original: 0x00176610 - 0x0017667B (107 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176610: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x321E58);
    PUSH32(esp, 0x0017661Du); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017661D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    eax = MEM32(0x3888C0);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(0x3888C0);
    MEM32(edx + 0x20) = ecx;
    eax = MEM32(0x3888C0);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    ecx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00176662u); RECOMP_ABI_CALL(0x00148730u, sub_00148730); /* call 0x00148730 */

loc_00176662: ;
    eax = MEM32(0x3888C0);
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(ecx, MEM8(esi + 0xE));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x12) = LO8(edx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00176680
 * Original: 0x00176680 - 0x0017671C (156 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00176680: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x321F98);
    PUSH32(esp, 0x0017668Du); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017668D: ;
    eax = MEM32(0x51FB70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00176698u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00176698: ;
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x321F64);
    MEM32(0x51FB70) = 0;
    PUSH32(esp, 0x001766B1u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001766B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x31A528;
    esi = ebp;
    ecx = 5;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001766DE; /* jne: not equal / not zero */

loc_001766C6: ;
    PUSH32(esp, 0x321F20);
    PUSH32(esp, 0x001766D0u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001766D0: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x203F) = 1;
    goto loc_001766F5;

loc_001766DE: ;
    PUSH32(esp, 0x321ED8);
    PUSH32(esp, 0x001766E8u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001766E8: ;
    ecx = MEM32(0x3888C0);
    MEM8(ecx + 0x203F) = 0;

loc_001766F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001766FDu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001766FD: ;
    ecx = eax;
    PUSH32(esp, 0x00176704u); RECOMP_ABI_CALL(0x0012A5B0u, sub_0012A5B0); /* call 0x0012A5B0 */

loc_00176704: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00176715u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176715: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00176720
 * Original: 0x00176720 - 0x001767C7 (167 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176720: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x322098);
    PUSH32(esp, 0x0017672Bu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017672B: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001767C5; /* jl: less (signed <) */

loc_0017673E: ;
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00176752u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00176752: ;
    PUSH32(esp, 0x00176757u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176757: ;
    ecx = eax;
    PUSH32(esp, 0x0017675Eu); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_0017675E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017679A; /* jne: not equal / not zero */

loc_00176762: ;
    PUSH32(esp, 0x00176767u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176767: ;
    ecx = eax;
    PUSH32(esp, 0x0017676Eu); RECOMP_ABI_CALL(0x00129E20u, sub_00129E20); /* call 0x00129E20 */

loc_0017676E: ;
    PUSH32(esp, 0x00176773u); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_00176773: ;
    PUSH32(esp, 0xC);
    MEM32(0x51FB70) = eax;
    PUSH32(esp, 0x0017677Fu); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_0017677F: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x176680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00176791u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176791: ;
    ecx = eax;
    PUSH32(esp, 0x00176798u); RECOMP_ABI_CALL(0x0012AA30u, sub_0012AA30); /* call 0x0012AA30 */

loc_00176798: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0017679A: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x001767A4u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001767A4: ;
    PUSH32(esp, 0x321FF0);
    PUSH32(esp, 0x001767AEu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001767AE: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x001767B8u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001767B8: ;
    PUSH32(esp, 0x305A98);
    PUSH32(esp, 0x001767C2u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001767C2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001767C5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001767D0
 * Original: 0x001767D0 - 0x00176877 (167 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001767D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001767D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x322120);
    PUSH32(esp, 0x001767DBu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001767DB: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00176875; /* jl: less (signed <) */

loc_001767EE: ;
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00176802u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00176802: ;
    PUSH32(esp, 0x00176807u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176807: ;
    ecx = eax;
    PUSH32(esp, 0x0017680Eu); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_0017680E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017684A; /* jne: not equal / not zero */

loc_00176812: ;
    PUSH32(esp, 0x00176817u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176817: ;
    ecx = eax;
    PUSH32(esp, 0x0017681Eu); RECOMP_ABI_CALL(0x00129E20u, sub_00129E20); /* call 0x00129E20 */

loc_0017681E: ;
    PUSH32(esp, 0x00176823u); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_00176823: ;
    PUSH32(esp, 0xC);
    MEM32(0x51FB70) = eax;
    PUSH32(esp, 0x0017682Fu); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_0017682F: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x176680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00176841u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176841: ;
    ecx = eax;
    PUSH32(esp, 0x00176848u); RECOMP_ABI_CALL(0x0012AAC0u, sub_0012AAC0); /* call 0x0012AAC0 */

loc_00176848: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0017684A: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176854u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176854: ;
    PUSH32(esp, 0x3220D0);
    PUSH32(esp, 0x0017685Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017685E: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176868u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176868: ;
    PUSH32(esp, 0x305A98);
    PUSH32(esp, 0x00176872u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176872: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00176875: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00176880
 * Original: 0x00176880 - 0x0017692E (174 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00176880: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x322228);
    PUSH32(esp, 0x0017688Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017688E: ;
    eax = MEM32(0x51FB70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00176899u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00176899: ;
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3221EC);
    MEM32(0x51FB70) = 0;
    PUSH32(esp, 0x001768B2u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001768B2: ;
    PUSH32(esp, 0x322180);
    PUSH32(esp, 0x001768BCu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001768BC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3888C0;
    PUSH32(esp, 0x001768C9u); RECOMP_ABI_CALL(0x00079A60u, sub_00079A60); /* call 0x00079A60 */

loc_001768C9: ;
    edi = 0x31A7D0;
    esi = ebx;
    ecx = 0x17;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ebp = eax;
    if ((_flags != 0)) goto loc_00176905; /* je: equal / zero */

loc_001768DD: ;
    PUSH32(esp, 0x001768E2u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001768E2: ;
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x230;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
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
    esi = ebp;
    PUSH32(esp, 0x001768F9u); RECOMP_ABI_CALL(0x00176610u, sub_00176610); /* call 0x00176610 */

loc_001768F9: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x2040) = 1;

loc_00176905: ;
    PUSH32(esp, 0x0017690Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0017690A: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM8(eax + 0x10A5) = 0;
    PUSH32(esp, 0x00176926u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176926: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00176930
 * Original: 0x00176930 - 0x00176A4D (285 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176930: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x322360);
    PUSH32(esp, 0x0017693Bu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017693B: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00176A4B; /* jl: less (signed <) */

loc_0017694E: ;
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00176962u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00176962: ;
    PUSH32(esp, 0x00176967u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176967: ;
    ecx = eax;
    PUSH32(esp, 0x0017696Eu); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_0017696E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00176A20; /* jne: not equal / not zero */

loc_00176976: ;
    PUSH32(esp, 0x0017697Bu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0017697B: ;
    ecx = eax;
    PUSH32(esp, 0x00176982u); RECOMP_ABI_CALL(0x00129E20u, sub_00129E20); /* call 0x00129E20 */

loc_00176982: ;
    ecx = MEM32(0x3888C0);
    MEM8(0x51FB24) = 0;
    _fa = (uint32_t)(MEM8(ecx + 0x203F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x203F), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001769EE; /* jne: not equal / not zero */

loc_00176998: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x322320);
    PUSH32(esp, 0x001769A3u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001769A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3888C0;
    PUSH32(esp, 0x001769B0u); RECOMP_ABI_CALL(0x00079A60u, sub_00079A60); /* call 0x00079A60 */

loc_001769B0: ;
    esi = eax;
    PUSH32(esp, 0x001769B7u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001769B7: ;
    ecx = eax;
    PUSH32(esp, 0x001769BEu); RECOMP_ABI_CALL(0x001299D0u, sub_001299D0); /* call 0x001299D0 */

loc_001769BE: ;
    MEM32(esi) = eax;
    PUSH32(esp, 0x001769C5u); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_001769C5: ;
    PUSH32(esp, 0xC);
    MEM32(0x51FB70) = eax;
    PUSH32(esp, 0x001769D1u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_001769D1: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x176130);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001769E4u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001769E4: ;
    ecx = eax;
    PUSH32(esp, 0x001769EBu); RECOMP_ABI_CALL(0x0012BA00u, sub_0012BA00); /* call 0x0012BA00 */

loc_001769EB: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001769EE: ;
    PUSH32(esp, 0x3222C8);
    PUSH32(esp, 0x001769F8u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001769F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00176A00u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176A00: ;
    ecx = eax;
    PUSH32(esp, 0x00176A07u); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_00176A07: ;
    eax = MEM32(esp);
    PUSH32(esp, 0x31A778);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00176A1Bu); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176A1B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00176A20: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176A2Au); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176A2A: ;
    PUSH32(esp, 0x322278);
    PUSH32(esp, 0x00176A34u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176A34: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176A3Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176A3E: ;
    PUSH32(esp, 0x305A98);
    PUSH32(esp, 0x00176A48u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176A48: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00176A4B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00176942
 * Original: 0x00176942 - 0x00176A4D (267 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176942(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176942: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00176A4B; /* jl: less (signed <) */

loc_0017694E: ;
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00176962u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00176962: ;
    PUSH32(esp, 0x00176967u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176967: ;
    ecx = eax;
    PUSH32(esp, 0x0017696Eu); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_0017696E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00176A20; /* jne: not equal / not zero */

loc_00176976: ;
    PUSH32(esp, 0x0017697Bu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0017697B: ;
    ecx = eax;
    PUSH32(esp, 0x00176982u); RECOMP_ABI_CALL(0x00129E20u, sub_00129E20); /* call 0x00129E20 */

loc_00176982: ;
    ecx = MEM32(0x3888C0);
    MEM8(0x51FB24) = 0;
    _fa = (uint32_t)(MEM8(ecx + 0x203F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x203F), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001769EE; /* jne: not equal / not zero */

loc_00176998: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x322320);
    PUSH32(esp, 0x001769A3u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001769A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3888C0;
    PUSH32(esp, 0x001769B0u); RECOMP_ABI_CALL(0x00079A60u, sub_00079A60); /* call 0x00079A60 */

loc_001769B0: ;
    esi = eax;
    PUSH32(esp, 0x001769B7u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001769B7: ;
    ecx = eax;
    PUSH32(esp, 0x001769BEu); RECOMP_ABI_CALL(0x001299D0u, sub_001299D0); /* call 0x001299D0 */

loc_001769BE: ;
    MEM32(esi) = eax;
    PUSH32(esp, 0x001769C5u); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_001769C5: ;
    PUSH32(esp, 0xC);
    MEM32(0x51FB70) = eax;
    PUSH32(esp, 0x001769D1u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_001769D1: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x176130);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001769E4u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001769E4: ;
    ecx = eax;
    PUSH32(esp, 0x001769EBu); RECOMP_ABI_CALL(0x0012BA00u, sub_0012BA00); /* call 0x0012BA00 */

loc_001769EB: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001769EE: ;
    PUSH32(esp, 0x3222C8);
    PUSH32(esp, 0x001769F8u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001769F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00176A00u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176A00: ;
    ecx = eax;
    PUSH32(esp, 0x00176A07u); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_00176A07: ;
    eax = MEM32(esp);
    PUSH32(esp, 0x31A778);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00176A1Bu); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176A1B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00176A20: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176A2Au); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176A2A: ;
    PUSH32(esp, 0x322278);
    PUSH32(esp, 0x00176A34u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176A34: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176A3Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176A3E: ;
    PUSH32(esp, 0x305A98);
    PUSH32(esp, 0x00176A48u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176A48: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00176A4B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00176A50
 * Original: 0x00176A50 - 0x00176BE2 (402 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176A50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3224E0);
    PUSH32(esp, 0x00176A5Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176A5E: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00176BDD; /* jl: less (signed <) */

loc_00176A71: ;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00176A87u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00176A87: ;
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00176A95u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00176A95: ;
    PUSH32(esp, 0x00176A9Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176A9A: ;
    ecx = eax;
    PUSH32(esp, 0x00176AA1u); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_00176AA1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00176BB2; /* jne: not equal / not zero */

loc_00176AA9: ;
    PUSH32(esp, 0x00176AAEu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176AAE: ;
    ecx = eax;
    PUSH32(esp, 0x00176AB5u); RECOMP_ABI_CALL(0x00129E20u, sub_00129E20); /* call 0x00129E20 */

loc_00176AB5: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x203F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x203F), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00176B7C; /* jne: not equal / not zero */

loc_00176AC7: ;
    _fa = (uint32_t)(MEM8(eax + 0x2044)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2044), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00176B46; /* jne: not equal / not zero */

loc_00176AD0: ;
    PUSH32(esp, 0x322498);
    PUSH32(esp, 0x00176ADAu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176ADA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3888C0;
    PUSH32(esp, 0x00176AE7u); RECOMP_ABI_CALL(0x00079A60u, sub_00079A60); /* call 0x00079A60 */

loc_00176AE7: ;
    esi = eax;
    PUSH32(esp, 0x00176AEEu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176AEE: ;
    ecx = eax;
    PUSH32(esp, 0x00176AF5u); RECOMP_ABI_CALL(0x001299D0u, sub_001299D0); /* call 0x001299D0 */

loc_00176AF5: ;
    MEM32(esi) = eax;
    PUSH32(esp, 0x00176AFCu); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_00176AFC: ;
    PUSH32(esp, 0xC);
    MEM32(0x51FB70) = eax;
    PUSH32(esp, 0x00176B08u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00176B08: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0x176130);
    if (CMP_EQ(_fa, _fb)) goto loc_00176B2F; /* je: equal / zero */

loc_00176B18: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00176B23u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176B23: ;
    ecx = eax;
    PUSH32(esp, 0x00176B2Au); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_00176B2A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00176B2F: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00176B3Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176B3A: ;
    ecx = eax;
    PUSH32(esp, 0x00176B41u); RECOMP_ABI_CALL(0x0012BA00u, sub_0012BA00); /* call 0x0012BA00 */

loc_00176B41: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00176B46: ;
    PUSH32(esp, 0x322450);
    PUSH32(esp, 0x00176B50u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176B50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00176B58u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176B58: ;
    ecx = eax;
    PUSH32(esp, 0x00176B5Fu); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_00176B5F: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x31A778);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00176B74u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176B74: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00176B7C: ;
    PUSH32(esp, 0x3223F0);
    PUSH32(esp, 0x00176B86u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176B86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00176B8Eu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176B8E: ;
    ecx = eax;
    PUSH32(esp, 0x00176B95u); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_00176B95: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x31A778);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00176BAAu); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176BAA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00176BB2: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176BBCu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176BBC: ;
    PUSH32(esp, 0x3223A0);
    PUSH32(esp, 0x00176BC6u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176BC6: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176BD0u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176BD0: ;
    PUSH32(esp, 0x305A98);
    PUSH32(esp, 0x00176BDAu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176BDA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00176BDD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00176BF0
 * Original: 0x00176BF0 - 0x00176C9B (171 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00176BF0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3225C8);
    PUSH32(esp, 0x00176BFDu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176BFD: ;
    eax = MEM32(0x51FB70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00176C08u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00176C08: ;
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x322590);
    MEM32(0x51FB70) = 0;
    PUSH32(esp, 0x00176C21u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176C21: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x31A528;
    esi = ebp;
    ecx = 5;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00176C78; /* jne: not equal / not zero */

loc_00176C36: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x322528);
    PUSH32(esp, 0x00176C41u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176C41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3888C0;
    PUSH32(esp, 0x00176C4Eu); RECOMP_ABI_CALL(0x00079A60u, sub_00079A60); /* call 0x00079A60 */

loc_00176C4E: ;
    ebx = eax;
    PUSH32(esp, 0x00176C55u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176C55: ;
    esi = eax + 0x230;
    ecx = 0x39B;
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
    esi = ebx;
    PUSH32(esp, 0x00176C6Bu); RECOMP_ABI_CALL(0x00176610u, sub_00176610); /* call 0x00176610 */

loc_00176C6B: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x2040) = 1;
    POP32(esp, ebx);

loc_00176C78: ;
    PUSH32(esp, 0x00176C7Du); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176C7D: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x220;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00176C94u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176C94: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00176CA0
 * Original: 0x00176CA0 - 0x00176E0B (363 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176CA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3226F4);
    PUSH32(esp, 0x00176CAEu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176CAE: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_00176D05; /* jge: greater or equal (signed >=) */

loc_00176CCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00176E06; /* jle: less or equal (signed <=) */

loc_00176CD5: ;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00176CE3u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00176CE3: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x31A528);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00176CFDu); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176CFD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00176D05: ;
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00176D13u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00176D13: ;
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00176D21u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00176D21: ;
    PUSH32(esp, 0x00176D26u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176D26: ;
    ecx = eax;
    PUSH32(esp, 0x00176D2Du); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_00176D2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00176DDB; /* jne: not equal / not zero */

loc_00176D35: ;
    PUSH32(esp, 0x00176D3Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176D3A: ;
    ecx = eax;
    PUSH32(esp, 0x00176D41u); RECOMP_ABI_CALL(0x00129E20u, sub_00129E20); /* call 0x00129E20 */

loc_00176D41: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x203F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x203F), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00176DA0; /* jne: not equal / not zero */

loc_00176D50: ;
    PUSH32(esp, 0x3226BC);
    PUSH32(esp, 0x00176D5Au); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176D5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00176D62u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176D62: ;
    ecx = eax;
    PUSH32(esp, 0x00176D69u); RECOMP_ABI_CALL(0x001299D0u, sub_001299D0); /* call 0x001299D0 */

loc_00176D69: ;
    esi = eax;
    PUSH32(esp, 0x00176D70u); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_00176D70: ;
    PUSH32(esp, 0xC);
    MEM32(0x51FB70) = eax;
    PUSH32(esp, 0x00176D7Cu); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00176D7C: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x176BF0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00176D94u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176D94: ;
    ecx = eax;
    PUSH32(esp, 0x00176D9Bu); RECOMP_ABI_CALL(0x0012BB40u, sub_0012BB40); /* call 0x0012BB40 */

loc_00176D9B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00176DA0: ;
    PUSH32(esp, 0x322668);
    PUSH32(esp, 0x00176DAAu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176DAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00176DB2u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176DB2: ;
    ecx = eax;
    PUSH32(esp, 0x00176DB9u); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_00176DB9: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x31A528);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00176DD3u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176DD3: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00176DDB: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176DE5u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176DE5: ;
    PUSH32(esp, 0x322618);
    PUSH32(esp, 0x00176DEFu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176DEF: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176DF9u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176DF9: ;
    PUSH32(esp, 0x305A98);
    PUSH32(esp, 0x00176E03u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176E03: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00176E06: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00176E10
 * Original: 0x00176E10 - 0x00176FE2 (466 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176E10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x32284C);
    PUSH32(esp, 0x00176E1Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176E1E: ;
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 1;
    if (CMP_GE(_fas, _fbs)) goto loc_00176E78; /* jge: greater or equal (signed >=) */

loc_00176E45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00176FDD; /* jle: less or equal (signed <=) */

loc_00176E4D: ;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00176E5Bu); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00176E5B: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x31A380);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00176E70u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176E70: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00176E78: ;
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00176E86u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00176E86: ;
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00176E94u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00176E94: ;
    PUSH32(esp, 2);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00176EA2u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00176EA2: ;
    PUSH32(esp, 0x00176EA7u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176EA7: ;
    ecx = eax;
    PUSH32(esp, 0x00176EAEu); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_00176EAE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00176FB2; /* jne: not equal / not zero */

loc_00176EB6: ;
    PUSH32(esp, 0x00176EBBu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176EBB: ;
    ecx = eax;
    PUSH32(esp, 0x00176EC2u); RECOMP_ABI_CALL(0x00129E20u, sub_00129E20); /* call 0x00129E20 */

loc_00176EC2: ;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x203F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x203F), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00176F7C; /* jne: not equal / not zero */

loc_00176ED5: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00176F46; /* jle: less or equal (signed <=) */

loc_00176EDD: ;
    PUSH32(esp, 0x322818);
    PUSH32(esp, 0x00176EE7u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176EE7: ;
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00176F0D; /* je: equal / zero */

loc_00176EF7: ;
    PUSH32(esp, edi);
    edi = 0x31A520;
    ecx = 6;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    if ((_flags == 0)) goto loc_00176F0D; /* jne: not equal / not zero */

loc_00176F09: ;
    MEM8(esp + 0x14) = LO8(eax);

loc_00176F0D: ;
    PUSH32(esp, 0x00176F12u); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_00176F12: ;
    PUSH32(esp, 0xC);
    MEM32(0x51FB70) = eax;
    PUSH32(esp, 0x00176F1Eu); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00176F1E: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x176180);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00176F3Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176F3A: ;
    ecx = eax;
    PUSH32(esp, 0x00176F41u); RECOMP_ABI_CALL(0x0012BBF0u, sub_0012BBF0); /* call 0x0012BBF0 */

loc_00176F41: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00176F46: ;
    PUSH32(esp, 0x3227C8);
    PUSH32(esp, 0x00176F50u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176F50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00176F58u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176F58: ;
    ecx = eax;
    PUSH32(esp, 0x00176F5Fu); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_00176F5F: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x31A380);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00176F74u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176F74: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00176F7C: ;
    PUSH32(esp, 0x322778);
    PUSH32(esp, 0x00176F86u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176F86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00176F8Eu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00176F8E: ;
    ecx = eax;
    PUSH32(esp, 0x00176F95u); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_00176F95: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x31A380);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00176FAAu); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00176FAA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00176FB2: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176FBCu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176FBC: ;
    PUSH32(esp, 0x322730);
    PUSH32(esp, 0x00176FC6u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176FC6: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00176FD0u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176FD0: ;
    PUSH32(esp, 0x305A98);
    PUSH32(esp, 0x00176FDAu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176FDA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00176FDD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00176FF0
 * Original: 0x00176FF0 - 0x00177151 (353 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00176FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00176FF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x322944);
    PUSH32(esp, 0x00176FFEu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00176FFE: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_00177050; /* jge: greater or equal (signed >=) */

loc_0017701D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0017714C; /* jle: less or equal (signed <=) */

loc_00177025: ;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00177033u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00177033: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x31A65C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00177048u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00177048: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00177050: ;
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0017705Eu); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_0017705E: ;
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0017706Cu); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_0017706C: ;
    PUSH32(esp, 0x00177071u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00177071: ;
    ecx = eax;
    PUSH32(esp, 0x00177078u); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_00177078: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00177121; /* jne: not equal / not zero */

loc_00177080: ;
    PUSH32(esp, 0x00177085u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00177085: ;
    ecx = eax;
    PUSH32(esp, 0x0017708Cu); RECOMP_ABI_CALL(0x00129E20u, sub_00129E20); /* call 0x00129E20 */

loc_0017708C: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x203F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x203F), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001770EB; /* jne: not equal / not zero */

loc_0017709B: ;
    PUSH32(esp, 0x32290C);
    PUSH32(esp, 0x001770A5u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001770A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001770ADu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001770AD: ;
    ecx = eax;
    PUSH32(esp, 0x001770B4u); RECOMP_ABI_CALL(0x001299D0u, sub_001299D0); /* call 0x001299D0 */

loc_001770B4: ;
    esi = eax;
    PUSH32(esp, 0x001770BBu); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_001770BB: ;
    PUSH32(esp, 0xC);
    MEM32(0x51FB70) = eax;
    PUSH32(esp, 0x001770C7u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_001770C7: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1761D0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001770DFu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001770DF: ;
    ecx = eax;
    PUSH32(esp, 0x001770E6u); RECOMP_ABI_CALL(0x0012ADF0u, sub_0012ADF0); /* call 0x0012ADF0 */

loc_001770E6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001770EB: ;
    PUSH32(esp, 0x3228C0);
    PUSH32(esp, 0x001770F5u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001770F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001770FDu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001770FD: ;
    ecx = eax;
    PUSH32(esp, 0x00177104u); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_00177104: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x31A65C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00177119u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00177119: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00177121: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x0017712Bu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017712B: ;
    PUSH32(esp, 0x322878);
    PUSH32(esp, 0x00177135u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00177135: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x0017713Fu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017713F: ;
    PUSH32(esp, 0x305A98);
    PUSH32(esp, 0x00177149u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00177149: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0017714C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00177160
 * Original: 0x00177160 - 0x001771B3 (83 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177160: ;
    PUSH32(esp, 0x3229F0);
    PUSH32(esp, 0x0017716Au); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017716A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00177172u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00177172: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x2041));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017719A; /* je: equal / zero */

loc_00177181: ;
    PUSH32(esp, 0x3229B0);
    PUSH32(esp, 0x0017718Bu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017718B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00177193u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00177193: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0012A5B0(); return; /* tail jmp 0x0012A5B0 */

loc_0017719A: ;
    PUSH32(esp, 0x322970);
    PUSH32(esp, 0x001771A4u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001771A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001771ACu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001771AC: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0012A590(); return; /* tail jmp 0x0012A590 */

}

/**
 * sub_001771C0
 * Original: 0x001771C0 - 0x001772AE (238 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001771C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001771C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x322A50);
    PUSH32(esp, 0x001771CDu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001771CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3888C0;
    PUSH32(esp, 0x001771DAu); RECOMP_ABI_CALL(0x00079A60u, sub_00079A60); /* call 0x00079A60 */

loc_001771DA: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x001771E3u); RECOMP_ABI_CALL(0x0007A770u, sub_0007A770); /* call 0x0007A770 */

loc_001771E3: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001771F3u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_001771F3: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0017725E; /* je: equal / zero */

loc_001771FC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00177248; /* je: equal / zero */

loc_001771FF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00177218; /* je: equal / zero */

loc_00177202: ;
    PUSH32(esp, 0x322A44);
    PUSH32(esp, 0xD4739AC);
    PUSH32(esp, 0x00177211u); RECOMP_ABI_CALL(0x00154E60u, sub_00154E60); /* call 0x00154E60 */

loc_00177211: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00177275;

loc_00177218: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017722F; /* jne: not equal / not zero */

loc_00177223: ;
    eax = 0x322A3C;
    edi = 2;
    goto loc_00177275;

loc_0017722F: ;
    PUSH32(esp, 0x322A30);
    PUSH32(esp, 0xB0E83ED1u);
    PUSH32(esp, 0x0017723Eu); RECOMP_ABI_CALL(0x00154E60u, sub_00154E60); /* call 0x00154E60 */

loc_0017723E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 2;
    goto loc_00177275;

loc_00177248: ;
    PUSH32(esp, 0x322A30);
    PUSH32(esp, 0xB0E83ED1u);
    PUSH32(esp, 0x00177257u); RECOMP_ABI_CALL(0x00154E60u, sub_00154E60); /* call 0x00154E60 */

loc_00177257: ;
    edi = 3;
    goto loc_00177272;

loc_0017725E: ;
    PUSH32(esp, 0x322A24);
    PUSH32(esp, 0xD6F25CFCu);
    PUSH32(esp, 0x0017726Du); RECOMP_ABI_CALL(0x00154E60u, sub_00154E60); /* call 0x00154E60 */

loc_0017726D: ;
    edi = 1;

loc_00177272: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00177275: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00177281u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00177281: ;
    MEM32(esi + 0x10) = edi;
    eax = MEM32(0x3888C0);
    MEM32(eax + 0xE70) = edi;
    SET_LO8(edx, MEM8(esi + 0xE));
    PUSH32(esp, edi);
    SET_LO8(edx, LO8(edx) | 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM8(esi + 0xE) = LO8(edx);
    PUSH32(esp, 0x001772A1u); RECOMP_ABI_CALL(0x001760C0u, sub_001760C0); /* call 0x001760C0 */

loc_001772A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001772A7u); RECOMP_ABI_CALL(0x001751C0u, sub_001751C0); /* call 0x001751C0 */

loc_001772A7: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001772B0
 * Original: 0x001772B0 - 0x00177453 (419 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001772B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001772B0: ;
    _fb = (uint32_t)(0xE74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x322B5C);
    PUSH32(esp, 0x001772C1u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001772C1: ;
    esi = MEM32(esp + 0xE80);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_001772EC; /* jne: not equal / not zero */

loc_001772E5: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    goto loc_001772FF;

loc_001772EC: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001772F8u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_001772F8: ;
    PUSH32(esp, 1);
    edx = esp + 0xC;
    PUSH32(esp, edx);

loc_001772FF: ;
    ecx = esi;
    PUSH32(esp, 0x00177306u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_00177306: ;
    PUSH32(esp, 0x0017730Bu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0017730B: ;
    ecx = eax;
    PUSH32(esp, 0x00177312u); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_00177312: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00177421; /* jne: not equal / not zero */

loc_0017731B: ;
    PUSH32(esp, 0x00177320u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00177320: ;
    ecx = eax;
    PUSH32(esp, 0x00177327u); RECOMP_ABI_CALL(0x00129E20u, sub_00129E20); /* call 0x00129E20 */

loc_00177327: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x203F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x203F), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001773E5; /* jne: not equal / not zero */

loc_00177339: ;
    PUSH32(esp, 0x322B2C);
    PUSH32(esp, 0x00177343u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00177343: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, 0x0017734Fu); RECOMP_ABI_CALL(0x0007C2F0u, sub_0007C2F0); /* call 0x0007C2F0 */

loc_0017734F: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM8(esp + 0x14) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00177377; /* je: equal / zero */

loc_00177365: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00177372u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00177372: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0017737C;

loc_00177377: ;
    MEM8(esp + 0xC) = 0;

loc_0017737C: ;
    PUSH32(esp, 0x00177381u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00177381: ;
    ecx = eax;
    PUSH32(esp, 0x00177388u); RECOMP_ABI_CALL(0x001299D0u, sub_001299D0); /* call 0x001299D0 */

loc_00177388: ;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017739Au); RECOMP_ABI_CALL(0x001760C0u, sub_001760C0); /* call 0x001760C0 */

loc_0017739A: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001773A4u); RECOMP_ABI_CALL(0x001751C0u, sub_001751C0); /* call 0x001751C0 */

loc_001773A4: ;
    PUSH32(esp, 0x001773A9u); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_001773A9: ;
    PUSH32(esp, 0xC);
    MEM32(0x51FB70) = eax;
    PUSH32(esp, 0x001773B5u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_001773B5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001773BDu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001773BD: ;
    MEM8(eax + 0x10A5) = 1;
    edx = MEM32(esp);
    PUSH32(esp, 0x176880);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001773D7u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001773D7: ;
    ecx = eax;
    PUSH32(esp, 0x001773DEu); RECOMP_ABI_CALL(0x0012BA00u, sub_0012BA00); /* call 0x0012BA00 */

loc_001773DE: ;
    _fb = (uint32_t)(0xE74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001773E5: ;
    PUSH32(esp, 0x322AD0);
    PUSH32(esp, 0x001773EFu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001773EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001773F7u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001773F7: ;
    ecx = eax;
    PUSH32(esp, 0x001773FEu); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_001773FE: ;
    ecx = MEM32(esp);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x31A778);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00177417u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_00177417: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xE74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00177421: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x0017742Bu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017742B: ;
    PUSH32(esp, 0x322A80);
    PUSH32(esp, 0x00177435u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00177435: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x0017743Fu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017743F: ;
    PUSH32(esp, 0x305A98);
    PUSH32(esp, 0x00177449u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00177449: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xE74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00177460
 * Original: 0x00177460 - 0x00177617 (439 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177460: ;
    _fb = (uint32_t)(0xE78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x322C88);
    PUSH32(esp, 0x00177472u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00177472: ;
    esi = MEM32(esp + 0xE88);
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 8) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0017749D; /* jle: less or equal (signed <=) */

loc_00177491: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0017749D; /* jge: greater or equal (signed >=) */

loc_00177496: ;
    PUSH32(esp, ebx);
    eax = esp + 0xC;
    goto loc_001774BE;

loc_0017749D: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001774AAu); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_001774AA: ;
    PUSH32(esp, 1);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001774B8u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_001774B8: ;
    PUSH32(esp, 2);
    eax = esp + 0x14;

loc_001774BE: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001774C6u); RECOMP_ABI_CALL(0x0017B3B0u, sub_0017B3B0); /* call 0x0017B3B0 */

loc_001774C6: ;
    PUSH32(esp, 0x001774CBu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001774CB: ;
    ecx = eax;
    PUSH32(esp, 0x001774D2u); RECOMP_ABI_CALL(0x00129DF0u, sub_00129DF0); /* call 0x00129DF0 */

loc_001774D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001775E3; /* jne: not equal / not zero */

loc_001774DA: ;
    PUSH32(esp, 0x001774DFu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001774DF: ;
    ecx = eax;
    PUSH32(esp, 0x001774E6u); RECOMP_ABI_CALL(0x00129E20u, sub_00129E20); /* call 0x00129E20 */

loc_001774E6: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x203F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x203F), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001775A6; /* jne: not equal / not zero */

loc_001774F9: ;
    PUSH32(esp, 0x322C50);
    PUSH32(esp, 0x00177503u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00177503: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, 0x0017750Fu); RECOMP_ABI_CALL(0x0007C2F0u, sub_0007C2F0); /* call 0x0007C2F0 */

loc_0017750F: ;
    eax = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = edx;
    MEM8(esp + 0x20) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00177537; /* je: equal / zero */

loc_00177525: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00177532u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00177532: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0017753B;

loc_00177537: ;
    MEM8(esp + 0x18) = LO8(ebx);

loc_0017753B: ;
    PUSH32(esp, 0x00177540u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00177540: ;
    ecx = eax;
    PUSH32(esp, 0x00177547u); RECOMP_ABI_CALL(0x001299D0u, sub_001299D0); /* call 0x001299D0 */

loc_00177547: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00177558u); RECOMP_ABI_CALL(0x001760C0u, sub_001760C0); /* call 0x001760C0 */

loc_00177558: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00177562u); RECOMP_ABI_CALL(0x001751C0u, sub_001751C0); /* call 0x001751C0 */

loc_00177562: ;
    PUSH32(esp, 0x00177567u); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_00177567: ;
    PUSH32(esp, 0xC);
    MEM32(0x51FB70) = eax;
    PUSH32(esp, 0x00177573u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00177573: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0017757Bu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0017757B: ;
    MEM8(eax + 0x10A5) = 1;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x176880);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00177596u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_00177596: ;
    ecx = eax;
    PUSH32(esp, 0x0017759Du); RECOMP_ABI_CALL(0x0012BA00u, sub_0012BA00); /* call 0x0012BA00 */

loc_0017759D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001775A6: ;
    PUSH32(esp, 0x322BF0);
    PUSH32(esp, 0x001775B0u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001775B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001775B8u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_001775B8: ;
    ecx = eax;
    PUSH32(esp, 0x001775BFu); RECOMP_ABI_CALL(0x00129E50u, sub_00129E50); /* call 0x00129E50 */

loc_001775BF: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x31A778);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001775D7u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_001775D7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001775E3: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x001775EDu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001775ED: ;
    PUSH32(esp, 0x322BA0);
    PUSH32(esp, 0x001775F7u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001775F7: ;
    PUSH32(esp, 0x322038);
    PUSH32(esp, 0x00177601u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00177601: ;
    PUSH32(esp, 0x305A98);
    PUSH32(esp, 0x0017760Bu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0017760B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00177620
 * Original: 0x00177620 - 0x00177717 (247 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177620: ;
    PUSH32(esp, 0x176720);
    PUSH32(esp, 0x834B5B5);
    PUSH32(esp, 0x0017762Fu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017762F: ;
    PUSH32(esp, 0x1767D0);
    PUSH32(esp, 0x5FBB23B3);
    PUSH32(esp, 0x0017763Eu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017763E: ;
    PUSH32(esp, 0x1772B0);
    PUSH32(esp, 0xD1F3B6F5u);
    PUSH32(esp, 0x0017764Du); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017764D: ;
    PUSH32(esp, 0x176930);
    PUSH32(esp, 0x254BDFE);
    PUSH32(esp, 0x0017765Cu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017765C: ;
    PUSH32(esp, 0x176A50);
    PUSH32(esp, 0xA52A26E2u);
    PUSH32(esp, 0x0017766Bu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017766B: ;
    PUSH32(esp, 0x176CA0);
    PUSH32(esp, 0xF9F03348u);
    PUSH32(esp, 0x0017767Au); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_0017767A: ;
    PUSH32(esp, 0x176E10);
    PUSH32(esp, 0xF568FA00u);
    PUSH32(esp, 0x00177689u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00177689: ;
    PUSH32(esp, 0x176FF0);
    PUSH32(esp, 0xEEB529FAu);
    PUSH32(esp, 0x00177698u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_00177698: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x177160);
    PUSH32(esp, 0x57651BAD);
    PUSH32(esp, 0x001776AAu); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_001776AA: ;
    PUSH32(esp, 0x177460);
    PUSH32(esp, 0x35D72336);
    PUSH32(esp, 0x001776B9u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_001776B9: ;
    PUSH32(esp, 0x1771C0);
    PUSH32(esp, 0xA8BC846Bu);
    PUSH32(esp, 0x001776C8u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_001776C8: ;
    PUSH32(esp, 0x176220);
    PUSH32(esp, 0x89986AD3u);
    PUSH32(esp, 0x001776D7u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_001776D7: ;
    PUSH32(esp, 0x1762E0);
    PUSH32(esp, 0xFF961FF4u);
    PUSH32(esp, 0x001776E6u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_001776E6: ;
    PUSH32(esp, 0x176330);
    PUSH32(esp, 0x57DA2943);
    PUSH32(esp, 0x001776F5u); RECOMP_ABI_CALL(0x00170C80u, sub_00170C80); /* call 0x00170C80 */

loc_001776F5: ;
    PUSH32(esp, 0x176380);
    PUSH32(esp, 0xFBDDD985u);
    PUSH32(esp, 0x00177704u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00177704: ;
    PUSH32(esp, 0x1764B0);
    PUSH32(esp, 0x30A6CF0D);
    PUSH32(esp, 0x00177713u); RECOMP_ABI_CALL(0x00170CB0u, sub_00170CB0); /* call 0x00170CB0 */

loc_00177713: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00177720
 * Original: 0x00177720 - 0x00177949 (553 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177720: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF1D943E1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF1D943E1u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00177846; /* jg: greater (signed >) */

loc_0017772F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001778BD; /* je: equal / zero */

loc_00177735: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB9005A02u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB9005A02u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001777C3; /* jg: greater (signed >) */

loc_00177740: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001778FA; /* je: equal / zero */

loc_00177746: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98CF0D72u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98CF0D72u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0017778D; /* jg: greater (signed >) */

loc_0017774D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001778C3; /* je: equal / zero */

loc_00177753: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x87DAF62Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x87DAF62Eu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0017777C; /* jg: greater (signed >) */

loc_0017775A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00177881; /* je: equal / zero */

loc_00177760: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80C3BED0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80C3BED0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001777ED; /* je: equal / zero */

loc_0017776B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x810464ADu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x810464ADu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_00177776: ;
    eax = 0x322DE8;
    esp += 4; return; /* ret */

loc_0017777C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x935FC9D9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x935FC9D9u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_00177787: ;
    eax = 0x322DD8;
    esp += 4; return; /* ret */

loc_0017778D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB414F855u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB414F855u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001777B2; /* jg: greater (signed >) */

loc_00177794: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00177887; /* je: equal / zero */

loc_0017779A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA514CB63u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA514CB63u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001777FE; /* je: equal / zero */

loc_001777A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB185D3BAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB185D3BAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0017790D; /* je: equal / zero */

loc_001777AC: ;
    eax = 0x322DC8;
    esp += 4; return; /* ret */

loc_001777B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB5029AC8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB5029AC8u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177898; /* je: equal / zero */

loc_001777BD: ;
    eax = 0x322DC8;
    esp += 4; return; /* ret */

loc_001777C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD94771CBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD94771CBu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0017780A; /* jg: greater (signed >) */

loc_001777CA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00177804; /* je: equal / zero */

loc_001777CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCDC2E6E0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCDC2E6E0u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001777F3; /* jg: greater (signed >) */

loc_001777D3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001777ED; /* je: equal / zero */

loc_001777D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBE1E87A0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBE1E87A0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177930; /* je: equal / zero */

loc_001777E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCD571F99u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCD571F99u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177840; /* je: equal / zero */

loc_001777E7: ;
    eax = 0x322DC8;
    esp += 4; return; /* ret */

loc_001777ED: ;
    eax = 0x322DB4;
    esp += 4; return; /* ret */

loc_001777F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD45AB1FDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD45AB1FDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_001777FE: ;
    eax = 0x322DA8;
    esp += 4; return; /* ret */

loc_00177804: ;
    eax = 0x322D98;
    esp += 4; return; /* ret */

loc_0017780A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9A4AAADu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9A4AAADu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00177835; /* jg: greater (signed >) */

loc_00177811: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0017782F; /* je: equal / zero */

loc_00177813: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDD8CA68u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDDD8CA68u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177900; /* je: equal / zero */

loc_0017781E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE6444507u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE6444507u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_00177829: ;
    eax = 0x3021CE;
    esp += 4; return; /* ret */

loc_0017782F: ;
    eax = 0x322D8C;
    esp += 4; return; /* ret */

loc_00177835: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEC591D8Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEC591D8Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_00177840: ;
    eax = 0x322D78;
    esp += 4; return; /* ret */

loc_00177846: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x323D0CCD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x323D0CCD (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001778D6; /* jg: greater (signed >) */

loc_00177851: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00177776; /* je: equal / zero */

loc_00177857: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x781A928) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x781A928 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0017789E; /* jg: greater (signed >) */

loc_0017785E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0017787B; /* je: equal / zero */

loc_00177860: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF915A065u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF915A065u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0017788D; /* jg: greater (signed >) */

loc_00177867: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00177887; /* je: equal / zero */

loc_00177869: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF6948CB0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF6948CB0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177881; /* je: equal / zero */

loc_00177870: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF7FC9DF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF7FC9DF1u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_0017787B: ;
    eax = 0x322D6C;
    esp += 4; return; /* ret */

loc_00177881: ;
    eax = 0x322D54;
    esp += 4; return; /* ret */

loc_00177887: ;
    eax = 0x322D4C;
    esp += 4; return; /* ret */

loc_0017788D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63BF2A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63BF2A8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_00177898: ;
    eax = 0x322D38;
    esp += 4; return; /* ret */

loc_0017789E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x258C37D5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x258C37D5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001778C9; /* jg: greater (signed >) */

loc_001778A5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001778C3; /* je: equal / zero */

loc_001778A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x925F3EE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x925F3EE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177943; /* je: equal / zero */

loc_001778B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE2654A5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE2654A5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_001778BD: ;
    eax = 0x322D2C;
    esp += 4; return; /* ret */

loc_001778C3: ;
    eax = 0x322D20;
    esp += 4; return; /* ret */

loc_001778C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x312EF33A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x312EF33A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_001778D0: ;
    eax = 0x322D14;
    esp += 4; return; /* ret */

loc_001778D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x557D2D67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x557D2D67 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00177913; /* jg: greater (signed >) */

loc_001778DD: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00177829; /* je: equal / zero */

loc_001778E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x406089A4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x406089A4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00177906; /* jg: greater (signed >) */

loc_001778EA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001778D0; /* je: equal / zero */

loc_001778EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36550EDC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36550EDC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177900; /* je: equal / zero */

loc_001778F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3AF2D1C7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3AF2D1C7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_001778FA: ;
    eax = 0x322D04;
    esp += 4; return; /* ret */

loc_00177900: ;
    eax = 0x322CF8;
    esp += 4; return; /* ret */

loc_00177906: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E7AC4FE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4E7AC4FE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_0017790D: ;
    eax = 0x322CEC;
    esp += 4; return; /* ret */

loc_00177913: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x789FF7B9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x789FF7B9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00177936; /* jg: greater (signed >) */

loc_0017791A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0017792A; /* je: equal / zero */

loc_0017791C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55934314) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x55934314 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177930; /* je: equal / zero */

loc_00177923: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5991F5AE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5991F5AE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0017793D; /* jne: not equal / not zero */

loc_0017792A: ;
    eax = 0x322CE0;
    esp += 4; return; /* ret */

loc_00177930: ;
    eax = 0x322CD4;
    esp += 4; return; /* ret */

loc_00177936: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B826E7E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7B826E7E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177943; /* je: equal / zero */

loc_0017793D: ;
    eax = 0x322DC8;
    esp += 4; return; /* ret */

loc_00177943: ;
    eax = 0x322CCC;
    esp += 4; return; /* ret */

}

/**
 * sub_00177950
 * Original: 0x00177950 - 0x00177951 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177950(void)
{

loc_00177950: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00177960
 * Original: 0x00177960 - 0x001779A0 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177960: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = esp + 0x10;
    esi = ecx;
    ecx = MEM32(0x3C2EEC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0017797Eu); RECOMP_ABI_CALL(0x0010AF10u, sub_0010AF10); /* call 0x0010AF10 */

loc_0017797E: ;
    edx = MEM32(eax);
    ecx = esi + 8;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x14) = edi;
    POP32(esp, edi);
    MEM8(esi + 6) = 1;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001779C0
 * Original: 0x001779C0 - 0x001779CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001779C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001779C0: ;
    PUSH32(esp, 0x001779C5u); RECOMP_ABI_CALL(0x001706D0u, sub_001706D0); /* call 0x001706D0 */

loc_001779C5: ;
    g_seh_ebp = ebp; sub_00170B80(); return; /* tail jmp 0x00170B80 */

}

/**
 * sub_001779D0
 * Original: 0x001779D0 - 0x00177BC0 (496 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001779D0(void)
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

loc_001779D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001779E5u); RECOMP_ABI_CALL(0x001B3059u, sub_001B3059); /* call 0x001B3059 */

loc_001779E5: ;
    ebx = MEM32(esp + 0x24);
    edi = eax;
    eax = MEM32(esp + 0x20);
    MEM32(ebx) = esi;
    MEM32(eax) = esi;
    SET_LO16(eax, MEM16(edi + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177A03; /* je: equal / zero */

loc_001779FE: ;
    esi = 1;

loc_00177A03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177A0A; /* je: equal / zero */

loc_00177A07: ;
    esi = esi | 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177A11; /* je: equal / zero */

loc_00177A0E: ;
    esi = esi | 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A11: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177A18; /* je: equal / zero */

loc_00177A15: ;
    esi = esi | 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177A22; /* je: equal / zero */

loc_00177A1C: ;
    esi = esi | 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A22: ;
    ecx = 0x20;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177A31; /* je: equal / zero */

loc_00177A2B: ;
    esi = esi | 0x200;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A31: ;
    _fa = (uint32_t)(MEM8(edi + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x12), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00177A39; /* jbe: below or equal (unsigned <=) */

loc_00177A36: ;
    esi = esi | 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A39: ;
    _fa = (uint32_t)(MEM8(edi + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x13), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00177A44; /* jbe: below or equal (unsigned <=) */

loc_00177A3E: ;
    esi = esi | 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A44: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00177A4B; /* jbe: below or equal (unsigned <=) */

loc_00177A49: ;
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A4B: ;
    _fa = (uint32_t)(MEM8(edi + 0x15)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x15), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00177A53; /* jbe: below or equal (unsigned <=) */

loc_00177A50: ;
    esi = esi | 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A53: ;
    _fa = (uint32_t)(MEM8(edi + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x18), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00177A5E; /* jbe: below or equal (unsigned <=) */

loc_00177A58: ;
    esi = esi | 0x400;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A5E: ;
    _fa = (uint32_t)(MEM8(edi + 0x19)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x19), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00177A69; /* jbe: below or equal (unsigned <=) */

loc_00177A63: ;
    esi = esi | 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A69: ;
    _fa = (uint32_t)(MEM8(edi + 0x16)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x16), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00177A74; /* jbe: below or equal (unsigned <=) */

loc_00177A6E: ;
    esi = esi | 0x1000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A74: ;
    _fa = (uint32_t)(MEM8(edi + 0x17)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x17), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00177A7F; /* jbe: below or equal (unsigned <=) */

loc_00177A79: ;
    esi = esi | 0x2000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A7F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177A89; /* je: equal / zero */

loc_00177A83: ;
    esi = esi | 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00177A93; /* jns: not sign (positive) */

loc_00177A8D: ;
    esi = esi | 0x20000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00177A93: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00177AB2; /* jp: parity */

loc_00177AA4: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00177B10; /* jnp: not parity */

loc_00177AB2: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    MEMF(0x51FBA8) = xmm0.f[0]; /* movss */
    edx = MEM32(0x51FBA8);
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    MEMF(0x51FBAC) = xmm0.f[0]; /* movss */
    edx = MEM32(0x51FBAC);
    MEM32(ecx + 4) = edx;
    MEM8(0x51FBB0) = 0;
    edx = MEM32(0x51FBB0);
    eax = 0x1F6;
    MEM32(ecx + 8) = edx;
    MEM32(0x51FBB4) = eax;
    esi = esi | 0x4000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x00177B0Au); RECOMP_ABI_CALL(0x00277610u, sub_00277610); /* call 0x00277610 */

loc_00177B0A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00177B10: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00177B2B; /* jp: parity */

loc_00177B1D: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00177B85; /* jnp: not parity */

loc_00177B2B: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEMF(0x51FBA8) = xmm0.f[0]; /* movss */
    edx = MEM32(0x51FBA8);
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    MEMF(0x51FBAC) = xmm0.f[0]; /* movss */
    edx = MEM32(0x51FBAC);
    MEM32(ecx + 4) = edx;
    MEM8(0x51FBB0) = 0;
    edx = MEM32(0x51FBB0);
    eax = 0x1F5;
    MEM32(ecx + 8) = edx;
    MEM32(0x51FBB4) = eax;
    esi = esi | 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x00177B82u); RECOMP_ABI_CALL(0x00277610u, sub_00277610); /* call 0x00277610 */

loc_00177B82: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00177B85: ;
    eax = MEM32(ebp * 4 + 0x51FB88);
    edx = MEM32(esp + 0x1C);
    ecx = eax;
    ecx = ecx ^ esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = ecx;
    eax = MEM32(ebp * 4 + 0x51FB88);
    eax = eax ^ esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = eax;
    MEM32(ebp * 4 + 0x51FB88) = esi;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177BB8; /* je: equal / zero */

loc_00177BB1: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + 0x18) = ebp;

loc_00177BB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00177BD0
 * Original: 0x00177BD0 - 0x00177BE5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177BD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x322DF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00177BDFu); RECOMP_ABI_CALL(0x00170760u, sub_00170760); /* call 0x00170760 */

loc_00177BDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177BF0
 * Original: 0x00177BF0 - 0x00177BF3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177BF0(void)
{

loc_00177BF0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177C00
 * Original: 0x00177C00 - 0x00177C03 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177C00(void)
{

loc_00177C00: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00177C10
 * Original: 0x00177C10 - 0x00177C29 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177C10(void)
{

loc_00177C10: ;
    eax = MEM32(0x51FB74);
    MEM32(0x51FB78) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x51FB7C) = eax;
    MEM32(0x51FB74) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00177C30
 * Original: 0x00177C30 - 0x00177CE0 (176 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00177C99; /* je: equal / zero */

loc_00177C3A: ;
    PUSH32(esp, 0x322DF4);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x00177C49u); RECOMP_ABI_CALL(0x00170760u, sub_00170760); /* call 0x00170760 */

loc_00177C49: ;
    eax = MEM32(0x51FB74);
    MEM32(0x51FB78) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x322E08);
    MEM32(0x51FB7C) = eax;
    MEM32(0x51FB74) = eax;
    PUSH32(esp, 0x00177C6Bu); RECOMP_ABI_CALL(0x00151EF0u, sub_00151EF0); /* call 0x00151EF0 */

loc_00177C6B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x322DF4);
    if (CMP_EQ(_fa, _fb)) goto loc_00177C88; /* je: equal / zero */

loc_00177C77: ;
    PUSH32(esp, 0x322DFC);
    PUSH32(esp, 0x00177C81u); RECOMP_ABI_CALL(0x00170760u, sub_00170760); /* call 0x00170760 */

loc_00177C81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00177C88: ;
    PUSH32(esp, 0x307A28);
    PUSH32(esp, 0x00177C92u); RECOMP_ABI_CALL(0x00170760u, sub_00170760); /* call 0x00170760 */

loc_00177C92: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00177C99: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00177CD3; /* jne: not equal / not zero */

loc_00177CA0: ;
    PUSH32(esp, 0x4E2000);
    ecx = esi;
    PUSH32(esp, 0x00177CACu); RECOMP_ABI_CALL(0x00177960u, sub_00177960); /* call 0x00177960 */

loc_00177CAC: ;
    ecx = MEM32(0x51FB74);
    edx = MEM32(esp + 8);
    eax = 1;
    MEM32(0x51FB78) = ecx;
    MEM32(0x51FB74) = eax;
    MEM32(0x51FB7C) = edx;
    MEM8(esi + 5) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00177CD3: ;
    eax = MEM32(esp + 8);
    MEM32(0x51FB7C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00177CE0
 * Original: 0x00177CE0 - 0x00177CE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177CE0(void)
{

loc_00177CE0: ;
    eax = MEM32(0x51FB74);
    esp += 4; return; /* ret */

}

/**
 * sub_00177CF0
 * Original: 0x00177CF0 - 0x00177CF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177CF0: ;
    g_seh_ebp = ebp; sub_00277670(); return; /* tail jmp 0x00277670 */

}

/**
 * sub_00177D00
 * Original: 0x00177D00 - 0x00177D0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177D00: ;
    PUSH32(esp, 0x00177D05u); RECOMP_ABI_CALL(0x00149D10u, sub_00149D10); /* call 0x00149D10 */

loc_00177D05: ;
    g_seh_ebp = ebp; sub_0015ED10(); return; /* tail jmp 0x0015ED10 */

}

/**
 * sub_00177D10
 * Original: 0x00177D10 - 0x00177D28 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177D10: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177D27; /* je: equal / zero */

loc_00177D17: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00177D20u); RECOMP_ABI_CALL(0x001AD7F0u, sub_001AD7F0); /* call 0x001AD7F0 */

loc_00177D20: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00177D26u); RECOMP_ABI_CALL(0x0015EFA0u, sub_0015EFA0); /* call 0x0015EFA0 */

loc_00177D26: ;
    POP32(esp, ecx);

loc_00177D27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00177D30
 * Original: 0x00177D30 - 0x00177D55 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177D30: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00177D41u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00177D41: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    MEM8(0x4F4E8F) = 0;
    PUSH32(esp, 0x00177D51u); RECOMP_ABI_CALL(0x00147DF0u, sub_00147DF0); /* call 0x00147DF0 */

loc_00177D51: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00177D60
 * Original: 0x00177D60 - 0x00177D65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00177D60: ;
    g_seh_ebp = ebp; sub_00147B10(); return; /* tail jmp 0x00147B10 */

}

/**
 * sub_00177D70
 * Original: 0x00177D70 - 0x00177DAB (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00177D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177D70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00177D86u); RECOMP_ABI_CALL(0x0017B3F0u, sub_0017B3F0); /* call 0x0017B3F0 */

loc_00177D86: ;
    PUSH32(esp, 1);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00177D94u); RECOMP_ABI_CALL(0x0017B3D0u, sub_0017B3D0); /* call 0x0017B3D0 */

loc_00177D94: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00177DA3u); RECOMP_ABI_CALL(0x00148FF0u, sub_00148FF0); /* call 0x00148FF0 */

loc_00177DA3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
