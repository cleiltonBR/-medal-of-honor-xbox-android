/**
 * Medal of Honor European Assault - Recompiled code chunk 35
 * Functions: 250 (0x0012F6E0 - 0x001389E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0012F6E0
 * Original: 0x0012F6E0 - 0x0012F70B (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F6E0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0x2FECDC;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F703; /* je: equal / zero */

loc_0012F6F0: ;
    PUSH32(esp, esi);

loc_0012F6F1: ;
    eax = MEM32(ecx);
    esi = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012F6FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F6F9u); } /* indirect call */
    }

loc_0012F6FC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0012F6F1; /* jne: not equal / not zero */

loc_0012F702: ;
    POP32(esp, esi);

loc_0012F703: ;
    ecx = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0012F080(); return; /* tail jmp 0x0012F080 */

}

/**
 * sub_0012F710
 * Original: 0x0012F710 - 0x0012F73B (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F710: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x0012F71Du); RECOMP_ABI_CALL(0x0012F220u, sub_0012F220); /* call 0x0012F220 */

loc_0012F71D: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F737; /* je: equal / zero */

loc_0012F724: ;
    PUSH32(esp, esi);

loc_0012F725: ;
    edx = MEM32(ecx);
    esi = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0012F730u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F72Du); } /* indirect call */
    }

loc_0012F730: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0012F725; /* jne: not equal / not zero */

loc_0012F736: ;
    POP32(esp, esi);

loc_0012F737: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F740
 * Original: 0x0012F740 - 0x0012F7AA (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F740: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 8;
    MEM32(edi) = 0x2FECF0;
    MEM32(esi) = 0x2FECE8;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F760; /* je: equal / zero */

loc_0012F75A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012F760u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0012F760: ;
    MEM32(esi + 4) = 0;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F77A; /* je: equal / zero */

loc_0012F774: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012F77Au); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0012F77A: ;
    MEM32(esi + 4) = 0;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0x2FECDC;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F7A1; /* je: equal / zero */

loc_0012F78E: ;
    edi = edi;

loc_0012F790: ;
    eax = MEM32(ecx);
    esi = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012F79Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F798u); } /* indirect call */
    }

loc_0012F79B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0012F790; /* jne: not equal / not zero */

loc_0012F7A1: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0012F080(); return; /* tail jmp 0x0012F080 */

}

/**
 * sub_0012F7B0
 * Original: 0x0012F7B0 - 0x0012F7B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F7B0(void)
{

loc_0012F7B0: ;
    eax = 0x3E8B60;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F7C0
 * Original: 0x0012F7C0 - 0x0012F7C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F7C0(void)
{

loc_0012F7C0: ;
    eax = 0x3E8B90;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F7D0
 * Original: 0x0012F7D0 - 0x0012F7E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F7D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F7E0; /* je: equal / zero */

loc_0012F7D8: ;
    ecx = eax + 0x70;
    g_seh_ebp = ebp; sub_000EF330(); return; /* tail jmp 0x000EF330 */

loc_0012F7E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F7F0
 * Original: 0x0012F7F0 - 0x0012F818 (40 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F7F0: ;
    ecx = 0x3E8B60;
    PUSH32(esp, 0x0012F7FAu); RECOMP_ABI_CALL(0x000EF3E0u, sub_000EF3E0); /* call 0x000EF3E0 */

loc_0012F7FA: ;
    ecx = 0x3E8B90;
    PUSH32(esp, 0x0012F804u); RECOMP_ABI_CALL(0x000EF3E0u, sub_000EF3E0); /* call 0x000EF3E0 */

loc_0012F804: ;
    ecx = 0x3E8BC0;
    PUSH32(esp, 0x0012F80Eu); RECOMP_ABI_CALL(0x000EF3E0u, sub_000EF3E0); /* call 0x000EF3E0 */

loc_0012F80E: ;
    ecx = 0x3E8BF0;
    g_seh_ebp = ebp; sub_000EF3E0(); return; /* tail jmp 0x000EF3E0 */

}

/**
 * sub_0012F820
 * Original: 0x0012F820 - 0x0012F89E (126 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F820(void)
{

loc_0012F820: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012F826u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012F826: ;
    esi = eax;
    eax = MEM32(esi + 0x1E8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x31AEA4);
    ecx = 0x3E8B60;
    PUSH32(esp, 0x0012F845u); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_0012F845: ;
    ecx = MEM32(esi + 0x1EC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x270);
    PUSH32(esp, 0x31AE90);
    ecx = 0x3E8B90;
    PUSH32(esp, 0x0012F862u); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_0012F862: ;
    edx = MEM32(esi + 0x1F0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x31AE78);
    ecx = 0x3E8BF0;
    PUSH32(esp, 0x0012F87Fu); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_0012F87F: ;
    eax = MEM32(esi + 0x1F4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x31AE64);
    ecx = 0x3E8BC0;
    PUSH32(esp, 0x0012F89Cu); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_0012F89C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F8A0
 * Original: 0x0012F8A0 - 0x0012F8C8 (40 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F8A0: ;
    ecx = 0x3E8B60;
    PUSH32(esp, 0x0012F8AAu); RECOMP_ABI_CALL(0x000EF3F0u, sub_000EF3F0); /* call 0x000EF3F0 */

loc_0012F8AA: ;
    ecx = 0x3E8B90;
    PUSH32(esp, 0x0012F8B4u); RECOMP_ABI_CALL(0x000EF3F0u, sub_000EF3F0); /* call 0x000EF3F0 */

loc_0012F8B4: ;
    ecx = 0x3E8BC0;
    PUSH32(esp, 0x0012F8BEu); RECOMP_ABI_CALL(0x000EF3F0u, sub_000EF3F0); /* call 0x000EF3F0 */

loc_0012F8BE: ;
    ecx = 0x3E8BF0;
    g_seh_ebp = ebp; sub_000EF3F0(); return; /* tail jmp 0x000EF3F0 */

}

/**
 * sub_0012F8D0
 * Original: 0x0012F8D0 - 0x0012F952 (130 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F8D0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B9EB4C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3B9EB4C8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F8F3; /* jne: not equal / not zero */

loc_0012F8DE: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x3E8B60;
    PUSH32(esp, 0x0012F8F1u); RECOMP_ABI_CALL(0x0012F960u, sub_0012F960); /* call 0x0012F960 */

loc_0012F8F1: ;
    goto loc_0012F948;

loc_0012F8F3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAAB4AD23u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xAAB4AD23u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F910; /* jne: not equal / not zero */

loc_0012F8FB: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3E8B90;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0012F90Eu); RECOMP_ABI_CALL(0x0012F9D0u, sub_0012F9D0); /* call 0x0012F9D0 */

loc_0012F90E: ;
    goto loc_0012F948;

loc_0012F910: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC150232Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC150232Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F92D; /* jne: not equal / not zero */

loc_0012F918: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x3E8BC0;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0012F92Bu); RECOMP_ABI_CALL(0x0012FA40u, sub_0012FA40); /* call 0x0012FA40 */

loc_0012F92B: ;
    goto loc_0012F948;

loc_0012F92D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE93FAAB6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE93FAAB6u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F951; /* jne: not equal / not zero */

loc_0012F935: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x3E8BF0;
    PUSH32(esp, 0x0012F948u); RECOMP_ABI_CALL(0x0012FAB0u, sub_0012FAB0); /* call 0x0012FAB0 */

loc_0012F948: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F94D; /* jne: not equal / not zero */

loc_0012F94C: ;
    esp += 4; return; /* ret */

loc_0012F94D: ;
    eax = MEM32(esp + 4);

loc_0012F951: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F960
 * Original: 0x0012F960 - 0x0012F9C7 (103 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F960: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012F9C1; /* jge: greater or equal (signed >=) */

loc_0012F96B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0012F98Au); RECOMP_ABI_CALL(0x000EF230u, sub_000EF230); /* call 0x000EF230 */

loc_0012F98A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F997; /* je: equal / zero */

loc_0012F98E: ;
    ecx = eax;
    PUSH32(esp, 0x0012F995u); RECOMP_ABI_CALL(0x00130370u, sub_00130370); /* call 0x00130370 */

loc_0012F995: ;
    goto loc_0012F999;

loc_0012F997: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012F999: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F9A4; /* je: equal / zero */

loc_0012F99F: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012F9A6;

loc_0012F9A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012F9A6: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012F9B3u); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_0012F9B3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012F9C1; /* je: equal / zero */

loc_0012F9BA: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0012F9C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F9D0
 * Original: 0x0012F9D0 - 0x0012FA37 (103 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F9D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012FA31; /* jge: greater or equal (signed >=) */

loc_0012F9DB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0012F9FAu); RECOMP_ABI_CALL(0x000EF230u, sub_000EF230); /* call 0x000EF230 */

loc_0012F9FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FA07; /* je: equal / zero */

loc_0012F9FE: ;
    ecx = eax;
    PUSH32(esp, 0x0012FA05u); RECOMP_ABI_CALL(0x001342C0u, sub_001342C0); /* call 0x001342C0 */

loc_0012FA05: ;
    goto loc_0012FA09;

loc_0012FA07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012FA09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012FA14; /* je: equal / zero */

loc_0012FA0F: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012FA16;

loc_0012FA14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012FA16: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012FA23u); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_0012FA23: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012FA31; /* je: equal / zero */

loc_0012FA2A: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0012FA31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FA40
 * Original: 0x0012FA40 - 0x0012FAA7 (103 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FA40: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012FAA1; /* jge: greater or equal (signed >=) */

loc_0012FA4B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0012FA6Au); RECOMP_ABI_CALL(0x000EF230u, sub_000EF230); /* call 0x000EF230 */

loc_0012FA6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FA77; /* je: equal / zero */

loc_0012FA6E: ;
    ecx = eax;
    PUSH32(esp, 0x0012FA75u); RECOMP_ABI_CALL(0x001356F0u, sub_001356F0); /* call 0x001356F0 */

loc_0012FA75: ;
    goto loc_0012FA79;

loc_0012FA77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012FA79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012FA84; /* je: equal / zero */

loc_0012FA7F: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012FA86;

loc_0012FA84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012FA86: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012FA93u); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_0012FA93: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012FAA1; /* je: equal / zero */

loc_0012FA9A: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0012FAA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FAB0
 * Original: 0x0012FAB0 - 0x0012FB17 (103 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FAB0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012FB11; /* jge: greater or equal (signed >=) */

loc_0012FABB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0012FADAu); RECOMP_ABI_CALL(0x000EF230u, sub_000EF230); /* call 0x000EF230 */

loc_0012FADA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FAE7; /* je: equal / zero */

loc_0012FADE: ;
    ecx = eax;
    PUSH32(esp, 0x0012FAE5u); RECOMP_ABI_CALL(0x0012EF00u, sub_0012EF00); /* call 0x0012EF00 */

loc_0012FAE5: ;
    goto loc_0012FAE9;

loc_0012FAE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012FAE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012FAF4; /* je: equal / zero */

loc_0012FAEF: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012FAF6;

loc_0012FAF4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012FAF6: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012FB03u); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_0012FB03: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012FB11; /* je: equal / zero */

loc_0012FB0A: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0012FB11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FB20
 * Original: 0x0012FB20 - 0x0012FB34 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FB20(void)
{

loc_0012FB20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    MEM32(ecx + 0x80) = eax;
    PUSH32(esp, 0x0012FB30u); RECOMP_ABI_CALL(0x001317C0u, sub_001317C0); /* call 0x001317C0 */

loc_0012FB30: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FB40
 * Original: 0x0012FB40 - 0x0012FB85 (69 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FB40(void)
{

loc_0012FB40: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0xA0) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    MEMF(ecx + 0xA4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012FB90
 * Original: 0x0012FB90 - 0x0012FB9A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FB90(void)
{

loc_0012FB90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FBA0
 * Original: 0x0012FBA0 - 0x0012FBAD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FBA0(void)
{

loc_0012FBA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x170) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FBB0
 * Original: 0x0012FBB0 - 0x0012FBBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012FBB0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000B1AB0(); return; /* tail jmp 0x000B1AB0 */

}

/**
 * sub_0012FBC0
 * Original: 0x0012FBC0 - 0x0012FBCB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012FBC0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000B1AE0(); return; /* tail jmp 0x000B1AE0 */

}

/**
 * sub_0012FBD0
 * Original: 0x0012FBD0 - 0x0012FBDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012FBD0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000B1BA0(); return; /* tail jmp 0x000B1BA0 */

}

/**
 * sub_0012FBE0
 * Original: 0x0012FBE0 - 0x0012FC60 (128 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FBE0: ;
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
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xAC);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x0012FBF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012FBF2u); } /* indirect call */
    }

loc_0012FBF8: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FC0A; /* je: equal / zero */

loc_0012FC01: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FC08u); RECOMP_ABI_CALL(0x001D05C0u, sub_001D05C0); /* call 0x001D05C0 */

loc_0012FC08: ;
    goto loc_0012FC0C;

loc_0012FC0A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012FC0C: ;
    ecx = edi;
    MEM32(0x3E8C20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FC19u); RECOMP_ABI_CALL(0x001D0630u, sub_001D0630); /* call 0x001D0630 */

loc_0012FC19: ;
    esi = edi + 4;
    PUSH32(esp, 0x207);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FC28u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_0012FC28: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FC31u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_0012FC31: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FC3Au); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_0012FC3A: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FC43u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_0012FC43: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FC4Cu); RECOMP_ABI_CALL(0x001C7670u, sub_001C7670); /* call 0x001C7670 */

loc_0012FC4C: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012FC60
 * Original: 0x0012FC60 - 0x0012FC95 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012FC60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x31AED0;
    MEM32(esi + 0x70) = 0x31AEC4;
    PUSH32(esp, 0x0012FC76u); RECOMP_ABI_CALL(0x00131940u, sub_00131940); /* call 0x00131940 */

loc_0012FC76: ;
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
 * sub_0012FCA0
 * Original: 0x0012FCA0 - 0x0012FD85 (229 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FCA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0012FCA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 0x6C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012FD55; /* je: equal / zero */

loc_0012FCB8: ;
    esi = MEM32(0x3888C0);
    edx = MEM32(ebp + 8);
    SET_LO8(ebx, MEM8(esi + 0x203D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = MEM32(edx + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC0)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FCF7; /* je: equal / zero */

loc_0012FCD9: ;
    xmm1 = XMM_SCALAR(MEMF(0x3E8C24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF084); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF504); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    goto loc_0012FCFF;

loc_0012FCF7: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x316360); /* mulss */

loc_0012FCFF: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x64); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x68); /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x60); /* subss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012FD5F; /* jb: below (unsigned <) (xmm5.f[0] vs xmm0.f[0]) */

loc_0012FD55: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0012FD5F: ;
    ecx = MEM32(eax + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FD7B; /* je: equal / zero */

loc_0012FD69: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FD73u); RECOMP_ABI_CALL(0x0014DF30u, sub_0014DF30); /* call 0x0014DF30 */

loc_0012FD73: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0012FD7B: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FD90
 * Original: 0x0012FD90 - 0x0012FFCC (572 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FD90(void)
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

loc_0012FD90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xE4);
    SET_LO8(edx, MEM8(ecx + 0x39EC));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(edi);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x62)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 0x62) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012FDC7; /* je: equal / zero */

loc_0012FDB5: ;
    ecx = esi + 0x180;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xD0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FDC7u); RECOMP_ABI_CALL(0x00265060u, sub_00265060); /* call 0x00265060 */

loc_0012FDC7: ;
    ecx = MEM32(esi + 0x80);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0012FDD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012FDCFu); } /* indirect call */
    }

loc_0012FDD2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0012FDFD; /* jne: not equal / not zero */

loc_0012FDD6: ;
    ecx = esi + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FDE1u); RECOMP_ABI_CALL(0x000B1B10u, sub_000B1B10); /* call 0x000B1B10 */

loc_0012FDE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0012FDFD; /* jne: not equal / not zero */

loc_0012FDE5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x98); /* comiss */
    if ((_fca > _fcb)) goto loc_0012FE05; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x98)) */

loc_0012FDF6: ;
    eax = 3;
    goto loc_0012FE0A;

loc_0012FDFD: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */

loc_0012FE05: ;
    eax = 4;

loc_0012FE0A: ;
    ecx = MEM32(esi + 0x80);
    edx = MEM32(edi + 8);
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x10;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = edx;
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x98); /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FE5Au); RECOMP_ABI_CALL(0x0018D030u, sub_0018D030); /* call 0x0018D030 */

loc_0012FE5A: ;
    xmm0 = XMM_SCALAR(MEMF(0x3162B4)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca > _fcb)) goto loc_0012FE81; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_0012FE6C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x98); /* comiss */
    if ((_fca > _fcb)) goto loc_0012FE81; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x98)) */

loc_0012FE7D: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0012FE83;

loc_0012FE81: ;
    SET_LO8(eax, 1);

loc_0012FE83: ;
    ecx = MEM32(esi + 0x80);
    MEM8(ecx + 0x17) = LO8(eax);
    edi = MEM32(edi + 4);
    xmm3 = XMM_SCALAR(MEMF(edi + 0x8C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x90)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x94)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm5.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x50); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x54); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x58); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    ecx = MEM32(esi + 0x80);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0012FF5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012FF59u); } /* indirect call */
    }

loc_0012FF5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FF74; /* je: equal / zero */

loc_0012FF60: ;
    PUSH32(esp, 1);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi + 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FF72u); RECOMP_ABI_CALL(0x00191950u, sub_00191950); /* call 0x00191950 */

loc_0012FF72: ;
    ebx = eax;

loc_0012FF74: ;
    ecx = MEM32(esi + 0x80);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0012FF7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012FF7Cu); } /* indirect call */
    }

loc_0012FF7F: ;
    esi = MEM32(ebp + 8);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = esp + 0x20;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FF9Eu); RECOMP_ABI_CALL(0x0018F5B0u, sub_0018F5B0); /* call 0x0018F5B0 */

loc_0012FF9E: ;
    PUSH32(esp, edi);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FFAAu); RECOMP_ABI_CALL(0x0014E330u, sub_0014E330); /* call 0x0014E330 */

loc_0012FFAA: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012FFC2u); RECOMP_ABI_CALL(0x0018D030u, sub_0018D030); /* call 0x0018D030 */

loc_0012FFC2: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012FFD0
 * Original: 0x0012FFD0 - 0x0012FFD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012FFD0: ;
    g_seh_ebp = ebp; sub_0012FCA0(); return; /* tail jmp 0x0012FCA0 */

}

/**
 * sub_0012FFE0
 * Original: 0x0012FFE0 - 0x0013000D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FFE0: ;
    ecx = MEM32(0x3E8C20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00130001; /* je: equal / zero */

loc_0012FFED: ;
    PUSH32(esp, 0x0012FFF2u); RECOMP_ABI_CALL(0x001D0BA0u, sub_001D0BA0); /* call 0x001D0BA0 */

loc_0012FFF2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x0012FFFEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012FFF8u); } /* indirect call */
    }

loc_0012FFFE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00130001: ;
    MEM32(0x3E8C20) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013000C
 * Original: 0x0013000C - 0x0013000D (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013000C(void)
{

loc_0013000C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00130010
 * Original: 0x00130010 - 0x00130362 (850 bytes, 258 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130010(void)
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

loc_00130010: ;
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
    SET_LO8(eax, MEM8(esi + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00130359; /* je: equal / zero */

loc_00130029: ;
    ecx = MEM32(0x3888C0);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0xE4);
    SET_LO8(edx, MEM8(ecx + 0x203D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC0)); /* movss */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013006C; /* je: equal / zero */

loc_0013004E: ;
    xmm0 = XMM_SCALAR(MEMF(0x3E8C24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF084); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF504); /* mulss */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    goto loc_00130074;

loc_0013006C: ;
    xmm3.f[0] = xmm3.f[0] * MEMF(0x316360); /* mulss */

loc_00130074: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x64); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x68); /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_00130359; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001300CE: ;
    SET_LO8(edx, MEM8(eax + 0x39EC));
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, ebx);
    MEM8(esp + 0x1C) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001300E8u); RECOMP_ABI_CALL(0x0014DF30u, sub_0014DF30); /* call 0x0014DF30 */

loc_001300E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130359; /* je: equal / zero */

loc_001300F0: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001300FCu); RECOMP_ABI_CALL(0x000B8A00u, sub_000B8A00); /* call 0x000B8A00 */

loc_001300FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130359; /* je: equal / zero */

loc_00130104: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x9C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xA4); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00130144; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013013C: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00130155;

loc_00130144: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00130155; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_0013014F: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_00130155: ;
    ecx = esi + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00130160u); RECOMP_ABI_CALL(0x000B1C10u, sub_000B1C10); /* call 0x000B1C10 */

loc_00130160: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x98)); /* fmul dword ptr [esi + 0x98] */
    ecx = MEM32(esi + 0x80);
    edx = MEM32(ecx + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    eax = MEM32(edx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00130225; /* je: equal / zero */

loc_00130186: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013018Du); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_0013018D: ;
    ecx = MEM32(esp + 0x10);
    edi = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edi + 0x4C) = eax;
    eax = esi + 0x20;
    MEM32(edi + 0x54) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(edi + 0x58) = 0x12FD90;
    MEM32(edi + 0x48) = esi;
    MEM32(edi + 0x50) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001301B9u); RECOMP_ABI_CALL(0x00012760u, sub_00012760); /* call 0x00012760 */

loc_001301B9: ;
    edx = MEM32(esi + 0x80);
    eax = MEM32(edx + 0x10);
    eax = MEM32(eax + 0x48);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001301DE; /* je: equal / zero */

loc_001301CA: ;
    PUSH32(esp, 0x17);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001301D3u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_001301D3: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001301D9u); RECOMP_ABI_CALL(0x000BD570u, sub_000BD570); /* call 0x000BD570 */

loc_001301D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00130225;

loc_001301DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001301E6; /* je: equal / zero */

loc_001301E2: ;
    PUSH32(esp, 0x1B);
    goto loc_0013021E;

loc_001301E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001301F0; /* je: equal / zero */

loc_001301EA: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    goto loc_0013021E;

loc_001301F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130209; /* je: equal / zero */

loc_001301F4: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x62)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 0x62) (8-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00130205; /* je: equal / zero */

loc_001301FF: ;
    eax = MEM32(esi + 0x64);
    PUSH32(esp, eax);
    goto loc_00130220;

loc_00130205: ;
    PUSH32(esp, 0x23);
    goto loc_00130220;

loc_00130209: ;
    xmm0 = XMM_SCALAR(MEMF(0x3162B4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013021C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_00130218: ;
    PUSH32(esp, 0x10);
    goto loc_0013021E;

loc_0013021C: ;
    PUSH32(esp, 4);

loc_0013021E: ;
    ecx = ebx;

loc_00130220: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00130225u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_00130225: ;
    ecx = MEM32(esi + 0x80);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00130359; /* je: equal / zero */

loc_0013023D: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00130244u); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_00130244: ;
    edi = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00130252u); RECOMP_ABI_CALL(0x00130410u, sub_00130410); /* call 0x00130410 */

loc_00130252: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x64); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x68); /* subss */
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    eax = esi + 0x20;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEM32(edi + 0x4C) = ecx;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(edi + 0x40) = xmm3.f[0]; /* movss */
    MEM32(edi + 0x58) = 0x12FD90;
    MEM32(edi + 0x48) = esi;
    MEM32(edi + 0x50) = 1;
    MEM32(edi + 0x54) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001302C3u); RECOMP_ABI_CALL(0x00012760u, sub_00012760); /* call 0x00012760 */

loc_001302C3: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + 0x48);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001302EF; /* je: equal / zero */

loc_001302D4: ;
    PUSH32(esp, 0x17);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001302DDu); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_001302DD: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001302E3u); RECOMP_ABI_CALL(0x000BD570u, sub_000BD570); /* call 0x000BD570 */

loc_001302E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001302EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130305; /* je: equal / zero */

loc_001302F3: ;
    PUSH32(esp, 0x1B);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001302FCu); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_001302FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00130305: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013031D; /* je: equal / zero */

loc_00130309: ;
    edx = MEM32(esi + 0x64);
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00130314u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_00130314: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0013031D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130350; /* je: equal / zero */

loc_00130321: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x62)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x62) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013033E; /* je: equal / zero */

loc_0013032A: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00130335u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_00130335: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0013033E: ;
    PUSH32(esp, 0x23);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00130347u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_00130347: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00130350: ;
    PUSH32(esp, 0x12);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00130359u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_00130359: ;
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
 * sub_00130370
 * Original: 0x00130370 - 0x0013040E (158 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130370(void)
{

loc_00130370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00130378u); RECOMP_ABI_CALL(0x0012EFE0u, sub_0012EFE0); /* call 0x0012EFE0 */

loc_00130378: ;
    ecx = esi + 0x84;
    MEM32(esi) = 0x31AED0;
    MEM32(esi + 0x70) = 0x31AEC4;
    MEM32(esi + 0x80) = 0;
    PUSH32(esp, 0x0013039Au); RECOMP_ABI_CALL(0x000B1A90u, sub_000B1A90); /* call 0x000B1A90 */

loc_0013039A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x31AEBC)); /* movss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x31AEC0)); /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376D20)); /* movss */
    ecx = esi + 0xB0;
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001303E5u); RECOMP_ABI_CALL(0x001911A0u, sub_001911A0); /* call 0x001911A0 */

loc_001303E5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x174) = 0;
    MEMF(esi + 0x180) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x184) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x188) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130410
 * Original: 0x00130410 - 0x00130430 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + 0x50);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x58);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130430
 * Original: 0x00130430 - 0x00130440 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130430: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001912D0(); return; /* tail jmp 0x001912D0 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00130440
 * Original: 0x00130440 - 0x00130454 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130440: ;
    eax = ZX16(MEM16(esp + 4));
    MEM32(esp + 4) = eax;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00191340(); return; /* tail jmp 0x00191340 */

}

/**
 * sub_00130460
 * Original: 0x00130460 - 0x00130474 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130460: ;
    eax = ZX16(MEM16(esp + 4));
    MEM32(esp + 4) = eax;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001913C0(); return; /* tail jmp 0x001913C0 */

}

/**
 * sub_00130480
 * Original: 0x00130480 - 0x00130495 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130480: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00130492u); RECOMP_ABI_CALL(0x00191950u, sub_00191950); /* call 0x00191950 */

loc_00130492: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001304A0
 * Original: 0x001304A0 - 0x001304A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001304A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001304A0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001304B0(); return; /* tail jmp 0x001304B0 */

}

/**
 * sub_001304B0
 * Original: 0x001304B0 - 0x001304FA (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001304B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001304B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x31AED0;
    MEM32(esi + 0x70) = 0x31AEC4;
    PUSH32(esp, 0x001304C6u); RECOMP_ABI_CALL(0x00131940u, sub_00131940); /* call 0x00131940 */

loc_001304C6: ;
    MEM32(esi) = 0x31AD08;
    MEM32(esi + 0x70) = 0x31AD00;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x70) = 0x300534;
    PUSH32(esp, 0x001304E4u); RECOMP_ABI_CALL(0x00130720u, sub_00130720); /* call 0x00130720 */

loc_001304E4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001304F4; /* je: equal / zero */

loc_001304EB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x001304F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001304F1u); } /* indirect call */
    }

loc_001304F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130500
 * Original: 0x00130500 - 0x00130512 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130500: ;
    MEM32(ecx) = 0x2FED00;
    MEM32(ecx + 8) = 0x307CBC;
    g_seh_ebp = ebp; sub_0012F740(); return; /* tail jmp 0x0012F740 */

}

/**
 * sub_00130520
 * Original: 0x00130520 - 0x00130543 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130520(void)
{

loc_00130520: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x30;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00130533u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00130533: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0013053Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00130538u); } /* indirect call */
    }

loc_0013053E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130550
 * Original: 0x00130550 - 0x00130551 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130550(void)
{

loc_00130550: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00130560
 * Original: 0x00130560 - 0x0013057B (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130560: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(0x3E8D50);
    MEM32(edx * 4 + 0x3E8CF8) = ecx;
    MEM32(0x3E8D50) = MEM32(0x3E8D50) + 1;
    _fa = (uint32_t)(MEM32(0x3E8D50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00130580
 * Original: 0x00130580 - 0x00130595 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130580: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3E8D18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3E8D18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130594; /* je: equal / zero */

loc_0013058F: ;
    MEM32(0x3E8D18) = eax;

loc_00130594: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001305A0
 * Original: 0x001305A0 - 0x001305AC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001305A0(void)
{

loc_001305A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x3E8D08);
    esp += 4; return; /* ret */

}

/**
 * sub_001305B0
 * Original: 0x001305B0 - 0x001305B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001305B0(void)
{

loc_001305B0: ;
    MEM8(0x3E8D4C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001305C0
 * Original: 0x001305C0 - 0x001305E7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001305C0(void)
{

loc_001305C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001305C6u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001305C6: ;
    ecx = eax;
    PUSH32(esp, 0x001305CDu); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001305CD: ;
    esi = eax;
    PUSH32(esp, 0x1000000);
    ecx = esi + 0x10;
    PUSH32(esp, 0x001305DCu); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_001305DC: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001305E5u); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_001305E5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001305F0
 * Original: 0x001305F0 - 0x00130617 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001305F0(void)
{

loc_001305F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001305F6u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001305F6: ;
    ecx = eax;
    PUSH32(esp, 0x001305FDu); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001305FD: ;
    esi = eax;
    PUSH32(esp, 0x1010101);
    ecx = esi + 0x10;
    PUSH32(esp, 0x0013060Cu); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_0013060C: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00130615u); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_00130615: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130620
 * Original: 0x00130620 - 0x00130647 (39 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130620: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0xE8) = 0x378A90;
    MEM32(eax + 0x100) = 0x3E8D58;
    MEM32(eax + 0x104) = 0x3E8D70;
    g_seh_ebp = ebp; sub_000BE9B0(); return; /* tail jmp 0x000BE9B0 */

}

/**
 * sub_00130650
 * Original: 0x00130650 - 0x0013065C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130650(void)
{

loc_00130650: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x3E8CF8);
    esp += 4; return; /* ret */

}

/**
 * sub_00130660
 * Original: 0x00130660 - 0x00130678 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130660: ;
    eax = MEM32(esp + 4);

loc_00130664: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8C40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8C40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130675; /* je: equal / zero */

loc_0013066B: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130664; /* jne: not equal / not zero */

loc_00130672: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00130675: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00130680
 * Original: 0x00130680 - 0x001306AB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130680: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3E8D2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3E8D2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001306A5; /* je: equal / zero */

loc_0013068C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3E8D30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3E8D30) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001306A5; /* je: equal / zero */

loc_00130694: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001306A5; /* jne: not equal / not zero */

loc_0013069B: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001306A5; /* jne: not equal / not zero */

loc_001306A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001306A5: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001306B0
 * Original: 0x001306B0 - 0x001306D0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001306B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001306B0: ;
    SET_LO8(eax, MEM8(0x3E8C30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001306CC; /* je: equal / zero */

loc_001306BC: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x001306C4u); RECOMP_ABI_CALL(0x00265550u, sub_00265550); /* call 0x00265550 */

loc_001306C4: ;
    ecx = esi + 0x70;
    PUSH32(esp, 0x001306CCu); RECOMP_ABI_CALL(0x00265550u, sub_00265550); /* call 0x00265550 */

loc_001306CC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001306D0
 * Original: 0x001306D0 - 0x001306D3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001306D0(void)
{

loc_001306D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001306E0
 * Original: 0x001306E0 - 0x00130714 (52 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001306E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001306E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001306E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001306E6u); } /* indirect call */
    }

loc_001306E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_001306F9; /* je: equal / zero */

loc_001306F1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001306F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001306F6u); } /* indirect call */
    }

loc_001306F9: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013070F; /* je: equal / zero */

loc_00130700: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00130708u); RECOMP_ABI_CALL(0x001306E0u, sub_001306E0); /* call 0x001306E0 */

loc_00130708: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130700; /* jne: not equal / not zero */

loc_0013070F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130720
 * Original: 0x00130720 - 0x00130727 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130720(void)
{

loc_00130720: ;
    MEM32(ecx) = 0x315788;
    esp += 4; return; /* ret */

}

/**
 * sub_00130730
 * Original: 0x00130730 - 0x00130762 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130730: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013073A; /* jne: not equal / not zero */

loc_00130734: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);

loc_0013073A: ;
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013074E; /* jne: not equal / not zero */

loc_00130741: ;
    MEM32(ecx + 0x24) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

loc_0013074E: ;
    MEM32(edx + 0x20) = ecx;
    MEM32(ecx + 0x24) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(ecx + 0x20) = 0;
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00130770
 * Original: 0x00130770 - 0x001307E0 (112 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130770: ;
    ecx = MEM32(ebx + 0x20);
    eax = MEM32(ebx + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130789; /* je: equal / zero */

loc_00130781: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130789; /* jne: not equal / not zero */

loc_00130786: ;
    MEM32(esi + 0x1C) = eax;

loc_00130789: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130790; /* je: equal / zero */

loc_0013078D: ;
    MEM32(ecx + 0x24) = eax;

loc_00130790: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130797; /* je: equal / zero */

loc_00130794: ;
    MEM32(eax + 0x20) = ecx;

loc_00130797: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001307D1; /* je: equal / zero */

loc_0013079E: ;
    PUSH32(esp, edi);
    /* nop */

loc_001307A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    edi = MEM32(eax + 0x24);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001307AF; /* jne: not equal / not zero */

loc_001307A9: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);

loc_001307AF: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001307BB; /* jne: not equal / not zero */

loc_001307B6: ;
    MEM32(eax + 0x24) = ebp;
    goto loc_001307C1;

loc_001307BB: ;
    MEM32(edx + 0x20) = eax;
    MEM32(eax + 0x24) = edx;

loc_001307C1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(ecx + 0x1C) = eax;
    MEM32(eax + 0x20) = ebp;
    MEM32(eax + 0x18) = ecx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001307A0; /* jne: not equal / not zero */

loc_001307D0: ;
    POP32(esp, edi);

loc_001307D1: ;
    POP32(esp, esi);
    MEM32(ebx + 0x18) = ebp;
    MEM32(ebx + 0x20) = ebp;
    MEM32(ebx + 0x24) = ebp;
    MEM32(ebx + 0x1C) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00130830
 * Original: 0x00130830 - 0x0013087E (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130830: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0013085D; /* je: equal / zero */

loc_00130839: ;
    edi = MEM32(ecx + 0xB4);
    MEM32(ecx + 0xB4) = eax;
    MEM32(edi + 0xB0) = eax;
    MEM32(eax + 0xB4) = edi;
    MEM32(eax + 0xB0) = ecx;
    MEM32(esi) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0013085D: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130869; /* je: equal / zero */

loc_00130863: ;
    MEM32(ecx + 0xB4) = eax;

loc_00130869: ;
    ecx = MEM32(esi);
    MEM32(eax + 0xB0) = ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130878; /* jne: not equal / not zero */

loc_00130876: ;
    MEM32(edi) = eax;

loc_00130878: ;
    MEM32(esi) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130880
 * Original: 0x00130880 - 0x001308D5 (85 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130880: ;
    ecx = MEM32(edi);
    edx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130893; /* je: equal / zero */

loc_00130890: ;
    MEM32(ecx + 0x20) = edx;

loc_00130893: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013089C; /* je: equal / zero */

loc_00130897: ;
    MEM32(edx + 0x24) = ecx;
    goto loc_001308A6;

loc_0013089C: ;
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001308A6; /* je: equal / zero */

loc_001308A3: ;
    MEM32(edx + 0x1C) = ecx;

loc_001308A6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001308BC; /* jne: not equal / not zero */

loc_001308AA: ;
    MEM32(eax + 0x24) = esi;
    edx = MEM32(edi);
    MEM32(edx + 0x1C) = eax;
    MEM32(eax + 0x20) = esi;
    ecx = MEM32(edi);
    MEM32(eax + 0x18) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001308BC: ;
    MEM32(esi + 0x20) = eax;
    MEM32(eax + 0x24) = esi;
    edx = MEM32(edi);
    MEM32(edx + 0x1C) = eax;
    MEM32(eax + 0x20) = 0;
    ecx = MEM32(edi);
    MEM32(eax + 0x18) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001308E0
 * Original: 0x001308E0 - 0x00130919 (57 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001308E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001308E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_001308FE; /* je: equal / zero */

loc_001308E9: ;
    edi = MEM32(ecx + 0x10);
    MEM32(ecx + 0x10) = eax;
    MEM32(edi + 0x14) = eax;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = ecx;
    MEM32(esi) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001308FE: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130907; /* je: equal / zero */

loc_00130904: ;
    MEM32(ecx + 0x10) = eax;

loc_00130907: ;
    ecx = MEM32(esi);
    MEM32(eax + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130913; /* jne: not equal / not zero */

loc_00130911: ;
    MEM32(edi) = eax;

loc_00130913: ;
    MEM32(esi) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130920
 * Original: 0x00130920 - 0x00130964 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130920: ;
    edx = MEM32(eax + 0xB4);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    ecx = MEM32(eax + 0xB0);
    if (CMP_NE(_fa, _fb)) goto loc_00130935; /* jne: not equal / not zero */

loc_00130933: ;
    MEM32(esi) = edx;

loc_00130935: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013093B; /* jne: not equal / not zero */

loc_00130939: ;
    MEM32(edi) = ecx;

loc_0013093B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130947; /* je: equal / zero */

loc_00130941: ;
    MEM32(ecx + 0xB4) = edx;

loc_00130947: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130951; /* je: equal / zero */

loc_0013094B: ;
    MEM32(edx + 0xB0) = ecx;

loc_00130951: ;
    MEM32(eax + 0xB0) = esi;
    MEM32(eax + 0xB4) = esi;
    eax = MEM32(ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00130970
 * Original: 0x00130970 - 0x001309B4 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130970: ;
    edx = MEM32(eax + 0xB4);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    ecx = MEM32(eax + 0xB0);
    if (CMP_NE(_fa, _fb)) goto loc_00130985; /* jne: not equal / not zero */

loc_00130983: ;
    MEM32(esi) = edx;

loc_00130985: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013098B; /* jne: not equal / not zero */

loc_00130989: ;
    MEM32(edi) = ecx;

loc_0013098B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130997; /* je: equal / zero */

loc_00130991: ;
    MEM32(ecx + 0xB4) = edx;

loc_00130997: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001309A1; /* je: equal / zero */

loc_0013099B: ;
    MEM32(edx + 0xB0) = ecx;

loc_001309A1: ;
    MEM32(eax + 0xB0) = esi;
    MEM32(eax + 0xB4) = esi;
    eax = MEM32(ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001309C0
 * Original: 0x001309C0 - 0x001309F2 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001309C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001309C0: ;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    ecx = MEM32(eax + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_001309CF; /* jne: not equal / not zero */

loc_001309CD: ;
    MEM32(esi) = edx;

loc_001309CF: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001309D5; /* jne: not equal / not zero */

loc_001309D3: ;
    MEM32(edi) = ecx;

loc_001309D5: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001309DE; /* je: equal / zero */

loc_001309DB: ;
    MEM32(ecx + 0x10) = edx;

loc_001309DE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001309E5; /* je: equal / zero */

loc_001309E2: ;
    MEM32(edx + 0x14) = ecx;

loc_001309E5: ;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x10) = esi;
    eax = MEM32(ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00130A00
 * Original: 0x00130A00 - 0x00130A62 (98 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130A00: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ecx + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_00130A13; /* je: equal / zero */

loc_00130A0E: ;
    edx = eax + -48;
    goto loc_00130A15;

loc_00130A13: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00130A15: ;
    PUSH32(esp, edi);
    edi = MEM32(0x3E8D54);
    MEM32(edi * 4 + 0x3E8D08) = edx;
    edi = MEM32(0x3E8D54);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) ecx = MEM32(0x3E8CF0); /* cmove */
    MEM32(0x3E8D54) = edi;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00130A4E; /* jne: not equal / not zero */

loc_00130A41: ;
    MEM32(eax + 0x24) = edx;
    MEM32(ecx + 0x1C) = eax;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

loc_00130A4E: ;
    MEM32(edx + 0x20) = eax;
    MEM32(eax + 0x24) = edx;
    MEM32(ecx + 0x1C) = eax;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00130A70
 * Original: 0x00130A70 - 0x00130AD0 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130A70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x3E8CF4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_00130ACC; /* je: equal / zero */

loc_00130A87: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130A98; /* je: equal / zero */

loc_00130A8B: ;
    PUSH32(esp, 0x3E8CF0);
    PUSH32(esp, 0x00130A95u); RECOMP_ABI_CALL(0x00130770u, sub_00130770); /* call 0x00130770 */

loc_00130A95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00130A98: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130AC6; /* je: equal / zero */

loc_00130A9C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) eax = MEM32(0x3E8CF0); /* cmove */
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130AB3; /* jne: not equal / not zero */

loc_00130AAE: ;
    MEM32(esi + 0x24) = ecx;
    goto loc_00130AB9;

loc_00130AB3: ;
    MEM32(ecx + 0x20) = esi;
    MEM32(esi + 0x24) = ecx;

loc_00130AB9: ;
    MEM32(eax + 0x1C) = esi;
    MEM32(esi + 0x20) = 0;
    MEM32(esi + 0x18) = eax;

loc_00130AC6: ;
    MEM32(0x3E8CF4) = esi;

loc_00130ACC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00130AD0
 * Original: 0x00130AD0 - 0x00130B98 (200 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130AD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = MEM32(0x3E8CF0); /* cmove */
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00130AF1; /* jne: not equal / not zero */

loc_00130AEC: ;
    MEM32(esi + 0x24) = ecx;
    goto loc_00130AF7;

loc_00130AF1: ;
    MEM32(ecx + 0x20) = esi;
    MEM32(esi + 0x24) = ecx;

loc_00130AF7: ;
    MEM32(eax + 0x1C) = esi;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x20) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x00130B0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00130B08u); } /* indirect call */
    }

loc_00130B0E: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00130B1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00130B14u); } /* indirect call */
    }

loc_00130B1A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130B5B; /* je: equal / zero */

loc_00130B1E: ;
    eax = MEM32(0x3E8D20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130B32; /* je: equal / zero */

loc_00130B27: ;
    MEM32(eax + 0xB4) = edi;
    eax = MEM32(0x3E8D20);

loc_00130B32: ;
    MEM32(edi + 0xB0) = eax;
    eax = MEM32(0x3E8D1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130B47; /* jne: not equal / not zero */

loc_00130B41: ;
    MEM32(0x3E8D1C) = edi;

loc_00130B47: ;
    eax = MEM32(0x3E8D40);
    MEM32(0x3E8D20) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x3E8D40) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00130B5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130B95; /* je: equal / zero */

loc_00130B5F: ;
    ecx = MEM32(0x3E8D28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130B75; /* je: equal / zero */

loc_00130B69: ;
    MEM32(ecx + 0xB4) = eax;
    ecx = MEM32(0x3E8D28);

loc_00130B75: ;
    MEM32(eax + 0xB0) = ecx;
    ecx = MEM32(0x3E8D24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130B8A; /* jne: not equal / not zero */

loc_00130B85: ;
    MEM32(0x3E8D24) = eax;

loc_00130B8A: ;
    MEM32(0x3E8D28) = eax;
    MEM32(0x3E8D44) = MEM32(0x3E8D44) + 1;
    _fa = (uint32_t)(MEM32(0x3E8D44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00130B95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130BA0
 * Original: 0x00130BA0 - 0x00130C1A (122 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130BA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x40);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00130BC2; /* je: equal / zero */

loc_00130BBC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00130BC2u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00130BC2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00130BD3; /* je: equal / zero */

loc_00130BC9: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00130BD1u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_00130BD1: ;
    goto loc_00130BDD;

loc_00130BD3: ;
    ebx = MEM32(0x3E8CF0);
    MEM32(esp + 0x14) = ebx;

loc_00130BDD: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130BED; /* je: equal / zero */

loc_00130BE2: ;
    edi = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0x00130BEDu); RECOMP_ABI_CALL(0x00130880u, sub_00130880); /* call 0x00130880 */

loc_00130BED: ;
    eax = ZX8(MEM8(ebp + 0x4C));
    edx = MEM32(esi);
    MEM32(esi + 0x2C) = eax;
    eax = ZX8(MEM8(ebp + 0x4D));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    if ((_fa == 0)) goto loc_00130C0E; /* je: equal / zero */

loc_00130BFF: ;
    eax = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00130C09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00130C03u); } /* indirect call */
    }

loc_00130C09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00130C0E: ;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00130C15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00130C0Fu); } /* indirect call */
    }

loc_00130C15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00130C20
 * Original: 0x00130C20 - 0x00130C57 (55 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130C20: ;
    ecx = MEM32(0x3E8D30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00130C39; /* je: equal / zero */

loc_00130C30: ;
    MEM32(ecx + 0x10) = eax;
    ecx = MEM32(0x3E8D30);

loc_00130C39: ;
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(0x3E8D2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x3E8D30) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00130C50; /* jne: not equal / not zero */

loc_00130C4B: ;
    MEM32(0x3E8D2C) = eax;

loc_00130C50: ;
    MEM32(0x3E8D48) = MEM32(0x3E8D48) + 1;
    _fa = (uint32_t)(MEM32(0x3E8D48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00130C60
 * Original: 0x00130C60 - 0x00130CDF (127 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130C60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x40);
    eax = ebx;
    /* nop */

loc_00130C70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8C40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8C40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130C80; /* je: equal / zero */

loc_00130C77: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130C70; /* jne: not equal / not zero */

loc_00130C7E: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00130C80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E8CF0);
    PUSH32(esp, 0x00130C8Cu); RECOMP_ABI_CALL(0x00130770u, sub_00130770); /* call 0x00130770 */

loc_00130C8C: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x00130C99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00130C93u); } /* indirect call */
    }

loc_00130C99: ;
    esi = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x00130CA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00130C9Fu); } /* indirect call */
    }

loc_00130CA5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130CC3; /* je: equal / zero */

loc_00130CA9: ;
    ebx = 0x3E8D40;
    edi = 0x3E8D20;
    ecx = 0x3E8D1C;
    eax = esi;
    PUSH32(esp, 0x00130CBFu); RECOMP_ABI_CALL(0x00130920u, sub_00130920); /* call 0x00130920 */

loc_00130CBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00130CC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130CDB; /* je: equal / zero */

loc_00130CC7: ;
    ebx = 0x3E8D44;
    edi = 0x3E8D28;
    ecx = 0x3E8D24;
    PUSH32(esp, 0x00130CDBu); RECOMP_ABI_CALL(0x00130970u, sub_00130970); /* call 0x00130970 */

loc_00130CDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00130CE0
 * Original: 0x00130CE0 - 0x00130D49 (105 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130CE0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(0x3E8D2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x3E8D30);
    if (CMP_EQ(_fa, _fb)) goto loc_00130D0A; /* je: equal / zero */

loc_00130CF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130D0A; /* je: equal / zero */

loc_00130CFC: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130D0A; /* jne: not equal / not zero */

loc_00130D03: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130D46; /* je: equal / zero */

loc_00130D0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00130D1A; /* jne: not equal / not zero */

loc_00130D14: ;
    MEM32(0x3E8D2C) = edx;

loc_00130D1A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130D24; /* jne: not equal / not zero */

loc_00130D1E: ;
    MEM32(0x3E8D30) = ecx;

loc_00130D24: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130D2B; /* je: equal / zero */

loc_00130D28: ;
    MEM32(ecx + 0x10) = edx;

loc_00130D2B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130D32; /* je: equal / zero */

loc_00130D2F: ;
    MEM32(edx + 0x14) = ecx;

loc_00130D32: ;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    MEM32(0x3E8D48) = MEM32(0x3E8D48) - 1;
    _fa = (uint32_t)(MEM32(0x3E8D48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00130D46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130D50
 * Original: 0x00130D50 - 0x00130F5D (525 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00130D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x3E8D54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130D71; /* jne: not equal / not zero */

loc_00130D65: ;
    eax = MEM32(0x3E8D08);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00130D71: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    esi = 0x3E8D08;
    if (CMP_L(_fas, _fbs)) goto loc_00130EF1; /* jl: less (signed <) */

loc_00130D89: ;
    ebx = edi + -4;
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ebx * 4;
    MEM32(esp + 0xC) = edx;
    goto loc_00130DA0;

    /* nop */

loc_00130DA0: ;
    edx = MEM32(esi);
    xmm2 = XMM_SCALAR(MEMF(edx + 0x94)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x98)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 8); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00130DEB; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00130DE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130DF0; /* jne: not equal / not zero */

loc_00130DEB: ;
    xmm0 = xmm1; /* movaps */
    eax = edx;

loc_00130DF0: ;
    edx = MEM32(esi + 4);
    xmm2 = XMM_SCALAR(MEMF(edx + 0x94)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x98)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 8); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00130E3C; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00130E38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130E41; /* jne: not equal / not zero */

loc_00130E3C: ;
    xmm0 = xmm1; /* movaps */
    eax = edx;

loc_00130E41: ;
    edx = MEM32(esi + 8);
    xmm2 = XMM_SCALAR(MEMF(edx + 0x94)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x98)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 8); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00130E8D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00130E89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130E92; /* jne: not equal / not zero */

loc_00130E8D: ;
    xmm0 = xmm1; /* movaps */
    eax = edx;

loc_00130E92: ;
    edx = MEM32(esi + 0xC);
    xmm2 = XMM_SCALAR(MEMF(edx + 0x94)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x98)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 8); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00130EDE; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00130EDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130EE3; /* jne: not equal / not zero */

loc_00130EDE: ;
    xmm0 = xmm1; /* movaps */
    eax = edx;

loc_00130EE3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00130DA0; /* jne: not equal / not zero */

loc_00130EED: ;
    edx = MEM32(esp + 0xC);

loc_00130EF1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00130F56; /* jge: greater or equal (signed >=) */

loc_00130EF5: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00130F00;

    /* nop */

loc_00130F00: ;
    edx = MEM32(esi);
    xmm2 = XMM_SCALAR(MEMF(edx + 0x94)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x98)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 8); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00130F4B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00130F47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130F50; /* jne: not equal / not zero */

loc_00130F4B: ;
    xmm0 = xmm1; /* movaps */
    eax = edx;

loc_00130F50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00130F00; /* jne: not equal / not zero */

loc_00130F56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00130F60
 * Original: 0x00130F60 - 0x00130F93 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130F60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x3E8D88);
    esi = 0x3E8D90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(0x3E8D4C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00130F90; /* je: equal / zero */

loc_00130F78: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x00130F7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00130F79u); } /* indirect call */
    }

loc_00130F7C: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130F78; /* jne: not equal / not zero */

loc_00130F86: ;
    MEM32(0x3E8D88) = 0x3E8D90;

loc_00130F90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130FA0
 * Original: 0x00130FA0 - 0x00131266 (710 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130FA0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    MEM32(esi + 0xE8) = eax;
    ebp = 0x3E8D58;
    MEM32(esi + 0x100) = ebp;
    edi = 0x3E8D70;
    MEM32(esi + 0x104) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(0x3E8D60) = ebx;
    MEM32(0x3E8D78) = ebx;
    PUSH32(esp, 0x00130FDFu); RECOMP_ABI_CALL(0x000F1910u, sub_000F1910); /* call 0x000F1910 */

loc_00130FDF: ;
    ecx = eax;
    PUSH32(esp, 0x00130FE6u); RECOMP_ABI_CALL(0x000F20C0u, sub_000F20C0); /* call 0x000F20C0 */

loc_00130FE6: ;
    MEM32(esi + 0xE8) = 0x378A90;
    MEM32(esi + 0x100) = ebp;
    MEM32(esi + 0x104) = edi;
    PUSH32(esp, 0x00131001u); RECOMP_ABI_CALL(0x000BE9B0u, sub_000BE9B0); /* call 0x000BE9B0 */

loc_00131001: ;
    edi = MEM32(0x3E8D1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013103A; /* je: equal / zero */

loc_0013100B: ;
    goto loc_00131010;

    /* nop */

loc_00131010: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00131018u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131015u); } /* indirect call */
    }

loc_00131018: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131030; /* je: equal / zero */

loc_0013101C: ;
    eax = MEM32(0x3E8D60);
    ecx = MEM32(0x3E8D58);
    MEM32(ecx + eax * 4) = edi;
    MEM32(0x3E8D60) = MEM32(0x3E8D60) + 1;
    _fa = (uint32_t)(MEM32(0x3E8D60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00131030: ;
    edi = MEM32(edi + 0xB4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131010; /* jne: not equal / not zero */

loc_0013103A: ;
    edi = MEM32(0x3E8D24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131074; /* je: equal / zero */

loc_00131044: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(edi + 0x270) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00131052u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013104Fu); } /* indirect call */
    }

loc_00131052: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013106A; /* je: equal / zero */

loc_00131056: ;
    eax = MEM32(0x3E8D78);
    ecx = MEM32(0x3E8D70);
    MEM32(ecx + eax * 4) = edi;
    MEM32(0x3E8D78) = MEM32(0x3E8D78) + 1;
    _fa = (uint32_t)(MEM32(0x3E8D78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013106A: ;
    edi = MEM32(edi + 0xB4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131044; /* jne: not equal / not zero */

loc_00131074: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(0x3E8D4C) = 1;
    PUSH32(esp, 0x00131083u); RECOMP_ABI_CALL(0x0018D280u, sub_0018D280); /* call 0x0018D280 */

loc_00131083: ;
    eax = MEM32(esi + 0x85C);
    MEM32(eax + 0x1B0) = 0x1305C0;
    MEM32(eax + 0x1B8) = ebx;
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1B0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x85C);
    MEM32(eax + 0x1BC) = ebx;
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1B0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x1305F0;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0x85C);
    MEM32(eax + 0x1A0) = 0x1305C0;
    MEM32(eax + 0x1A8) = ebx;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x85C);
    MEM32(eax + 0x1A4) = ecx;
    MEM32(eax + 0x1AC) = ebx;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x85C);
    MEM32(eax + 0x220) = 0xF4570;
    MEM32(eax + 0x228) = ebx;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x220;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x85C);
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x220;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = 0xF4650;
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(esi + 0x85C);
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x230;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 0xF46F0;
    MEM32(eax + 8) = ebx;
    eax = MEM32(esi + 0x85C);
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x230;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = 0xF4790;
    MEM32(eax + 0xC) = ebx;
    ecx = MEM32(0x3E8D18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131155; /* je: equal / zero */

loc_0013114C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x00131155u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013114Fu); } /* indirect call */
    }

loc_00131155: ;
    PUSH32(esp, 0x0013115Au); RECOMP_ABI_CALL(0x0012F7B0u, sub_0012F7B0); /* call 0x0012F7B0 */

loc_0013115A: ;
    edi = MEM32(eax + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00131169u); RECOMP_ABI_CALL(0x000EF040u, sub_000EF040); /* call 0x000EF040 */

loc_00131169: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001311A1; /* jle: less or equal (signed <=) */

loc_0013116F: ;
    edx = MEM32(esp + 0x10);

loc_00131173: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131195; /* je: equal / zero */

loc_00131178: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131183; /* je: equal / zero */

loc_0013117E: ;
    ecx = eax + -112;
    goto loc_00131185;

loc_00131183: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00131185: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x6D), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131194; /* je: equal / zero */

loc_0013118A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00131190u); RECOMP_ABI_CALL(0x00130010u, sub_00130010); /* call 0x00130010 */

loc_00131190: ;
    edx = MEM32(esp + 0x10);

loc_00131194: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00131195: ;
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00131173; /* jl: less (signed <) */

loc_001311A1: ;
    PUSH32(esp, 0x001311A6u); RECOMP_ABI_CALL(0x0012F7C0u, sub_0012F7C0); /* call 0x0012F7C0 */

loc_001311A6: ;
    edi = MEM32(eax + 8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001311B5u); RECOMP_ABI_CALL(0x000EF040u, sub_000EF040); /* call 0x000EF040 */

loc_001311B5: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001311EE; /* jle: less or equal (signed <=) */

loc_001311BB: ;
    edx = MEM32(esp + 0x10);
    /* nop */

loc_001311C0: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001311E2; /* je: equal / zero */

loc_001311C5: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001311D0; /* je: equal / zero */

loc_001311CB: ;
    ecx = eax + -112;
    goto loc_001311D2;

loc_001311D0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001311D2: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x6D), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001311E1; /* je: equal / zero */

loc_001311D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001311DDu); RECOMP_ABI_CALL(0x001346C0u, sub_001346C0); /* call 0x001346C0 */

loc_001311DD: ;
    edx = MEM32(esp + 0x10);

loc_001311E1: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001311E2: ;
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001311C0; /* jl: less (signed <) */

loc_001311EE: ;
    edi = MEM32(0x3E8D2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131214; /* je: equal / zero */

loc_001311FD: ;
    /* nop */

loc_00131200: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00131208u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131205u); } /* indirect call */
    }

loc_00131208: ;
    edi = MEM32(edi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131200; /* jne: not equal / not zero */

loc_00131214: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013121Au); RECOMP_ABI_CALL(0x000BEAD0u, sub_000BEAD0); /* call 0x000BEAD0 */

loc_0013121A: ;
    ecx = MEM32(0x3E8CF4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00131229u); RECOMP_ABI_CALL(0x00109F80u, sub_00109F80); /* call 0x00109F80 */

loc_00131229: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00131231u); RECOMP_ABI_CALL(0x0018D6B0u, sub_0018D6B0); /* call 0x0018D6B0 */

loc_00131231: ;
    edi = MEM32(0x3E8D88);
    esi = 0x3E8D90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(0x3E8D4C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0013125E; /* je: equal / zero */

loc_00131246: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x0013124Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131247u); } /* indirect call */
    }

loc_0013124A: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131246; /* jne: not equal / not zero */

loc_00131254: ;
    MEM32(0x3E8D88) = 0x3E8D90;

loc_0013125E: ;
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
 * sub_00131270
 * Original: 0x00131270 - 0x001312D2 (98 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131270: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;

loc_00131277: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8C40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8C40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001312B7; /* je: equal / zero */

loc_0013127E: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131277; /* jne: not equal / not zero */

loc_00131285: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00131287: ;
    edx = MEM32(0x3E8D88);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8D90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3E8D90 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001312D0; /* je: equal / zero */

loc_00131295: ;
    ecx = 0x3E8DD8;
    PUSH32(esp, edi);
    goto loc_001312A0;

    /* nop */

loc_001312A0: ;
    _fa = (uint32_t)(MEM32(ecx + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001312C5; /* jne: not equal / not zero */

loc_001312A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001312BB; /* je: equal / zero */

loc_001312AB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x130C60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x130C60 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001312C5; /* jne: not equal / not zero */

loc_001312B3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001312C5;

loc_001312B7: ;
    SET_LO8(eax, 1);
    goto loc_00131287;

loc_001312BB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x130AD0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x130AD0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001312C5; /* jne: not equal / not zero */

loc_001312C3: ;
    SET_LO8(eax, 1);

loc_001312C5: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + -72;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001312A0; /* jne: not equal / not zero */

loc_001312CF: ;
    POP32(esp, edi);

loc_001312D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001312E0
 * Original: 0x001312E0 - 0x00131313 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001312E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001312E0: ;
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
    ecx = MEM32(ebp + 8);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001312FDu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_001312FD: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0013130Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131306u); } /* indirect call */
    }

loc_0013130C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131320
 * Original: 0x00131320 - 0x00131353 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013133Du); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0013133D: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0013134Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131346u); } /* indirect call */
    }

loc_0013134C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131360
 * Original: 0x00131360 - 0x00131380 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + 0x30);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x38);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131380
 * Original: 0x00131380 - 0x001313A0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + 0x40);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x48);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001313A0
 * Original: 0x001313A0 - 0x001313C0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001313A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001313A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + 0x50);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x58);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001313C0
 * Original: 0x001313C0 - 0x001313F4 (52 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001313C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001313C0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001313F0; /* jne: not equal / not zero */

loc_001313CC: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001313F0; /* jne: not equal / not zero */

loc_001313D3: ;
    edx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001313F0; /* je: equal / zero */

loc_001313DA: ;
    edx = esi;
    /* nop */

loc_001313E0: ;
    edx = MEM32(edx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001313F0; /* je: equal / zero */

loc_001313E7: ;
    ecx = MEM32(edx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001313E0; /* je: equal / zero */

loc_001313EE: ;
    edx = ecx;

loc_001313F0: ;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131400
 * Original: 0x00131400 - 0x00131496 (150 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00131400: ;
    eax = MEM32(0x3E8D88);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(eax + 0x40) = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x44) = 0x3E8C40;
    MEM32(eax + 0x48) = 0x130A00;
    MEM8(eax + 0x4C) = LO8(ecx);
    MEM8(eax + 0x4D) = LO8(ecx);
    _fa = (uint32_t)(MEM8(0x3E8D4C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3E8D4C), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013148D; /* je: equal / zero */

loc_00131484: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3E8D88) = eax;
    esp += 4; return; /* ret */

loc_0013148D: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00130A00(); return; /* tail jmp 0x00130A00 */

}

/**
 * sub_001314A0
 * Original: 0x001314A0 - 0x00131536 (150 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001314A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001314A0: ;
    eax = MEM32(0x3E8D88);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(eax + 0x40) = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x44) = 0x3E8C40;
    MEM32(eax + 0x48) = 0x130A70;
    MEM8(eax + 0x4C) = LO8(ecx);
    MEM8(eax + 0x4D) = LO8(ecx);
    _fa = (uint32_t)(MEM8(0x3E8D4C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3E8D4C), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013152D; /* je: equal / zero */

loc_00131524: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3E8D88) = eax;
    esp += 4; return; /* ret */

loc_0013152D: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00130A70(); return; /* tail jmp 0x00130A70 */

}

/**
 * sub_00131540
 * Original: 0x00131540 - 0x001315CD (141 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131540: ;
    eax = MEM32(0x3E8D88);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(eax + 0x40) = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x44) = 0x3E8C40;
    MEM32(eax + 0x48) = 0x130550;
    MEM8(eax + 0x4C) = LO8(ecx);
    MEM8(eax + 0x4D) = LO8(ecx);
    _fa = (uint32_t)(MEM8(0x3E8D4C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3E8D4C), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001315CC; /* je: equal / zero */

loc_001315C4: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3E8D88) = eax;

loc_001315CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001315D0
 * Original: 0x001315D0 - 0x00131670 (160 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001315D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001315D0: ;
    eax = MEM32(0x3E8D88);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esp + 4);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = 0x3E8C40;
    MEM32(eax + 0x48) = 0x130560;
    MEM8(eax + 0x4C) = LO8(edx);
    MEM8(eax + 0x4D) = LO8(edx);
    _fa = (uint32_t)(MEM8(0x3E8D4C)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3E8D4C), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013165D; /* je: equal / zero */

loc_00131654: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3E8D88) = eax;
    esp += 4; return; /* ret */

loc_0013165D: ;
    eax = MEM32(0x3E8D50);
    MEM32(eax * 4 + 0x3E8CF8) = ecx;
    MEM32(0x3E8D50) = MEM32(0x3E8D50) + 1;
    _fa = (uint32_t)(MEM32(0x3E8D50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00131670
 * Original: 0x00131670 - 0x0013170C (156 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131670: ;
    eax = MEM32(0x3E8D88);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esp + 4);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = 0x3E8C40;
    MEM32(eax + 0x48) = 0x130580;
    MEM8(eax + 0x4C) = LO8(edx);
    MEM8(eax + 0x4D) = LO8(edx);
    _fa = (uint32_t)(MEM8(0x3E8D4C)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3E8D4C), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001316FD; /* je: equal / zero */

loc_001316F4: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3E8D88) = eax;
    esp += 4; return; /* ret */

loc_001316FD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3E8D18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x3E8D18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013170B; /* je: equal / zero */

loc_00131705: ;
    MEM32(0x3E8D18) = ecx;

loc_0013170B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00131710
 * Original: 0x00131710 - 0x001317B1 (161 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131710: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3E8CF0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x3E8CF0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001317B0; /* je: equal / zero */

loc_00131720: ;
    eax = MEM32(0x3E8D88);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x44) = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x48) = 0x130AD0;
    MEM8(eax + 0x4C) = LO8(ecx);
    MEM8(eax + 0x4D) = LO8(ecx);
    _fa = (uint32_t)(MEM8(0x3E8D4C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3E8D4C), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001317A9; /* je: equal / zero */

loc_001317A0: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3E8D88) = eax;
    esp += 4; return; /* ret */

loc_001317A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001317AFu); RECOMP_ABI_CALL(0x00130AD0u, sub_00130AD0); /* call 0x00130AD0 */

loc_001317AF: ;
    POP32(esp, ecx);

loc_001317B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001317C0
 * Original: 0x001317C0 - 0x00131815 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001317C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001317C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0x6D) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001317D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001317CDu); } /* indirect call */
    }

loc_001317D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131813; /* jne: not equal / not zero */

loc_001317D4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001317DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001317D8u); } /* indirect call */
    }

loc_001317DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131813; /* jne: not equal / not zero */

loc_001317DF: ;
    eax = MEM32(0x3E8D30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001317F0; /* je: equal / zero */

loc_001317E8: ;
    MEM32(eax + 0x10) = esi;
    eax = MEM32(0x3E8D30);

loc_001317F0: ;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(0x3E8D2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131802; /* jne: not equal / not zero */

loc_001317FC: ;
    MEM32(0x3E8D2C) = esi;

loc_00131802: ;
    eax = MEM32(0x3E8D48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3E8D30) = esi;
    MEM32(0x3E8D48) = eax;

loc_00131813: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131820
 * Original: 0x00131820 - 0x0013188E (110 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x3E8D88);
    ecx = MEM32(ebp + 0x18);
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    edx = MEM32(ebp + 0xC);
    XMM_STORE(eax, xmm1); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x40) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x10));
    MEM32(eax + 0x44) = edx;
    SET_LO8(edx, MEM8(ebp + 0x14));
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    MEM32(eax + 0x48) = 0x130BA0;
    MEM8(eax + 0x4C) = LO8(ecx);
    MEM8(eax + 0x4D) = LO8(edx);
    SET_LO8(ecx, MEM8(0x3E8D4C));
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131881; /* je: equal / zero */

loc_00131875: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3E8D88) = eax;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00131881: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00131887u); RECOMP_ABI_CALL(0x00130BA0u, sub_00130BA0); /* call 0x00130BA0 */

loc_00131887: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00131890
 * Original: 0x00131890 - 0x00131932 (162 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00131890: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3E8CF0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x3E8CF0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131928; /* je: equal / zero */

loc_001318A0: ;
    eax = MEM32(0x3E8D88);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(eax + 0x40) = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x44) = 0x3E8C40;
    MEM32(eax + 0x48) = 0x130C60;
    MEM8(eax + 0x4C) = LO8(ecx);
    MEM8(eax + 0x4D) = LO8(ecx);
    _fa = (uint32_t)(MEM8(0x3E8D4C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3E8D4C), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131929; /* je: equal / zero */

loc_00131920: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3E8D88) = eax;

loc_00131928: ;
    esp += 4; return; /* ret */

loc_00131929: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00130C60(); return; /* tail jmp 0x00130C60 */

}

/**
 * sub_00131940
 * Original: 0x00131940 - 0x00131980 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131940: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0x6D) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00131953u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131950u); } /* indirect call */
    }

loc_00131953: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013197B; /* jne: not equal / not zero */

loc_00131957: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0013195Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013195Bu); } /* indirect call */
    }

loc_0013195E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013197B; /* jne: not equal / not zero */

loc_00131962: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = 1;
    PUSH32(esp, 0x00131978u); RECOMP_ABI_CALL(0x00130CE0u, sub_00130CE0); /* call 0x00130CE0 */

loc_00131978: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013197B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00131980
 * Original: 0x00131980 - 0x001319DD (93 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131980: ;
    PUSH32(esp, esi);
    esi = MEM32(0x3E8CF0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001319D3; /* je: equal / zero */

loc_00131991: ;
    edi = MEM32(esp + 0xC);

loc_00131995: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013199Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013199Au); } /* indirect call */
    }

loc_0013199D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001319D8; /* jne: not equal / not zero */

loc_001319A1: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001319C8; /* jne: not equal / not zero */

loc_001319A8: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001319C8; /* jne: not equal / not zero */

loc_001319AF: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001319C8; /* je: equal / zero */

loc_001319B6: ;
    eax = esi;

loc_001319B8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001319C8; /* je: equal / zero */

loc_001319BF: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001319B8; /* je: equal / zero */

loc_001319C6: ;
    eax = ecx;

loc_001319C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131995; /* jne: not equal / not zero */

loc_001319D3: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001319D8: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001319E0
 * Original: 0x001319E0 - 0x00131B1B (315 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001319E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001319E0: ;
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
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131B14; /* je: equal / zero */

loc_001319FD: ;
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00131A0Bu); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_00131A0B: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131B14; /* je: equal / zero */

loc_00131A17: ;
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00131A20u); RECOMP_ABI_CALL(0x0017F670u, sub_0017F670); /* call 0x0017F670 */

loc_00131A20: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx);
    eax = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131A36; /* je: equal / zero */

loc_00131A2E: ;
    edx = MEM32(eax);
    MEM32(esp + 0x30) = edx;
    goto loc_00131A3A;

loc_00131A36: ;
    MEM32(esp + 0x30) = ecx;

loc_00131A3A: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    edx = MEM32(esp + 0x34);
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esp + 0x2C) = LO8(eax);
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(ebp + 8);
    eax = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEM32(esp + 0x20) = ebx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_00131A76; /* jge: greater or equal (signed >=) */

loc_00131A72: ;
    MEM32(esp + 0x34) = eax;

loc_00131A76: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, 3);
    eax = esp + 0x1C;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x6C) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00131AD8u); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_00131AD8: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131AEA; /* je: equal / zero */

loc_00131ADE: ;
    ecx = MEM32(esi + 0x10);
    edx = eax + ecx * 8;
    MEM32(esp + 0x64) = edx;
    goto loc_00131AF1;

loc_00131AEA: ;
    eax = MEM32(esi + 0x10);
    MEM32(esp + 0x64) = eax;

loc_00131AF1: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00131AFFu); RECOMP_ABI_CALL(0x0017F760u, sub_0017F760); /* call 0x0017F760 */

loc_00131AFF: ;
    edx = MEM32(ebx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00131B0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131B08u); } /* indirect call */
    }

loc_00131B0B: ;
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00131B14u); RECOMP_ABI_CALL(0x0017F6C0u, sub_0017F6C0); /* call 0x0017F6C0 */

loc_00131B14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00131B20
 * Original: 0x00131B20 - 0x00131B3C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131B20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131B3A; /* je: equal / zero */

loc_00131B29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00131B2Fu); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_00131B2F: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00131B37u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_00131B37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00131B3A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131B40
 * Original: 0x00131B40 - 0x00131BEB (171 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131B40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131B5D; /* je: equal / zero */

loc_00131B56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8C40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8C40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131B72; /* jne: not equal / not zero */

loc_00131B5D: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x00131B6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131B65u); } /* indirect call */
    }

loc_00131B6B: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00131B72: ;
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm2 = xmm0; /* movaps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    XMM_STORE(esp + 0x20, xmm2); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    xmm3 = XMM_MEM(eax + 0x50); /* movaps */
    PUSH32(esp, 0x534370);
    ecx = esp + 0x14;
    XMM_STORE(esp + 0x34, xmm3); /* movaps */
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    XMM_STORE(0x534370, xmm1); /* movaps */
    XMM_STORE(0x534380, xmm2); /* movaps */
    XMM_STORE(0x534390, xmm3); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00131BC3u); RECOMP_ABI_CALL(0x002650A0u, sub_002650A0); /* call 0x002650A0 */

loc_00131BC3: ;
    eax = MEM32(ebp + 8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00131BD5u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_00131BD5: ;
    edx = MEM32(esi);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00131BE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131BDEu); } /* indirect call */
    }

loc_00131BE4: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131BF0
 * Original: 0x00131BF0 - 0x00131E13 (547 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131BF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x18);
    if ((_fa == 0)) goto loc_00131C74; /* je: equal / zero */

loc_00131C08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131C7F; /* je: equal / zero */

loc_00131C0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8C40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8C40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131C7F; /* je: equal / zero */

loc_00131C13: ;
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    ecx = esp + 0x68;
    XMM_STORE(esp + 0x48, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00131C49u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_00131C49: ;
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x70); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x80); /* movaps */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x90); /* movaps */
    goto loc_00131DE2;

loc_00131C74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131C7F; /* je: equal / zero */

loc_00131C78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8C40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8C40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131CA9; /* jne: not equal / not zero */

loc_00131C7F: ;
    xmm0 = XMM_MEM(esi + 0x80); /* movaps */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    XMM_STORE(esi + 0x30, xmm1); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xA0); /* movaps */
    xmm1 = XMM_MEM(esi + 0x90); /* movaps */
    XMM_STORE(esi + 0x50, xmm1); /* movaps */
    goto loc_00131DE2;

loc_00131CA9: ;
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x28); /* mulss */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x44); /* addss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x38); /* mulss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x80); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x90); /* movaps */
    edx = esp + 0x50;
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x48); /* addss */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xA0); /* movaps */
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00131DC2u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00131DC2: ;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */

loc_00131DE2: ;
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131DF3; /* je: equal / zero */

loc_00131DED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00131DF0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00131DEEu); } /* indirect call */
    }

loc_00131DF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00131DF3: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131E0E; /* je: equal / zero */

loc_00131DFA: ;
    /* nop */

loc_00131E00: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00131E07u); RECOMP_ABI_CALL(0x00131BF0u, sub_00131BF0); /* call 0x00131BF0 */

loc_00131E07: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131E00; /* jne: not equal / not zero */

loc_00131E0E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00131E20
 * Original: 0x00131E20 - 0x00131E69 (73 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131E20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31B088;
    MEM8(esi + 0x6D) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31B08C); PUSH32(esp, 0x00131E36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131E30u); } /* indirect call */
    }

loc_00131E36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131E5E; /* jne: not equal / not zero */

loc_00131E3A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00131E41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131E3Eu); } /* indirect call */
    }

loc_00131E41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131E5E; /* jne: not equal / not zero */

loc_00131E45: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = 1;
    PUSH32(esp, 0x00131E5Bu); RECOMP_ABI_CALL(0x00130CE0u, sub_00130CE0); /* call 0x00130CE0 */

loc_00131E5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00131E5E: ;
    MEM32(esi) = 0x315788;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00131E70
 * Original: 0x00131E70 - 0x00131F0B (155 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131E70: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    PUSH32(esp, esi);
    MEM8(esi + 0x60) = LO8(eax);
    MEM8(esi + 0x61) = LO8(eax);
    MEM8(esi + 0x62) = 0xFF;
    MEM32(esi + 0x64) = 5;
    MEM32(esi + 0x68) = 0xF;
    MEM8(esi + 0x6C) = 1;
    MEM8(esi + 0x6D) = LO8(eax);
    MEM32(esi) = 0x31B088;
    PUSH32(esp, 0x00131F04u); RECOMP_ABI_CALL(0x001317C0u, sub_001317C0); /* call 0x001317C0 */

loc_00131F04: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131F10
 * Original: 0x00131F10 - 0x00131F45 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00131F24; /* je: equal / zero */

loc_00131F1E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00131F24u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00131F24: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0x00131F37u); RECOMP_ABI_CALL(0x0012F710u, sub_0012F710); /* call 0x0012F710 */

loc_00131F37: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00131F3Du); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_00131F3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131F50
 * Original: 0x00131F50 - 0x00131F6F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131F50: ;
    edx = MEM32(esp + 0xC);
    eax = ecx + 0x70;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00131F69u); RECOMP_ABI_CALL(0x00131820u, sub_00131820); /* call 0x00131820 */

loc_00131F69: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00131F70
 * Original: 0x00131F70 - 0x00131F8D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131F70: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00131F87u); RECOMP_ABI_CALL(0x00131820u, sub_00131820); /* call 0x00131820 */

loc_00131F87: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00131F90
 * Original: 0x00131F90 - 0x00132038 (168 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131F90: ;
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
    edx = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
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
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0013201Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132018u); } /* indirect call */
    }

loc_0013201B: ;
    ecx = MEM32(ebp + 0xC);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013202Du); RECOMP_ABI_CALL(0x00131820u, sub_00131820); /* call 0x00131820 */

loc_0013202D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00132040
 * Original: 0x00132040 - 0x00132057 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132040: ;
    eax = ecx + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8C40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00132053u); RECOMP_ABI_CALL(0x00131820u, sub_00131820); /* call 0x00131820 */

loc_00132053: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00132060
 * Original: 0x00132060 - 0x00132245 (485 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132060: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0013206Bu); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_0013206B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x31AF38;
    MEM32(esi + 8) = 0x31AF30;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0xE8) = ebx;
    MEM32(esi + 0xEC) = ebx;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = ebx;
    MEM32(esi + 0xF8) = ebx;
    MEM32(esi + 0xFC) = ebx;
    MEM32(esi + 0x100) = ebx;
    MEM32(esi + 0x104) = ebx;
    MEM8(esi + 0x10C) = LO8(ebx);
    MEM32(esi + 0x110) = ebx;
    MEM32(esi + 0x114) = ebx;
    MEM32(esi + 0x118) = ebx;
    MEM32(esi + 0x11C) = ebx;
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x124) = ebx;
    MEM8(esi + 0x128) = 1;
    MEM32(esi + 0x12C) = 2;
    MEM32(esi + 0x130) = ebx;
    MEM32(esi + 0x134) = ebx;
    MEM32(esi + 0x138) = ebx;
    MEM32(esi + 0x13C) = ebx;
    MEM8(esi + 0x140) = 1;
    MEM32(esi + 0x144) = 0xDEADBEEFu;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xC8) = ebx;
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 0xCC) = ebx;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM32(esi + 0xD4) = ebx;
    _fa = (uint32_t)(MEM8(esi + 0x128)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x128), LO8(ebx) (8-bit) */
    MEMF(0x3E8C34) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00132182; /* je: equal / zero */

loc_0013216F: ;
    eax = MEM32(esi + 0x118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132182; /* je: equal / zero */

loc_00132179: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013217Fu); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0013217F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132182: ;
    PUSH32(esp, 0x00132187u); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_00132187: ;
    PUSH32(esp, 0x2FF5B8);
    edi = eax;
    PUSH32(esp, 0x00132193u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_00132193: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x2FF590);
    PUSH32(esp, 0x001321A9u); RECOMP_ABI_CALL(0x001550D0u, sub_001550D0); /* call 0x001550D0 */

loc_001321A9: ;
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x001321B1u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_001321B1: ;
    MEM32(esi + 0x118) = ebp;
    ebp = 0x80;
    MEM32(esi + 0x124) = ebp;
    MEM8(esi + 0x128) = 1;
    SET_LO8(eax, MEM8(esi + 0x140));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001321E9; /* je: equal / zero */

loc_001321D6: ;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001321E9; /* je: equal / zero */

loc_001321E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001321E6u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_001321E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001321E9: ;
    PUSH32(esp, 0x001321EEu); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_001321EE: ;
    PUSH32(esp, 0x2FF5B8);
    edi = eax;
    PUSH32(esp, 0x001321FAu); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_001321FA: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x2FF590);
    PUSH32(esp, 0x00132210u); RECOMP_ABI_CALL(0x001550D0u, sub_001550D0); /* call 0x001550D0 */

loc_00132210: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x00132218u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_00132218: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x130) = ebx;
    MEM32(esi + 0x13C) = ebp;
    MEM8(esi + 0x140) = 1;
    POP32(esp, edi);
    MEM32(0x3E8D88) = 0x3E8D90;
    MEM32(esi + 0xB0) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00132250
 * Original: 0x00132250 - 0x00132284 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132250: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132282; /* je: equal / zero */

loc_00132259: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132269; /* je: equal / zero */

loc_00132260: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132266u); RECOMP_ABI_CALL(0x00132250u, sub_00132250); /* call 0x00132250 */

loc_00132266: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132269: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132279; /* je: equal / zero */

loc_00132270: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132276u); RECOMP_ABI_CALL(0x00132250u, sub_00132250); /* call 0x00132250 */

loc_00132276: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132279: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013227Fu); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_0013227F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132282: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00132290
 * Original: 0x00132290 - 0x0013238D (253 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132290: ;
    eax = MEM32(0x3E8CF0);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEMF(0x3E8C34) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001322D7; /* je: equal / zero */

loc_001322AE: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001322BE; /* je: equal / zero */

loc_001322B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001322BBu); RECOMP_ABI_CALL(0x00132250u, sub_00132250); /* call 0x00132250 */

loc_001322BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001322BE: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001322CE; /* je: equal / zero */

loc_001322C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001322CBu); RECOMP_ABI_CALL(0x00132250u, sub_00132250); /* call 0x00132250 */

loc_001322CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001322CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001322D4u); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_001322D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001322D7: ;
    esi = MEM32(0x3E8D2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013231D; /* je: equal / zero */

loc_001322E1: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0x6D) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001322EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001322E8u); } /* indirect call */
    }

loc_001322EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132313; /* jne: not equal / not zero */

loc_001322EF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001322F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001322F3u); } /* indirect call */
    }

loc_001322F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132313; /* jne: not equal / not zero */

loc_001322FA: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x00132310u); RECOMP_ABI_CALL(0x00130CE0u, sub_00130CE0); /* call 0x00130CE0 */

loc_00132310: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132313: ;
    esi = MEM32(0x3E8D2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001322E1; /* jne: not equal / not zero */

loc_0013231D: ;
    POP32(esp, esi);
    MEM32(0x3E8D2C) = ebx;
    MEM32(0x3E8D30) = ebx;
    MEM32(0x3E8CF4) = ebx;
    MEM32(0x3E8D1C) = ebx;
    MEM32(0x3E8D20) = ebx;
    MEM32(0x3E8D24) = ebx;
    MEM32(0x3E8D28) = ebx;
    MEM32(0x3E8D34) = ebx;
    MEM32(0x3E8D38) = ebx;
    MEM32(0x3E8D3C) = ebx;
    MEM32(0x3E8D40) = ebx;
    MEM32(0x3E8D44) = ebx;
    MEM32(0x3E8D50) = ebx;
    MEM32(0x3E8D54) = ebx;
    MEM32(0x3E8D60) = ebx;
    MEM32(0x3E8D78) = ebx;
    MEM32(0x3E8D88) = 0x3E8D90;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00132390
 * Original: 0x00132390 - 0x00132996 (1542 bytes, 304 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132390(void)
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

loc_00132390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 0x1B5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = 0;
    SET_LO8(ebx, 1);
    edi = 0xFF;
    if (CMP_NE(_fa, _fb)) goto loc_0013264C; /* jne: not equal / not zero */

loc_001323BF: ;
    _fa = (uint32_t)(MEM32(esi + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013264C; /* je: equal / zero */

loc_001323CB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    eax = MEM32(esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    ecx = esp + 0x70;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x164); PUSH32(esp, 0x001323FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001323F5u); } /* indirect call */
    }

loc_001323FB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x78) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x18); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    PUSH32(esp, 0x3E800000);
    ecx = esp + 0x34;
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013247Bu); RECOMP_ABI_CALL(0x00266200u, sub_00266200); /* call 0x00266200 */

loc_0013247B: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    SET_LO8(eax, MEM8(esi + 0x1B6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001324DC; /* jne: not equal / not zero */

loc_001324BB: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x001324CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001324C4u); } /* indirect call */
    }

loc_001324CA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_001324DC: ;
    edx = MEM32(esi);
    MEMF(esp + 0xC4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0xD0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    ecx = esi;
    MEM8(esp + 0xE0) = 0;
    MEMF(esp + 0xC0) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00132548u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132545u); } /* indirect call */
    }

loc_00132548: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0xE4) = eax;
    eax = esp + 0x100;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DEA20);
    MEM8(esp + 0xE8) = 0;
    MEM32(esp + 0x108) = 0x307E40;
    MEM32(esp + 0x138) = 0;
    MEMF(esp + 0x12C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001325A2u); RECOMP_ABI_CALL(0x00223510u, sub_00223510); /* call 0x00223510 */

loc_001325A2: ;
    eax = MEM32(esp + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132615; /* je: equal / zero */

loc_001325AD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x124)); /* movss */
    xmm1 = XMM_MEM(esp + 0xD0); /* movaps */
    xmm3 = XMM_MEM(0x307E30); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(esp + 0xC0); /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(esp + 0x30, xmm3); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x1E0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 0x1E4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    goto loc_0013263D;

loc_00132615: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEM32(esi + 0xE0) = edi;
    MEMF(esi + 0x1E0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esi + 0x1E4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */

loc_0013263D: ;
    MEMF(esi + 0x1E8) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1B5) = 1;

loc_0013264C: ;
    edx = MEM32(esi);
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x0013265Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132658u); } /* indirect call */
    }

loc_0013265E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x305098); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    edx = MEM32(esi);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    eax = esp + 0x50;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm5.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm5.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x001326FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001326F5u); } /* indirect call */
    }

loc_001326FB: ;
    _fa = (uint32_t)(MEM32(esi + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013298F; /* je: equal / zero */

loc_00132707: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = esi + 0x1E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132717u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00132717: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132729u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00132729: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0013298F; /* ja: above (unsigned >) */

loc_00132737: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    eax = MEM32(esi);
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xA4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    ecx = esi;
    MEM8(esp + 0xB0) = 0;
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x001327B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001327B2u); } /* indirect call */
    }

loc_001327B5: ;
    MEM32(esp + 0xB4) = eax;
    MEM8(esp + 0xB0) = 1;
    goto loc_001327D0;

    /* nop */
    /* nop */

loc_001327D0: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013295E; /* jge: greater or equal (signed >=) */

loc_001327DD: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edi = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DEA20);
    edx = esp + 0x94;
    MEM32(esp + 0x30) = edi;
    edi = 0x307E40;
    PUSH32(esp, edx);
    MEM32(esp + 0xC8) = edi;
    MEM32(esp + 0xF8) = 0;
    MEMF(esp + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132830u); RECOMP_ABI_CALL(0x00223510u, sub_00223510); /* call 0x00223510 */

loc_00132830: ;
    eax = MEM32(esp + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013294F; /* je: equal / zero */

loc_0013283F: ;
    SET_LO8(eax, MEM8(esi + 0x1B1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013294F; /* jne: not equal / not zero */

loc_0013284D: ;
    SET_LO8(eax, MEM8(esi + 0x1B2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013294F; /* jne: not equal / not zero */

loc_0013285B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    xmm3 = XMM_MEM(0x307E30); /* movaps */
    xmm1 = XMM_MEM(esp + 0xA0); /* movaps */
    eax = MEM32(ebp + 0xC);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0xD8;
    PUSH32(esp, edx);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(esp + 0x9C); /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(esp + 0x3C, xmm3); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esi + 0x1D0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    PUSH32(esp, esi);
    MEMF(esi + 0x1D8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001328E0u); RECOMP_ABI_CALL(0x001319E0u, sub_001319E0); /* call 0x001319E0 */

loc_001328E0: ;
    SET_LO8(eax, MEM8(esi + 0x1B1));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013294D; /* jne: not equal / not zero */

loc_001328ED: ;
    SET_LO8(eax, MEM8(esi + 0x1B2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013294D; /* jne: not equal / not zero */

loc_001328F7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31B0D8); /* mulss */
    xmm1 = XMM_MEM(esp + 0xA0); /* movaps */
    xmm3 = XMM_MEM(0x307E30); /* movaps */
    eax = MEM32(esi);
    ecx = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(esp + 0x94); /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    ecx = esi;
    XMM_STORE(esp + 0x94, xmm3); /* movaps */
    SET_LO8(ebx, 1);
    { uint32_t _icall_target = MEM32(eax + 0x118); PUSH32(esp, 0x0013294Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132945u); } /* indirect call */
    }

loc_0013294B: ;
    goto loc_0013294F;

loc_0013294D: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0013294F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esp + 0xC0) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001327D0; /* jne: not equal / not zero */

loc_0013295E: ;
    SET_LO8(eax, MEM8(esi + 0x1B1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013298F; /* jne: not equal / not zero */

loc_00132968: ;
    SET_LO8(eax, MEM8(esi + 0x1B2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013298F; /* jne: not equal / not zero */

loc_00132972: ;
    edx = MEM32(esi);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esi + 0x1B5) = 0;
    MEM8(esi + 0x1B6) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x0013298Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132989u); } /* indirect call */
    }

loc_0013298F: ;
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
 * sub_001329A0
 * Original: 0x001329A0 - 0x001329DC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001329A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001329A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x70, xmm1); /* movaps */
    XMM_STORE(ecx + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(ecx + 0x90, xmm1); /* movaps */
    XMM_STORE(ecx + 0xA0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001329D6u); RECOMP_ABI_CALL(0x00131BF0u, sub_00131BF0); /* call 0x00131BF0 */

loc_001329D6: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001329E0
 * Original: 0x001329E0 - 0x00132A3E (94 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001329E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001329E0: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132A3B; /* jne: not equal / not zero */

loc_001329E9: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132A3B; /* jne: not equal / not zero */

loc_001329F0: ;
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132A34; /* je: equal / zero */

loc_001329F7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8C40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3E8C40 (32-bit) */
    eax = ecx + -8;
    if (CMP_NE(_fa, _fb)) goto loc_00132A1B; /* jne: not equal / not zero */

loc_00132A02: ;
    ecx = eax + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8C40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132A15u); RECOMP_ABI_CALL(0x00131820u, sub_00131820); /* call 0x00131820 */

loc_00132A15: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00132A1B: ;
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + 0x70;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132A2Du); RECOMP_ABI_CALL(0x00131820u, sub_00131820); /* call 0x00131820 */

loc_00132A2D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00132A34: ;
    MEM32(ecx + 0x10) = 0;

loc_00132A3B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00132A40
 * Original: 0x00132A40 - 0x00132B00 (192 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132A40: ;
    eax = MEM32(0x3E8CF0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132A7C; /* je: equal / zero */

loc_00132A53: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132A63; /* je: equal / zero */

loc_00132A5A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132A60u); RECOMP_ABI_CALL(0x00132250u, sub_00132250); /* call 0x00132250 */

loc_00132A60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132A63: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132A73; /* je: equal / zero */

loc_00132A6A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132A70u); RECOMP_ABI_CALL(0x00132250u, sub_00132250); /* call 0x00132250 */

loc_00132A70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132A73: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00132A79u); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_00132A79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132A7C: ;
    esi = MEM32(0x3E8D2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132AC2; /* je: equal / zero */

loc_00132A86: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0x6D) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00132A90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132A8Du); } /* indirect call */
    }

loc_00132A90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132AB8; /* jne: not equal / not zero */

loc_00132A94: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00132A9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132A98u); } /* indirect call */
    }

loc_00132A9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132AB8; /* jne: not equal / not zero */

loc_00132A9F: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x00132AB5u); RECOMP_ABI_CALL(0x00130CE0u, sub_00130CE0); /* call 0x00130CE0 */

loc_00132AB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132AB8: ;
    esi = MEM32(0x3E8D2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132A86; /* jne: not equal / not zero */

loc_00132AC2: ;
    PUSH32(esp, 0x00132AC7u); RECOMP_ABI_CALL(0x00132290u, sub_00132290); /* call 0x00132290 */

loc_00132AC7: ;
    esi = 0x3E8D08;
    /* nop */

loc_00132AD0: ;
    ecx = MEM32(esi + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132ADE; /* je: equal / zero */

loc_00132AD7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00132ADEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132ADBu); } /* indirect call */
    }

loc_00132ADE: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132AEA; /* je: equal / zero */

loc_00132AE4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00132AEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132AE8u); } /* indirect call */
    }

loc_00132AEA: ;
    MEM32(esi + -16) = ebx;
    MEM32(esi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8D18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3E8D18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132AD0; /* jl: less (signed <) */

loc_00132AFA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00132B00
 * Original: 0x00132B00 - 0x00132B60 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132B00: ;
    eax = MEM32(0x3E8D34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00132B11; /* jle: less or equal (signed <=) */

loc_00132B0C: ;
    PUSH32(esp, 0x00132B11u); RECOMP_ABI_CALL(0x00132A40u, sub_00132A40); /* call 0x00132A40 */

loc_00132B11: ;
    SET_LO8(eax, MEM8(esi + 0x140));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132B2E; /* je: equal / zero */

loc_00132B1B: ;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132B2E; /* je: equal / zero */

loc_00132B25: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132B2Bu); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00132B2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132B2E: ;
    SET_LO8(eax, MEM8(esi + 0x128));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132B4B; /* je: equal / zero */

loc_00132B38: ;
    eax = MEM32(esi + 0x118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132B4B; /* je: equal / zero */

loc_00132B42: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132B48u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00132B48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132B4B: ;
    MEM32(esi) = 0x2FED00;
    MEM32(esi + 8) = 0x307CBC;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0012F740(); return; /* tail jmp 0x0012F740 */

}

/**
 * sub_00132B60
 * Original: 0x00132B60 - 0x00132ED9 (889 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132B60(void)
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

loc_00132B60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x304) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x304;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x164); PUSH32(esp, 0x00132B81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132B7Bu); } /* indirect call */
    }

loc_00132B81: ;
    xmm3 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    edx = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm5.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x00132C04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132BFEu); } /* indirect call */
    }

loc_00132C04: ;
    _fa = (uint32_t)(MEM32(esi + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE0), 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132ED2; /* je: equal / zero */

loc_00132C14: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    edx = MEM32(esi);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = esi;
    MEM8(esp + 0x80) = 0;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00132C7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132C77u); } /* indirect call */
    }

loc_00132C7A: ;
    ecx = esp + 0x170;
    MEM32(esp + 0x84) = eax;
    MEM8(esp + 0x80) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132C95u); RECOMP_ABI_CALL(0x00133360u, sub_00133360); /* call 0x00133360 */

loc_00132C95: ;
    eax = esp + 0x170;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DEA20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132CADu); RECOMP_ABI_CALL(0x00223510u, sub_00223510); /* call 0x00223510 */

loc_00132CAD: ;
    ecx = esp + 0x170;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132CB9u); RECOMP_ABI_CALL(0x001FB140u, sub_001FB140); /* call 0x001FB140 */

loc_00132CB9: ;
    eax = MEM32(esp + 0x184);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00132E9B; /* jle: less or equal (signed <=) */

loc_00132CCE: ;
    edi = edi;

loc_00132CD0: ;
    eax = MEM32(esp + 0x180);
    xmm0 = XMM_MEM(ebx + eax); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(ebx + eax + 0x14)); /* movss */
    edx = MEM32(ebx + eax + 0x10);
    ecx = MEM32(0x3888C0);
    eax = MEM32(ebx + eax + 0x20);
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0xA0) = edx;
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    MEMF(esp + 0xA4) = xmm1.f[0]; /* movss */
    MEM32(esp + 0xB0) = eax;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(esp + 0x70)); /* mulps */
    xmm3 = xmm2; /* movaps */
    xmm2 = XMM_MEM(0x307E30); /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm4 = XMM_SUB(xmm4, xmm0); /* subps */
    xmm4 = XMM_MUL(xmm4, XMM_MEM(esp + 0x60)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm3); /* addps */
    XMM_STORE(esp + 0xC0, xmm4); /* movaps */
    if (TEST_Z(_fa, _fb)) goto loc_00132E48; /* je: equal / zero */

loc_00132D53: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132E48; /* je: equal / zero */

loc_00132D5E: ;
    PUSH32(esp, 1);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132D6Au); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_00132D6A: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132E38; /* je: equal / zero */

loc_00132D76: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00132D80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132D7Au); } /* indirect call */
    }

loc_00132D80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00132E38; /* je: equal / zero */

loc_00132D8C: ;
    ecx = esp + 0xF0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132D98u); RECOMP_ABI_CALL(0x000169F0u, sub_000169F0); /* call 0x000169F0 */

loc_00132D98: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi);
    ecx = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x00132DBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132DB6u); } /* indirect call */
    }

loc_00132DBC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00132DCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132DC5u); } /* indirect call */
    }

loc_00132DCB: ;
    PUSH32(esp, eax);
    ecx = esp + 0x100;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132DD8u); RECOMP_ABI_CALL(0x00016830u, sub_00016830); /* call 0x00016830 */

loc_00132DD8: ;
    ecx = esp + 0xE0;
    PUSH32(esp, ecx);
    edx = esp + 0xD4;
    PUSH32(esp, edx);
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132E03u); RECOMP_ABI_CALL(0x000EA010u, sub_000EA010); /* call 0x000EA010 */

loc_00132E03: ;
    ecx = esp + 0xF0;
    MEM8(esp + 0xF) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132E13u); RECOMP_ABI_CALL(0x00017190u, sub_00017190); /* call 0x00017190 */

loc_00132E13: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132E38; /* jne: not equal / not zero */

loc_00132E1B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x184);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00132CD0; /* jl: less (signed <) */

loc_00132E36: ;
    goto loc_00132E9B;

loc_00132E38: ;
    xmm2 = XMM_MEM(0x307E30); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */

loc_00132E48: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(0x2FF460); /* subss */
    eax = MEM32(esi);
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = XMM_SUB(xmm2, xmm0); /* subps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(esp + 0x60)); /* mulps */
    ecx = esp + 0x50;
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(esp + 0x70)); /* mulps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    ecx = esi;
    XMM_STORE(esp + 0x54, xmm2); /* movaps */
    { uint32_t _icall_target = MEM32(eax + 0x118); PUSH32(esp, 0x00132E7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132E78u); } /* indirect call */
    }

loc_00132E7E: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00132E98u); RECOMP_ABI_CALL(0x001319E0u, sub_001319E0); /* call 0x001319E0 */

loc_00132E98: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132E9B: ;
    eax = MEM32(esp + 0x188);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x170) = 0x31B0DC;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00132ED2; /* js: sign (negative) */

loc_00132EB1: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x188);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00132ED2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132ECFu); } /* indirect call */
    }

loc_00132ED2: ;
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
 * sub_00132EE0
 * Original: 0x00132EE0 - 0x001332BF (991 bytes, 328 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132EE0(void)
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

loc_00132EE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00132EE7u); RECOMP_ABI_CALL(0x0007F040u, sub_0007F040); /* call 0x0007F040 */

loc_00132EE7: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3E8C34)); /* fsub dword ptr [0x3e8c34] */
    MEM8(0x3E8C30) = LO8(ebx);
    fp_push(MEMF(0x305098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_00132F20; /* jb: below (unsigned <) */

loc_00132F0B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(0x3E8C34) = xmm0.f[0]; /* movss */
    MEM8(0x3E8C30) = 1;

loc_00132F20: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001332BC; /* jnp: not parity */

loc_00132F37: ;
    xmm0 = XMM_SCALAR(MEMF(0x31AF28)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00132F62; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00132F44: ;
    _fa = (uint32_t)(MEM32(0x3864D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3864D4), ebx (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00132F69; /* jle: less or equal (signed <=) */

loc_00132F52: ;
    _fa = (uint32_t)(MEM8(0x376D24)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x376D24), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132F69; /* je: equal / zero */

loc_00132F5A: ;
    MEM8(0x376D24) = LO8(ebx);
    goto loc_00132F69;

loc_00132F62: ;
    MEM8(0x376D24) = 1;

loc_00132F69: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00132F76u); RECOMP_ABI_CALL(0x000F1910u, sub_000F1910); /* call 0x000F1910 */

loc_00132F76: ;
    ecx = eax;
    PUSH32(esp, 0x00132F7Du); RECOMP_ABI_CALL(0x000F1FF0u, sub_000F1FF0); /* call 0x000F1FF0 */

loc_00132F7D: ;
    esi = MEM32(0x3E8CF0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(0x3E8D4C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00132FCD; /* je: equal / zero */

loc_00132F93: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00132F9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132F98u); } /* indirect call */
    }

loc_00132F9B: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132FC2; /* jne: not equal / not zero */

loc_00132FA2: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132FC2; /* jne: not equal / not zero */

loc_00132FA9: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132FC2; /* je: equal / zero */

loc_00132FB0: ;
    eax = esi;

loc_00132FB2: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132FC2; /* je: equal / zero */

loc_00132FB9: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132FB2; /* je: equal / zero */

loc_00132FC0: ;
    eax = ecx;

loc_00132FC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132F93; /* jne: not equal / not zero */

loc_00132FCD: ;
    ecx = MEM32(0x3E8D18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132FDD; /* je: equal / zero */

loc_00132FD7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00132FDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132FDAu); } /* indirect call */
    }

loc_00132FDD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00132FE3u); RECOMP_ABI_CALL(0x00015D10u, sub_00015D10); /* call 0x00015D10 */

loc_00132FE3: ;
    esi = MEM32(0x3E8CF0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013302F; /* je: equal / zero */

loc_00132FF5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00132FFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132FFAu); } /* indirect call */
    }

loc_00132FFD: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133024; /* jne: not equal / not zero */

loc_00133004: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133024; /* jne: not equal / not zero */

loc_0013300B: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133024; /* je: equal / zero */

loc_00133012: ;
    eax = esi;

loc_00133014: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133024; /* je: equal / zero */

loc_0013301B: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133014; /* je: equal / zero */

loc_00133022: ;
    eax = ecx;

loc_00133024: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132FF5; /* jne: not equal / not zero */

loc_0013302F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    esi = MEM32(0x3DEA20);
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013309D; /* jnp: not parity */

loc_00133068: ;
    edi = MEM32(esp + 0x18);
    goto loc_00133074;

loc_0013306E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_00133074: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(0x2FE99C); /* subss */
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0013308Au); RECOMP_ABI_CALL(0x00227D50u, sub_00227D50); /* call 0x00227D50 */

loc_0013308A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013306E; /* jp: parity */

loc_0013309D: ;
    edi = MEM32(0x3E8D88);
    esi = 0x3E8D90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(0x3E8D4C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001330CA; /* je: equal / zero */

loc_001330B2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x001330B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001330B3u); } /* indirect call */
    }

loc_001330B6: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001330B2; /* jne: not equal / not zero */

loc_001330C0: ;
    MEM32(0x3E8D88) = 0x3E8D90;

loc_001330CA: ;
    esi = MEM32(0x3E8CF0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(0x3E8D4C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0013312B; /* je: equal / zero */

loc_001330E0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x001330EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001330E4u); } /* indirect call */
    }

loc_001330EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001330F6; /* jne: not equal / not zero */

loc_001330EE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001330F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001330F3u); } /* indirect call */
    }

loc_001330F6: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133120; /* jne: not equal / not zero */

loc_001330FD: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133120; /* jne: not equal / not zero */

loc_00133104: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133120; /* je: equal / zero */

loc_0013310B: ;
    eax = esi;
    /* nop */

loc_00133110: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133120; /* je: equal / zero */

loc_00133117: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133110; /* je: equal / zero */

loc_0013311E: ;
    eax = ecx;

loc_00133120: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001330E0; /* jne: not equal / not zero */

loc_0013312B: ;
    edi = MEM32(0x3E8D88);
    esi = 0x3E8D90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(0x3E8D4C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00133158; /* je: equal / zero */

loc_00133140: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x00133144u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133141u); } /* indirect call */
    }

loc_00133144: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133140; /* jne: not equal / not zero */

loc_0013314E: ;
    MEM32(0x3E8D88) = 0x3E8D90;

loc_00133158: ;
    esi = MEM32(0x3E8CF0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(0x3E8D4C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00133201; /* je: equal / zero */

loc_00133172: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0013317Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133176u); } /* indirect call */
    }

loc_0013317C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001331CB; /* je: equal / zero */

loc_00133180: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x0013318Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133184u); } /* indirect call */
    }

loc_0013318A: ;
    edi = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x00133196u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133190u); } /* indirect call */
    }

loc_00133196: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001331B3; /* je: equal / zero */

loc_0013319A: ;
    _fa = (uint32_t)(MEM8(edi + 0x1B1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1B1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001331CB; /* jne: not equal / not zero */

loc_001331A2: ;
    _fa = (uint32_t)(MEM8(edi + 0x1B2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1B2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001331CB; /* jne: not equal / not zero */

loc_001331AA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001331B1u); RECOMP_ABI_CALL(0x00132390u, sub_00132390); /* call 0x00132390 */

loc_001331B1: ;
    goto loc_001331C8;

loc_001331B3: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x001331BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001331B7u); } /* indirect call */
    }

loc_001331BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001331CB; /* je: equal / zero */

loc_001331C1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001331C8u); RECOMP_ABI_CALL(0x00132B60u, sub_00132B60); /* call 0x00132B60 */

loc_001331C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001331CB: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001331F2; /* jne: not equal / not zero */

loc_001331D2: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001331F2; /* jne: not equal / not zero */

loc_001331D9: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001331F2; /* je: equal / zero */

loc_001331E0: ;
    eax = esi;

loc_001331E2: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001331F2; /* je: equal / zero */

loc_001331E9: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001331E2; /* je: equal / zero */

loc_001331F0: ;
    eax = ecx;

loc_001331F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133172; /* jne: not equal / not zero */

loc_00133201: ;
    edi = MEM32(0x3E8D88);
    esi = 0x3E8D90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(0x3E8D4C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0013322E; /* je: equal / zero */

loc_00133216: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x0013321Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133217u); } /* indirect call */
    }

loc_0013321A: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133216; /* jne: not equal / not zero */

loc_00133224: ;
    MEM32(0x3E8D88) = 0x3E8D90;

loc_0013322E: ;
    esi = MEM32(0x3E8CF0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(0x3E8D4C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0013328C; /* je: equal / zero */

loc_00133244: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0013324Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133248u); } /* indirect call */
    }

loc_0013324E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013325A; /* je: equal / zero */

loc_00133252: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0013325Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133257u); } /* indirect call */
    }

loc_0013325A: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133281; /* jne: not equal / not zero */

loc_00133261: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133281; /* jne: not equal / not zero */

loc_00133268: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133281; /* je: equal / zero */

loc_0013326F: ;
    eax = esi;

loc_00133271: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133281; /* je: equal / zero */

loc_00133278: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133271; /* je: equal / zero */

loc_0013327F: ;
    eax = ecx;

loc_00133281: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133244; /* jne: not equal / not zero */

loc_0013328C: ;
    edi = MEM32(0x3E8D88);
    esi = 0x3E8D90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(0x3E8D4C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001332B9; /* je: equal / zero */

loc_001332A1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x001332A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001332A2u); } /* indirect call */
    }

loc_001332A5: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001332A1; /* jne: not equal / not zero */

loc_001332AF: ;
    MEM32(0x3E8D88) = 0x3E8D90;

loc_001332B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001332BC: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001332C0
 * Original: 0x001332C0 - 0x001332EB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001332C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001332C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2FED00;
    MEM32(esi + 8) = 0x307CBC;
    PUSH32(esp, 0x001332D5u); RECOMP_ABI_CALL(0x0012F740u, sub_0012F740); /* call 0x0012F740 */

loc_001332D5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001332E5; /* je: equal / zero */

loc_001332DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001332E2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001332E2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001332E5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001332F0
 * Original: 0x001332F0 - 0x001332F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001332F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001332F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001332C0(); return; /* tail jmp 0x001332C0 */

}

/**
 * sub_00133300
 * Original: 0x00133300 - 0x0013335D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133300: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31B088;
    MEM8(esi + 0x6D) = 0;
    { uint32_t _icall_target = MEM32(0x31B08C); PUSH32(esp, 0x00133316u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133310u); } /* indirect call */
    }

loc_00133316: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013333E; /* jne: not equal / not zero */

loc_0013331A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00133321u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013331Eu); } /* indirect call */
    }

loc_00133321: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013333E; /* jne: not equal / not zero */

loc_00133325: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = 1;
    PUSH32(esp, 0x0013333Bu); RECOMP_ABI_CALL(0x00130CE0u, sub_00130CE0); /* call 0x00130CE0 */

loc_0013333B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013333E: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    MEM32(esi) = 0x315788;
    if (TEST_Z(_fa, _fb)) goto loc_00133354; /* je: equal / zero */

loc_0013334B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00133351u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00133351: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00133354: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133360
 * Original: 0x00133360 - 0x001333E0 (128 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133360: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    MEM32(eax) = 0x31B0DC;
    MEM32(eax + 0x18) = 0x80000008u;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    edx = eax + 0x20;
    MEM32(eax + 0x10) = edx;
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x20) = ecx;
    MEMF(edx + 0x44) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x50) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x44) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x50) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x44) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x50) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x44) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x50) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x20) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x20) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x20) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001333E0
 * Original: 0x001333E0 - 0x00133423 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001333E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001333E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31B0DC;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0013340D; /* js: sign (negative) */

loc_001333F0: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0013340Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013340Au); } /* indirect call */
    }

loc_0013340D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013341D; /* je: equal / zero */

loc_00133414: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013341Au); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013341A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013341D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133430
 * Original: 0x00133430 - 0x00133492 (98 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133430: ;
    eax = MEM32(0x3F2D90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133491; /* je: equal / zero */

loc_00133439: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133490; /* je: equal / zero */

loc_00133443: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0013344Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133448u); } /* indirect call */
    }

loc_0013344B: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013346B; /* je: equal / zero */

loc_00133454: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133484; /* je: equal / zero */

loc_0013345D: ;
    /* nop */

loc_00133460: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133460; /* jne: not equal / not zero */

loc_00133469: ;
    goto loc_00133484;

loc_0013346B: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013347D; /* jne: not equal / not zero */

loc_00133473: ;
    eax = ecx;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133473; /* je: equal / zero */

loc_0013347D: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133484; /* je: equal / zero */

loc_00133482: ;
    eax = ecx;

loc_00133484: ;
    ecx = MEM32(0x3F2D90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00133443; /* jne: not equal / not zero */

loc_00133490: ;
    POP32(esp, esi);

loc_00133491: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001334A0
 * Original: 0x001334A0 - 0x00133502 (98 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001334A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001334A0: ;
    eax = MEM32(0x3F2D90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133501; /* je: equal / zero */

loc_001334A9: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133500; /* je: equal / zero */

loc_001334B3: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001334BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001334B8u); } /* indirect call */
    }

loc_001334BB: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001334DB; /* je: equal / zero */

loc_001334C4: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001334F4; /* je: equal / zero */

loc_001334CD: ;
    /* nop */

loc_001334D0: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001334D0; /* jne: not equal / not zero */

loc_001334D9: ;
    goto loc_001334F4;

loc_001334DB: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001334ED; /* jne: not equal / not zero */

loc_001334E3: ;
    eax = ecx;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001334E3; /* je: equal / zero */

loc_001334ED: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001334F4; /* je: equal / zero */

loc_001334F2: ;
    eax = ecx;

loc_001334F4: ;
    ecx = MEM32(0x3F2D90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001334B3; /* jne: not equal / not zero */

loc_00133500: ;
    POP32(esp, esi);

loc_00133501: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00133510
 * Original: 0x00133510 - 0x00133572 (98 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133510: ;
    eax = MEM32(0x3F2D90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133571; /* je: equal / zero */

loc_00133519: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133570; /* je: equal / zero */

loc_00133523: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0013352Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133528u); } /* indirect call */
    }

loc_0013352B: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013354B; /* je: equal / zero */

loc_00133534: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133564; /* je: equal / zero */

loc_0013353D: ;
    /* nop */

loc_00133540: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133540; /* jne: not equal / not zero */

loc_00133549: ;
    goto loc_00133564;

loc_0013354B: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013355D; /* jne: not equal / not zero */

loc_00133553: ;
    eax = ecx;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133553; /* je: equal / zero */

loc_0013355D: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133564; /* je: equal / zero */

loc_00133562: ;
    eax = ecx;

loc_00133564: ;
    ecx = MEM32(0x3F2D90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00133523; /* jne: not equal / not zero */

loc_00133570: ;
    POP32(esp, esi);

loc_00133571: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00133580
 * Original: 0x00133580 - 0x001335D1 (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x3F2D90);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001335B5; /* je: equal / zero */

loc_0013358C: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0013359Du); RECOMP_ABI_CALL(0x00067EC0u, sub_00067EC0); /* call 0x00067EC0 */

loc_0013359D: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001335B5; /* je: equal / zero */

loc_001335A5: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001335B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001335AFu); } /* indirect call */
    }

loc_001335B2: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001335B5: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x31B0E4);
    PUSH32(esp, 0x001335C9u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001335C9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001335E0
 * Original: 0x001335E0 - 0x0013365E (126 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001335E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001335E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = eax;
    ecx = MEM32(0x3F2D90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013364A; /* jne: not equal / not zero */

loc_001335F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x31B110);
    PUSH32(esp, 0x00133605u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00133605: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133641; /* je: equal / zero */

loc_0013360E: ;
    PUSH32(esp, 0x18);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0013361Bu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0013361B: ;
    MEM32(esi) = eax;
    MEM32(esi + 4) = 0;
    MEM8(eax) = 0;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = 0;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = eax;
    ecx = esi;
    goto loc_00133643;

loc_00133641: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00133643: ;
    MEM32(0x3F2D90) = ecx;
    POP32(esp, esi);

loc_0013364A: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00133654u); RECOMP_ABI_CALL(0x0013DBD0u, sub_0013DBD0); /* call 0x0013DBD0 */

loc_00133654: ;
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    eax = edi;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00133660
 * Original: 0x00133660 - 0x00133682 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133660: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31B170;
    if (TEST_Z(_fa, _fb)) goto loc_0013367C; /* je: equal / zero */

loc_00133670: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x48);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x00133679u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00133673u); } /* indirect call */
    }

loc_00133679: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013367C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133690
 * Original: 0x00133690 - 0x001336C6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133690: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x90;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0x84) = eax;
    PUSH32(esp, 0x001336ACu); RECOMP_ABI_CALL(0x000BDD10u, sub_000BDD10); /* call 0x000BDD10 */

loc_001336AC: ;
    PUSH32(esp, 0x3F800000);
    ecx = edi;
    PUSH32(esp, 0x001336B8u); RECOMP_ABI_CALL(0x000BD6E0u, sub_000BD6E0); /* call 0x000BD6E0 */

loc_001336B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001336BEu); RECOMP_ABI_CALL(0x001317C0u, sub_001317C0); /* call 0x001317C0 */

loc_001336BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001336D0
 * Original: 0x001336D0 - 0x001336DD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001336D0(void)
{

loc_001336D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x254) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001336E0
 * Original: 0x001336E0 - 0x001336EE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001336E0(void)
{

loc_001336E0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4 + 0x25C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001336F0
 * Original: 0x001336F0 - 0x001336FA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001336F0(void)
{

loc_001336F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133700
 * Original: 0x00133700 - 0x0013370D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133700(void)
{

loc_00133700: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x184) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133710
 * Original: 0x00133710 - 0x0013378C (124 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00133710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, edi);
    MEM32(edi) = 0x31B180;
    MEM32(edi + 0x70) = 0x31B178;
    PUSH32(esp, 0x00133728u); RECOMP_ABI_CALL(0x00131940u, sub_00131940); /* call 0x00131940 */

loc_00133728: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + 0x270;
    ebx = 5;

loc_00133736: ;
    ecx = MEM32(esi + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013374B; /* je: equal / zero */

loc_00133740: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013374B; /* jne: not equal / not zero */

loc_00133745: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013374Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133749u); } /* indirect call */
    }

loc_0013374B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00133736; /* jne: not equal / not zero */

loc_0013374E: ;
    ecx = MEM32(edi + 0x258);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133763; /* je: equal / zero */

loc_00133758: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00133763; /* jne: not equal / not zero */

loc_0013375D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00133763u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133761u); } /* indirect call */
    }

loc_00133763: ;
    ecx = edi + 0x90;
    PUSH32(esp, 0x0013376Eu); RECOMP_ABI_CALL(0x000BDC20u, sub_000BDC20); /* call 0x000BDC20 */

loc_0013376E: ;
    MEM32(edi) = 0x31AD08;
    MEM32(edi + 0x70) = 0x31AD00;
    MEM32(edi + 0x70) = 0x300534;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00130720(); return; /* tail jmp 0x00130720 */

}

/**
 * sub_00133790
 * Original: 0x00133790 - 0x00133931 (417 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133790: ;
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
    SET_LO8(eax, MEM8(esi + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001337B0; /* jne: not equal / not zero */

loc_001337A5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001337B0: ;
    eax = MEM32(esi + 0x180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001337C5; /* je: equal / zero */

loc_001337BA: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001337C5: ;
    edi = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(esi + 0x60));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(edi + 0xE4);
    SET_LO8(eax, MEM8(eax + 0x39EC));
    if (CMP_EQ(_fa, _fb)) goto loc_001337F8; /* je: equal / zero */

loc_001337DB: ;
    SET_LO8(ecx, MEM8(esi + 0x61));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, MEM8(esi + 0x62));
    if (CMP_EQ(_fa, _fb)) goto loc_001337F4; /* je: equal / zero */

loc_001337E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001337F8; /* je: equal / zero */

loc_001337E9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001337F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001337A5; /* je: equal / zero */

loc_001337F8: ;
    eax = MEM32(esi + 0x84);
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    XMM_STORE(esp + 0x40, xmm1); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_0013383D; /* je: equal / zero */

loc_0013382C: ;
    ecx = MEM32(esi + 0x184);
    edx = MEM32(ecx);
    ebx = esp + 0x20;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0013383Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013383Au); } /* indirect call */
    }

loc_0013383D: ;
    eax = MEM32(esi + 0x184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133858; /* je: equal / zero */

loc_00133847: ;
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0013384Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013384Cu); } /* indirect call */
    }

loc_0013384F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00133858: ;
    ecx = MEM32(esi + 0x258);
    eax = MEM32(ecx + 0xC);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x8C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    edx = MEM32(eax + 0x98);
    eax = MEM32(edi);
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x54); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    ecx = edx;
    MEM32(esp + 0xC) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    edx = esp + 0x14;
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x5C); /* addss */
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00133928u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133925u); } /* indirect call */
    }

loc_00133928: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133940
 * Original: 0x00133940 - 0x00133953 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133940: ;
    _fa = (uint32_t)(MEM32(ecx + 0x254)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x254), 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013394C; /* jle: less or equal (signed <=) */

loc_00133949: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0013394C: ;
    SET_LO8(eax, MEM8(ecx + 0xFC));
    esp += 4; return; /* ret */

}

/**
 * sub_00133960
 * Original: 0x00133960 - 0x0013399B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x130);
    ebx = MEM32(eax + 0x270);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133996; /* je: equal / zero */

loc_00133974: ;
    eax = MEM32(0x378A48);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00133987u); RECOMP_ABI_CALL(0x0018DBF0u, sub_0018DBF0); /* call 0x0018DBF0 */

loc_00133987: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi + 0x90;
    PUSH32(esp, 0x00133995u); RECOMP_ABI_CALL(0x000BE020u, sub_000BE020); /* call 0x000BE020 */

loc_00133995: ;
    POP32(esp, esi);

loc_00133996: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001339A0
 * Original: 0x001339A0 - 0x001339DA (58 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001339A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001339A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_MEM(ecx + 0x150); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x140); /* movaps */
    eax = MEM32(ebp + 8);
    XMM_STORE(eax, xmm1); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x170); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x160); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001339E0
 * Original: 0x001339E0 - 0x00133A1A (58 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001339E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001339E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x140, xmm1); /* movaps */
    XMM_STORE(ecx + 0x150, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(ecx + 0x160, xmm1); /* movaps */
    XMM_STORE(ecx + 0x170, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133A20
 * Original: 0x00133A20 - 0x00133A25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00133A20: ;
    g_seh_ebp = ebp; sub_00133790(); return; /* tail jmp 0x00133790 */

}

/**
 * sub_00133A30
 * Original: 0x00133A30 - 0x00133C94 (612 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133A30(void)
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

loc_00133A30: ;
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
    PUSH32(esp, 0x00133A46u); RECOMP_ABI_CALL(0x001C7AF0u, sub_001C7AF0); /* call 0x001C7AF0 */

loc_00133A46: ;
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133AE0; /* je: equal / zero */

loc_00133A5A: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x50); /* addss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x54); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x58); /* addss */
    goto loc_00133BA1;

loc_00133AE0: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    edx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x54); /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x48); /* mulss */
    eax = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x58); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(esp + 0xC) = eax;
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_00133BA1: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm7 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    edx = MEM32(ebp + 0x18);
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(ebp + 0x10); /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133BCD; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_00133BC4: ;
    _fca = xmm7.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00133C88; /* jae: above or equal (unsigned >=) (xmm7.f[0] vs xmm3.f[0]) */

loc_00133BCD: ;
    eax = MEM32(0x37DC34);
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE99C)); /* fadd dword ptr [0x2fe99c] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) / fp_top()); /* fdivr dword ptr [0x2fe99c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133C15; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_00133C10: ;
    _fca = xmm7.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00133C88; /* jae: above or equal (unsigned >=) (xmm7.f[0] vs xmm3.f[0]) */

loc_00133C15: ;
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133C2E; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_00133C29: ;
    _fca = xmm7.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00133C88; /* jae: above or equal (unsigned >=) (xmm7.f[0] vs xmm3.f[0]) */

loc_00133C2E: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE99C)); /* fadd dword ptr [0x2fe99c] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) / fp_top()); /* fdivr dword ptr [0x2fe99c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133C72; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_00133C6D: ;
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00133C88; /* jae: above or equal (unsigned >=) (xmm7.f[0] vs xmm2.f[0]) */

loc_00133C72: ;
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133C8E; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_00133C83: ;
    _fca = xmm7.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133C8E; /* jb: below (unsigned <) (xmm7.f[0] vs xmm4.f[0]) */

loc_00133C88: ;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00133C8E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
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
 * sub_00133CA0
 * Original: 0x00133CA0 - 0x00133D4C (172 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133CA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    ecx = MEM32(esi + edi * 4 + 0x25C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133CD5; /* je: equal / zero */

loc_00133CB8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + edi * 4 + 0x25C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00133CC6; /* je: equal / zero */

loc_00133CC3: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00133CC6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133CD5; /* je: equal / zero */

loc_00133CCA: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00133CD5; /* jne: not equal / not zero */

loc_00133CCF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00133CD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133CD3u); } /* indirect call */
    }

loc_00133CD5: ;
    eax = MEM32(esi + 0x25C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133CFA; /* je: equal / zero */

loc_00133CDF: ;
    eax = MEM32(esi + 0x260);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133CFA; /* je: equal / zero */

loc_00133CE9: ;
    eax = MEM32(esi + 0x264);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133CFA; /* je: equal / zero */

loc_00133CF3: ;
    eax = 1;
    goto loc_00133CFC;

loc_00133CFA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00133CFC: ;
    MEM8(esi + 0x251) = LO8(eax);
    MEM32(esi + 0x254) = edi;
    ecx = MEM32(esi + 0x258);
    eax = MEM32(esi + edi * 4 + 0x25C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133D35; /* je: equal / zero */

loc_00133D19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x258) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00133D26; /* je: equal / zero */

loc_00133D23: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00133D26: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133D35; /* je: equal / zero */

loc_00133D2A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00133D35; /* jne: not equal / not zero */

loc_00133D2F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00133D35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133D33u); } /* indirect call */
    }

loc_00133D35: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133D46; /* je: equal / zero */

loc_00133D39: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) - 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00133D46; /* jne: not equal / not zero */

loc_00133D3E: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00133D46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133D44u); } /* indirect call */
    }

loc_00133D46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00133D50
 * Original: 0x00133D50 - 0x00133DFE (174 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00133D50: ;
    eax = ecx;
    edx = MEM32(eax + 0x254);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133D93; /* jne: not equal / not zero */

loc_00133D5D: ;
    ecx = MEM32(eax + 0x258);
    edx = MEM32(eax + 0x26C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133DFB; /* je: equal / zero */

loc_00133D71: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 0x258) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00133D7E; /* je: equal / zero */

loc_00133D7B: ;
    MEM32(edx + 4) = MEM32(edx + 4) + 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00133D7E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133DFB; /* je: equal / zero */

loc_00133D82: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00133DFB; /* jne: not equal / not zero */

loc_00133D87: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_00133D93: ;
    _fa = (uint32_t)(MEM8(eax + 0x80)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x80), 0x10 (8-bit) */
    ecx = MEM32(eax + 0x258);
    if (TEST_Z(_fa, _fb)) goto loc_00133DCE; /* je: equal / zero */

loc_00133DA2: ;
    edx = MEM32(eax + 0x264);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133DFB; /* je: equal / zero */

loc_00133DAC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 0x258) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00133DB9; /* je: equal / zero */

loc_00133DB6: ;
    MEM32(edx + 4) = MEM32(edx + 4) + 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00133DB9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133DFB; /* je: equal / zero */

loc_00133DBD: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00133DFB; /* jne: not equal / not zero */

loc_00133DC2: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

loc_00133DCE: ;
    edx = MEM32(eax + edx * 4 + 0x25C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133DFB; /* je: equal / zero */

loc_00133DD9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 0x258) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00133DE6; /* je: equal / zero */

loc_00133DE3: ;
    MEM32(edx + 4) = MEM32(edx + 4) + 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00133DE6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133DFB; /* je: equal / zero */

loc_00133DEA: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00133DFB; /* jne: not equal / not zero */

loc_00133DEF: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_00133DFB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133E00
 * Original: 0x00133E00 - 0x001340FD (765 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133E00(void)
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

loc_00133E00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001340F6; /* je: equal / zero */

loc_00133E20: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x00133E2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133E24u); } /* indirect call */
    }

loc_00133E2A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00133E31u); RECOMP_ABI_CALL(0x00066330u, sub_00066330); /* call 0x00066330 */

loc_00133E31: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001340F6; /* je: equal / zero */

loc_00133E39: ;
    ebx = MEM32(ebx + 8);
    edx = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x170); PUSH32(esp, 0x00133E4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133E44u); } /* indirect call */
    }

loc_00133E4A: ;
    esi = MEM32(esi + 0xC);
    if (2) _cf = (int)(((ebx) >> ((2) - 1)) & 1);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, ~LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM32(esp + 0x28) = esi;
    if ((_fa == 0)) goto loc_00133F9D; /* je: equal / zero */

loc_00133E63: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xD0);
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm5.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    edx = MEM32(edi);
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x38); /* addss */
    ecx = edi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x16C); PUSH32(esp, 0x00133F37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133F31u); } /* indirect call */
    }

loc_00133F37: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00133F50; /* je: equal / zero */

loc_00133F3B: ;
    eax = MEM32(edi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x12C); PUSH32(esp, 0x00133F4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133F44u); } /* indirect call */
    }

loc_00133F4A: ;
    MEM32(esp + 0x14) = eax;
    goto loc_00133F58;

loc_00133F50: ;
    MEM32(esp + 0x14) = 0;

loc_00133F58: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x00133F62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133F5Cu); } /* indirect call */
    }

loc_00133F62: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = edi;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x00133F72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133F6Cu); } /* indirect call */
    }

loc_00133F72: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x00133F80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133F7Au); } /* indirect call */
    }

loc_00133F80: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_00133FFF;

loc_00133F9D: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    ecx = MEM32(edi + 0xF0);
    eax = MEM32(edi);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x12C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x00133FDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133FD4u); } /* indirect call */
    }

loc_00133FDA: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x00133FE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00133FE2u); } /* indirect call */
    }

loc_00133FE8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);

loc_00133FFF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134004u); RECOMP_ABI_CALL(0x0018F5B0u, sub_0018F5B0); /* call 0x0018F5B0 */

loc_00134004: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    edx = MEM32(esp + 0x40);
    esi = MEM32(esi);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = MEM32(edx + 4);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, ~LO8(eax));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (4) _cf = (int)(((ebx) >> (32 - (4))) & 1);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(esi)) >> 32) & 1);
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x24) = ecx;
    MEM8(esp + 0x11) = 0;
    MEM8(esp + 0x12) = 0;
    MEM32(eax + 0x40) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001340DA; /* je: equal / zero */

loc_00134045: ;
    eax = MEM32(esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x31B13C);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134058u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_00134058: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00134095; /* jne: not equal / not zero */

loc_0013405F: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    MEM8(esp + 0x15) = 1;
    MEM32(esp + 0x18) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134075u); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_00134075: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001340CF; /* je: equal / zero */

loc_0013407D: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134088u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_00134088: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134093u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_00134093: ;
    goto loc_001340CF;

loc_00134095: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x31B14C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001340A6u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001340A6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001340BF; /* jne: not equal / not zero */

loc_001340AD: ;
    ecx = MEM32(esi + 0xC);
    SET_LO16(edx, MEM16(esp + 0x24));
    MEM8(esp + 0x12) = 1;
    MEM16(ecx) = LO16(edx);
    goto loc_001340CF;

loc_001340BF: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001340CF; /* je: equal / zero */

loc_001340C7: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001340DA; /* jne: not equal / not zero */

loc_001340CF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00134045; /* jne: not equal / not zero */

loc_001340DA: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001340ECu); RECOMP_ABI_CALL(0x00048AD0u, sub_00048AD0); /* call 0x00048AD0 */

loc_001340EC: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x174); PUSH32(esp, 0x001340F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001340F0u); } /* indirect call */
    }

loc_001340F6: ;
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
 * sub_00134100
 * Original: 0x00134100 - 0x001342B9 (441 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134100(void)
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

loc_00134100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x84);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3C628C); /* addss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x373664); /* addss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x373668); /* addss */
    MEMF(esp + 0x28) = xmm5.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 2;
    ecx = esi + 0x264;

loc_00134197: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001341A6; /* jne: not equal / not zero */

loc_0013419C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00134197; /* jge: greater or equal (signed >=) */

loc_001341A4: ;
    goto loc_001341B0;

loc_001341A6: ;
    eax = MEM32(esi + eax * 4 + 0x25C);
    edx = MEM32(eax + 0xC);

loc_001341B0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(MEMF(edx + 0x98) / fp_top()); /* fdivr dword ptr [edx + 0x98] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001341DDu); RECOMP_ABI_CALL(0x002BE594u, sub_002BE594); /* call 0x002BE594 */

loc_001341DD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    PUSH32(esp, 0x31B1D0);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x373660)); /* fadd dword ptr [0x373660] */
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0x8C;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xD0) = 0;
    MEM32(esp + 0x8C) = 0x31B174;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013426Fu); RECOMP_ABI_CALL(0x001D7F80u, sub_001D7F80); /* call 0x001D7F80 */

loc_0013426F: ;
    eax = esp + 0x84;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134280u); RECOMP_ABI_CALL(0x001346E0u, sub_001346E0); /* call 0x001346E0 */

loc_00134280: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(esi + 0x140, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    XMM_STORE(esi + 0x150, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    XMM_STORE(esi + 0x160, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x70); /* movaps */
    XMM_STORE(esi + 0x170, xmm0); /* movaps */
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
 * sub_001342C0
 * Original: 0x001342C0 - 0x00134350 (144 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001342C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001342C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001342CBu); RECOMP_ABI_CALL(0x0012EFE0u, sub_0012EFE0); /* call 0x0012EFE0 */

loc_001342CB: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x90;
    MEM32(esi) = 0x31B180;
    MEM32(esi + 0x70) = 0x31B178;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;
    PUSH32(esp, 0x001342F1u); RECOMP_ABI_CALL(0x000BDB80u, sub_000BDB80); /* call 0x000BDB80 */

loc_001342F1: ;
    ecx = esi + 0x190;
    PUSH32(esp, 0x001342FCu); RECOMP_ABI_CALL(0x001911A0u, sub_001911A0); /* call 0x001911A0 */

loc_001342FC: ;
    MEM8(esi + 0x251) = LO8(ebx);
    MEM32(esi + 0x254) = ebx;
    MEM32(esi + 0x258) = ebx;
    edi = esi + 0x25C;
    eax = edi;
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    ebp = 5;
    /* nop */

loc_00134330: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134343; /* je: equal / zero */

loc_00134336: ;
    MEM32(edi) = ebx;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00134343; /* jne: not equal / not zero */

loc_0013433D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00134343u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00134341u); } /* indirect call */
    }

loc_00134343: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00134330; /* jne: not equal / not zero */

loc_00134349: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00134350
 * Original: 0x00134350 - 0x00134667 (791 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134350(void)
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

loc_00134350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xA4));
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x84);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x00134371u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013436Bu); } /* indirect call */
    }

loc_00134371: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x0013437Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00134379u); } /* indirect call */
    }

loc_0013437F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(0x2FF460)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0013465E; /* ja: above (unsigned >) */

loc_00134393: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013439Eu); RECOMP_ABI_CALL(0x00133D50u, sub_00133D50); /* call 0x00133D50 */

loc_0013439E: ;
    eax = MEM32(esi + 0x84);
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    ecx = MEM32(esi + 0x84);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x70, xmm1); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(esp + 0x90, xmm1); /* movaps */
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x001343E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001343DCu); } /* indirect call */
    }

loc_001343E2: ;
    edi = eax;
    eax = MEM32(esi + 0x258);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00134445; /* jne: not equal / not zero */

loc_001343EE: ;
    esi = MEM32(esi + 0x254);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013441B; /* jne: not equal / not zero */

loc_001343F9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013465E; /* je: equal / zero */

loc_00134401: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134409u); RECOMP_ABI_CALL(0x000FA090u, sub_000FA090); /* call 0x000FA090 */

loc_00134409: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134412u); RECOMP_ABI_CALL(0x000FB060u, sub_000FB060); /* call 0x000FB060 */

loc_00134412: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0013441B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013465E; /* jne: not equal / not zero */

loc_00134424: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013465E; /* je: equal / zero */

loc_0013442C: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134433u); RECOMP_ABI_CALL(0x000F8D30u, sub_000F8D30); /* call 0x000F8D30 */

loc_00134433: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013443Cu); RECOMP_ABI_CALL(0x000FB060u, sub_000FB060); /* call 0x000FB060 */

loc_0013443C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00134445: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00134459; /* je: equal / zero */

loc_00134449: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134450u); RECOMP_ABI_CALL(0x000F8D30u, sub_000F8D30); /* call 0x000F8D30 */

loc_00134450: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134459u); RECOMP_ABI_CALL(0x000FB060u, sub_000FB060); /* call 0x000FB060 */

loc_00134459: ;
    ecx = MEM32(esi + 0x258);
    edx = MEM32(ecx + 0xC);
    ecx = ebx;
    MEM32(esp + 0x18) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013446Du); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_0013446D: ;
    edi = eax;
    MEM32(edi + 0x58) = 0x133E00;
    eax = MEM32(esi + 0x84);
    MEM32(edi + 0x48) = eax;
    xmm0 = XMM_MEM(esp + 0x80); /* movaps */
    xmm1 = XMM_MEM(esp + 0x70); /* movaps */
    XMM_STORE(edi, xmm1); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xA0); /* movaps */
    xmm1 = XMM_MEM(esp + 0x90); /* movaps */
    XMM_STORE(edi + 0x20, xmm1); /* movaps */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    ecx = MEM32(esi + 0x258);
    MEM32(edi + 0x4C) = ecx;
    edx = MEM32(esi + 0x80);
    _cf = 0; /* logical op clears CF */
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x50) = edx;
    _fa = (uint32_t)(MEM8(esi + 0x80)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x80), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001344CE; /* je: equal / zero */

loc_001344C9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    goto loc_0013450D;

loc_001344CE: ;
    ecx = MEM32(esi + 0x84);
    edx = MEM32(ecx);
    eax = ecx;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x001344E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001344DCu); } /* indirect call */
    }

loc_001344E2: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x001344F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001344ECu); } /* indirect call */
    }

loc_001344F2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    PUSH32(esp, edi);
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00134509; /* jbe: below or equal (unsigned <=) */

loc_00134503: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, ecx);
    goto loc_0013450D;

loc_00134509: ;
    edx = MEM32(esi + 0x64);
    PUSH32(esp, edx);

loc_0013450D: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134514u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_00134514: ;
    eax = MEM32(esi + 0x258);
    SET_LO8(ecx, MEM8(eax + 0x28));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013465E; /* jne: not equal / not zero */

loc_00134525: ;
    _fa = (uint32_t)(MEM8(esi + 0x80)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x80), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0013465E; /* jne: not equal / not zero */

loc_00134532: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x98);
    ecx = MEM32(esi + 0x84);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esp + 0x1C) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x154); PUSH32(esp, 0x00134550u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013454Au); } /* indirect call */
    }

loc_00134550: ;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013455Au); RECOMP_ABI_CALL(0x00012760u, sub_00012760); /* call 0x00012760 */

loc_0013455A: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x84);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013456Au); RECOMP_ABI_CALL(0x0001FA50u, sub_0001FA50); /* call 0x0001FA50 */

loc_0013456A: ;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134578u); RECOMP_ABI_CALL(0x0009F6C0u, sub_0009F6C0); /* call 0x0009F6C0 */

loc_00134578: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebx + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x44); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x48); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x38); /* addss */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xB0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x80;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x70); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x74); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x78); /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013460Au); RECOMP_ABI_CALL(0x00133A30u, sub_00133A30); /* call 0x00133A30 */

loc_0013460A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134614u); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_00134614: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edi = eax;
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x58) = 0x133E00;
    eax = MEM32(esi + 0x84);
    MEM32(edi + 0x48) = eax;
    ecx = MEM32(esi + 0x258);
    MEM32(edi + 0x4C) = ecx;
    edx = MEM32(esi + 0x80);
    eax = esp + 0x70;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(edi + 0x50) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134652u); RECOMP_ABI_CALL(0x00012760u, sub_00012760); /* call 0x00012760 */

loc_00134652: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013465Eu); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_0013465E: ;
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
 * sub_00134670
 * Original: 0x00134670 - 0x001346BB (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134670: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = ecx | 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x80) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0013468Fu); RECOMP_ABI_CALL(0x00134350u, sub_00134350); /* call 0x00134350 */

loc_0013468F: ;
    edx = MEM32(esi + 0x80);
    eax = MEM32(esp + 0x10);
    edx = edx & 0xFFFFFFEBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0x80) = edx;
    PUSH32(esp, 0x001346AAu); RECOMP_ABI_CALL(0x0018DDA0u, sub_0018DDA0); /* call 0x0018DDA0 */

loc_001346AA: ;
    ecx = MEM32(esi + 0x130);
    POP32(esp, edi);
    MEM32(ecx + 0x270) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001346C0
 * Original: 0x001346C0 - 0x001346DF (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001346C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001346C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001346CEu); RECOMP_ABI_CALL(0x00133790u, sub_00133790); /* call 0x00133790 */

loc_001346CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001346DA; /* je: equal / zero */

loc_001346D2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001346DAu); RECOMP_ABI_CALL(0x00134350u, sub_00134350); /* call 0x00134350 */

loc_001346DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001346E0
 * Original: 0x001346E0 - 0x00134733 (83 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001346E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001346E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = ecx;
    esi = edi + 0xC;
    edx = eax + 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 2;

loc_001346F6: ;
    ecx = MEM32(esi + -12);
    MEM32(edx + -4) = ecx;
    ecx = MEM32(edi + edx);
    MEM32(edx) = ecx;
    ecx = MEM32(esi + -4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esi);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(edx + 0x14) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(edx + 0x18) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001346F6; /* jne: not equal / not zero */

loc_0013472D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134740
 * Original: 0x00134740 - 0x00134765 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134740: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31B170;
    if (TEST_Z(_fa, _fb)) goto loc_0013475F; /* je: equal / zero */

loc_00134750: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x0013475Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00134756u); } /* indirect call */
    }

loc_0013475C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013475F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134770
 * Original: 0x00134770 - 0x00134778 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134770: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001347F0(); return; /* tail jmp 0x001347F0 */

}

/**
 * sub_00134780
 * Original: 0x00134780 - 0x0013478B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134780: ;
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x190;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001912D0(); return; /* tail jmp 0x001912D0 */

}

/**
 * sub_00134790
 * Original: 0x00134790 - 0x001347A4 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134790: ;
    eax = ZX16(MEM16(esp + 4));
    MEM32(esp + 4) = eax;
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x190;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00191340(); return; /* tail jmp 0x00191340 */

}

/**
 * sub_001347B0
 * Original: 0x001347B0 - 0x001347C4 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001347B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001347B0: ;
    eax = ZX16(MEM16(esp + 4));
    MEM32(esp + 4) = eax;
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x190;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001913C0(); return; /* tail jmp 0x001913C0 */

}

/**
 * sub_001347D0
 * Original: 0x001347D0 - 0x001347E5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001347D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001347D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x190;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001347E2u); RECOMP_ABI_CALL(0x00191950u, sub_00191950); /* call 0x00191950 */

loc_001347E2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001347F0
 * Original: 0x001347F0 - 0x0013480E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001347F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001347F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001347F8u); RECOMP_ABI_CALL(0x00133710u, sub_00133710); /* call 0x00133710 */

loc_001347F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134808; /* je: equal / zero */

loc_001347FF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00134808u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00134805u); } /* indirect call */
    }

loc_00134808: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134810
 * Original: 0x00134810 - 0x00134834 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00134819u); RECOMP_ABI_CALL(0x001317C0u, sub_001317C0); /* call 0x001317C0 */

loc_00134819: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00134840
 * Original: 0x00134840 - 0x0013486F (47 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134840(void)
{

loc_00134840: ;
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(edx, MEM8(esp + 0xC));
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM8(ecx + 0x8C) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x10));
    MEMF(ecx + 0x88) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x8D) = LO8(edx);
    MEM8(ecx + 0x8E) = LO8(eax);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00134870
 * Original: 0x00134870 - 0x001348F8 (136 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134870: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB0);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x0013487Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00134878u); } /* indirect call */
    }

loc_0013487E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134890; /* je: equal / zero */

loc_00134887: ;
    ecx = esi;
    PUSH32(esp, 0x0013488Eu); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_0013488E: ;
    goto loc_00134892;

loc_00134890: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00134892: ;
    ecx = esi;
    MEM32(0x3F2D94) = esi;
    PUSH32(esp, 0x0013489Fu); RECOMP_ABI_CALL(0x001D0830u, sub_001D0830); /* call 0x001D0830 */

loc_0013489F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x001348ABu); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_001348AB: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001348B4u); RECOMP_ABI_CALL(0x001CF090u, sub_001CF090); /* call 0x001CF090 */

loc_001348B4: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001348BDu); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_001348BD: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001348C6u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_001348C6: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001348CFu); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_001348CF: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001348D8u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_001348D8: ;
    PUSH32(esp, 0x201);
    ecx = esi;
    PUSH32(esp, 0x001348E4u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_001348E4: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001348EDu); RECOMP_ABI_CALL(0x001CF1E0u, sub_001CF1E0); /* call 0x001CF1E0 */

loc_001348ED: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001348F6u); RECOMP_ABI_CALL(0x001CF0B0u, sub_001CF0B0); /* call 0x001CF0B0 */

loc_001348F6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134900
 * Original: 0x00134900 - 0x00134935 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134900: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x31B1F0;
    MEM32(esi + 0x70) = 0x31B1E4;
    PUSH32(esp, 0x00134916u); RECOMP_ABI_CALL(0x00131940u, sub_00131940); /* call 0x00131940 */

loc_00134916: ;
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
 * sub_00134940
 * Original: 0x00134940 - 0x001349D9 (153 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134940: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00134955; /* je: equal / zero */

loc_0013494B: ;
    eax = MEM32(ecx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013495B; /* jne: not equal / not zero */

loc_00134955: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0013495B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x84), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001349D3; /* je: equal / zero */

loc_00134964: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x3E8D54);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001349A3; /* jle: less or equal (signed <=) */

loc_00134974: ;
    ebx = MEM32(esp + 0x18);

loc_00134978: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013497Eu); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_0013497E: ;
    esi = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0013498Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00134987u); } /* indirect call */
    }

loc_0013498D: ;
    ecx = MEM32(ebx + 0x11C);
    edx = MEM32(eax + 0x39E8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x60) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001349AD; /* je: equal / zero */

loc_0013499E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00134978; /* jl: less (signed <) */

loc_001349A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001349AD: ;
    eax = MEM32(esi + 0x30);
    ecx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x001349B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001349B3u); } /* indirect call */
    }

loc_001349B9: ;
    edx = MEM32(esp + 0x10);
    ecx = ZX8(LO8(eax));
    eax = MEM32(edx + 0x84);
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001349D3: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001349E0
 * Original: 0x001349E0 - 0x00134A0D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001349E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001349E0: ;
    ecx = MEM32(0x3F2D94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00134A01; /* je: equal / zero */

loc_001349ED: ;
    PUSH32(esp, 0x001349F2u); RECOMP_ABI_CALL(0x001D0960u, sub_001D0960); /* call 0x001D0960 */

loc_001349F2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001349FEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001349F8u); } /* indirect call */
    }

loc_001349FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00134A01: ;
    MEM32(0x3F2D94) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134A10
 * Original: 0x00134A10 - 0x00134A15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134A10: ;
    g_seh_ebp = ebp; sub_00134940(); return; /* tail jmp 0x00134940 */

}

/**
 * sub_00134A20
 * Original: 0x00134A20 - 0x0013520B (2027 bytes, 395 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134A20(void)
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

loc_00134A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1A4));
    esp = esp - 0x1A4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(0x3F2DD0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x3C) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00134A6C; /* jne: not equal / not zero */

loc_00134A44: ;
    xmm0 = XMM_SCALAR(MEMF(0x3024DC)); /* movss */
    _cf = 0; /* logical op clears CF */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3F2DD0) = eax;
    MEMF(0x3F2DC0) = xmm1.f[0]; /* movss */
    MEMF(0x3F2DC4) = xmm1.f[0]; /* movss */
    MEMF(0x3F2DC8) = xmm0.f[0]; /* movss */

loc_00134A6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00134A8A; /* jne: not equal / not zero */

loc_00134A70: ;
    xmm2 = XMM_SCALAR(MEMF(0x300764)); /* movss */
    _cf = 0; /* logical op clears CF */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3F2DD0) = eax;
    MEMF(0x3F2DB4) = xmm2.f[0]; /* movss */
    goto loc_00134A92;

loc_00134A8A: ;
    xmm2 = XMM_SCALAR(MEMF(0x3F2DB4)); /* movss */

loc_00134A92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00134AB0; /* jne: not equal / not zero */

loc_00134A96: ;
    xmm4 = XMM_SCALAR(MEMF(0x317A8C)); /* movss */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3F2DD0) = eax;
    MEMF(0x3F2DB0) = xmm4.f[0]; /* movss */
    goto loc_00134AB8;

loc_00134AB0: ;
    xmm4 = XMM_SCALAR(MEMF(0x3F2DB0)); /* movss */

loc_00134AB8: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0xD8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xE8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE0) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xE4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xF0) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xF4) = xmm1.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0xD0) = xmm3.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0x88); /* mulss */
    MEMF(esp + 0xF8) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x100) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x104) = xmm1.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0x88); /* mulss */
    MEMF(esp + 0x108) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x10C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(esi + 0x88); /* subss */
    MEMF(esp + 0xB4) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm1.f[0]; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(esi + 0x88); /* subss */
    MEMF(esp + 0xC4) = xmm5.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x110) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x114) = xmm1.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esi + 0x88); /* mulss */
    MEMF(esp + 0x118) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x11C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x120) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x124) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x88); /* mulss */
    MEMF(esp + 0x128) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x12C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x130) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x134) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x138) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x13C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x140) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x144) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x148) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x150) = xmm1.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x88); /* subss */
    MEMF(esp + 0x154) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x158) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x15C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x160) = xmm0.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x88); /* subss */
    MEMF(esp + 0x164) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x168) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x16C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x170) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x174) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x178) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x17C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x180) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x184) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x188) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00135204; /* je: equal / zero */

loc_00134D6A: ;
    eax = MEM32(ecx + 4);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x80) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x84) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEMF(esp + 0x8C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134E0Eu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00134E0E: ;
    edx = MEM32(ebp + 8);
    ecx = esp + 0x190;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0xE4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134E24u); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_00134E24: ;
    SET_LO8(ecx, MEM8(0x3F2DD0));
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00134E6C; /* jne: not equal / not zero */

loc_00134E36: ;
    ecx = MEM32(0x3F2DD0);
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm6 = xmm1; /* movaps */
    xmm5 = xmm1; /* movaps */
    MEM32(0x3F2DD0) = ecx;
    MEMF(0x3F2DA0) = xmm6.f[0]; /* movss */
    MEMF(0x3F2DA4) = xmm5.f[0]; /* movss */
    MEMF(0x3F2DA8) = xmm4.f[0]; /* movss */
    goto loc_00134E84;

loc_00134E6C: ;
    xmm4 = XMM_SCALAR(MEMF(0x3F2DA8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x3F2DA4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x3F2DA0)); /* movss */

loc_00134E84: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x190); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x198); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x194); /* subss */
    xmm7 = xmm1; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm7 = xmm0; /* movaps */
    MEMF(esp + 0x1A0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1A4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x1A8) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00134F64; /* jnp: not parity */

loc_00134F35: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 0x14); /* divss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_00134F64: ;
    eax = esp + 0x1A0;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134F75u); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_00134F75: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134F83u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_00134F83: ;
    PUSH32(esp, 0x3F2DA0);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134F91u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_00134F91: ;
    PUSH32(esp, 0x3F2DC0);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134F9Fu); RECOMP_ABI_CALL(0x00264FC0u, sub_00264FC0); /* call 0x00264FC0 */

loc_00134F9F: ;
    edx = MEM32(esi + 0x80);
    eax = MEM32(edx + 4);
    ecx = MEM32(0x3F2D94);
    PUSH32(esp, eax);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134FB6u); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_00134FB6: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edi = ebx + 0x60;
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
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0xE4);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x60)) >> 32) & 1);
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00134FEBu); RECOMP_ABI_CALL(0x00266270u, sub_00266270); /* call 0x00266270 */

loc_00134FEB: ;
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x307EE4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0013509E; /* jbe: below or equal (unsigned <=) */

loc_00134FFF: ;
    edx = MEM32(0x3888C0);
    SET_LO8(eax, MEM8(edx + 0x203D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013503B; /* je: equal / zero */

loc_0013500F: ;
    eax = MEM32(esi + 0xE4);
    xmm1 = XMM_SCALAR(MEMF(0x3F2D98)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF084); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF504); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    goto loc_00135051;

loc_0013503B: ;
    ecx = MEM32(esi + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x316360); /* mulss */

loc_00135051: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135061; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0013505E: ;
    xmm0 = xmm2; /* movaps */

loc_00135061: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x30075C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x300BA0); /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00135089; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00135086: ;
    xmm0 = xmm3; /* movaps */

loc_00135089: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013509E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00135098: ;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */

loc_0013509E: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF800)); /* fmul dword ptr [0x2ff800] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001350ADu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001350AD: ;
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 6);
    ecx = ebx;
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001350C2u); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_001350C2: ;
    edx = esp + 0x90;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xD8;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001350DEu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_001350DE: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xE8;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001350FAu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_001350FA: ;
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x108;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135116u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_00135116: ;
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xF8;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135132u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_00135132: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135139u); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_00135139: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135140u); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_00135140: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEC4C)); /* fmul dword ptr [0x2fec4c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013514Fu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0013514F: ;
    edx = eax;
    eax = MEM32(esp + 0x3C);
    ecx = ZX8(MEM8(eax + 0x8C));
    if (8) _cf = (int)(((edx) >> (32 - (8))) & 1);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(eax + 0x8D));
    eax = ZX8(MEM8(eax + 0x8E));
    if (8) _cf = (int)(((edx) >> (32 - (8))) & 1);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (8) _cf = (int)(((edx) >> (32 - (8))) & 1);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 6);
    ecx = ebx;
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135186u); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_00135186: ;
    ecx = esp + 0x150;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001351A2u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_001351A2: ;
    ecx = esp + 0x160;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x128;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001351BEu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_001351BE: ;
    ecx = esp + 0x180;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x148;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001351DAu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_001351DA: ;
    ecx = esp + 0x170;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x138;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001351F6u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_001351F6: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001351FDu); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_001351FD: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135204u); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_00135204: ;
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
 * sub_00135210
 * Original: 0x00135210 - 0x00135257 (71 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135210(void)
{

loc_00135210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00135218u); RECOMP_ABI_CALL(0x0012EFE0u, sub_0012EFE0); /* call 0x0012EFE0 */

loc_00135218: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi) = 0x31B1F0;
    MEM32(esi + 0x70) = 0x31B1E4;
    MEM32(esi + 0x80) = 0;
    SET_LO8(eax, 0xFF);
    MEM8(esi + 0x8C) = LO8(eax);
    MEM8(esi + 0x8D) = LO8(eax);
    MEM8(esi + 0x8E) = LO8(eax);
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135260
 * Original: 0x00135260 - 0x00135298 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135260: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0013526Eu); RECOMP_ABI_CALL(0x00134940u, sub_00134940); /* call 0x00134940 */

loc_0013526E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135293; /* je: equal / zero */

loc_00135272: ;
    ecx = edi;
    PUSH32(esp, 0x00135279u); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_00135279: ;
    MEM32(eax + 0x48) = esi;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x12);
    ecx = edi;
    MEM32(eax + 0x58) = 0x134A20;
    MEM32(eax + 0x4C) = esi;
    PUSH32(esp, 0x00135293u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_00135293: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001352A0
 * Original: 0x001352A0 - 0x001352A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001352A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001352A0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001352B0(); return; /* tail jmp 0x001352B0 */

}

/**
 * sub_001352B0
 * Original: 0x001352B0 - 0x001352FA (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001352B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001352B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x31B1F0;
    MEM32(esi + 0x70) = 0x31B1E4;
    PUSH32(esp, 0x001352C6u); RECOMP_ABI_CALL(0x00131940u, sub_00131940); /* call 0x00131940 */

loc_001352C6: ;
    MEM32(esi) = 0x31AD08;
    MEM32(esi + 0x70) = 0x31AD00;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x70) = 0x300534;
    PUSH32(esp, 0x001352E4u); RECOMP_ABI_CALL(0x00130720u, sub_00130720); /* call 0x00130720 */

loc_001352E4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001352F4; /* je: equal / zero */

loc_001352EB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x001352F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001352F1u); } /* indirect call */
    }

loc_001352F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135300
 * Original: 0x00135300 - 0x00135301 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135300(void)
{

loc_00135300: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00135310
 * Original: 0x00135310 - 0x00135359 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135310: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    MEM32(esi + 0x80) = edi;
    PUSH32(esp, 0x00135324u); RECOMP_ABI_CALL(0x001317C0u, sub_001317C0); /* call 0x001317C0 */

loc_00135324: ;
    ecx = MEM32(edi + 0xB4);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013534C; /* je: equal / zero */

loc_00135334: ;
    _fa = (uint32_t)(MEM32(edi + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xB8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013534C; /* je: equal / zero */

loc_0013533C: ;
    eax = 1;
    POP32(esp, edi);
    MEM8(esi + 0x90) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0013534C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM8(esi + 0x90) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135360
 * Original: 0x00135360 - 0x00135458 (248 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00135360: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013536E; /* jne: not equal / not zero */

loc_00135368: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0013536E: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x80);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00135451; /* je: equal / zero */

loc_00135385: ;
    eax = MEM32(esi + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00135451; /* je: equal / zero */

loc_00135393: ;
    ecx = MEM32(eax + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00135451; /* je: equal / zero */

loc_0013539E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC0)); /* movss */
    ecx = MEM32(0x3888C0);
    SET_LO8(edx, MEM8(ecx + 0x203D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001353DE; /* je: equal / zero */

loc_001353C0: ;
    xmm1 = XMM_SCALAR(MEMF(0x3F2DD4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF084); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF504); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    goto loc_001353E6;

loc_001353DE: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x316360); /* mulss */

loc_001353E6: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001353F6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001353F3: ;
    xmm0 = xmm1; /* movaps */

loc_001353F6: ;
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0013541F; /* jne: not equal / not zero */

loc_001353FF: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x110)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x31B244); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x114) = xmm2.f[0]; /* movss */

loc_0013541F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00135427u); RECOMP_ABI_CALL(0x00071100u, sub_00071100); /* call 0x00071100 */

loc_00135427: ;
    esi = MEM32(esi + 0xC0);
    eax = MEM32(esi + 0x4C);
    edx = esp + 4;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3FF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00135443u); RECOMP_ABI_CALL(0x00071240u, sub_00071240); /* call 0x00071240 */

loc_00135443: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00135451: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135460
 * Original: 0x00135460 - 0x00135494 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135460: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(0x528378);
    PUSH32(esp, esi);
    MEM32(esi + 0x128) = eax;
    PUSH32(esp, 0x0013547Cu); RECOMP_ABI_CALL(0x000734A0u, sub_000734A0); /* call 0x000734A0 */

loc_0013547C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00135486u); RECOMP_ABI_CALL(0x00071990u, sub_00071990); /* call 0x00071990 */

loc_00135486: ;
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00135491u); RECOMP_ABI_CALL(0x001CBBC0u, sub_001CBBC0); /* call 0x001CBBC0 */

loc_00135491: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001354A0
 * Original: 0x001354A0 - 0x001354CF (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001354A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001354A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(esi + 0xC0);
    ecx = MEM32(eax + 0x4C);
    PUSH32(esp, 0x1F);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001354BEu); RECOMP_ABI_CALL(0x00071720u, sub_00071720); /* call 0x00071720 */

loc_001354BE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001354C6u); RECOMP_ABI_CALL(0x00070C80u, sub_00070C80); /* call 0x00070C80 */

loc_001354C6: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00071990(); return; /* tail jmp 0x00071990 */

}

/**
 * sub_001354D0
 * Original: 0x001354D0 - 0x00135516 (70 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001354D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001354D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ebx = MEM32(esi + 4);
    ebp = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ecx = edi;
    PUSH32(esp, 0x001354E8u); RECOMP_ABI_CALL(0x00194660u, sub_00194660); /* call 0x00194660 */

loc_001354E8: ;
    ecx = MEM32(esi);
    MEM32(0x3BCA18) = edi;
    eax = MEM32(ecx + 0xC0);
    edx = MEM32(eax + 0x4C);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00135500u); RECOMP_ABI_CALL(0x00072610u, sub_00072610); /* call 0x00072610 */

loc_00135500: ;
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0013550Bu); RECOMP_ABI_CALL(0x001CBBC0u, sub_001CBBC0); /* call 0x001CBBC0 */

loc_0013550B: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00193D00(); return; /* tail jmp 0x00193D00 */

}

/**
 * sub_00135520
 * Original: 0x00135520 - 0x00135525 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135520: ;
    g_seh_ebp = ebp; sub_00135360(); return; /* tail jmp 0x00135360 */

}

/**
 * sub_00135530
 * Original: 0x00135530 - 0x001356E1 (433 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00135530: ;
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
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013554Bu); RECOMP_ABI_CALL(0x00135360u, sub_00135360); /* call 0x00135360 */

loc_0013554B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001356D8; /* je: equal / zero */

loc_00135553: ;
    ebx = MEM32(esi + 0x80);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135561u); RECOMP_ABI_CALL(0x00071940u, sub_00071940); /* call 0x00071940 */

loc_00135561: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135568u); RECOMP_ABI_CALL(0x00073640u, sub_00073640); /* call 0x00073640 */

loc_00135568: ;
    eax = MEM32(edi + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC0)); /* movss */
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x203D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001355A3; /* je: equal / zero */

loc_00135585: ;
    xmm1 = XMM_SCALAR(MEMF(0x3F2DD4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF084); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF504); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    goto loc_001355AB;

loc_001355A3: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x316360); /* mulss */

loc_001355AB: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001355BB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001355B8: ;
    xmm0 = xmm1; /* movaps */

loc_001355BB: ;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001355E4; /* jne: not equal / not zero */

loc_001355C4: ;
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x110)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x31B244); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebx + 0x114) = xmm2.f[0]; /* movss */

loc_001355E4: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001355ECu); RECOMP_ABI_CALL(0x00071100u, sub_00071100); /* call 0x00071100 */

loc_001355EC: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001355F4u); RECOMP_ABI_CALL(0x00071A10u, sub_00071A10); /* call 0x00071A10 */

loc_001355F4: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001355FCu); RECOMP_ABI_CALL(0x00073270u, sub_00073270); /* call 0x00073270 */

loc_001355FC: ;
    ecx = MEM32(ebx + 0xD0);
    eax = MEM32(ebx + 0xD4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001356D8; /* jbe: below or equal (unsigned <=) */

loc_0013561F: ;
    /* nop */

loc_00135620: ;
    edx = MEM32(ebx + 0xD0);
    esi = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001356C7; /* je: equal / zero */

loc_00135631: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135638u); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_00135638: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x58) = 0x135460;
    edx = MEM32(ecx + 0x80);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x4C) = esi;
    MEM32(eax + 0x54) = edx;
    ecx = MEM32(ebx + 0x110);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(edi + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x60); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x64); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x68); /* subss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x44) = xmm3.f[0]; /* movss */
    ecx = edi;
    PUSH32(esp, eax);
    if (CMP_BE(_fa, _fb)) goto loc_001356BC; /* jbe: below or equal (unsigned <=) */

loc_001356B8: ;
    PUSH32(esp, 9);
    goto loc_001356BE;

loc_001356BC: ;
    PUSH32(esp, 3);

loc_001356BE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001356C3u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_001356C3: ;
    eax = MEM32(esp + 0x18);

loc_001356C7: ;
    ecx = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00135620; /* jb: below (unsigned <) */

loc_001356D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001356F0
 * Original: 0x001356F0 - 0x00135729 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001356F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001356F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001356F8u); RECOMP_ABI_CALL(0x0012EFE0u, sub_0012EFE0); /* call 0x0012EFE0 */

loc_001356F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x84;
    MEM32(esi) = 0x31B250;
    MEM32(esi + 0x70) = 0x31B248;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    PUSH32(esp, 0x80);
    MEM8(esi + 0x90) = LO8(eax);
    PUSH32(esp, 0x00135725u); RECOMP_ABI_CALL(0x000762D0u, sub_000762D0); /* call 0x000762D0 */

loc_00135725: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135730
 * Original: 0x00135730 - 0x00135778 (72 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135730: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x31B250;
    MEM32(esi + 0x70) = 0x31B248;
    PUSH32(esp, 0x00135746u); RECOMP_ABI_CALL(0x00131940u, sub_00131940); /* call 0x00131940 */

loc_00135746: ;
    eax = MEM32(esi + 0x84);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013575C; /* je: equal / zero */

loc_00135753: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00135759u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00135759: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013575C: ;
    MEM32(esi) = 0x31AD08;
    MEM32(esi + 0x70) = 0x31AD00;
    MEM32(esi + 0x70) = 0x300534;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130720(); return; /* tail jmp 0x00130720 */

}

/**
 * sub_00135780
 * Original: 0x00135780 - 0x001359F9 (633 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135780: ;
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
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013579Bu); RECOMP_ABI_CALL(0x00135360u, sub_00135360); /* call 0x00135360 */

loc_0013579B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001359F0; /* je: equal / zero */

loc_001357A3: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001359F0; /* jne: not equal / not zero */

loc_001357B5: ;
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0xD4);
    eax = MEM32(esi + 0xD0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001359F0; /* jbe: below or equal (unsigned <=) */

loc_001357D1: ;
    edx = eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001359F0; /* je: equal / zero */

loc_001357DC: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x84;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001357E9u); RECOMP_ABI_CALL(0x00135FC0u, sub_00135FC0); /* call 0x00135FC0 */

loc_001357E9: ;
    eax = MEM32(edi + 0x104);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001358DA; /* je: equal / zero */

loc_001357FA: ;
    esi = MEM32(eax);
    edx = esi;
    eax = edx + ecx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001358A2; /* je: equal / zero */

loc_00135809: ;
    /* nop */

loc_00135810: ;
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(ecx + 0x24C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00135889; /* je: equal / zero */

loc_00135820: ;
    edx = esp + 0x30;
    MEM32(esp + 0x30) = 0x302260;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x00135835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013582Fu); } /* indirect call */
    }

loc_00135835: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013583Cu); RECOMP_ABI_CALL(0x00135A00u, sub_00135A00); /* call 0x00135A00 */

loc_0013583C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    eax = MEM32(esp + 0x34);
    edx = MEM32(edi);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00135871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013586Eu); } /* indirect call */
    }

loc_00135871: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135881; /* je: equal / zero */

loc_00135875: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135881u); RECOMP_ABI_CALL(0x0013DAA0u, sub_0013DAA0); /* call 0x0013DAA0 */

loc_00135881: ;
    MEM32(esp + 0x30) = 0x30222C;

loc_00135889: ;
    eax = MEM32(edi + 0x104);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + ecx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00135810; /* jne: not equal / not zero */

loc_001358A2: ;
    eax = MEM32(edi + 0xE4);
    edx = MEM32(eax + 0x60);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ecx + 0x88);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001358D4u); RECOMP_ABI_CALL(0x00136500u, sub_00136500); /* call 0x00136500 */

loc_001358D4: ;
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001358DA: ;
    edx = MEM32(ebx + 4);
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001359F0; /* jbe: below or equal (unsigned <=) */

loc_001358F0: ;
    goto loc_001358F5;

loc_001358F2: ;
    esi = MEM32(ebp + 0xC);

loc_001358F5: ;
    eax = MEM32(ebx);
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(eax + ecx * 4);
    MEM32(0x3BCA20) = 0;
    edx = MEM32(esi + 0xC0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F);
    esi = edi + 1;
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x00135920u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013591Au); } /* indirect call */
    }

loc_00135920: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx + 0x4C);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135931u); RECOMP_ABI_CALL(0x00072830u, sub_00072830); /* call 0x00072830 */

loc_00135931: ;
    eax = MEM32(0x3BCA20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013594D; /* je: equal / zero */

loc_0013593A: ;
    eax = MEM32(ebx);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax + ecx * 4);
    MEM32(eax + edi * 4) = edx;
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00135964; /* jge: greater or equal (signed >=) */

loc_0013594D: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001358F2; /* jb: below (unsigned <) */

loc_00135964: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001359F0; /* jle: less or equal (signed <=) */

loc_0013596C: ;
    esi = MEM32(ebp + 0xC);
    edx = MEM32(esi + 0xD0);
    eax = MEM32(edx);
    ecx = MEM32(ebp + 8);
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135983u); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_00135983: ;
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x48) = esi;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xB);
    MEM32(eax + 0x58) = 0x1354A0;
    MEM32(eax + 0x4C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013599Du); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_0013599D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001359F0; /* jle: less or equal (signed <=) */

loc_001359A1: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx + esi * 4);
    edx = MEM32(eax + 0xB8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001359B7u); RECOMP_ABI_CALL(0x000BE9D0u, sub_000BE9D0); /* call 0x000BE9D0 */

loc_001359B7: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001359C2u); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_001359C2: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x48) = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEM32(eax + 0x54) = ecx;
    ecx = MEM32(ebp + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xC);
    MEM32(eax + 0x58) = 0x1354D0;
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x50) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001359ECu); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_001359EC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001359A1; /* jl: less (signed <) */

loc_001359F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00135A00
 * Original: 0x00135A00 - 0x00135A2F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ecx;
    edx = MEM32(eax + 0x40);
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x44);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x48);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 0x110);
    edx = MEM32(ecx);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00135A29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00135A26u); } /* indirect call */
    }

loc_00135A29: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135A30
 * Original: 0x00135A30 - 0x00135ABF (143 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135A30(void)
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

loc_00135A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    esi = ecx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135A8Eu); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135A8E: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135A9Eu); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135A9E: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00135AB6; /* jbe: below or equal (unsigned <=) */

loc_00135AAA: ;
    eax = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00135AB6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_00135AC0
 * Original: 0x00135AC0 - 0x00135B42 (130 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135AC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00135ADAu); RECOMP_ABI_CALL(0x00135A30u, sub_00135A30); /* call 0x00135A30 */

loc_00135ADA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_00135B14; /* je: equal / zero */

loc_00135AE2: ;
    edx = MEM32(ebx);
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00135AF1u); RECOMP_ABI_CALL(0x00135A30u, sub_00135A30); /* call 0x00135A30 */

loc_00135AF1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00135B3C; /* jne: not equal / not zero */

loc_00135AF5: ;
    ecx = MEM32(ebx);
    edx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00135B04u); RECOMP_ABI_CALL(0x00135A30u, sub_00135A30); /* call 0x00135A30 */

loc_00135B04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135B0E; /* je: equal / zero */

loc_00135B08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00135B0E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00135B14: ;
    eax = MEM32(ebx);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00135B23u); RECOMP_ABI_CALL(0x00135A30u, sub_00135A30); /* call 0x00135A30 */

loc_00135B23: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00135B0E; /* jne: not equal / not zero */

loc_00135B27: ;
    edx = MEM32(ebx);
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00135B36u); RECOMP_ABI_CALL(0x00135A30u, sub_00135A30); /* call 0x00135A30 */

loc_00135B36: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00135B3E; /* jne: not equal / not zero */

loc_00135B3C: ;
    eax = esi;

loc_00135B3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00135B50
 * Original: 0x00135B50 - 0x00135BF4 (164 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135B50(void)
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

loc_00135B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ebx + -4;
    goto loc_00135B70;

    /* nop */
    edi = edi;

loc_00135B70: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    eax = MEM32(esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp + 0x10;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135BC3u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135BC3: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135BD4u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135BD4: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00135BEB; /* jbe: below or equal (unsigned <=) */

loc_00135BE0: ;
    edx = MEM32(esi);
    MEM32(ebx) = edx;
    ebx = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(4));
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00135B70;

loc_00135BEB: ;
    MEM32(ebx) = edi;
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
 * sub_00135C00
 * Original: 0x00135C00 - 0x00135CEA (234 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135C00(void)
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

loc_00135C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    eax = ecx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x10);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((1) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00135CDA; /* jle: less or equal (signed <=) */

loc_00135C24: ;
    ebx = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 8);
    /* nop */

loc_00135C30: ;
    eax = MEM32(edi + esi * 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x64)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    PUSH32(esp, eax);
    ecx = ebp + 0x18;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135C85u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135C85: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135C96u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135C96: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00135CCD; /* jbe: below or equal (unsigned <=) */

loc_00135CA2: ;
    edx = MEM32(edi + esi * 4);
    eax = MEM32(ebp + 0xC);
    MEM32(edi + eax * 4) = edx;
    eax = esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = esi;
    esi = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0xC) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00135C30; /* jg: greater (signed >) */

loc_00135CC3: ;
    MEM32(edi + ecx * 4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00135CCD: ;
    edx = MEM32(ebp + 0xC);
    MEM32(edi + edx * 4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00135CDA: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + ecx * 4) = eax;
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
 * sub_00135CF0
 * Original: 0x00135CF0 - 0x00135E0C (284 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135CF0(void)
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

loc_00135CF0: ;
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
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);

loc_00135D05: ;
    eax = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    PUSH32(esp, eax);
    ecx = ebp + 0x14;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135D59u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135D59: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135D6Au); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135D6A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00135D7B; /* jbe: below or equal (unsigned <=) */

loc_00135D76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00135D05;

loc_00135D7B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    eax = MEM32(ebx + -4);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(4));
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = esp + 0x30;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, edx);
    ecx = ebp + 0x14;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135DD2u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135DD2: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = ebp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135DE3u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135DE3: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00135D7B; /* ja: above (unsigned >) */

loc_00135DEF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00135E03; /* jae: above or equal (unsigned >=) */

loc_00135DF3: ;
    eax = MEM32(edi);
    ecx = MEM32(ebx);
    MEM32(edi) = ecx;
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00135D05;

loc_00135E03: ;
    eax = edi;
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
 * sub_00135E10
 * Original: 0x00135E10 - 0x00135E5B (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135E10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135E58; /* je: equal / zero */

loc_00135E1E: ;
    edi = edi;

loc_00135E20: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00135E4Eu); RECOMP_ABI_CALL(0x00135B50u, sub_00135B50); /* call 0x00135B50 */

loc_00135E4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00135E20; /* jne: not equal / not zero */

loc_00135E58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135E60
 * Original: 0x00135E60 - 0x00135F5F (255 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E60(void)
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

loc_00135E60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ebx + ebx + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(esp + 0x1C) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00135F17; /* jge: greater or equal (signed >=) */

loc_00135E85: ;
    eax = MEM32(edi + esi * 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(edi + esi * 4 + -4);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebp + 0x18;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135EE0u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135EE0: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = ebp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135EF1u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00135EF1: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00135EFE; /* jbe: below or equal (unsigned <=) */

loc_00135EFD: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00135EFE: ;
    edx = MEM32(edi + esi * 4);
    eax = MEM32(ebp + 0x10);
    MEM32(edi + ebx * 4) = edx;
    ebx = esi;
    esi = esi + esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00135E85; /* jl: less (signed <) */

loc_00135F15: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);

loc_00135F17: ;
    if (CMP_NE(_fa, _fb)) goto loc_00135F23; /* jne: not equal / not zero */

loc_00135F19: ;
    eax = MEM32(edi + esi * 4 + -4);
    MEM32(edi + ebx * 4) = eax;
    ebx = esi + -1;

loc_00135F23: ;
    ecx = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00135F55u); RECOMP_ABI_CALL(0x00135C00u, sub_00135C00); /* call 0x00135C00 */

loc_00135F55: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00135F60
 * Original: 0x00135F60 - 0x00135FBF (95 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135F60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00135FBB; /* jl: less (signed <) */

loc_00135F75: ;
    eax = edi + -2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    /* nop */

loc_00135F80: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + esi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00135FB1u); RECOMP_ABI_CALL(0x00135E60u, sub_00135E60); /* call 0x00135E60 */

loc_00135FB1: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00135FBB; /* je: equal / zero */

loc_00135FB8: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00135F80;

loc_00135FBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00135FC0
 * Original: 0x00135FC0 - 0x00135FE9 (41 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00135FC0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    ecx = MEM32(edi);
    if (CMP_NE(_fa, _fb)) goto loc_00135FD1; /* jne: not equal / not zero */

loc_00135FCC: ;
    MEM32(edi + 4) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00135FD1: ;
    PUSH32(esp, esi);
    esi = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00135FDEu); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_00135FDE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi + 4) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135FF0
 * Original: 0x00135FF0 - 0x00135FF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135FF0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001361B0(); return; /* tail jmp 0x001361B0 */

}

/**
 * sub_00136000
 * Original: 0x00136000 - 0x0013612C (300 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136000(void)
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

loc_00136000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00136125; /* je: equal / zero */

loc_0013601A: ;
    edi = eax + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00136125; /* je: equal / zero */

loc_00136025: ;
    ebx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00136030;

loc_0013602B: ;
    eax = MEM32(ebp + 8);
    edi = edi;

loc_00136030: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    esi = MEM32(edi);
    eax = MEM32(eax);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001360A7u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_001360A7: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001360B9u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_001360B9: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001360E5; /* jbe: below or equal (unsigned <=) */

loc_001360C5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001360DE; /* jle: less or equal (signed <=) */

loc_001360C9: ;
    edx = MEM32(ebp + 8);
    eax = edi;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001360DBu); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_001360DB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001360DE: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = esi;
    goto loc_00136114;

loc_001360E5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00136111u); RECOMP_ABI_CALL(0x00135B50u, sub_00135B50); /* call 0x00135B50 */

loc_00136111: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00136114: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0013602B; /* jne: not equal / not zero */

loc_00136125: ;
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
 * sub_00136130
 * Original: 0x00136130 - 0x001361A3 (115 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136130: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001361A0; /* jle: less or equal (signed <=) */

loc_00136146: ;
    goto loc_00136150;

    /* nop */
    /* nop */

loc_00136150: ;
    edx = MEM32(esi + eax + -4);
    ecx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + eax + -4) = ecx;
    ecx = esp;
    PUSH32(esp, edx);
    edi = eax + -4;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edx);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00136191u); RECOMP_ABI_CALL(0x00135E60u, sub_00135E60); /* call 0x00135E60 */

loc_00136191: ;
    eax = edi;
    ecx = edi;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00136150; /* jg: greater (signed >) */

loc_001361A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001361B0
 * Original: 0x001361B0 - 0x0013620D (93 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001361B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001361B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x31B250;
    MEM32(esi + 0x70) = 0x31B248;
    PUSH32(esp, 0x001361C6u); RECOMP_ABI_CALL(0x00131940u, sub_00131940); /* call 0x00131940 */

loc_001361C6: ;
    eax = MEM32(esi + 0x84);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001361DC; /* je: equal / zero */

loc_001361D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001361D9u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001361D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001361DC: ;
    MEM32(esi) = 0x31AD08;
    MEM32(esi + 0x70) = 0x31AD00;
    ecx = esi;
    MEM32(esi + 0x70) = 0x300534;
    PUSH32(esp, 0x001361F7u); RECOMP_ABI_CALL(0x00130720u, sub_00130720); /* call 0x00130720 */

loc_001361F7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136207; /* je: equal / zero */

loc_001361FE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00136207u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00136204u); } /* indirect call */
    }

loc_00136207: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136210
 * Original: 0x00136210 - 0x00136296 (134 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136210: ;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00136289; /* jle: less or equal (signed <=) */

loc_0013624B: ;
    esi = ecx + 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00136255u); RECOMP_ABI_CALL(0x00136000u, sub_00136000); /* call 0x00136000 */

loc_00136255: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, 0);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00136283u); RECOMP_ABI_CALL(0x00135E10u, sub_00135E10); /* call 0x00135E10 */

loc_00136283: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00136289: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00136290u); RECOMP_ABI_CALL(0x00136000u, sub_00136000); /* call 0x00136000 */

loc_00136290: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001362A0
 * Original: 0x001362A0 - 0x001363E2 (322 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001362A0(void)
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

loc_001362A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001362DFu); RECOMP_ABI_CALL(0x00135F60u, sub_00135F60); /* call 0x00135F60 */

loc_001362DF: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_001363AF; /* jae: above or equal (unsigned >=) */

loc_001362EF: ;
    /* nop */

loc_001362F0: ;
    eax = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(edi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp + 0x18;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00136348u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00136348: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00136359u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00136359: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001363A1; /* jbe: below or equal (unsigned <=) */

loc_00136365: ;
    ecx = MEM32(esi);
    edx = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(esi) = edx;
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    eax = ebx;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((2) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((2) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013639Eu); RECOMP_ABI_CALL(0x00135E60u, sub_00135E60); /* call 0x00135E60 */

loc_0013639E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001363A1: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001362F0; /* jb: below (unsigned <) */

loc_001363AF: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001363D8u); RECOMP_ABI_CALL(0x00136130u, sub_00136130); /* call 0x00136130 */

loc_001363D8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001363F0
 * Original: 0x001363F0 - 0x001364F3 (259 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001363F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001363F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001364EE; /* jle: less or equal (signed <=) */

loc_0013640C: ;
    ebp = MEM32(esp + 0x20);

loc_00136410: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    eax = esp;
    if (CMP_EQ(_fa, _fb)) goto loc_001364C1; /* je: equal / zero */

loc_0013641D: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi + -4;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ecx);
    edx = ebx + eax * 4;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0013646Bu); RECOMP_ABI_CALL(0x00135AC0u, sub_00135AC0); /* call 0x00135AC0 */

loc_0013646B: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00136478u); RECOMP_ABI_CALL(0x00135CF0u, sub_00135CF0); /* call 0x00135CF0 */

loc_00136478: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = esp;
    PUSH32(esp, ebp);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    PUSH32(esp, 0);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001364A9u); RECOMP_ABI_CALL(0x001363F0u, sub_001363F0); /* call 0x001363F0 */

loc_001364A9: ;
    edi = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi & 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00136410; /* jg: greater (signed >) */

loc_001364BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001364C1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    PUSH32(esp, 0);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    PUSH32(esp, edi);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001364EBu); RECOMP_ABI_CALL(0x001362A0u, sub_001362A0); /* call 0x001362A0 */

loc_001364EB: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001364EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00136500
 * Original: 0x00136500 - 0x00136588 (136 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136500: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136585; /* je: equal / zero */

loc_0013650E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136549; /* je: equal / zero */

loc_00136541: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00136541; /* jne: not equal / not zero */

loc_00136549: ;
    eax = ecx + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00136556u); RECOMP_ABI_CALL(0x001363F0u, sub_001363F0); /* call 0x001363F0 */

loc_00136556: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00136582u); RECOMP_ABI_CALL(0x00136210u, sub_00136210); /* call 0x00136210 */

loc_00136582: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00136585: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00136590
 * Original: 0x00136590 - 0x001365AE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136590: ;
    eax = MEM32(0x37FC24);
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3021CE);
    { uint32_t _icall_target = MEM32(0x37FC1C); PUSH32(esp, 0x001365AAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001365A4u); } /* indirect call */
    }

loc_001365AA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001365B0
 * Original: 0x001365B0 - 0x00136622 (114 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001365B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001365B0: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001365C1; /* jge: greater or equal (signed >=) */

loc_001365BC: ;
    ecx = 0x80;

loc_001365C1: ;
    eax = MEM32(0x3F2DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136602; /* je: equal / zero */

loc_001365CA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    eax = eax | MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001365E6u); RECOMP_ABI_CALL(0x001B9F5Bu, sub_001B9F5B); /* call 0x001B9F5B */

loc_001365E6: ;
    edx = eax;
    ecx = esi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00136602: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x31B2A8);
    PUSH32(esp, 0x00136618u); RECOMP_ABI_CALL(0x001550D0u, sub_001550D0); /* call 0x001550D0 */

loc_00136618: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00136630
 * Original: 0x00136630 - 0x0013665D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136630: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013665A; /* je: equal / zero */

loc_00136638: ;
    ecx = MEM32(0x3F2DD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013664E; /* je: equal / zero */

loc_00136642: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136648u); RECOMP_ABI_CALL(0x001BA030u, sub_001BA030); /* call 0x001BA030 */

loc_00136648: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0013664E: ;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136657u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00136657: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013665A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00136660
 * Original: 0x00136660 - 0x001366A1 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136660: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136695; /* je: equal / zero */

loc_00136669: ;
    PUSH32(esp, 0x0013666Eu); RECOMP_ABI_CALL(0x001BA402u, sub_001BA402); /* call 0x001BA402 */

loc_0013666E: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B2D4);
    PUSH32(esp, eax);
    MEM32(0x3F2DD8) = eax;
    PUSH32(esp, 0x00136690u); RECOMP_ABI_CALL(0x001BA214u, sub_001BA214); /* call 0x001BA214 */

loc_00136690: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00136695: ;
    MEM32(0x3F2DD8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001366B0
 * Original: 0x001366B0 - 0x001366CD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001366B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001366B0: ;
    eax = MEM32(0x3F2DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001366CC; /* je: equal / zero */

loc_001366B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001366BFu); RECOMP_ABI_CALL(0x001BA393u, sub_001BA393); /* call 0x001BA393 */

loc_001366BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3F2DD8) = 0;

loc_001366CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001366D0
 * Original: 0x001366D0 - 0x0013676A (154 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001366D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001366D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00136708; /* je: equal / zero */

loc_001366DF: ;
    PUSH32(esp, 0x001366E4u); RECOMP_ABI_CALL(0x001BA402u, sub_001BA402); /* call 0x001BA402 */

loc_001366E4: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x31B2D4);
    PUSH32(esp, eax);
    MEM32(0x3F2DD8) = eax;
    PUSH32(esp, 0x00136703u); RECOMP_ABI_CALL(0x001BA214u, sub_001BA214); /* call 0x001BA214 */

loc_00136703: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013670E;

loc_00136708: ;
    MEM32(0x3F2DD8) = edi;

loc_0013670E: ;
    edx = MEM32(0x3F2DD8);
    MEM32(esi + 0xD4) = edi;
    MEM32(esi + 0xD8) = edi;
    MEM32(esi + 0xE0) = edi;
    MEM32(esi + 0xDC) = edi;
    MEM32(esi + 0xE4) = edi;
    MEM32(esi + 0xCC) = edi;
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0xEC) = edi;
    MEM32(esi + 0xF0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x37FC1C) = 0x1365B0;
    MEM32(0x37FC20) = 0x136630;
    MEM32(0x37FC24) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00136770
 * Original: 0x00136770 - 0x001367BD (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00136770: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001367B8; /* ja: above (unsigned >) */

loc_00136779: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1367C0); /* switch: 9 entries, 8 targets */
    if (_jt == 0x00136780u) goto loc_00136780;
    if (_jt == 0x00136788u) goto loc_00136788;
    if (_jt == 0x00136790u) goto loc_00136790;
    if (_jt == 0x00136798u) goto loc_00136798;
    if (_jt == 0x001367A0u) goto loc_001367A0;
    if (_jt == 0x001367A8u) goto loc_001367A8;
    if (_jt == 0x001367B0u) goto loc_001367B0;
    if (_jt == 0x001367B8u) goto loc_001367B8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00136780: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00136788: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_00136790: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_00136798: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_001367A0: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

loc_001367A8: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_001367B0: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_001367B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001367F0
 * Original: 0x001367F0 - 0x00136824 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001367F0(void)
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

loc_001367F0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xDC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136820; /* je: equal / zero */

loc_001367FB: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31B2DC)); /* fmul dword ptr [0x31b2dc] */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00136818u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00136818: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00136820u); RECOMP_ABI_CALL(0x001D8CA5u, sub_001D8CA5); /* call 0x001D8CA5 */

loc_00136820: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136830
 * Original: 0x00136830 - 0x0013684F (31 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136830(void)
{

loc_00136830: ;
    MEM32(0x37FC1C) = 0x1B9F5B;
    MEM32(0x37FC20) = 0x1BA030;
    MEM32(0x37FC24) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00136850
 * Original: 0x00136850 - 0x00136874 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136850: ;
    edx = ecx;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edx + 2) = LO8(eax);
    MEM8(edx) = 1;
    PUSH32(esp, edi);
    MEM32(0x3F2DDC) = edx;
    MEM8(edx + 1) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x10;
    edi = edx + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00136880
 * Original: 0x00136880 - 0x0013688B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136880(void)
{

loc_00136880: ;
    MEM32(0x3F2DDC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00136890
 * Original: 0x00136890 - 0x001368D8 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136890: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    edx = esi + 0x44;
    PUSH32(esp, 0x31B2E0);
    PUSH32(esp, edx);
    MEM8(esi + 3) = LO8(eax);
    PUSH32(esp, 0x001368ADu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001368AD: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esi + 0x84;
    PUSH32(esp, 0x31B2E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001368C3u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001368C3: ;
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC4) = edx;
    MEM8(esi + 2) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001368E0
 * Original: 0x001368E0 - 0x00136910 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001368E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001368E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013690E; /* je: equal / zero */

loc_001368ED: ;
    PUSH32(esp, 0x001368F2u); RECOMP_ABI_CALL(0x001D8CD7u, sub_001D8CD7); /* call 0x001D8CD7 */

loc_001368F2: ;
    ecx = MEM32(esi + 0xDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013690E; /* je: equal / zero */

loc_001368FC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0);
    MEMF(esi + 0xC8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0013690Eu); RECOMP_ABI_CALL(0x001D8CA5u, sub_001D8CA5); /* call 0x001D8CA5 */

loc_0013690E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00136910
 * Original: 0x00136910 - 0x00136948 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136910: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136946; /* je: equal / zero */

loc_0013691D: ;
    PUSH32(esp, 0x00136922u); RECOMP_ABI_CALL(0x001D8CDFu, sub_001D8CDF); /* call 0x001D8CDF */

loc_00136922: ;
    ecx = MEM32(esi + 0xDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136946; /* je: equal / zero */

loc_0013692C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, 0x1000);
    MEMF(esi + 0xC8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00136946u); RECOMP_ABI_CALL(0x001D8CA5u, sub_001D8CA5); /* call 0x001D8CA5 */

loc_00136946: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00136950
 * Original: 0x00136950 - 0x00136955 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136950(void)
{

loc_00136950: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00136960
 * Original: 0x00136960 - 0x00136965 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136960(void)
{

loc_00136960: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    esp += 4; return; /* ret */

}

/**
 * sub_00136970
 * Original: 0x00136970 - 0x00136A3C (204 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xE0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013698D; /* je: equal / zero */

loc_00136981: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00136987u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00136985u); } /* indirect call */
    }

loc_00136987: ;
    MEM32(esi + 0xE0) = edi;

loc_0013698D: ;
    ebx = MEM32(esi + 0xDC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001369AE; /* je: equal / zero */

loc_00136997: ;
    ecx = ebx;
    PUSH32(esp, 0x0013699Eu); RECOMP_ABI_CALL(0x001D8F97u, sub_001D8F97); /* call 0x001D8F97 */

loc_0013699E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x37FC20); PUSH32(esp, 0x001369A5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0013699Fu); } /* indirect call */
    }

loc_001369A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xDC) = edi;

loc_001369AE: ;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001369C7; /* je: equal / zero */

loc_001369B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001369BEu); RECOMP_ABI_CALL(0x00152060u, sub_00152060); /* call 0x00152060 */

loc_001369BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xCC) = edi;

loc_001369C7: ;
    ebx = MEM32(esi + 0xF0);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001369E7; /* je: equal / zero */

loc_001369D1: ;
    ecx = ebx;
    PUSH32(esp, 0x001369D8u); RECOMP_ABI_CALL(0x001DC568u, sub_001DC568); /* call 0x001DC568 */

loc_001369D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001369DEu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001369DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF0) = edi;

loc_001369E7: ;
    ebx = MEM32(esi + 0xEC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136A08; /* je: equal / zero */

loc_001369F1: ;
    ecx = ebx;
    PUSH32(esp, 0x001369F8u); RECOMP_ABI_CALL(0x001D9ECCu, sub_001D9ECC); /* call 0x001D9ECC */

loc_001369F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x37FC20); PUSH32(esp, 0x001369FFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001369F9u); } /* indirect call */
    }

loc_001369FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xEC) = edi;

loc_00136A08: ;
    eax = MEM32(0x3F2DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0xD4) = edi;
    MEM32(esi + 0xD8) = edi;
    MEM32(esi + 0xE4) = edi;
    MEM32(esi + 0xD0) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00136A38; /* je: equal / zero */

loc_00136A29: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136A2Fu); RECOMP_ABI_CALL(0x001BA393u, sub_001BA393); /* call 0x001BA393 */

loc_00136A2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3F2DD8) = edi;

loc_00136A38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00136A40
 * Original: 0x00136A40 - 0x00136BBB (379 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136A40: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(edi + 1) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00136BB0; /* je: equal / zero */

loc_00136A5B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136BB0; /* je: equal / zero */

loc_00136A63: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F);
    PUSH32(esp, eax);
    esi = edi + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00136A70u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00136A70: ;
    eax = esi;
    MEM8(edi + 0x43) = LO8(ebx);
    SET_LO8(edx, MEM8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136A92; /* je: equal / zero */

loc_00136A80: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2E (8-bit) */
    SET_LO8(edx, MEM8(eax + 1));
    if (CMP_EQ(_fa, _fb)) ecx = eax; /* cmove */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00136A80; /* jne: not equal / not zero */

loc_00136A8E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00136A97; /* jne: not equal / not zero */

loc_00136A92: ;
    MEM8(eax) = 0x2E;
    ecx = eax;

loc_00136A97: ;
    MEM32(ecx + 1) = 0x367076;
    _fa = (uint32_t)(MEM32(0x3888D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3888D0), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00136B9E; /* jne: not equal / not zero */

loc_00136AAB: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00136AB3u); RECOMP_ABI_CALL(0x002BF8A0u, sub_002BF8A0); /* call 0x002BF8A0 */

loc_00136AB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136B9E; /* je: equal / zero */

loc_00136ABE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3F);
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136ACCu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00136ACC: ;
    PUSH32(esp, 0x3F);
    ecx = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM8(esp + 0xA3) = LO8(ebx);
    PUSH32(esp, 0x00136AE0u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00136AE0: ;
    edx = esp + 0x24;
    PUSH32(esp, 0x2F);
    PUSH32(esp, edx);
    MEM8(esp + 0x6B) = LO8(ebx);
    PUSH32(esp, 0x00136AF0u); RECOMP_ABI_CALL(0x002BF8A0u, sub_002BF8A0); /* call 0x002BF8A0 */

loc_00136AF0: ;
    MEM8(eax + 1) = LO8(ebx);
    PUSH32(esp, 0xC0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00136B0Au); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00136B0A: ;
    edx = MEM32(0x3888C0);
    eax = MEM32(edx);
    ecx = MEM32(eax * 4 + 0x373204);
    PUSH32(esp, 0xC0);
    PUSH32(esp, ecx);
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00136B2Cu); RECOMP_ABI_CALL(0x002BF760u, sub_002BF760); /* call 0x002BF760 */

loc_00136B2C: ;
    eax = esp + 0xC4;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    /* nop */

loc_00136B40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00136B40; /* jne: not equal / not zero */

loc_00136B47: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + eax + 0x8C;
    MEM8(eax) = 0x2F;
    MEM8(eax + 1) = LO8(ebx);
    PUSH32(esp, 0xC0);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00136B6Du); RECOMP_ABI_CALL(0x002BF760u, sub_002BF760); /* call 0x002BF760 */

loc_00136B6D: ;
    edx = esp + 0x98;
    PUSH32(esp, edx);
    MEM8(esp + 0x15C) = LO8(ebx);
    PUSH32(esp, 0x00136B81u); RECOMP_ABI_CALL(0x00151EF0u, sub_00151EF0); /* call 0x00151EF0 */

loc_00136B81: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136B9E; /* je: equal / zero */

loc_00136B88: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00136B98u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00136B98: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 0x43) = LO8(ebx);

loc_00136B9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00136BA4u); RECOMP_ABI_CALL(0x00151EF0u, sub_00151EF0); /* call 0x00151EF0 */

loc_00136BA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00136BB0; /* je: equal / zero */

loc_00136BAC: ;
    MEM8(edi + 1) = 1;

loc_00136BB0: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136BC0
 * Original: 0x00136BC0 - 0x00136D42 (386 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00136BC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = esi + 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00136BD1u); RECOMP_ABI_CALL(0x00151EF0u, sub_00151EF0); /* call 0x00151EF0 */

loc_00136BD1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136D39; /* je: equal / zero */

loc_00136BDC: ;
    edi = esi + 0x84;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00136BE8u); RECOMP_ABI_CALL(0x00151EF0u, sub_00151EF0); /* call 0x00151EF0 */

loc_00136BE8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136D39; /* je: equal / zero */

loc_00136BF3: ;
    eax = MEM32(0x3F2DD8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00136C07u); RECOMP_ABI_CALL(0x00154FE0u, sub_00154FE0); /* call 0x00154FE0 */

loc_00136C07: ;
    ecx = MEM32(0x3F2DD8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ebp = eax;
    PUSH32(esp, 0x00136C18u); RECOMP_ABI_CALL(0x00151FD0u, sub_00151FD0); /* call 0x00151FD0 */

loc_00136C18: ;
    MEM32(esi + 0xCC) = eax;
    edx = MEM32(0x37FC24);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00136C30u); RECOMP_ABI_CALL(0x00151FD0u, sub_00151FD0); /* call 0x00151FD0 */

loc_00136C30: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFD0B0FE4u);
    edi = eax;
    PUSH32(esp, 0x00136C4Au); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_00136C4A: ;
    ecx = eax;
    PUSH32(esp, 0x00136C51u); RECOMP_ABI_CALL(0x001579A0u, sub_001579A0); /* call 0x001579A0 */

loc_00136C51: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    MEM32(esi + 0xD0) = eax;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136D26; /* je: equal / zero */

loc_00136C6B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136D26; /* je: equal / zero */

loc_00136C73: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00136C7Au); RECOMP_ABI_CALL(0x00136590u, sub_00136590); /* call 0x00136590 */

loc_00136C7A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136C8A; /* je: equal / zero */

loc_00136C81: ;
    ecx = eax;
    PUSH32(esp, 0x00136C88u); RECOMP_ABI_CALL(0x001D931Fu, sub_001D931F); /* call 0x001D931F */

loc_00136C88: ;
    goto loc_00136C8C;

loc_00136C8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00136C8C: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esi + 0xEC) = eax;
    PUSH32(esp, 0x00136C9Fu); RECOMP_ABI_CALL(0x001D974Du, sub_001D974D); /* call 0x001D974D */

loc_00136C9F: ;
    edx = MEM32(esi + 0xC4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00136CADu); RECOMP_ABI_CALL(0x00136770u, sub_00136770); /* call 0x00136770 */

loc_00136CAD: ;
    ecx = MEM32(esi + 0xCC);
    ebx = eax;
    eax = ZX8(MEM8(esi + 3));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00136CC0u); RECOMP_ABI_CALL(0x001BF9BFu, sub_001BF9BF); /* call 0x001BF9BF */

loc_00136CC0: ;
    edx = MEM32(esi + 0xCC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00136CCFu); RECOMP_ABI_CALL(0x001BF92Fu, sub_001BF92F); /* call 0x001BF92F */

loc_00136CCF: ;
    eax = MEM32(0x3F2DD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x31B2E4);
    PUSH32(esp, 0x00136CE1u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00136CE1: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136CF1; /* je: equal / zero */

loc_00136CE8: ;
    ecx = eax;
    PUSH32(esp, 0x00136CEFu); RECOMP_ABI_CALL(0x001DBCC4u, sub_001DBCC4); /* call 0x001DBCC4 */

loc_00136CEF: ;
    goto loc_00136CF3;

loc_00136CF1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00136CF3: ;
    ecx = MEM32(esi + 0xEC);
    edx = MEM32(esi + 0xD0);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 3));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xCC);
    MEM32(esi + 0xF0) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00136D1Du); RECOMP_ABI_CALL(0x001DBF6Bu, sub_001DBF6B); /* call 0x001DBF6B */

loc_00136D1D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00136D23u); RECOMP_ABI_CALL(0x00152060u, sub_00152060); /* call 0x00152060 */

loc_00136D23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00136D26: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00136D2Cu); RECOMP_ABI_CALL(0x00154FE0u, sub_00154FE0); /* call 0x00154FE0 */

loc_00136D2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00136D39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00136D50
 * Original: 0x00136D50 - 0x00136D9A (74 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136D50(void)
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

loc_00136D50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xEC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136D95; /* je: equal / zero */

loc_00136D5C: ;
    _fa = (uint32_t)(MEM32(0x38DC90)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x38DC90), 1 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xE8)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00136D81; /* jne: not equal / not zero */

loc_00136D73: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x310A3C); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00136D81: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x00136D8Au); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00136D8A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00136D92u); RECOMP_ABI_CALL(0x001D933Eu, sub_001D933E); /* call 0x001D933E */

loc_00136D92: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00136D95: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_00136DA0
 * Original: 0x00136DA0 - 0x00137252 (1202 bytes, 322 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136DA0(void)
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

loc_00136DA0: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xD4));
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3F2DD8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00136DB7u); RECOMP_ABI_CALL(0x00154FE0u, sub_00154FE0); /* call 0x00154FE0 */

loc_00136DB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x34;
    MEM32(esp + 0x30) = eax;
    MEM8(esp + 0x12) = 1;
    PUSH32(esp, 0x00136DCCu); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_00136DCC: ;
    ebx = MEM32(0x4F7410);
    ecx = MEM32(esp + 0xEC);
    MEM32(esi + 0xE4) = 0;
    edi = MEM32(0x38DC90);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esi + 0xD8) = ecx;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFFF9u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x34;
    MEM8(esp + 0x13) = 0;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x28)) >> 32) & 1);
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00136E08u); RECOMP_ABI_CALL(0x001D0830u, sub_001D0830); /* call 0x001D0830 */

loc_00136E08: ;
    edx = MEM32(0x4F7418);
    ebp = MEM32(0x4F7414);
    ecx = esp + 0x20;
    MEM32(esp + 0x24) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x24) = 0;
    eax = MEM32(ebp);
    PUSH32(esp, edx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00136E3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00136E37u); } /* indirect call */
    }

loc_00136E3A: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x3351F8);
    PUSH32(esp, 0x00136E48u); RECOMP_ABI_CALL(0x001C71E0u, sub_001C71E0); /* call 0x001C71E0 */

loc_00136E48: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00136E66u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_00136E66: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00136E76u); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_00136E76: ;
    edx = MEM32(0x37FC24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x3021CE);
    { uint32_t _icall_target = MEM32(0x37FC1C); PUSH32(esp, 0x00136E91u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00136E8Bu); } /* indirect call */
    }

loc_00136E91: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00136EBD; /* je: equal / zero */

loc_00136E98: ;
    ecx = MEM32(esp + 0xE8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00136EBBu); RECOMP_ABI_CALL(0x001D8EC6u, sub_001D8EC6); /* call 0x001D8EC6 */

loc_00136EBB: ;
    goto loc_00136EBF;

loc_00136EBD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00136EBF: ;
    MEM32(esi + 0xDC) = eax;
    edx = MEM32(eax + 0x30);
    PUSH32(esp, 0x40000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00136ED3u); RECOMP_ABI_CALL(0x001B7C21u, sub_001B7C21); /* call 0x001B7C21 */

loc_00136ED3: ;
    ecx = MEM32(esi + 0xDC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00136EE4u); RECOMP_ABI_CALL(0x001D9050u, sub_001D9050); /* call 0x001D9050 */

loc_00136EE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0xE4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013722B; /* je: equal / zero */

loc_00136EF2: ;
    PUSH32(esp, 0x00136EF7u); RECOMP_ABI_CALL(0x00147220u, sub_00147220); /* call 0x00147220 */

loc_00136EF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00136F1A; /* jne: not equal / not zero */

loc_00136EFB: ;
    eax = MEM32(0x3888C0);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x312424)); /* fmul dword ptr [0x312424] */
    PUSH32(esp, 0x00136F0Eu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00136F0E: ;
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136F1Au); RECOMP_ABI_CALL(0x001D8CEAu, sub_001D8CEA); /* call 0x001D8CEA */

loc_00136F1A: ;
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, 0x00136F25u); RECOMP_ABI_CALL(0x001D8CD7u, sub_001D8CD7); /* call 0x001D8CD7 */

loc_00136F25: ;
    ecx = MEM32(esi + 0xDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00136F41; /* je: equal / zero */

loc_00136F2F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0);
    MEMF(esi + 0xC8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00136F41u); RECOMP_ABI_CALL(0x001D8CA5u, sub_001D8CA5); /* call 0x001D8CA5 */

loc_00136F41: ;
    ecx = MEM32(esi + 0xE4);
    eax = MEM32(ecx + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00136F96; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00136F8B: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00136F9C;

loc_00136F96: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00136F9C: ;
    edx = MEM32(0x3888C0);
    SET_LO8(eax, MEM8(edx + 0x203D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00136FBA; /* jne: not equal / not zero */

loc_00136FAC: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31B310); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00136FBA: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(esi + 0xDC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    eax = MEM32(eax + 0x64);
    PUSH32(esp, 4);
    edx = esp + 0x38;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x2C) - fp_top()); /* fsubr dword ptr [esp + 0x2c] */
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x38) - fp_top()); /* fsubr dword ptr [esp + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00136FFFu); RECOMP_ABI_CALL(0x001DCFB7u, sub_001DCFB7); /* call 0x001DCFB7 */

loc_00136FFF: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    MEM32(esi + 0xE0) = eax;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013701Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137018u); } /* indirect call */
    }

loc_0013701B: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00137030u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013702Du); } /* indirect call */
    }

loc_00137030: ;
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, 0x0013703Bu); RECOMP_ABI_CALL(0x001D8CDFu, sub_001D8CDF); /* call 0x001D8CDF */

loc_0013703B: ;
    ecx = MEM32(esi + 0xDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013705F; /* je: equal / zero */

loc_00137045: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, 0x1000);
    MEMF(esi + 0xC8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0013705Fu); RECOMP_ABI_CALL(0x001D8CA5u, sub_001D8CA5); /* call 0x001D8CA5 */

loc_0013705F: ;
    ecx = MEM32(esi + 0xEC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, 0x00137071u); RECOMP_ABI_CALL(0x001D8C2Fu, sub_001D8C2F); /* call 0x001D8C2F */

loc_00137071: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013707Bu); RECOMP_ABI_CALL(0x00154FE0u, sub_00154FE0); /* call 0x00154FE0 */

loc_0013707B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x203);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0013708Cu); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_0013708C: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00137094u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137091u); } /* indirect call */
    }

loc_00137094: ;
    eax = MEM32(0x38DCA8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x38DCA8) = eax;
    MEMF(esi + 0xE8) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x11) = 1;
    /* nop */

loc_001370B0: ;
    eax = MEM32(esi + 0xE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013717E; /* je: equal / zero */

loc_001370BE: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001370C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001370C3u); } /* indirect call */
    }

loc_001370C5: ;
    edx = MEM32(0x38DCA8);
    ebx = MEM32(esp + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    MEM32(0x38DCA8) = edx;
    PUSH32(esp, 0x001370DDu); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_001370DD: ;
    PUSH32(esp, 7);
    ecx = ebx;
    PUSH32(esp, 0x001370E6u); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_001370E6: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    ecx = MEM32(esi + 0xE0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00137107; /* je: equal / zero */

loc_001370F6: ;
    edx = MEM32(esi + 0xE4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x15) = 0;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00137105u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137102u); } /* indirect call */
    }

loc_00137105: ;
    goto loc_0013710A;

loc_00137107: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0013710Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137107u); } /* indirect call */
    }

loc_0013710A: ;
    eax = MEM32(esi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00137169; /* je: equal / zero */

loc_00137114: ;
    edi = MEM32(esi + 0xEC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00137156; /* je: equal / zero */

loc_0013711E: ;
    _fa = (uint32_t)(MEM32(0x38DC90)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x38DC90), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00137143; /* jne: not equal / not zero */

loc_00137135: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x310A3C); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00137143: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0x0013714Cu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0013714C: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00137154u); RECOMP_ABI_CALL(0x001D933Eu, sub_001D933E); /* call 0x001D933E */

loc_00137154: ;
    goto loc_00137158;

loc_00137156: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00137158: ;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, 0x00137169u); RECOMP_ABI_CALL(0x001DBFAEu, sub_001DBFAE); /* call 0x001DBFAE */

loc_00137169: ;
    ecx = ebx;
    PUSH32(esp, 0x00137170u); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_00137170: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00137178u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137175u); } /* indirect call */
    }

loc_00137178: ;
    MEM32(0x38DCA8) = MEM32(0x38DCA8) - 1;
    _fa = (uint32_t)(MEM32(0x38DCA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0013717E: ;
    eax = MEM32(esi + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013719E; /* je: equal / zero */

loc_00137188: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0013718Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00137189u); } /* indirect call */
    }

loc_0013718B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0013719E; /* jne: not equal / not zero */

loc_00137192: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(eax);
    goto loc_001371A2;

loc_0013719E: ;
    SET_LO8(ebx, MEM8(esp + 0x13));

loc_001371A2: ;
    PUSH32(esp, 0x001371A7u); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_001371A7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001371AEu); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_001371AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001371C2; /* je: equal / zero */

loc_001371B5: ;
    ecx = MEM32(esi + 0xE0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001371C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001371BDu); } /* indirect call */
    }

loc_001371C0: ;
    goto loc_0013720A;

loc_001371C2: ;
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, 0x001371CDu); RECOMP_ABI_CALL(0x001D9257u, sub_001D9257); /* call 0x001D9257 */

loc_001371CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013720A; /* je: equal / zero */

loc_001371D1: ;
    ecx = MEM32(esi + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001371DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001371D9u); } /* indirect call */
    }

loc_001371DC: ;
    ecx = MEM32(esi + 0xDC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEMF(esi + 0xE8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001371FFu); RECOMP_ABI_CALL(0x001D8C39u, sub_001D8C39); /* call 0x001D8C39 */

loc_001371FF: ;
    MEM32(esi + 0xE4) = eax;
    MEM8(esp + 0x11) = 1;

loc_0013720A: ;
    eax = MEM32(esi + 0xE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0013721C; /* je: equal / zero */

loc_00137214: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001370B0; /* je: equal / zero */

loc_0013721C: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00137223u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137221u); } /* indirect call */
    }

loc_00137223: ;
    MEM32(0x38DCA8) = MEM32(0x38DCA8) + 1;
    _fa = (uint32_t)(MEM32(0x38DCA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00137238;

loc_0013722B: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00137235u); RECOMP_ABI_CALL(0x00154FE0u, sub_00154FE0); /* call 0x00154FE0 */

loc_00137235: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00137238: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00137241u); RECOMP_ABI_CALL(0x001D0960u, sub_001D0960); /* call 0x001D0960 */

loc_00137241: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xD4)) >> 32) & 1);
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00137260
 * Original: 0x00137260 - 0x001373A6 (326 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137260: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 1));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137291; /* jne: not equal / not zero */

loc_00137273: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B358);
    PUSH32(esp, 0x00137281u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00137281: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00137291: ;
    eax = MEM32(esp + 0xD0);
    ecx = MEM32(esp + 0xCC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001372A8u); RECOMP_ABI_CALL(0x001366D0u, sub_001366D0); /* call 0x001366D0 */

loc_001372A8: ;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013736C; /* je: equal / zero */

loc_001372B8: ;
    eax = esi + 4;
    PUSH32(esp, 0x2F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001372C3u); RECOMP_ABI_CALL(0x002BF8A0u, sub_002BF8A0); /* call 0x002BF8A0 */

loc_001372C3: ;
    PUSH32(esp, 0x3F);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001372D1u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_001372D1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x47) = LO8(ebx);
    eax = esp + 8;
    /* nop */

loc_001372E0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001372EA; /* je: equal / zero */

loc_001372E5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001372E0; /* jne: not equal / not zero */

loc_001372E8: ;
    goto loc_001372EC;

loc_001372EA: ;
    MEM8(eax) = LO8(ebx);

loc_001372EC: ;
    PUSH32(esp, edi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, 0x31B338);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00137301u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00137301: ;
    edx = MEM32(0x3888C0);
    eax = MEM32(edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(eax * 4 + 0x373204);
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, 0x31B314);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00137328u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00137328: ;
    eax = MEM32(0x3888C0);
    edi = MEM32(eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    edx = esi + 0x44;
    PUSH32(esp, 0x31B2E0);
    PUSH32(esp, edx);
    MEM8(esi + 3) = LO8(ebx);
    PUSH32(esp, 0x00137345u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00137345: ;
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    ecx = esi + 0x84;
    PUSH32(esp, 0x31B2E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013735Eu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0013735E: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC4) = edi;
    MEM8(esi + 2) = 1;
    POP32(esp, edi);

loc_0013736C: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137378; /* je: equal / zero */

loc_00137371: ;
    ecx = esi;
    PUSH32(esp, 0x00137378u); RECOMP_ABI_CALL(0x00136BC0u, sub_00136BC0); /* call 0x00136BC0 */

loc_00137378: ;
    edx = MEM32(esp + 0xD4);
    PUSH32(esp, edx);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0013738Bu); RECOMP_ABI_CALL(0x00136DA0u, sub_00136DA0); /* call 0x00136DA0 */

loc_0013738B: ;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00137394u); RECOMP_ABI_CALL(0x00136970u, sub_00136970); /* call 0x00136970 */

loc_00137394: ;
    PUSH32(esp, 0x00137399u); RECOMP_ABI_CALL(0x0007F020u, sub_0007F020); /* call 0x0007F020 */

loc_00137399: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001373B0
 * Original: 0x001373B0 - 0x001373D0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001373B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001373B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x31B384;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00137410
 * Original: 0x00137410 - 0x00137441 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137410: ;
    eax = MEM32(ecx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013743E; /* je: equal / zero */

loc_00137417: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x54);
    MEMF(edx + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 0x54);
    edx = MEM32(esp + 4);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 0x54);
    MEM32(ecx + 0xC) = edx;

loc_0013743E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00137450
 * Original: 0x00137450 - 0x00137492 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137471; /* je: equal / zero */

loc_0013745E: ;
    ecx = edi;
    PUSH32(esp, 0x00137465u); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_00137465: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013746Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0013746B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ebx;

loc_00137471: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013748B; /* je: equal / zero */

loc_00137478: ;
    ecx = edi;
    PUSH32(esp, 0x0013747Fu); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_0013747F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00137485u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00137485: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = ebx;

loc_0013748B: ;
    POP32(esp, edi);
    MEM8(esi + 4) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001374A0
 * Original: 0x001374A0 - 0x001374A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001374A0(void)
{

loc_001374A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001374B0
 * Original: 0x001374B0 - 0x001374CA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001374B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001374B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001374C7; /* je: equal / zero */

loc_001374B8: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001374C4u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_001374C4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001374C7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001374D0
 * Original: 0x001374D0 - 0x0013751B (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001374D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001374D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x31B384;
    if (CMP_EQ(_fa, _fb)) goto loc_001374F1; /* je: equal / zero */

loc_001374E1: ;
    ecx = edi;
    PUSH32(esp, 0x001374E8u); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_001374E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001374EEu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001374EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001374F1: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137501; /* je: equal / zero */

loc_001374F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001374FEu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001374FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00137501: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137518; /* je: equal / zero */

loc_00137508: ;
    ecx = esi;
    PUSH32(esp, 0x0013750Fu); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_0013750F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00137515u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00137515: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00137518: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00137520
 * Original: 0x00137520 - 0x0013755D (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137520: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0x54);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137551; /* jne: not equal / not zero */

loc_00137534: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x31B388);
    PUSH32(esp, 0x00137545u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00137545: ;
    MEM32(esi + 0x54) = eax;
    MEM32(eax + 0xC) = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x14) = LO8(ebx);

loc_00137551: ;
    MEM32(esi + 0x5C) = ebx;
    MEM16(esi + 0x60) = LO16(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137560
 * Original: 0x00137560 - 0x0013769E (318 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137560: ;
    eax = MEM32(0x3C2528);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x3888C0);
    esi = MEM32(ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013757E; /* jle: less or equal (signed <=) */

loc_00137579: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00137580; /* jl: less (signed <) */

loc_0013757E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00137580: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013760F; /* jne: not equal / not zero */

loc_00137589: ;
    PUSH32(esp, 0x0013758Eu); RECOMP_ABI_CALL(0x00011D40u, sub_00011D40); /* call 0x00011D40 */

loc_0013758E: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), LO8(ebx) (8-bit) */
    ecx = MEM32(0x3C2524);
    if (CMP_NE(_fa, _fb)) goto loc_001375AC; /* jne: not equal / not zero */

loc_00137599: ;
    edx = MEM32(esi * 4 + 0x373204);
    PUSH32(esp, edx);
    PUSH32(esp, 0x31B468);
    eax = edi + 0x14;
    PUSH32(esp, eax);
    goto loc_00137620;

loc_001375AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001375C8; /* je: equal / zero */

loc_001375B0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001375C8; /* jne: not equal / not zero */

loc_001375B5: ;
    ecx = MEM32(esi * 4 + 0x373204);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x31B45C);
    edx = edi + 0x14;
    PUSH32(esp, edx);
    goto loc_00137620;

loc_001375C8: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1358)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1358), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001375B5; /* je: equal / zero */

loc_001375D6: ;
    edx = MEM32(eax + 0xE68);
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001375FC; /* jne: not equal / not zero */

loc_001375E5: ;
    _fa = (uint32_t)(MEM32(eax + 0xE6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xE6C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001375FC; /* jne: not equal / not zero */

loc_001375ED: ;
    eax = MEM32(esi * 4 + 0x373204);
    PUSH32(esp, eax);
    PUSH32(esp, 0x31B450);
    goto loc_0013761C;

loc_001375FC: ;
    edx = MEM32(esi * 4 + 0x373204);
    PUSH32(esp, edx);
    PUSH32(esp, 0x31B444);
    eax = edi + 0x14;
    PUSH32(esp, eax);
    goto loc_00137620;

loc_0013760F: ;
    eax = MEM32(esi * 4 + 0x373204);
    PUSH32(esp, eax);
    PUSH32(esp, 0x31B468);

loc_0013761C: ;
    ecx = edi + 0x14;
    PUSH32(esp, ecx);

loc_00137620: ;
    PUSH32(esp, 0x00137625u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00137625: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x31B418);
    PUSH32(esp, 0x00137639u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00137639: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137650; /* je: equal / zero */

loc_00137640: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x31B3FC);
    ecx = eax;
    PUSH32(esp, 0x0013764Eu); RECOMP_ABI_CALL(0x000BFF30u, sub_000BFF30); /* call 0x000BFF30 */

loc_0013764E: ;
    goto loc_00137652;

loc_00137650: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00137652: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0013765F; /* je: equal / zero */

loc_00137659: ;
    MEM8(eax + 0x1A) = LO8(ebx);
    MEM8(eax + 0x1B) = LO8(ebx);

loc_0013765F: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x31B3D0);
    PUSH32(esp, 0x00137670u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00137670: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137687; /* je: equal / zero */

loc_00137677: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x31B3B4);
    ecx = eax;
    PUSH32(esp, 0x00137685u); RECOMP_ABI_CALL(0x000BFF30u, sub_000BFF30); /* call 0x000BFF30 */

loc_00137685: ;
    goto loc_00137689;

loc_00137687: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00137689: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00137696; /* je: equal / zero */

loc_00137690: ;
    MEM8(eax + 0x1A) = LO8(ebx);
    MEM8(eax + 0x1B) = LO8(ebx);

loc_00137696: ;
    MEM8(edi + 4) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001376A0
 * Original: 0x001376A0 - 0x0013794B (683 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001376A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001376A0: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x001376B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001376AFu); } /* indirect call */
    }

loc_001376B2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001376BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001376B8u); } /* indirect call */
    }

loc_001376BB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    xmm3.f[0] = (float)(int32_t)MEM32(0x38DC60); /* cvtsi2ss */
    ecx = MEM32(esp + 0xCC);
    SET_LO8(ebx, 0x80);
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x28) = LO8(ebx);
    MEM8(esp + 0x29) = LO8(ebx);
    MEM8(esp + 0x2A) = LO8(ebx);
    MEM8(esp + 0x2B) = 0xFF;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x40) = LO8(ebx);
    MEM8(esp + 0x41) = LO8(ebx);
    MEM8(esp + 0x42) = LO8(ebx);
    MEM8(esp + 0x43) = 0xFF;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x58) = LO8(ebx);
    MEM8(esp + 0x59) = LO8(ebx);
    MEM8(esp + 0x5A) = LO8(ebx);
    MEM8(esp + 0x5B) = 0xFF;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x70) = LO8(ebx);
    MEM8(esp + 0x71) = LO8(ebx);
    MEM8(esp + 0x72) = LO8(ebx);
    MEM8(esp + 0x73) = 0xFF;
    PUSH32(esp, 0x001377A9u); RECOMP_ABI_CALL(0x000BF900u, sub_000BF900); /* call 0x000BF900 */

loc_001377A9: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013792A; /* je: equal / zero */

loc_001377B4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x38DC5C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x38DC58)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 5);
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x31B480); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x31B47C); /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x31B478); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x31B474); /* mulss */
    PUSH32(esp, 4);
    edx = esp + 0x70;
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x74) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x88) = LO8(ebx);
    MEM8(esp + 0x89) = LO8(ebx);
    MEM8(esp + 0x8A) = LO8(ebx);
    MEM8(esp + 0x8B) = 0xFF;
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xA0) = LO8(ebx);
    MEM8(esp + 0xA1) = LO8(ebx);
    MEM8(esp + 0xA2) = LO8(ebx);
    MEM8(esp + 0xA3) = 0xFF;
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xB8) = LO8(ebx);
    MEM8(esp + 0xB9) = LO8(ebx);
    MEM8(esp + 0xBA) = LO8(ebx);
    MEM8(esp + 0xBB) = 0xFF;
    MEMF(esp + 0xBC) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xD0) = LO8(ebx);
    MEM8(esp + 0xD1) = LO8(ebx);
    MEM8(esp + 0xD2) = LO8(ebx);
    MEM8(esp + 0xD3) = 0xFF;
    PUSH32(esp, 0x0013792Au); RECOMP_ABI_CALL(0x000BF900u, sub_000BF900); /* call 0x000BF900 */

loc_0013792A: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00137932u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013792Fu); } /* indirect call */
    }

loc_00137932: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00137939u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137936u); } /* indirect call */
    }

loc_00137939: ;
    RECOMP_UNIMPL("wbinvd", 0x00137939u); /* TODO: wbinvd */
    PUSH32(esp, 0x00137940u); RECOMP_ABI_CALL(0x000804C0u, sub_000804C0); /* call 0x000804C0 */

loc_00137940: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137950
 * Original: 0x00137950 - 0x00137F11 (1473 bytes, 314 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137950: ;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xD8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00137976; /* jne: not equal / not zero */

loc_00137965: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0013796Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013796Au); } /* indirect call */
    }

loc_0013796D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00137976u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137973u); } /* indirect call */
    }

loc_00137976: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    xmm3.f[0] = (float)(int32_t)MEM32(0x38DC60); /* cvtsi2ss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm6 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    eax = ZX8(LO8(ebx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_00137E19; /* ja: above (unsigned >) */

loc_00137A95: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x137F14); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00137A9Cu) goto loc_00137A9C;
    if (_jt == 0x00137B7Fu) goto loc_00137B7F;
    if (_jt == 0x00137C62u) goto loc_00137C62;
    if (_jt == 0x00137D3Cu) goto loc_00137D3C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00137A9C: ;
    ecx = MEM32(esp + 0x84);
    edx = MEM32(esp + 0x88);
    eax = MEM32(esp + 0x80);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0xC8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0xCC);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0xD0);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x98);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x9C);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0xA0);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x68);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, 5);
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, 0xFF);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(esp + 0x60) = edx;
    PUSH32(esp, 4);
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x24) = LO8(eax);
    MEM8(esp + 0x25) = LO8(eax);
    MEM8(esp + 0x26) = LO8(eax);
    MEM8(esp + 0x27) = LO8(eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x3C) = LO8(eax);
    MEM8(esp + 0x3D) = LO8(eax);
    MEM8(esp + 0x3E) = LO8(eax);
    MEM8(esp + 0x3F) = LO8(eax);
    MEM8(esp + 0x54) = LO8(eax);
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x56) = LO8(eax);
    MEM8(esp + 0x57) = LO8(eax);
    MEM32(esp + 0x68) = ecx;
    MEM8(esp + 0x6C) = LO8(eax);
    MEM8(esp + 0x6D) = LO8(eax);
    MEM8(esp + 0x6E) = LO8(eax);
    MEM8(esp + 0x6F) = LO8(eax);
    PUSH32(esp, edx);
    goto loc_00137EC4;

loc_00137B7F: ;
    ecx = MEM32(esp + 0xA8);
    edx = MEM32(esp + 0xAC);
    eax = MEM32(esp + 0xA4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x80);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x84);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x88);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x8C);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x90);
    PUSH32(esp, 5);
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, 0xFF);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0x98);
    MEM32(esp + 0x60) = edx;
    PUSH32(esp, 4);
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x24) = LO8(eax);
    MEM8(esp + 0x25) = LO8(eax);
    MEM8(esp + 0x26) = LO8(eax);
    MEM8(esp + 0x27) = LO8(eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x3C) = LO8(eax);
    MEM8(esp + 0x3D) = LO8(eax);
    MEM8(esp + 0x3E) = LO8(eax);
    MEM8(esp + 0x3F) = LO8(eax);
    MEM8(esp + 0x54) = LO8(eax);
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x56) = LO8(eax);
    MEM8(esp + 0x57) = LO8(eax);
    MEM32(esp + 0x68) = ecx;
    MEM8(esp + 0x6C) = LO8(eax);
    MEM8(esp + 0x6D) = LO8(eax);
    MEM8(esp + 0x6E) = LO8(eax);
    MEM8(esp + 0x6F) = LO8(eax);
    PUSH32(esp, edx);
    goto loc_00137EC4;

loc_00137C62: ;
    ecx = MEM32(esp + 0x90);
    edx = MEM32(esp + 0x94);
    eax = MEM32(esp + 0x8C);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x68);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x6C);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x70);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x74);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x78);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x7C);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0xBC);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0xC0);
    PUSH32(esp, 5);
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, 0xFF);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0xC8);
    MEM32(esp + 0x60) = edx;
    PUSH32(esp, 4);
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x24) = LO8(eax);
    MEM8(esp + 0x25) = LO8(eax);
    MEM8(esp + 0x26) = LO8(eax);
    MEM8(esp + 0x27) = LO8(eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x3C) = LO8(eax);
    MEM8(esp + 0x3D) = LO8(eax);
    MEM8(esp + 0x3E) = LO8(eax);
    MEM8(esp + 0x3F) = LO8(eax);
    MEM8(esp + 0x54) = LO8(eax);
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x56) = LO8(eax);
    MEM8(esp + 0x57) = LO8(eax);
    MEM32(esp + 0x68) = ecx;
    MEM8(esp + 0x6C) = LO8(eax);
    MEM8(esp + 0x6D) = LO8(eax);
    MEM8(esp + 0x6E) = LO8(eax);
    MEM8(esp + 0x6F) = LO8(eax);
    PUSH32(esp, edx);
    goto loc_00137EC4;

loc_00137D3C: ;
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x68);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x98);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x9C);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0xA0);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0xB0);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0xB4);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0xB8);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x78);
    PUSH32(esp, 5);
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, 0xFF);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0x80);
    MEM32(esp + 0x60) = edx;
    PUSH32(esp, 4);
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x24) = LO8(eax);
    MEM8(esp + 0x25) = LO8(eax);
    MEM8(esp + 0x26) = LO8(eax);
    MEM8(esp + 0x27) = LO8(eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x3C) = LO8(eax);
    MEM8(esp + 0x3D) = LO8(eax);
    MEM8(esp + 0x3E) = LO8(eax);
    MEM8(esp + 0x3F) = LO8(eax);
    MEM8(esp + 0x54) = LO8(eax);
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x56) = LO8(eax);
    MEM8(esp + 0x57) = LO8(eax);
    MEM32(esp + 0x68) = ecx;
    MEM8(esp + 0x6C) = LO8(eax);
    MEM8(esp + 0x6D) = LO8(eax);
    MEM8(esp + 0x6E) = LO8(eax);
    MEM8(esp + 0x6F) = LO8(eax);
    PUSH32(esp, edx);
    goto loc_00137EC4;

loc_00137E19: ;
    SET_LO8(eax, 0xFF);
    PUSH32(esp, 5);
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x21) = LO8(eax);
    MEM8(esp + 0x22) = LO8(eax);
    MEM8(esp + 0x23) = LO8(eax);
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    MEM8(esp + 0x3A) = LO8(eax);
    MEM8(esp + 0x3B) = LO8(eax);
    MEM8(esp + 0x50) = LO8(eax);
    MEM8(esp + 0x51) = LO8(eax);
    MEM8(esp + 0x52) = LO8(eax);
    MEM8(esp + 0x53) = LO8(eax);
    MEM8(esp + 0x68) = LO8(eax);
    MEM8(esp + 0x69) = LO8(eax);
    MEM8(esp + 0x6A) = LO8(eax);
    MEM8(esp + 0x6B) = LO8(eax);
    PUSH32(esp, 4);
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);

loc_00137EC4: ;
    ecx = MEM32(esp + 0xE4);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00137EE8u); RECOMP_ABI_CALL(0x000BF900u, sub_000BF900); /* call 0x000BF900 */

loc_00137EE8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00137EFB; /* jne: not equal / not zero */

loc_00137EEC: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00137EF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137EF1u); } /* indirect call */
    }

loc_00137EF4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00137EFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00137EF8u); } /* indirect call */
    }

loc_00137EFB: ;
    RECOMP_UNIMPL("wbinvd", 0x00137EFBu); /* TODO: wbinvd */
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00137F08; /* jne: not equal / not zero */

loc_00137F03: ;
    PUSH32(esp, 0x00137F08u); RECOMP_ABI_CALL(0x000804C0u, sub_000804C0); /* call 0x000804C0 */

loc_00137F08: ;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00137F30
 * Original: 0x00137F30 - 0x001380FB (459 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00137F30: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x54);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001380F4; /* je: equal / zero */

loc_00137F41: ;
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001380F4; /* je: equal / zero */

loc_00137F4C: ;
    eax = edx;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = 0x80;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00137F8C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_00137F65: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax); /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x31164C); /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x68); /* addss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    goto loc_00137FE9;

loc_00137F8C: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2FF3A8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00137FA2; /* jp: parity */

loc_00137F9E: ;
    edx = ecx;
    goto loc_00137FE9;

loc_00137FA2: ;
    eax = MEM32(esi + 0x54);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00137FE7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(eax + 8)) */

loc_00137FB4: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 4); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x31164C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x68); /* addss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm2.f[0], g_mxcsr, 1); /* cvttss2si */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    goto loc_00137FE9;

loc_00137FE7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00137FE9: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    xmm3.f[0] = (float)(int32_t)MEM32(0x38DC60); /* cvtsi2ss */
    eax = edx + edx;
    MEM8(esp + 0x1B) = LO8(eax);
    MEM8(esp + 0x33) = LO8(eax);
    MEM8(esp + 0x4B) = LO8(eax);
    MEM8(esp + 0x63) = LO8(eax);
    eax = MEM32(esi + 0x54);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x18) = LO8(ecx);
    MEM8(esp + 0x19) = LO8(ecx);
    MEM8(esp + 0x1A) = LO8(ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x30) = LO8(ecx);
    MEM8(esp + 0x31) = LO8(ecx);
    MEM8(esp + 0x32) = LO8(ecx);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x48) = LO8(ecx);
    MEM8(esp + 0x49) = LO8(ecx);
    MEM8(esp + 0x4A) = LO8(ecx);
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x60) = LO8(ecx);
    MEM8(esp + 0x61) = LO8(ecx);
    MEM8(esp + 0x62) = LO8(ecx);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001380CF; /* je: equal / zero */

loc_001380C1: ;
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001380CFu); RECOMP_ABI_CALL(0x000BF900u, sub_000BF900); /* call 0x000BF900 */

loc_001380CF: ;
    esi = MEM32(esi + 0x54);
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001380F4; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi)) */

loc_001380DC: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x1358) = MEM8(eax + 0x1358) | 0x40;
    _fa = (uint32_t)(MEM8(eax + 0x1358)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 1);
    ecx = 0x3C250C;
    PUSH32(esp, 0x001380F4u); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_001380F4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138100
 * Original: 0x00138100 - 0x001381ED (237 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138100: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0013810Du); RECOMP_ABI_CALL(0x0007C580u, sub_0007C580); /* call 0x0007C580 */

loc_0013810D: ;
    PUSH32(esp, 0x400);
    esi = eax;
    PUSH32(esp, 0xC);
    ecx = 7;
    edi = esp + 0x18;
    PUSH32(esp, 0x31B488);
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
    PUSH32(esp, 0x0013812Bu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0013812B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138142; /* je: equal / zero */

loc_00138132: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0013813Eu); RECOMP_ABI_CALL(0x000ADA20u, sub_000ADA20); /* call 0x000ADA20 */

loc_0013813E: ;
    edi = eax;
    goto loc_00138144;

loc_00138142: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00138144: ;
    SET_LO8(eax, 0x5F);
    MEM8(esp + 0xC) = LO8(eax);
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xE) = LO8(eax);
    MEM8(esp + 0xF) = 0xFF;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00138163u); RECOMP_ABI_CALL(0x000AD5E0u, sub_000AD5E0); /* call 0x000AD5E0 */

loc_00138163: ;
    eax = MEM32(0x38DC58);
    ecx = MEM32(0x38DC5C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00138177u); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_00138177: ;
    PUSH32(esp, 0x52F8697D);
    PUSH32(esp, 0x00138181u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00138181: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0013818Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138189u); } /* indirect call */
    }

loc_0013818C: ;
    esi = eax;
    ebx = 3;

loc_00138193: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0013819Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138199u); } /* indirect call */
    }

loc_0013819C: ;
    xmm0 = XMM_SCALAR(MEMF(0x38DC58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31B484); /* mulss */
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x425C0000);
    ecx = edi;
    PUSH32(esp, 0x001381C3u); RECOMP_ABI_CALL(0x000ADB00u, sub_000ADB00); /* call 0x000ADB00 */

loc_001381C3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001381CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001381C7u); } /* indirect call */
    }

loc_001381CA: ;
    PUSH32(esp, 0x001381CFu); RECOMP_ABI_CALL(0x000804C0u, sub_000804C0); /* call 0x000804C0 */

loc_001381CF: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00138193; /* jne: not equal / not zero */

loc_001381D2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001381E6; /* je: equal / zero */

loc_001381D6: ;
    ecx = edi;
    PUSH32(esp, 0x001381DDu); RECOMP_ABI_CALL(0x000AD460u, sub_000AD460); /* call 0x000AD460 */

loc_001381DD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001381E3u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001381E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001381E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001381F0
 * Original: 0x001381F0 - 0x0013824B (91 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001381F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001381F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 2);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00138205u); RECOMP_ABI_CALL(0x000BFF30u, sub_000BFF30); /* call 0x000BFF30 */

loc_00138205: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0x22) = 0;
    MEM8(esp + 0x23) = 0;
    PUSH32(esp, 0x0013821Bu); RECOMP_ABI_CALL(0x001376A0u, sub_001376A0); /* call 0x001376A0 */

loc_0013821B: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00138227u); RECOMP_ABI_CALL(0x001376A0u, sub_001376A0); /* call 0x001376A0 */

loc_00138227: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00138233u); RECOMP_ABI_CALL(0x001376A0u, sub_001376A0); /* call 0x001376A0 */

loc_00138233: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0013823Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013823Au); } /* indirect call */
    }

loc_0013823D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00138246u); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_00138246: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00138250
 * Original: 0x00138250 - 0x001383D4 (388 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138250: ;
    SET_LO8(eax, MEM8(0x3F2DE0));
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(0x3C2528);
    if (CMP_NE(_fa, _fb)) goto loc_001383CC; /* jne: not equal / not zero */

loc_0013826C: ;
    MEM8(0x3F2DE0) = 1;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM8(esp + 7) = 0;
    PUSH32(esp, 0x00138285u); RECOMP_ABI_CALL(0x0007C490u, sub_0007C490); /* call 0x0007C490 */

loc_00138285: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, 0x31B4F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138295u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00138295: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013829Fu); RECOMP_ABI_CALL(0x00151EF0u, sub_00151EF0); /* call 0x00151EF0 */

loc_0013829F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001382C0; /* je: equal / zero */

loc_001382A6: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001382B9u); RECOMP_ABI_CALL(0x001520F0u, sub_001520F0); /* call 0x001520F0 */

loc_001382B9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 7) = LO8(eax);

loc_001382C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x14;
    goto loc_001382D0;

    /* nop */

loc_001382D0: ;
    PUSH32(esp, 0x31B4EC);
    edi = esi + 1;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0xB8;
    PUSH32(esp, 0x31B4E0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001382F1u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001382F1: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x31B4B4);
    PUSH32(esp, 0x00138302u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00138302: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013831C; /* je: equal / zero */

loc_00138309: ;
    PUSH32(esp, 2);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0013831Au); RECOMP_ABI_CALL(0x000BFF30u, sub_000BFF30); /* call 0x000BFF30 */

loc_0013831A: ;
    goto loc_0013831E;

loc_0013831C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013831E: ;
    MEM32(esp + esi * 4 + 0x18) = eax;
    esi = edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM8(eax + 0x1A) = 0;
    MEM8(eax + 0x1B) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_001382D0; /* jl: less (signed <) */

loc_00138331: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00138348; /* je: equal / zero */

loc_00138339: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00138345u); RECOMP_ABI_CALL(0x00152100u, sub_00152100); /* call 0x00152100 */

loc_00138345: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00138348: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00138352u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013834Fu); } /* indirect call */
    }

loc_00138352: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0013835Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138357u); } /* indirect call */
    }

loc_0013835A: ;
    esi = eax;
    edi = 6;

loc_00138361: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00138363: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00138370u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013836Du); } /* indirect call */
    }

loc_00138370: ;
    eax = MEM32(esp + ebx * 4 + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138383u); RECOMP_ABI_CALL(0x00137950u, sub_00137950); /* call 0x00137950 */

loc_00138383: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0013838Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138387u); } /* indirect call */
    }

loc_0013838A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138363; /* jl: less (signed <) */

loc_00138390: ;
    PUSH32(esp, 0x00138395u); RECOMP_ABI_CALL(0x000804C0u, sub_000804C0); /* call 0x000804C0 */

loc_00138395: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00138361; /* jne: not equal / not zero */

loc_00138398: ;
    PUSH32(esp, 0x0013839Du); RECOMP_ABI_CALL(0x000804C0u, sub_000804C0); /* call 0x000804C0 */

loc_0013839D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001383A0: ;
    esi = MEM32(esp + edi * 4 + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001383B8; /* je: equal / zero */

loc_001383A8: ;
    ecx = esi;
    PUSH32(esp, 0x001383AFu); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_001383AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001383B5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001383B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001383B8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001383A0; /* jl: less (signed <) */

loc_001383BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3F2DE0) = 0;
    MEM8(ebp + 5) = 0;
    POP32(esp, ebx);

loc_001383CC: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001383E0
 * Original: 0x001383E0 - 0x001387AB (971 bytes, 193 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001383E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001383E0: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001383F5; /* je: equal / zero */

loc_001383F0: ;
    PUSH32(esp, 0x001383F5u); RECOMP_ABI_CALL(0x00138250u, sub_00138250); /* call 0x00138250 */

loc_001383F5: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013878A; /* jne: not equal / not zero */

loc_00138400: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0013840Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138407u); } /* indirect call */
    }

loc_0013840A: ;
    edi = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00138415u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00138412u); } /* indirect call */
    }

loc_00138415: ;
    xmm5 = XMM_SCALAR(MEMF(0x316BC4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x38DC5C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x38DC58)); /* movss */
    SET_LO16(ecx, MEM16(esi + 0x60));
    xmm0 = XMM_SCALAR(MEMF(0x2FF460)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x31B50C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x2FF224)); /* movss */
    MEMF(esp + 0x28) = xmm5.f[0]; /* movss */
    SET_LO8(ebx, 0x80);
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x31B508); /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x30BF30); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm5.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x31B504); /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x30BF30); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2FF460)); /* movss */
    edx = ZX16(LO16(ecx));
    SET_LO16(eax, LO16(ecx));
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    SET_LO16(eax, LO16(eax) >> 2);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    edx = edx & 0x80000003u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm4 = xmm7; /* movaps */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x20) = LO8(ebx);
    MEM8(esp + 0x21) = LO8(ebx);
    MEM8(esp + 0x22) = LO8(ebx);
    MEM8(esp + 0x23) = 0xFF;
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x38) = LO8(ebx);
    MEM8(esp + 0x39) = LO8(ebx);
    MEM8(esp + 0x3A) = LO8(ebx);
    MEM8(esp + 0x3B) = 0xFF;
    MEMF(esp + 0x3C) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x50) = LO8(ebx);
    MEM8(esp + 0x51) = LO8(ebx);
    MEM8(esp + 0x52) = LO8(ebx);
    MEM8(esp + 0x53) = 0xFF;
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x68) = LO8(ebx);
    MEM8(esp + 0x69) = LO8(ebx);
    MEM8(esp + 0x6A) = LO8(ebx);
    MEM8(esp + 0x6B) = 0xFF;
    if ((_fas >= 0)) goto loc_00138565; /* jns: not sign (positive) */

loc_00138560: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00138565: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001385F2; /* je: equal / zero */

loc_00138570: ;
    edx = ZX16(LO16(edx));
    eax = ZX16(LO16(eax));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, 5);
    xmm3 = xmm1; /* movaps */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4 = xmm2; /* movaps */
    PUSH32(esp, 4);
    edx = esp + 0x14;
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x001385DAu); RECOMP_ABI_CALL(0x000BF900u, sub_000BF900); /* call 0x000BF900 */

loc_001385DA: ;
    xmm1 = XMM_SCALAR(MEMF(0x38DC5C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x38DC58)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */

loc_001385F2: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013876B; /* je: equal / zero */

loc_001385FD: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0xD0)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x31B480); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x31B47C); /* mulss */
    PUSH32(esp, 5);
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x31B478); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x31B474); /* mulss */
    PUSH32(esp, 4);
    eax = esp + 0x74;
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x78) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x8C) = LO8(ebx);
    MEM8(esp + 0x8D) = LO8(ebx);
    MEM8(esp + 0x8E) = LO8(ebx);
    MEM8(esp + 0x8F) = 0xFF;
    MEMF(esp + 0x90) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xA4) = LO8(ebx);
    MEM8(esp + 0xA5) = LO8(ebx);
    MEM8(esp + 0xA6) = LO8(ebx);
    MEM8(esp + 0xA7) = 0xFF;
    MEMF(esp + 0xA8) = xmm6.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xBC) = LO8(ebx);
    MEM8(esp + 0xBD) = LO8(ebx);
    MEM8(esp + 0xBE) = LO8(ebx);
    MEM8(esp + 0xBF) = 0xFF;
    MEMF(esp + 0xC0) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xD4) = LO8(ebx);
    MEM8(esp + 0xD5) = LO8(ebx);
    MEM8(esp + 0xD6) = LO8(ebx);
    MEM8(esp + 0xD7) = 0xFF;
    PUSH32(esp, 0x0013876Bu); RECOMP_ABI_CALL(0x000BF900u, sub_000BF900); /* call 0x000BF900 */

loc_0013876B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00138772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013876Fu); } /* indirect call */
    }

loc_00138772: ;
    PUSH32(esp, 0x00138777u); RECOMP_ABI_CALL(0x000804C0u, sub_000804C0); /* call 0x000804C0 */

loc_00138777: ;
    eax = ZX16(MEM16(esi + 0x60));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM16(esi + 0x60) = LO16(edx);

loc_0013878A: ;
    ecx = MEM32(esi + 0x5C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    MEM32(esi + 0x5C) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001387A1; /* jbe: below or equal (unsigned <=) */

loc_0013879A: ;
    MEM32(esi + 0x5C) = 0;

loc_001387A1: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001387B0
 * Original: 0x001387B0 - 0x0013880F (95 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001387B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001387B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x31B384;
    if (CMP_EQ(_fa, _fb)) goto loc_001387D1; /* je: equal / zero */

loc_001387C1: ;
    ecx = edi;
    PUSH32(esp, 0x001387C8u); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_001387C8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001387CEu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001387CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001387D1: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001387E1; /* je: equal / zero */

loc_001387D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001387DEu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001387DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001387E1: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001387F8; /* je: equal / zero */

loc_001387E8: ;
    ecx = edi;
    PUSH32(esp, 0x001387EFu); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_001387EF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001387F5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001387F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001387F8: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00138808; /* je: equal / zero */

loc_001387FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00138805u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00138805: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00138808: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00138810
 * Original: 0x00138810 - 0x00138811 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138810(void)
{

loc_00138810: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138820
 * Original: 0x00138820 - 0x00138852 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138820: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013883F; /* je: equal / zero */

loc_00138828: ;
    ecx = eax + -192;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013883Eu); RECOMP_ABI_CALL(0x0013B520u, sub_0013B520); /* call 0x0013B520 */

loc_0013883E: ;
    esp += 4; return; /* ret */

loc_0013883F: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00138851u); RECOMP_ABI_CALL(0x0013B520u, sub_0013B520); /* call 0x0013B520 */

loc_00138851: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138860
 * Original: 0x00138860 - 0x0013888C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138860: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013887C; /* je: equal / zero */

loc_00138868: ;
    ecx = eax + -192;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013887Bu); RECOMP_ABI_CALL(0x00139AC0u, sub_00139AC0); /* call 0x00139AC0 */

loc_0013887B: ;
    esp += 4; return; /* ret */

loc_0013887C: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013888Bu); RECOMP_ABI_CALL(0x00139AC0u, sub_00139AC0); /* call 0x00139AC0 */

loc_0013888B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00138890
 * Original: 0x00138890 - 0x001388BB (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138890: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001388AC; /* je: equal / zero */

loc_00138899: ;
    ecx = MEM32(esp + 0xC);
    esi = eax + -192;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001388A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001388A5u); } /* indirect call */
    }

loc_001388A8: ;
    MEM32(eax) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001388AC: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001388B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001388B4u); } /* indirect call */
    }

loc_001388B7: ;
    MEM32(eax) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001388C0
 * Original: 0x001388C0 - 0x001388FF (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001388C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001388C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax) = 0x31B514;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x10) = 0xFF;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 0x18) = LO8(ecx);
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00138900
 * Original: 0x00138900 - 0x00138907 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138900(void)
{

loc_00138900: ;
    MEM32(ecx) = 0x31B514;
    esp += 4; return; /* ret */

}

/**
 * sub_00138910
 * Original: 0x00138910 - 0x00138914 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138910(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00138910: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138920
 * Original: 0x00138920 - 0x00138924 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138920(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00138920: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138930
 * Original: 0x00138930 - 0x00138934 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138930(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00138930: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00138940
 * Original: 0x00138940 - 0x00138944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138940(void)
{

loc_00138940: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00138950
 * Original: 0x00138950 - 0x00138955 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138950(void)
{

loc_00138950: ;
    eax = ZX8(MEM8(ecx + 0x19));
    esp += 4; return; /* ret */

}

/**
 * sub_00138960
 * Original: 0x00138960 - 0x00138964 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138960(void)
{

loc_00138960: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00138970
 * Original: 0x00138970 - 0x00138975 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138970(void)
{

loc_00138970: ;
    eax = ZX8(MEM8(ecx + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_00138980
 * Original: 0x00138980 - 0x00138984 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138980(void)
{

loc_00138980: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_00138990
 * Original: 0x00138990 - 0x00138994 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138990(void)
{

loc_00138990: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_001389A0
 * Original: 0x001389A0 - 0x001389A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001389A0(void)
{

loc_001389A0: ;
    SET_LO8(eax, MEM8(ecx + 0x1A));
    esp += 4; return; /* ret */

}

/**
 * sub_001389B0
 * Original: 0x001389B0 - 0x001389B6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001389B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001389B0: ;
    SET_LO8(eax, MEM8(ecx + 0x1D));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001389C0
 * Original: 0x001389C0 - 0x001389C9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001389C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001389C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x1C));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001389D0
 * Original: 0x001389D0 - 0x001389D9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001389D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001389D0: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001389E0
 * Original: 0x001389E0 - 0x001389E8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001389E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001389E0: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}
