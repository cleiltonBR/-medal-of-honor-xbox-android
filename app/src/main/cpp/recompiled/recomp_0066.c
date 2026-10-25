/**
 * Medal of Honor European Assault - Recompiled code chunk 66
 * Functions: 250 (0x0026FBD0 - 0x002783E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0026FBD0
 * Original: 0x0026FBD0 - 0x0026FC02 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FBD0: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FBE0; /* je: equal / zero */

loc_0026FBD8: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FBE4; /* jne: not equal / not zero */

loc_0026FBE0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026FBE4: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM8(eax + 0x30) = LO8(edx);
    MEM8(eax + 0x32) = 0;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0026FC10
 * Original: 0x0026FC10 - 0x0026FC18 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FC10(void)
{

loc_0026FC10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_0026FC20
 * Original: 0x0026FC20 - 0x0026FC29 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FC20(void)
{

loc_0026FC20: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x30));
    esp += 4; return; /* ret */

}

/**
 * sub_0026FC30
 * Original: 0x0026FC30 - 0x0026FC38 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FC30(void)
{

loc_0026FC30: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_0026FC40
 * Original: 0x0026FC40 - 0x0026FCB4 (116 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FC40: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0026FC6E; /* jle: less or equal (signed <=) */

loc_0026FC50: ;
    esi = MEM32(edx + 0x28);

loc_0026FC53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0026FC6A; /* jbe: below or equal (unsigned <=) */

loc_0026FC57: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026FC61; /* jne: not equal / not zero */

loc_0026FC5E: ;
    _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0026FC61: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026FC53; /* jg: greater (signed >) */

loc_0026FC68: ;
    goto loc_0026FC6E;

loc_0026FC6A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026FCB0; /* jg: greater (signed >) */

loc_0026FC6E: ;
    edx = MEM32(edx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FCB0; /* je: equal / zero */

loc_0026FC75: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026FC8B; /* jge: greater or equal (signed >=) */

loc_0026FC79: ;
    ecx = MEM32(esp + 0x10);
    eax = 1;
    MEM32(ecx + 0x5C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026FC8B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);
    ecx = 1;
    MEM32(edx + 0x5C) = eax;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026FCB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026FCC0
 * Original: 0x0026FCC0 - 0x0026FCD2 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FCC0: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026FCCF; /* jne: not equal / not zero */

loc_0026FCC6: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + -4);
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

loc_0026FCCF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FCE0
 * Original: 0x0026FCE0 - 0x0026FD58 (120 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026FCE0: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + 0x28);
    ebx = MEM32(ecx + edx * 8 + 8);
    PUSH32(esp, esi);
    esi = ecx + edx * 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026FD54; /* jne: not equal / not zero */

loc_0026FD02: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + -4);
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FD54; /* je: equal / zero */

loc_0026FD0E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026FD1B; /* je: equal / zero */

loc_0026FD13: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax);
    MEM32(esi + 0xC) = eax;

loc_0026FD1B: ;
    ecx = MEM32(ecx + -4);
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(esi + 0xC);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026FD38u); RECOMP_ABI_CALL(0x0026E6D0u, sub_0026E6D0); /* call 0x0026E6D0 */

loc_0026FD38: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FD51; /* je: equal / zero */

loc_0026FD41: ;
    edx = MEM32(esi);
    eax = edx + ebx * 8 + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0026FD4Eu); RECOMP_ABI_CALL(0x00267310u, sub_00267310); /* call 0x00267310 */

loc_0026FD4E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026FD51: ;
    eax = edi;
    POP32(esp, edi);

loc_0026FD54: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026FD60
 * Original: 0x0026FD60 - 0x0026FDF9 (153 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FD60: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x5C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx = ecx + ecx * 2;
    ecx = MEM32(ebx + 0x28);
    PUSH32(esp, esi);
    esi = ecx + edx * 8;
    SET_LO8(ecx, MEM8(esi + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0026FD8B; /* jne: not equal / not zero */

loc_0026FD81: ;
    edx = MEM32(esi);
    ecx = MEM32(edx + -4);
    ecx = MEM32(ecx + 0xC);
    goto loc_0026FD8D;

loc_0026FD8B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026FD8D: ;
    edi = MEM32(ebx + 8);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFF8u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebx + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0026FDF5; /* je: equal / zero */

loc_0026FD9A: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026FDA6; /* je: equal / zero */

loc_0026FDA1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0026FDC4;

loc_0026FDA6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026FDB2; /* je: equal / zero */

loc_0026FDAA: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx);
    MEM32(esi + 0xC) = eax;

loc_0026FDB2: ;
    edx = MEM32(esi);
    eax = MEM32(edx + -4);
    edx = MEM32(eax + 0xC);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0026FDC4: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026FDD0u); RECOMP_ABI_CALL(0x0026E6D0u, sub_0026E6D0); /* call 0x0026E6D0 */

loc_0026FDD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FDF3; /* je: equal / zero */

loc_0026FDD7: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x28) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x28 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FDF3; /* je: equal / zero */

loc_0026FDDC: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(esi);
    esi = MEM32(ecx);
    edx = edx + edi * 8 + -8;
    POP32(esp, edi);
    MEM32(edx) = esi;
    ecx = MEM32(ecx + 4);
    POP32(esp, esi);
    MEM32(edx + 4) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0026FDF3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026FDF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026FE00
 * Original: 0x0026FE00 - 0x0026FE6B (107 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FE00: ;
    eax = MEM32(eax + 4);
    SET_LO8(edx, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FE32; /* je: equal / zero */

loc_0026FE0A: ;
    MEM32(ecx + 0x10) = 0x34B51C;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x3C);
    MEM32(ecx + 0x1C) = 0xFFFFFFFFu;
    MEM32(ecx + 0xC) = 0x34B518;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026FE2Eu); RECOMP_ABI_CALL(0x0026E0D0u, sub_0026E0D0); /* call 0x0026E0D0 */

loc_0026FE2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026FE32: ;
    edx = MEM32(eax + 0xC);
    edx = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x3C);
    MEM32(ecx + 0x1C) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x307A28;
    if (CMP_EQ(_fa, _fb)) goto loc_0026FE55; /* je: equal / zero */

loc_0026FE50: ;
    eax = 0x34B514;

loc_0026FE55: ;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x3C);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026FE67u); RECOMP_ABI_CALL(0x0026E0D0u, sub_0026E0D0); /* call 0x0026E0D0 */

loc_0026FE67: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FE70
 * Original: 0x0026FE70 - 0x0026FEC9 (89 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026FE70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x44);
    SET_LO8(ecx, MEM8(ebp + 7));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FEB7; /* je: equal / zero */

loc_0026FE85: ;
    ebx = edi + edi * 4;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0026FE90;

    /* nop */

loc_0026FE90: ;
    esi = MEM32(ebp + 0x10);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026FEA7u); RECOMP_ABI_CALL(0x0026DCD0u, sub_0026DCD0); /* call 0x0026DCD0 */

loc_0026FEA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FEB3; /* je: equal / zero */

loc_0026FEAE: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FEBE; /* je: equal / zero */

loc_0026FEB3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FE90; /* jne: not equal / not zero */

loc_0026FEB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0026FEBE: ;
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026FED0
 * Original: 0x0026FED0 - 0x0026FF1A (74 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FED0: ;
    eax = 0x3021CE;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3C);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x1C) = eax;
    eax = esi + 0x20;
    PUSH32(esp, 0x34B52C);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = 0x34B524;
    MEM32(esi + 0x10) = 0x34B52C;
    PUSH32(esp, 0x0026FF02u); RECOMP_ABI_CALL(0x0026E0D0u, sub_0026E0D0); /* call 0x0026E0D0 */

loc_0026FF02: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x18) = 0;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0026FF20
 * Original: 0x0026FF20 - 0x0026FF48 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0026FF20: ;
    _fa = (uint32_t)(MEM8(eax + 0x47)) & 0xFFu; _fb = (uint32_t)(0xFA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x47), 0xFA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0026FF29; /* jbe: below or equal (unsigned <=) */

loc_0026FF26: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0026FF29: ;
    edx = MEM32(eax + 0x30);
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0026FF37; /* je: equal / zero */

loc_0026FF33: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0026FF26; /* jne: not equal / not zero */

loc_0026FF37: ;
    eax = MEM32(eax + 0xC);
    SET_LO8(eax, MEM8(eax + ecx * 4 + -4));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x3F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1B) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x1B));
    SET_LO8(eax, LO8(eax) - 0x1B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
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
 * sub_0026FF3A
 * Original: 0x0026FF3A - 0x0026FF48 (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FF3A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0026FF3A: ;
    SET_LO8(eax, MEM8(eax + ecx * 4 + -4));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x3F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1B) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x1B));
    SET_LO8(eax, LO8(eax) - 0x1B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
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
 * sub_0026FF3E
 * Original: 0x0026FF3E - 0x0026FF48 (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FF3E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0026FF3E: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x3F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1B) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x1B));
    SET_LO8(eax, LO8(eax) - 0x1B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
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
 * sub_0026FF50
 * Original: 0x0026FF50 - 0x0026FF7F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0026FF50: ;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx + edx * 4 + 4);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0026FF7C; /* jl: less (signed <) */

loc_0026FF61: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0026FF71; /* jle: less or equal (signed <=) */

loc_0026FF66: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0026FF7C; /* jne: not equal / not zero */

loc_0026FF6B: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0026FF71: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0026FF7C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FF80
 * Original: 0x0026FF80 - 0x0026FFA4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FF80: ;
    edx = ZX8(MEM8(ecx + 0x47));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026FF9E; /* jl: less (signed <) */

loc_0026FF88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026FF9B; /* jl: less (signed <) */

loc_0026FF8F: ;
    edx = MEM32(ecx + 0x28);
    _fb = (uint32_t)(0xFFFFFF06u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF06u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026FF9E; /* jl: less (signed <) */

loc_0026FF9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0026FF9E: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0026FFB0
 * Original: 0x0026FFB0 - 0x00270309 (857 bytes, 262 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026FFB0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x47));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFA (8-bit) */
    edx = ecx + -1;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_A(_fa, _fb)) goto loc_0026FFEC; /* ja: above (unsigned >) */

loc_0026FFCE: ;
    edx = MEM32(eax + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FFD9; /* je: equal / zero */

loc_0026FFD5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FFEC; /* jne: not equal / not zero */

loc_0026FFD9: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + ecx * 4 + -4);
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x1B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x1B (8-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0026FFF3; /* je: equal / zero */

loc_0026FFEC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026FFF3: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002702FA; /* jle: less or equal (signed <=) */

loc_00270008: ;
    edx = ZX8(LO8(ebx));
    MEM32(esp + 0x14) = edx;
    /* nop */

loc_00270010: ;
    eax = MEM32(eax + ecx * 4);
    edx = MEM32(esp + 0x14);
    edi = eax;
    ecx = eax;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi >> 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_0027002D: ;
    SET_LO8(ebx, MEM8(ecx + 0x34BC0C));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(ebx));
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00270074; /* je: equal / zero */

loc_0027003E: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0027005C; /* je: equal / zero */

loc_00270041: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002700E0; /* jne: not equal / not zero */

loc_00270048: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1FFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    goto loc_002700E0;

loc_0027005C: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002700E0; /* je: equal / zero */

loc_0027006B: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x28) (32-bit) */
    goto loc_002700DE;

loc_00270074: ;
    esi = eax;
    esi = esi >> 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi & 0x1FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002700A0; /* je: equal / zero */

loc_0027008E: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002700BC; /* jl: less (signed <) */

loc_00270096: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002700A0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002700B8; /* je: equal / zero */

loc_002700A5: ;
    ecx = MEM32(esp + 0x2C);
    eax = esi;
    PUSH32(esp, 0x002700B0u); RECOMP_ABI_CALL(0x0026FF80u, sub_0026FF80); /* call 0x0026FF80 */

loc_002700B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270096; /* je: equal / zero */

loc_002700B4: ;
    ecx = MEM32(esp + 0x24);

loc_002700B8: ;
    eax = MEM32(esp + 0x14);

loc_002700BC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    edx = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_002700E8; /* je: equal / zero */

loc_002700C5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002700E8; /* jl: less (signed <) */

loc_002700C9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00270096; /* jl: less (signed <) */

loc_002700D1: ;
    eax = MEM32(esp + 0x2C);
    edx = ebp + -250;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x28) (32-bit) */

loc_002700DE: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_002700E0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);

loc_002700E8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002700F7; /* je: equal / zero */

loc_002700ED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x34) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002700F7; /* jne: not equal / not zero */

loc_002700F3: ;
    MEM32(esp + 0x18) = edx;

loc_002700F7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0027011E; /* jns: not sign (positive) */

loc_002700FB: ;
    ebx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_00270106: ;
    ebx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x10);
    ebx = MEM32(ebx + edx * 4 + 4);
    ebx = ebx & 0x3F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x14 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270096; /* jne: not equal / not zero */

loc_0027011E: ;
    ebx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002702E1; /* ja: above (unsigned >) */

loc_0027012E: ;
    ecx = ZX8(MEM8(ecx + 0x270344));
    { uint32_t _jt = MEM32(ecx * 4 + 0x27030C); /* switch: 14 entries, 14 targets */
    if (_jt == 0x0027013Cu) goto loc_0027013C;
    if (_jt == 0x00270158u) goto loc_00270158;
    if (_jt == 0x00270175u) goto loc_00270175;
    if (_jt == 0x00270186u) goto loc_00270186;
    if (_jt == 0x00270198u) goto loc_00270198;
    if (_jt == 0x002701B4u) goto loc_002701B4;
    if (_jt == 0x002701CDu) goto loc_002701CD;
    if (_jt == 0x002701E3u) goto loc_002701E3;
    if (_jt == 0x002701EEu) goto loc_002701EE;
    if (_jt == 0x0027022Fu) goto loc_0027022F;
    if (_jt == 0x00270278u) goto loc_00270278;
    if (_jt == 0x0027028Bu) goto loc_0027028B;
    if (_jt == 0x0027029Cu) goto loc_0027029C;
    if (_jt == 0x002702E1u) goto loc_002702E1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0027013C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002702E1; /* je: equal / zero */

loc_00270144: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_00270153: ;
    goto loc_002702E1;

loc_00270158: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002702E1; /* jg: greater (signed >) */

loc_00270164: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002702E1; /* jg: greater (signed >) */

loc_0027016C: ;
    MEM32(esp + 0x18) = edx;
    goto loc_002702E1;

loc_00270175: ;
    edx = ZX8(MEM8(ebx + 0x44));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_00270181: ;
    goto loc_002702E1;

loc_00270186: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(MEM32(eax + esi * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + esi * 8), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270096; /* jne: not equal / not zero */

loc_00270193: ;
    goto loc_002702E1;

loc_00270198: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_002701A1: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002702E1; /* jne: not equal / not zero */

loc_002701AB: ;
    MEM32(esp + 0x18) = edx;
    goto loc_002702E1;

loc_002701B4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_002701C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_002701C8: ;
    goto loc_002702E1;

loc_002701CD: ;
    ecx = edi + ebp + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_002701D9: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002701E3; /* jl: less (signed <) */

loc_002701DF: ;
    MEM32(esp + 0x18) = edx;

loc_002701E3: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_002701EE: ;
    eax = esi + edx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00270096; /* jl: less (signed <) */

loc_002701FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_00270204: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002702E1; /* je: equal / zero */

loc_00270212: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002702E1; /* jge: greater or equal (signed >=) */

loc_0027021A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x30) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002702E1; /* jg: greater (signed >) */

loc_00270224: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = esi;
    goto loc_002702E1;

loc_0027022F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027023F; /* je: equal / zero */

loc_00270233: ;
    ecx = esi + edi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_0027023F: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027025C; /* jne: not equal / not zero */

loc_00270245: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x00270252u); RECOMP_ABI_CALL(0x0026FF50u, sub_0026FF50); /* call 0x0026FF50 */

loc_00270252: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270096; /* je: equal / zero */

loc_0027025A: ;
    goto loc_0027026C;

loc_0027025C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027026C; /* je: equal / zero */

loc_00270260: ;
    ecx = edi + ebp + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_0027026C: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002702E1; /* jl: less (signed <) */

loc_00270272: ;
    MEM32(esp + 0x18) = edx;
    goto loc_002702E1;

loc_00270278: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002702E1; /* jle: less or equal (signed <=) */

loc_0027027D: ;
    edx = esi + edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_00270289: ;
    goto loc_002702E1;

loc_0027028B: ;
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + edi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_0027029A: ;
    goto loc_002702E1;

loc_0027029C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x34) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_002702A5: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + esi * 4);
    ecx = ZX8(MEM8(ecx + 0x44));
    eax = ecx + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270096; /* jge: greater or equal (signed >=) */

loc_002702BC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002702E1; /* jle: less or equal (signed <=) */

loc_002702C0: ;
    edx = MEM32(esp + 0x20);
    edx = edx + eax * 4;

loc_002702C7: ;
    eax = MEM32(edx);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002702D9; /* je: equal / zero */

loc_002702D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270096; /* jne: not equal / not zero */

loc_002702D9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002702C7; /* jg: greater (signed >) */

loc_002702E1: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x30);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00270010; /* jl: less (signed <) */

loc_002702FA: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(eax + ecx * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270370
 * Original: 0x00270370 - 0x00270387 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270370: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270383u); RECOMP_ABI_CALL(0x0026FFB0u, sub_0026FFB0); /* call 0x0026FFB0 */

loc_00270383: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270390
 * Original: 0x00270390 - 0x002703B2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270390: ;
    _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xFA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_002703AC; /* js: sign (negative) */

loc_00270397: ;
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + eax * 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    eax = edx + eax * 8;
    if (CMP_NE(_fa, _fb)) goto loc_002703AC; /* jne: not equal / not zero */

loc_002703A5: ;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002703AC: ;
    eax = 0x34AE2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002703C0
 * Original: 0x002703C0 - 0x002704C6 (262 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002703C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002703C0: ;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 8), 1 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0027045A; /* jne: not equal / not zero */

loc_002703D1: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx + -4);
    edi = MEM32(eax + 0xC);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002703E5; /* je: equal / zero */

loc_002703E0: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00270401;

loc_002703E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002703F1; /* je: equal / zero */

loc_002703E9: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(edx);
    MEM32(ebx + 0xC) = eax;

loc_002703F1: ;
    ecx = MEM32(ecx + -4);
    edx = MEM32(ecx + 0xC);
    esi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00270401: ;
    PUSH32(esp, esi);
    eax = ebp + 1;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027040Cu); RECOMP_ABI_CALL(0x0026E6D0u, sub_0026E6D0); /* call 0x0026E6D0 */

loc_0027040C: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00270460; /* jne: not equal / not zero */

loc_00270419: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00270421u); RECOMP_ABI_CALL(0x0026FFB0u, sub_0026FFB0); /* call 0x0026FFB0 */

loc_00270421: ;
    ecx = eax;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027045A; /* ja: above (unsigned >) */

loc_0027042E: ;
    edx = ZX8(MEM8(ecx + 0x2704DC));
    { uint32_t _jt = MEM32(edx * 4 + 0x2704C8); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0027043Cu) goto loc_0027043C;
    if (_jt == 0x0027045Au) goto loc_0027045A;
    if (_jt == 0x00270469u) goto loc_00270469;
    if (_jt == 0x0027048Au) goto loc_0027048A;
    if (_jt == 0x002704A8u) goto loc_002704A8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0027043C: ;
    ecx = eax;
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027045A; /* jge: greater or equal (signed >=) */

loc_0027044E: ;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 8), 1 (8-bit) */
    ebp = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002703D1; /* je: equal / zero */

loc_0027045A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00270460: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x34B54C;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00270469: ;
    ecx = MEM32(edi + 8);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx + eax * 8 + 4);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(eax) = edx;
    eax = 0x34B544;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027048A: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    PUSH32(esp, 0x00270499u); RECOMP_ABI_CALL(0x00270390u, sub_00270390); /* call 0x00270390 */

loc_00270499: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    eax = 0x34B53C;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002704A8: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    PUSH32(esp, 0x002704B7u); RECOMP_ABI_CALL(0x00270390u, sub_00270390); /* call 0x00270390 */

loc_002704B7: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = eax;
    eax = 0x34AEE8;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002704F0
 * Original: 0x002704F0 - 0x00270569 (121 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002704F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002704F0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(ebx + 8));
    SET_LO8(ecx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270503; /* jne: not equal / not zero */

loc_002704FC: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00270508; /* jg: greater (signed >) */

loc_00270503: ;
    _fa = (uint32_t)(MEM8(ebx + -16)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + -16), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027050C; /* je: equal / zero */

loc_00270508: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0027050C: ;
    eax = MEM32(ebx + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027051B; /* je: equal / zero */

loc_00270516: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00270539;

loc_0027051B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270527; /* je: equal / zero */

loc_0027051F: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax);
    MEM32(ebx + 0xC) = ecx;

loc_00270527: ;
    edx = MEM32(ebx);
    eax = MEM32(edx + -4);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00270539: ;
    edx = MEM32(ebx);
    ecx = MEM32(edx + -4);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx + 0xC);
    eax = MEM32(ecx + eax * 4);
    ecx = eax;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270556; /* je: equal / zero */

loc_00270551: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270508; /* jne: not equal / not zero */

loc_00270556: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270564u); RECOMP_ABI_CALL(0x002703C0u, sub_002703C0); /* call 0x002703C0 */

loc_00270564: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270570
 * Original: 0x00270570 - 0x00270594 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270570: ;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027058B; /* jae: above or equal (unsigned >=) */

loc_00270579: ;
    /* nop */

loc_00270580: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027058E; /* je: equal / zero */

loc_00270584: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00270580; /* jb: below (unsigned <) */

loc_0027058B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0027058E: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002705A0
 * Original: 0x002705A0 - 0x00270626 (134 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002705A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002705A0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x384B10);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270619; /* jne: not equal / not zero */

loc_002705B7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002705C4; /* je: equal / zero */

loc_002705BC: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 0xC) = edx;

loc_002705C4: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + -4);
    ecx = MEM32(edx + 0xC);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    if ((_fas >= 0)) goto loc_002705DE; /* jns: not sign (positive) */

loc_002705D9: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002705EC;

loc_002705DE: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002705EA; /* je: equal / zero */

loc_002705E5: ;
    esi = MEM32(edx + eax * 4);
    goto loc_002705EC;

loc_002705EA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002705EC: ;
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, 0x3C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002705FFu); RECOMP_ABI_CALL(0x0026E0D0u, sub_0026E0D0); /* call 0x0026E0D0 */

loc_002705FF: ;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B554);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00270615u); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_00270615: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_00270619: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x00270622u); RECOMP_ABI_CALL(0x002C15BBu, sub_002C15BB); /* call 0x002C15BB */

loc_00270622: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270630
 * Original: 0x00270630 - 0x002706AC (124 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270630: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027069F; /* je: equal / zero */

loc_0027063C: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270652; /* je: equal / zero */

loc_00270647: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027064Fu); RECOMP_ABI_CALL(0x0026A530u, sub_0026A530); /* call 0x0026A530 */

loc_0027064F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270652: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + -8);
    MEM32(eax) = ecx;
    edx = MEM32(eax + -4);
    MEM32(eax + 4) = edx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    POP32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_00270687; /* jg: greater (signed >) */

loc_0027067C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00270684u); RECOMP_ABI_CALL(0x0026A700u, sub_0026A700); /* call 0x0026A700 */

loc_00270684: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270687: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    PUSH32(esp, 1);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027069Cu); RECOMP_ABI_CALL(0x0026ACB0u, sub_0026ACB0); /* call 0x0026ACB0 */

loc_0027069C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027069F: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002706A7u); RECOMP_ABI_CALL(0x0026A530u, sub_0026A530); /* call 0x0026A530 */

loc_002706A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002706B0
 * Original: 0x002706B0 - 0x002706D6 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002706B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002706B0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002706C5u); RECOMP_ABI_CALL(0x0026DDE0u, sub_0026DDE0); /* call 0x0026DDE0 */

loc_002706C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002706CBu); RECOMP_ABI_CALL(0x002705A0u, sub_002705A0); /* call 0x002705A0 */

loc_002706CB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002706D1u); RECOMP_ABI_CALL(0x00270630u, sub_00270630); /* call 0x00270630 */

loc_002706D1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002706E0
 * Original: 0x002706E0 - 0x002707C6 (230 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002706E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002706E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = 1;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002707C1; /* je: equal / zero */

loc_002706FD: ;
    /* nop */

loc_00270700: ;
    eax = SX8(LO8(eax));
    _fb = (uint32_t)(0xFFFFFFADu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFADu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x22 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027079F; /* ja: above (unsigned >) */

loc_0027070F: ;
    ecx = ZX8(MEM8(eax + 0x2707E0));
    { uint32_t _jt = MEM32(ecx * 4 + 0x2707C8); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0027071Du) goto loc_0027071D;
    if (_jt == 0x0027072Bu) goto loc_0027072B;
    if (_jt == 0x00270743u) goto loc_00270743;
    if (_jt == 0x0027074Fu) goto loc_0027074F;
    if (_jt == 0x00270790u) goto loc_00270790;
    if (_jt == 0x0027079Fu) goto loc_0027079F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0027071D: ;
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0x00270726u); RECOMP_ABI_CALL(0x0026FE00u, sub_0026FE00); /* call 0x0026FE00 */

loc_00270726: ;
    goto loc_002707A7;

loc_0027072B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027073B; /* je: equal / zero */

loc_0027072F: ;
    eax = ebx;
    PUSH32(esp, 0x00270736u); RECOMP_ABI_CALL(0x0026FB50u, sub_0026FB50); /* call 0x0026FB50 */

loc_00270736: ;
    MEM32(esi + 0x14) = eax;
    goto loc_002707A7;

loc_0027073B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x14) = eax;
    goto loc_002707A7;

loc_00270743: ;
    edx = MEM32(edi + 4);
    eax = ZX8(MEM8(edx + 7));
    MEM32(esi + 0x18) = eax;
    goto loc_002707A7;

loc_0027074F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270763; /* je: equal / zero */

loc_00270753: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0x0027075Eu); RECOMP_ABI_CALL(0x002704F0u, sub_002704F0); /* call 0x002704F0 */

loc_0027075E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00270765;

loc_00270763: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00270765: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002707A7; /* jne: not equal / not zero */

loc_0027076C: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0x00270774u); RECOMP_ABI_CALL(0x0026FE70u, sub_0026FE70); /* call 0x0026FE70 */

loc_00270774: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00270787; /* je: equal / zero */

loc_0027077E: ;
    MEM32(esi + 8) = 0x34B544;
    goto loc_002707A7;

loc_00270787: ;
    MEM32(esi + 8) = 0x3021CE;
    goto loc_002707A7;

loc_00270790: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(edi);
    MEM32(eax) = edx;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;
    goto loc_002707A7;

loc_0027079F: ;
    MEM32(esp + 4) = 0;

loc_002707A7: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270700; /* jne: not equal / not zero */

loc_002707BA: ;
    eax = MEM32(esp + 4);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002707C1: ;
    eax = ecx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270810
 * Original: 0x00270810 - 0x002708CB (187 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270810: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0x3E (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00270864; /* jne: not equal / not zero */

loc_00270826: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270842; /* je: equal / zero */

loc_00270834: ;
    PUSH32(esp, 0x34B560);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027083Fu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_0027083F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270842: ;
    esi = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00270850u); RECOMP_ABI_CALL(0x002706E0u, sub_002706E0); /* call 0x002706E0 */

loc_00270850: ;
    ebx = MEM32(esp + 0x20);
    edi = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    goto loc_0027089B;

loc_00270864: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270892; /* je: equal / zero */

loc_0027086F: ;
    ecx = MEM32(ebp + 0x28);
    eax = eax + eax * 2;
    edi = MEM32(ecx + eax * 8);
    eax = ecx + eax * 8;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebx = eax;
    PUSH32(esp, 0x00270887u); RECOMP_ABI_CALL(0x002706E0u, sub_002706E0); /* call 0x002706E0 */

loc_00270887: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    goto loc_0027089B;

loc_00270892: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00270898u); RECOMP_ABI_CALL(0x0026FED0u, sub_0026FED0); /* call 0x0026FED0 */

loc_00270898: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027089B: ;
    PUSH32(esp, 0x66);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002708A3u); RECOMP_ABI_CALL(0x002BE820u, sub_002BE820); /* call 0x002BE820 */

loc_002708A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002708C4; /* je: equal / zero */

loc_002708AA: ;
    edx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002708C0; /* jg: greater (signed >) */

loc_002708B5: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002708BDu); RECOMP_ABI_CALL(0x0026A700u, sub_0026A700); /* call 0x0026A700 */

loc_002708BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002708C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 8;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002708C4: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002708D0
 * Original: 0x002708D0 - 0x0027095D (141 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002708D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002708D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x34B1A0);
    MEM32(esp + 0xC) = 0;
    eax = MEM32(ebx);
    edx = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027090B; /* jae: above or equal (unsigned >=) */

loc_002708F9: ;
    /* nop */

loc_00270900: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270924; /* je: equal / zero */

loc_00270904: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00270900; /* jb: below (unsigned <) */

loc_0027090B: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B5B0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027091Cu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_0027091C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00270924: ;
    eax = MEM32(esi + 0xC);
    edx = esp + 0xC;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00270937u); RECOMP_ABI_CALL(0x002703C0u, sub_002703C0); /* call 0x002703C0 */

loc_00270937: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027090B; /* je: equal / zero */

loc_0027093E: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x34B58C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00270955u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00270955: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270960
 * Original: 0x00270960 - 0x0027097D (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270960: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = MEM32(esp + 0xC); /* cmove */
    MEM32(esp + 0xC) = 0x34B5CC;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_002708D0(); return; /* tail jmp 0x002708D0 */

}

/**
 * sub_00270980
 * Original: 0x00270980 - 0x002709B7 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270980: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00270993u); RECOMP_ABI_CALL(0x0026BE40u, sub_0026BE40); /* call 0x0026BE40 */

loc_00270993: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0x34B5D8);
    eax = esi;
    if (CMP_NE(_fa, _fb)) eax = MEM32(esp + 0x1C); /* cmovne */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002709AFu); RECOMP_ABI_CALL(0x002708D0u, sub_002708D0); /* call 0x002708D0 */

loc_002709AF: ;
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
 * sub_002709C0
 * Original: 0x002709C0 - 0x00270A0F (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002709C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002709C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ecx * 4 + 0x34B1A0);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx);
    ecx = MEM32(ecx * 4 + 0x34B1A0);
    SET_LO8(edx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002709F8; /* jne: not equal / not zero */

loc_002709E2: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x34B610);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002709F2u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_002709F2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002709F8: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B5F0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00270A09u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00270A09: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270A10
 * Original: 0x00270A10 - 0x00270AF0 (224 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270A10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00270A35; /* jne: not equal / not zero */

loc_00270A1A: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270AEB; /* je: equal / zero */

loc_00270A26: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270A2Cu); RECOMP_ABI_CALL(0x002BF1A3u, sub_002BF1A3); /* call 0x002BF1A3 */

loc_00270A2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;
    goto loc_00270A4C;

loc_00270A35: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFDu (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00270A70; /* jb: below (unsigned <) */

loc_00270A3A: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x34B634);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270A49u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00270A49: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270A4C: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270A69; /* je: equal / zero */

loc_00270A54: ;
    eax = MEM32(ecx + 0x10);
    esi = MEM32(eax + 0x24);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x24) = esi;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + ebx;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270A69: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00270A70: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270A87; /* jne: not equal / not zero */

loc_00270A78: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00270A7Eu); RECOMP_ABI_CALL(0x002BEDCFu, sub_002BEDCF); /* call 0x002BEDCF */

loc_00270A7E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_00270ACA;

loc_00270A87: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270AC9; /* je: equal / zero */

loc_00270A90: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00270A97u); RECOMP_ABI_CALL(0x002BEDCFu, sub_002BEDCF); /* call 0x002BEDCF */

loc_00270A97: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270AC4; /* je: equal / zero */

loc_00270AA0: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    ecx = edi;
    if (CMP_AE(_fa, _fb)) ecx = ebx; /* cmovae */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x00270AC1u); RECOMP_ABI_CALL(0x002BF1A3u, sub_002BF1A3); /* call 0x002BF1A3 */

loc_00270AC1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270AC4: ;
    MEM32(esp + 0x18) = ebp;
    POP32(esp, ebp);

loc_00270AC9: ;
    POP32(esp, edi);

loc_00270ACA: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270A4C; /* jne: not equal / not zero */

loc_00270AD6: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270AEB; /* je: equal / zero */

loc_00270ADE: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270AE6u); RECOMP_ABI_CALL(0x0026A530u, sub_0026A530); /* call 0x0026A530 */

loc_00270AE6: ;
    goto loc_00270A49;

loc_00270AEB: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270AF0
 * Original: 0x00270AF0 - 0x00270B5A (106 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270AF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = MEM32(edi);
    esi = ecx + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270B0C; /* jge: greater or equal (signed >=) */

loc_00270B05: ;
    esi = 4;
    goto loc_00270B36;

loc_00270B0C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00270B35; /* jl: less (signed <) */

loc_00270B1C: ;
    eax = ebx + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270B27; /* jge: greater or equal (signed >=) */

loc_00270B23: ;
    esi = ebx;
    goto loc_00270B35;

loc_00270B27: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00270B32u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00270B32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270B35: ;
    POP32(esp, ebx);

loc_00270B36: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(edi);
    edx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00270B51u); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_00270B51: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00270B60
 * Original: 0x00270B60 - 0x00270BA9 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270B60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00270B70: ;
    esi = MEM32(ebx * 4 + 0x34B660);
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_00270B80: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270B80; /* jne: not equal / not zero */

loc_00270B87: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00270B91u); RECOMP_ABI_CALL(0x0026E380u, sub_0026E380); /* call 0x0026E380 */

loc_00270B91: ;
    MEM8(eax + 5) = MEM8(eax + 5) | 0x10;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x15 (32-bit) */
    MEM8(eax + 6) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00270B70; /* jl: less (signed <) */

loc_00270BA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270BB0
 * Original: 0x00270BB0 - 0x00270C12 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270BB0: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x384B10);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x2C);
    PUSH32(esp, 0x50);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00270BD7u); RECOMP_ABI_CALL(0x0026E0D0u, sub_0026E0D0); /* call 0x0026E0D0 */

loc_00270BD7: ;
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x34B76C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00270BF6u); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_00270BF6: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00270BFEu); RECOMP_ABI_CALL(0x0026A530u, sub_0026A530); /* call 0x0026A530 */

loc_00270BFE: ;
    ecx = MEM32(esp + 0x80);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    PUSH32(esp, 0x00270C0Eu); RECOMP_ABI_CALL(0x002C15BBu, sub_002C15BB); /* call 0x002C15BB */

loc_00270C0E: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270C20
 * Original: 0x00270C20 - 0x00270C34 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270C20: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270C30u); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_00270C30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270C40
 * Original: 0x00270C40 - 0x00270C6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270C40: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270C62; /* jge: greater or equal (signed >=) */

loc_00270C4B: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x34B780);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00270C5Eu); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_00270C5E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00270C62: ;
    eax = MEM32(eax * 4 + 0x34B25C);
    esp += 4; return; /* ret */

}

/**
 * sub_00270C70
 * Original: 0x00270C70 - 0x00270C9F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270C70: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x11F (32-bit) */
    edx = MEM32(eax + 4);
    PUSH32(esp, edx);
    if (CMP_NE(_fa, _fb)) goto loc_00270C8E; /* jne: not equal / not zero */

loc_00270C7C: ;
    edx = MEM32(0x34B6D8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270C8Au); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_00270C8A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00270C8E: ;
    edx = MEM32(eax + 0x28);
    edx = MEM32(edx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270C9Bu); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_00270C9B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270CA0
 * Original: 0x00270CA0 - 0x00270D37 (151 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270CA0: ;
    eax = MEM32(esp + 4);
    ecx = 1;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x14) = 0x11F;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x2C) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00270CED; /* jbe: below or equal (unsigned <=) */

loc_00270CDE: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00270CF9;

loc_00270CED: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270CF6u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00270CF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270CF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00270D35; /* jne: not equal / not zero */

loc_00270D00: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00270D1D; /* jbe: below or equal (unsigned <=) */

loc_00270D0E: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00270D29;

loc_00270D1D: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270D26u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00270D26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270D29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00270D35; /* je: equal / zero */

loc_00270D30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270D00; /* jne: not equal / not zero */

loc_00270D35: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270D40
 * Original: 0x00270D40 - 0x00270DD3 (147 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270D40: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00270D60; /* jae: above or equal (unsigned >=) */

loc_00270D4E: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270D5Au); RECOMP_ABI_CALL(0x0026F430u, sub_0026F430); /* call 0x0026F430 */

loc_00270D5A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00270D60: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(eax + 4);
    ecx = edi + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00270D7E; /* jbe: below or equal (unsigned <=) */

loc_00270D6D: ;
    edx = edi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270D7Bu); RECOMP_ABI_CALL(0x0026F430u, sub_0026F430); /* call 0x0026F430 */

loc_00270D7B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270D7E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    SET_LO8(eax, MEM8(esi));
    MEM8(edi + edx) = LO8(eax);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00270DA6; /* jbe: below or equal (unsigned <=) */

loc_00270D97: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00270DB2;

loc_00270DA6: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270DAFu); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00270DAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270DB2: ;
    PUSH32(esp, eax);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00270DBAu); RECOMP_ABI_CALL(0x002BF27Bu, sub_002BF27B); /* call 0x002BF27B */

loc_00270DBA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270D60; /* jne: not equal / not zero */

loc_00270DC1: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x5F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270D60; /* je: equal / zero */

loc_00270DC6: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270DE0
 * Original: 0x00270DE0 - 0x002710CD (749 bytes, 296 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270DE0: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00270DFD; /* jae: above or equal (unsigned >=) */

loc_00270DEE: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270DFAu); RECOMP_ABI_CALL(0x0026F430u, sub_0026F430); /* call 0x0026F430 */

loc_00270DFA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270DFD: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270E12; /* je: equal / zero */

loc_00270E05: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edx) = 0x2E;
    edi = 1;

loc_00270E12: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270E1Au); RECOMP_ABI_CALL(0x002BF229u, sub_002BF229); /* call 0x002BF229 */

loc_00270E1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270E84; /* je: equal / zero */

loc_00270E21: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(eax + 4);
    ecx = edi + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00270E3F; /* jbe: below or equal (unsigned <=) */

loc_00270E2E: ;
    edx = edi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270E3Cu); RECOMP_ABI_CALL(0x0026F430u, sub_0026F430); /* call 0x0026F430 */

loc_00270E3C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270E3F: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    SET_LO8(eax, MEM8(esi));
    MEM8(edi + edx) = LO8(eax);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00270E67; /* jbe: below or equal (unsigned <=) */

loc_00270E58: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00270E73;

loc_00270E67: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270E70u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00270E70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270E73: ;
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00270E7Du); RECOMP_ABI_CALL(0x002BF229u, sub_002BF229); /* call 0x002BF229 */

loc_00270E7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270E21; /* jne: not equal / not zero */

loc_00270E84: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x2E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270F1E; /* jne: not equal / not zero */

loc_00270E8D: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(esi));
    MEM8(edi + eax) = LO8(ecx);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00270EB5; /* jbe: below or equal (unsigned <=) */

loc_00270EA6: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00270EC1;

loc_00270EB5: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270EBEu); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00270EBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270EC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00270F1E; /* jne: not equal / not zero */

loc_00270EC8: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = LO8(eax);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00270EEE; /* jbe: below or equal (unsigned <=) */

loc_00270EDF: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00270EFA;

loc_00270EEE: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270EF7u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00270EF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270EFA: ;
    ecx = MEM32(esi + 0x28);
    MEM32(esi) = eax;
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x34B798);
    PUSH32(esp, esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00270F1Bu); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_00270F1B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270F1E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270F26u); RECOMP_ABI_CALL(0x002BF229u, sub_002BF229); /* call 0x002BF229 */

loc_00270F26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270F93; /* je: equal / zero */

loc_00270F2D: ;
    /* nop */

loc_00270F30: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(eax + 4);
    ecx = edi + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00270F4E; /* jbe: below or equal (unsigned <=) */

loc_00270F3D: ;
    edx = edi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270F4Bu); RECOMP_ABI_CALL(0x0026F430u, sub_0026F430); /* call 0x0026F430 */

loc_00270F4B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270F4E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    SET_LO8(eax, MEM8(esi));
    MEM8(edi + edx) = LO8(eax);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00270F76; /* jbe: below or equal (unsigned <=) */

loc_00270F67: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00270F82;

loc_00270F76: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270F7Fu); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00270F7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270F82: ;
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00270F8Cu); RECOMP_ABI_CALL(0x002BF229u, sub_002BF229); /* call 0x002BF229 */

loc_00270F8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270F30; /* jne: not equal / not zero */

loc_00270F93: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270FA3; /* je: equal / zero */

loc_00270F9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x45 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271093; /* jne: not equal / not zero */

loc_00270FA3: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(esi));
    MEM8(edi + eax) = LO8(ecx);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00270FCB; /* jbe: below or equal (unsigned <=) */

loc_00270FBC: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00270FD7;

loc_00270FCB: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270FD4u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00270FD4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270FD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00270FE3; /* je: equal / zero */

loc_00270FDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271019; /* jne: not equal / not zero */

loc_00270FE3: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    SET_LO8(eax, MEM8(esi));
    MEM8(edi + edx) = LO8(eax);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027100B; /* jbe: below or equal (unsigned <=) */

loc_00270FFC: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271017;

loc_0027100B: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271014u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271014: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271017: ;
    MEM32(esi) = eax;

loc_00271019: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00271021u); RECOMP_ABI_CALL(0x002BF229u, sub_002BF229); /* call 0x002BF229 */

loc_00271021: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271093; /* je: equal / zero */

loc_00271028: ;
    goto loc_00271030;

    /* nop */

loc_00271030: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 4);
    edx = edi + 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027104E; /* jbe: below or equal (unsigned <=) */

loc_0027103D: ;
    edx = MEM32(esi + 0x20);
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027104Bu); RECOMP_ABI_CALL(0x0026F430u, sub_0026F430); /* call 0x0026F430 */

loc_0027104B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027104E: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + ecx) = LO8(edx);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271076; /* jbe: below or equal (unsigned <=) */

loc_00271067: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271082;

loc_00271076: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027107Fu); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_0027107F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271082: ;
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0027108Cu); RECOMP_ABI_CALL(0x002BF229u, sub_002BF229); /* call 0x002BF229 */

loc_0027108C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271030; /* jne: not equal / not zero */

loc_00271093: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx);
    ecx = MEM32(esp + 0xC);
    MEM8(edi + eax) = 0;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002710ACu); RECOMP_ABI_CALL(0x0026DD20u, sub_0026DD20); /* call 0x0026DD20 */

loc_002710AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002710CC; /* jne: not equal / not zero */

loc_002710B4: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B784);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002710C9u); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_002710C9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002710CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002710D0
 * Original: 0x002710D0 - 0x0027116C (156 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002710D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002710D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x116) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x116 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271151; /* je: equal / zero */

loc_002710DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11C (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00271107; /* jle: less or equal (signed <=) */

loc_002710E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11E (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00271107; /* jg: greater (signed >) */

loc_002710ED: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(esi + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271102u); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_00271102: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271107: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00271135; /* jge: greater or equal (signed >=) */

loc_0027110E: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B780);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027111Du); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_0027111D: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271130u); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_00271130: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271135: ;
    edx = MEM32(esi + 4);
    eax = MEM32(eax * 4 + 0x34B25C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027114Cu); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_0027114C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271151: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271167u); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_00271167: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271170
 * Original: 0x00271170 - 0x0027119F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271170: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027119E; /* jle: less or equal (signed <=) */

loc_0027117A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B7D0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00271193u); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_00271193: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027119Au); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_0027119A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_0027119E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002711A0
 * Original: 0x002711A0 - 0x002711FE (94 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002711A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002711A0: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_002711BD; /* jbe: below or equal (unsigned <=) */

loc_002711AE: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_002711C9;

loc_002711BD: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002711C6u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_002711C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002711C9: ;
    edx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFD (32-bit) */
    MEM32(esi + 4) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_002711FD; /* jle: less or equal (signed <=) */

loc_002711DB: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x7FFFFFFD);
    PUSH32(esp, 0x34B7E8);
    PUSH32(esp, 0x34B7D0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002711F3u); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_002711F3: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002711FAu); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_002711FA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002711FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00271200
 * Original: 0x00271200 - 0x0027142C (556 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_00271226; /* jae: above or equal (unsigned >=) */

loc_00271217: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271223u); RECOMP_ABI_CALL(0x0026F430u, sub_0026F430); /* call 0x0026F430 */

loc_00271223: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271226: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edx) = 0x5B;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + 1) = LO8(edx);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    edi = 2;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027125A; /* jbe: below or equal (unsigned <=) */

loc_0027124B: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271266;

loc_0027125A: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271263u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271263: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271266: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00271272; /* jne: not equal / not zero */

loc_0027126D: ;
    PUSH32(esp, 0x00271272u); RECOMP_ABI_CALL(0x002711A0u, sub_002711A0); /* call 0x002711A0 */

loc_00271272: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(eax + 4);
    ecx = edi + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00271290; /* jbe: below or equal (unsigned <=) */

loc_0027127F: ;
    edx = edi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027128Du); RECOMP_ABI_CALL(0x0026F430u, sub_0026F430); /* call 0x0026F430 */

loc_0027128D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271290: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5E (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002713CD; /* ja: above (unsigned >) */

loc_0027129C: ;
    ecx = ZX8(MEM8(eax + 0x271440));
    { uint32_t _jt = MEM32(ecx * 4 + 0x27142C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x002712AAu) goto loc_002712AA;
    if (_jt == 0x002712D9u) goto loc_002712D9;
    if (_jt == 0x00271344u) goto loc_00271344;
    if (_jt == 0x002713AFu) goto loc_002713AF;
    if (_jt == 0x002713CDu) goto loc_002713CD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002712AA: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx);
    MEM8(edi + eax) = 0;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    eax = 0x34B814;
    if (CMP_NE(_fa, _fb)) goto loc_002712C2; /* jne: not equal / not zero */

loc_002712BD: ;
    eax = 0x34B7FC;

loc_002712C2: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(0x34B6D8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002712D4u); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_002712D4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00271272;

loc_002712D9: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + ecx) = LO8(edx);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271301; /* jbe: below or equal (unsigned <=) */

loc_002712F2: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_0027130D;

loc_00271301: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027130Au); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_0027130A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027130D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5B (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00271272; /* jne: not equal / not zero */

loc_00271318: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + edx) = LO8(eax);

loc_00271321: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edx = ecx + -1;
    MEM32(eax) = edx;

loc_0027132B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027139C; /* jbe: below or equal (unsigned <=) */

loc_00271330: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    goto loc_00271272;

loc_00271344: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    SET_LO8(eax, MEM8(esi));
    MEM8(edi + edx) = LO8(eax);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027136C; /* jbe: below or equal (unsigned <=) */

loc_0027135D: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271378;

loc_0027136C: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271375u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271375: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271378: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00271272; /* jne: not equal / not zero */

loc_00271383: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = LO8(eax);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002713DC; /* je: equal / zero */

loc_00271399: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0027132B;

loc_0027139C: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002713A5u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_002713A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    goto loc_00271272;

loc_002713AF: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0xA;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x002713BEu); RECOMP_ABI_CALL(0x002711A0u, sub_002711A0); /* call 0x002711A0 */

loc_002713BE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271272; /* jne: not equal / not zero */

loc_002713C6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00271272;

loc_002713CD: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + ecx) = LO8(edx);
    goto loc_00271321;

loc_002713DC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002713F0; /* jbe: below or equal (unsigned <=) */

loc_002713E1: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_002713FC;

loc_002713F0: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002713F9u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_002713F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002713FC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = MEM32(esi + 0x28);
    MEM32(esi) = eax;
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00271427; /* je: equal / zero */

loc_0027140B: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271421u); RECOMP_ABI_CALL(0x0026E380u, sub_0026E380); /* call 0x0026E380 */

loc_00271421: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_00271427: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002714A0
 * Original: 0x002714A0 - 0x002718FA (1114 bytes, 411 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002714A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002714A0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x384B10);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 5 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_002714C8; /* jae: above or equal (unsigned >=) */

loc_002714B9: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002714C5u); RECOMP_ABI_CALL(0x0026F430u, sub_0026F430); /* call 0x0026F430 */

loc_002714C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002714C8: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    SET_LO8(eax, MEM8(esi));
    MEM8(edx) = LO8(eax);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    edi = 1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_002714F3; /* jbe: below or equal (unsigned <=) */

loc_002714E4: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_002714FF;

loc_002714F3: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002714FCu); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_002714FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002714FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x68) (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027188F; /* je: equal / zero */

loc_0027150B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 6;

loc_00271512: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 4) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027152B; /* jbe: below or equal (unsigned <=) */

loc_0027151A: ;
    edx = MEM32(esi + 0x20);
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271528u); RECOMP_ABI_CALL(0x0026F430u, sub_0026F430); /* call 0x0026F430 */

loc_00271528: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027152B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271825; /* je: equal / zero */

loc_00271536: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271800; /* je: equal / zero */

loc_0027153F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271576; /* je: equal / zero */

loc_00271544: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + ecx) = LO8(edx);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027175E; /* jbe: below or equal (unsigned <=) */

loc_00271562: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    goto loc_00271881;

loc_00271576: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271593; /* jbe: below or equal (unsigned <=) */

loc_00271584: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_0027159F;

loc_00271593: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027159Cu); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_0027159C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027159F: ;
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x77 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00271723; /* ja: above (unsigned >) */

loc_002715AD: ;
    ecx = ZX8(MEM8(ecx + 0x271924));
    { uint32_t _jt = MEM32(ecx * 4 + 0x2718FC); /* switch: 10 entries, 10 targets */
    if (_jt == 0x002715BBu) goto loc_002715BB;
    if (_jt == 0x002715ECu) goto loc_002715EC;
    if (_jt == 0x0027161Du) goto loc_0027161D;
    if (_jt == 0x0027164Eu) goto loc_0027164E;
    if (_jt == 0x0027167Fu) goto loc_0027167F;
    if (_jt == 0x002716B0u) goto loc_002716B0;
    if (_jt == 0x002716E1u) goto loc_002716E1;
    if (_jt == 0x0027170Eu) goto loc_0027170E;
    if (_jt == 0x00271723u) goto loc_00271723;
    if (_jt == 0x00271881u) goto loc_00271881;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002715BB: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx);
    MEM8(edi + eax) = 7;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027175E; /* jbe: below or equal (unsigned <=) */

loc_002715D8: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    goto loc_00271881;

loc_002715EC: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = 8;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027175E; /* jbe: below or equal (unsigned <=) */

loc_00271609: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    goto loc_00271881;

loc_0027161D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0xC;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027175E; /* jbe: below or equal (unsigned <=) */

loc_0027163A: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    goto loc_00271881;

loc_0027164E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0xA;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027175E; /* jbe: below or equal (unsigned <=) */

loc_0027166B: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    goto loc_00271881;

loc_0027167F: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0xD;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027175E; /* jbe: below or equal (unsigned <=) */

loc_0027169C: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    goto loc_00271881;

loc_002716B0: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = 9;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027175E; /* jbe: below or equal (unsigned <=) */

loc_002716CD: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    goto loc_00271881;

loc_002716E1: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0xB;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027175E; /* jbe: below or equal (unsigned <=) */

loc_002716FA: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    goto loc_00271881;

loc_0027170E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0xA;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0027171Eu); RECOMP_ABI_CALL(0x002711A0u, sub_002711A0); /* call 0x002711A0 */

loc_0027171E: ;
    goto loc_00271881;

loc_00271723: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271729u); RECOMP_ABI_CALL(0x002BF229u, sub_002BF229); /* call 0x002BF229 */

loc_00271729: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271771; /* jne: not equal / not zero */

loc_00271730: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + ecx) = LO8(edx);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027175E; /* jbe: below or equal (unsigned <=) */

loc_0027174A: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    goto loc_00271881;

loc_0027175E: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271767u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271767: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    goto loc_00271881;

loc_00271771: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebx;

loc_00271777: ;
    edx = MEM32(esi);
    eax = MEM32(esi + 0x24);
    ecx = ebx + ebx * 4;
    ebx = edx + ecx * 2 + -48;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0027179D; /* jbe: below or equal (unsigned <=) */

loc_0027178E: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_002717A9;

loc_0027179D: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002717A6u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_002717A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002717A9: ;
    ecx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    MEM32(esi) = eax;
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002717C6; /* jge: greater or equal (signed >=) */

loc_002717B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002717BFu); RECOMP_ABI_CALL(0x002BF229u, sub_002BF229); /* call 0x002BF229 */

loc_002717BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271777; /* jne: not equal / not zero */

loc_002717C6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002717F1; /* jle: less or equal (signed <=) */

loc_002717CE: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x34B840);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x002717EEu); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_002717EE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002717F1: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    MEM8(edi + ecx) = LO8(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00271881;

loc_00271800: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx);
    MEM8(edi + eax) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B82C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00271820u); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_00271820: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00271881;

loc_00271825: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 4);
    ebx = MEM32(esi + 0x20);
    PUSH32(esp, 0x50);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(0x34B6D8);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00271857u); RECOMP_ABI_CALL(0x0026E0D0u, sub_0026E0D0); /* call 0x0026E0D0 */

loc_00271857: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x34B82C);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34B76C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00271872u); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_00271872: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027187Au); RECOMP_ABI_CALL(0x0026A530u, sub_0026A530); /* call 0x0026A530 */

loc_0027187A: ;
    ebp = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271881: ;
    edx = MEM32(esp + 0x70);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271512; /* jne: not equal / not zero */

loc_0027188D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0027188F: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + ecx) = LO8(edx);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_002718B7; /* jbe: below or equal (unsigned <=) */

loc_002718A8: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_002718C3;

loc_002718B7: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002718C0u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_002718C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002718C3: ;
    ecx = MEM32(esi + 0x28);
    MEM32(esi) = eax;
    edx = MEM32(ecx);
    MEM8(edi + edx) = 0;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFEu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002718E2u); RECOMP_ABI_CALL(0x0026E380u, sub_0026E380); /* call 0x0026E380 */

loc_002718E2: ;
    ecx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 0x60);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x002718F6u); RECOMP_ABI_CALL(0x002C15BBu, sub_002C15BB); /* call 0x002C15BB */

loc_002718F6: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002719A0
 * Original: 0x002719A0 - 0x00271ED0 (1328 bytes, 515 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002719A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002719A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);

loc_002719A5: ;
    ecx = MEM32(esi);
    eax = ecx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00271AB4; /* ja: above (unsigned >) */

loc_002719B3: ;
    eax = ZX8(MEM8(eax + 0x271EFC));
    { uint32_t _jt = MEM32(eax * 4 + 0x271ED0); /* switch: 11 entries, 11 targets */
    if (_jt == 0x002719C1u) goto loc_002719C1;
    if (_jt == 0x002719C8u) goto loc_002719C8;
    if (_jt == 0x00271AB4u) goto loc_00271AB4;
    if (_jt == 0x00271B01u) goto loc_00271B01;
    if (_jt == 0x00271B4Eu) goto loc_00271B4E;
    if (_jt == 0x00271BBEu) goto loc_00271BBE;
    if (_jt == 0x00271C2Eu) goto loc_00271C2E;
    if (_jt == 0x00271C9Eu) goto loc_00271C9E;
    if (_jt == 0x00271D0Eu) goto loc_00271D0E;
    if (_jt == 0x00271D27u) goto loc_00271D27;
    if (_jt == 0x00271DF1u) goto loc_00271DF1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002719C1: ;
    PUSH32(esp, 0x002719C6u); RECOMP_ABI_CALL(0x002711A0u, sub_002711A0); /* call 0x002711A0 */

loc_002719C6: ;
    goto loc_002719A5;

loc_002719C8: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_002719E5; /* jbe: below or equal (unsigned <=) */

loc_002719D6: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_002719F1;

loc_002719E5: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002719EEu); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_002719EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002719F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00271AFA; /* jne: not equal / not zero */

loc_002719FC: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271A19; /* jbe: below or equal (unsigned <=) */

loc_00271A0A: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271A25;

loc_00271A19: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271A22u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271A22: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271A25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5B (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00271A6D; /* jne: not equal / not zero */

loc_00271A2C: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271A49; /* jbe: below or equal (unsigned <=) */

loc_00271A3A: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271A55;

loc_00271A49: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271A52u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271A52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271A55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5B (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00271A6D; /* jne: not equal / not zero */

loc_00271A5C: ;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0x00271A65u); RECOMP_ABI_CALL(0x00271200u, sub_00271200); /* call 0x00271200 */

loc_00271A65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002719A5;

loc_00271A6D: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002719A5; /* je: equal / zero */

loc_00271A76: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002719A5; /* je: equal / zero */

loc_00271A7F: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271A9C; /* jbe: below or equal (unsigned <=) */

loc_00271A8D: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271AA8;

loc_00271A9C: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271AA5u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271AA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271AA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00271A76; /* jne: not equal / not zero */

loc_00271AAF: ;
    goto loc_002719A5;

loc_00271AB4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00271ABAu); RECOMP_ABI_CALL(0x002BF252u, sub_002BF252); /* call 0x002BF252 */

loc_00271ABA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271DF8; /* je: equal / zero */

loc_00271AC5: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271AE7; /* jbe: below or equal (unsigned <=) */

loc_00271AD3: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    goto loc_002719A5;

loc_00271AE7: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271AF0u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271AF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    goto loc_002719A5;

loc_00271AFA: ;
    eax = 0x2D;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271B01: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271B1E; /* jbe: below or equal (unsigned <=) */

loc_00271B0F: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271B2A;

loc_00271B1E: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271B27u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271B27: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271B2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5B (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00271B38; /* je: equal / zero */

loc_00271B31: ;
    eax = 0x5B;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271B38: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x00271B44u); RECOMP_ABI_CALL(0x00271200u, sub_00271200); /* call 0x00271200 */

loc_00271B44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x11E;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271B4E: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271B6B; /* jbe: below or equal (unsigned <=) */

loc_00271B5C: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271B77;

loc_00271B6B: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271B74u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271B74: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271B77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00271B85; /* je: equal / zero */

loc_00271B7E: ;
    eax = 0x3D;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271B85: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271BA9; /* jbe: below or equal (unsigned <=) */

loc_00271B93: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    eax = 0x119;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271BA9: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271BB2u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271BB2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = 0x119;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271BBE: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271BDB; /* jbe: below or equal (unsigned <=) */

loc_00271BCC: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271BE7;

loc_00271BDB: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271BE4u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271BE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271BE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00271BF5; /* je: equal / zero */

loc_00271BEE: ;
    eax = 0x3C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271BF5: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271C19; /* jbe: below or equal (unsigned <=) */

loc_00271C03: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    eax = 0x11B;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271C19: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271C22u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271C22: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = 0x11B;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271C2E: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271C4B; /* jbe: below or equal (unsigned <=) */

loc_00271C3C: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271C57;

loc_00271C4B: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271C54u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271C54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271C57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00271C65; /* je: equal / zero */

loc_00271C5E: ;
    eax = 0x3E;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271C65: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271C89; /* jbe: below or equal (unsigned <=) */

loc_00271C73: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    eax = 0x11A;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271C89: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271C92u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271C92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = 0x11A;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271C9E: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271CBB; /* jbe: below or equal (unsigned <=) */

loc_00271CAC: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271CC7;

loc_00271CBB: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271CC4u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271CC4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271CC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00271CD5; /* je: equal / zero */

loc_00271CCE: ;
    eax = 0x7E;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271CD5: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271CF9; /* jbe: below or equal (unsigned <=) */

loc_00271CE3: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    eax = 0x11C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271CF9: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271D02u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271D02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = 0x11C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271D0E: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00271D1Du); RECOMP_ABI_CALL(0x002714A0u, sub_002714A0); /* call 0x002714A0 */

loc_00271D1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x11E;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271D27: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271D44; /* jbe: below or equal (unsigned <=) */

loc_00271D35: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271D50;

loc_00271D44: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271D4Du); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271D4D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271D50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00271DC7; /* jne: not equal / not zero */

loc_00271D57: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271D74; /* jbe: below or equal (unsigned <=) */

loc_00271D65: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    goto loc_00271D80;

loc_00271D74: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271D7Du); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271D7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271D80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00271DC0; /* jne: not equal / not zero */

loc_00271D87: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271DAB; /* jbe: below or equal (unsigned <=) */

loc_00271D95: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    eax = 0x118;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271DAB: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271DB4u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271DB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = 0x118;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271DC0: ;
    eax = 0x117;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271DC7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271DCDu); RECOMP_ABI_CALL(0x002BF229u, sub_002BF229); /* call 0x002BF229 */

loc_00271DCD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271DDB; /* jne: not equal / not zero */

loc_00271DD4: ;
    eax = 0x2E;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271DDB: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00271DE7u); RECOMP_ABI_CALL(0x00270DE0u, sub_00270DE0); /* call 0x00270DE0 */

loc_00271DE7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x11D;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271DF1: ;
    eax = 0x11F;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271DF8: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271E00u); RECOMP_ABI_CALL(0x002BF229u, sub_002BF229); /* call 0x002BF229 */

loc_00271E00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271E1D; /* je: equal / zero */

loc_00271E07: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00271E13u); RECOMP_ABI_CALL(0x00270DE0u, sub_00270DE0); /* call 0x00270DE0 */

loc_00271E13: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x11D;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271E1D: ;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00271E26u); RECOMP_ABI_CALL(0x002BF1FBu, sub_002BF1FB); /* call 0x002BF1FB */

loc_00271E26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271E98; /* jne: not equal / not zero */

loc_00271E2D: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x5F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271E98; /* je: equal / zero */

loc_00271E34: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271E3Au); RECOMP_ABI_CALL(0x002BF2D7u, sub_002BF2D7); /* call 0x002BF2D7 */

loc_00271E3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271E63; /* je: equal / zero */

loc_00271E41: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x34B874);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271E50u); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_00271E50: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B85C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271E60u); RECOMP_ABI_CALL(0x00270BB0u, sub_00270BB0); /* call 0x00270BB0 */

loc_00271E60: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00271E63: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00271E85; /* jbe: below or equal (unsigned <=) */

loc_00271E71: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(esi) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271E85: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271E8Eu); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00271E8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271E98: ;
    PUSH32(esp, 0x00271E9Du); RECOMP_ABI_CALL(0x00270D40u, sub_00270D40); /* call 0x00270D40 */

loc_00271E9D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271EADu); RECOMP_ABI_CALL(0x0026E380u, sub_0026E380); /* call 0x0026E380 */

loc_00271EAD: ;
    SET_LO8(ecx, MEM8(eax + 6));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00271EC2; /* jbe: below or equal (unsigned <=) */

loc_00271EB7: ;
    eax = ZX8(LO8(ecx));
    POP32(esp, edi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271EC2: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0x116;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271F80
 * Original: 0x00271F80 - 0x00271FB0 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271F80: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271F9F; /* je: equal / zero */

loc_00271F92: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    esp += 4; return; /* ret */

loc_00271F9F: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271FA9u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00271FA9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00271FD0
 * Original: 0x00271FD0 - 0x00271FF1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271FD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271FD7u); RECOMP_ABI_CALL(0x00270C40u, sub_00270C40); /* call 0x00270C40 */

loc_00271FD7: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B89C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00271FE6u); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_00271FE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271FEDu); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00271FED: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272000
 * Original: 0x00272000 - 0x00272046 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272000: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272043; /* jne: not equal / not zero */

loc_00272007: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esi + 0x14);
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027202D; /* je: equal / zero */

loc_00272019: ;
    edx = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

loc_0027202D: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272037u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00272037: ;
    MEM32(esi + 0xC) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

loc_00272043: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272050
 * Original: 0x00272050 - 0x002720A6 (86 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272050: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272085; /* jne: not equal / not zero */

loc_00272055: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272074; /* je: equal / zero */

loc_00272067: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    esp += 4; return; /* ret */

loc_00272074: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027207Eu); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_0027207E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    esp += 4; return; /* ret */

loc_00272085: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027208Cu); RECOMP_ABI_CALL(0x00270C40u, sub_00270C40); /* call 0x00270C40 */

loc_0027208C: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B89C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027209Bu); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_0027209B: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002720A2u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_002720A2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002720B0
 * Original: 0x002720B0 - 0x0027213F (143 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002720B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002720B0: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002720E5; /* jne: not equal / not zero */

loc_002720B5: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002720D4; /* je: equal / zero */

loc_002720C7: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    esp += 4; return; /* ret */

loc_002720D4: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002720DEu); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_002720DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    esp += 4; return; /* ret */

loc_002720E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027210B; /* jne: not equal / not zero */

loc_002720EA: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002720F1u); RECOMP_ABI_CALL(0x00270C40u, sub_00270C40); /* call 0x00270C40 */

loc_002720F1: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B89C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00272100u); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_00272100: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272107u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00272107: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0027210B: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272117u); RECOMP_ABI_CALL(0x00270C40u, sub_00270C40); /* call 0x00270C40 */

loc_00272117: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272122u); RECOMP_ABI_CALL(0x00270C40u, sub_00270C40); /* call 0x00270C40 */

loc_00272122: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0x34B8AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00272134u); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_00272134: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027213Bu); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_0027213B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272140
 * Original: 0x00272140 - 0x00272190 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272140: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x116) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x116 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272157; /* je: equal / zero */

loc_00272149: ;
    PUSH32(esp, 0x34B8D8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272154u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00272154: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00272157: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x14);
    MEM32(esi + 8) = ecx;
    ecx = 0x11F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = esi + 0x10;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0027217F; /* je: equal / zero */

loc_0027216F: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x10) = eax;
    eax = edi;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x14) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0027217F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272186u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00272186: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002721B0
 * Original: 0x002721B0 - 0x002721D0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002721B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002721B0: ;
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002721BAu); RECOMP_ABI_CALL(0x002761D0u, sub_002761D0); /* call 0x002761D0 */

loc_002721BA: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi) = 4;
    MEM32(esi + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002721D0
 * Original: 0x002721D0 - 0x002721F9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002721D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002721D0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x002721D8u); RECOMP_ABI_CALL(0x00272140u, sub_00272140); /* call 0x00272140 */

loc_002721D8: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002721E2u); RECOMP_ABI_CALL(0x002761D0u, sub_002761D0); /* call 0x002761D0 */

loc_002721E2: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi) = 4;
    MEM32(edi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00272200
 * Original: 0x00272200 - 0x00272253 (83 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    edx = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ebx = MEM32(edi + 0x38);
    eax = edi + 0x38;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00272236; /* jle: less or equal (signed <=) */

loc_00272216: ;
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x7FFFFFFD);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00272230u); RECOMP_ABI_CALL(0x00270AF0u, sub_00270AF0); /* call 0x00270AF0 */

loc_00272230: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = eax;

loc_00272236: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esp + 0x10);
    edx = eax + eax * 2;
    eax = MEM32(edi + 0x18);
    MEM32(eax + edx * 4) = ecx;
    eax = MEM32(esi + 0x30);
    edx = eax + 1;
    POP32(esp, edi);
    MEM32(esi + 0x30) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00272260
 * Original: 0x00272260 - 0x00272299 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272260: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1C);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, 0x34B8E8);
    PUSH32(esp, 0xC8);
    ecx = eax + ebx + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027227Cu); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_0027227C: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00272288u); RECOMP_ABI_CALL(0x00272200u, sub_00272200); /* call 0x00272200 */

loc_00272288: ;
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + ecx * 4 + 0x2B8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002722A0
 * Original: 0x002722A0 - 0x002722D2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002722A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002722A0: ;
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x34);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 0x34) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_002722D0; /* je: equal / zero */

loc_002722B0: ;
    PUSH32(esp, edi);

loc_002722B1: ;
    ecx = MEM32(eax + 0x34);
    esi = MEM32(eax);
    esi = MEM32(esi + 0x18);
    edi = MEM32(eax + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + ecx * 4 + 0x2B8);
    ecx = ecx + ecx * 2;
    MEM32(esi + ecx * 4 + 4) = edi;
    if ((_fa != 0)) goto loc_002722B1; /* jne: not equal / not zero */

loc_002722CF: ;
    POP32(esp, edi);

loc_002722D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002722E0
 * Original: 0x002722E0 - 0x00272317 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002722E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002722E0: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00272316; /* jle: less or equal (signed <=) */

loc_002722E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_002722F0: ;
    esi = MEM32(eax + 0x34);
    edi = MEM32(eax + 0x18);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x34) = esi;
    ecx = esi;
    ecx = MEM32(eax + ecx * 4 + 0x2B8);
    esi = MEM32(eax);
    esi = MEM32(esi + 0x18);
    ecx = ecx + ecx * 2;
    MEM32(esi + ecx * 4 + 8) = edi;
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002722F0; /* jg: greater (signed >) */

loc_00272314: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00272316: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00272320
 * Original: 0x00272320 - 0x0027237C (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272320: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = edx;
    PUSH32(esp, esi);
    esi = eax + 1;
    /* nop */

loc_00272330: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272330; /* jne: not equal / not zero */

loc_00272337: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00272344u); RECOMP_ABI_CALL(0x0026E380u, sub_0026E380); /* call 0x0026E380 */

loc_00272344: ;
    esi = MEM32(edi + 0x1C);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x34B8E8);
    PUSH32(esp, 0xC8);
    edx = ecx + ebp + 1;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x00272361u); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_00272361: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00272369u); RECOMP_ABI_CALL(0x00272200u, sub_00272200); /* call 0x00272200 */

loc_00272369: ;
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + ecx * 4 + 0x2B8) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00272380
 * Original: 0x00272380 - 0x002723AF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272380: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027238Au); RECOMP_ABI_CALL(0x00272320u, sub_00272320); /* call 0x00272320 */

loc_0027238A: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(eax + ecx * 4 + 0x2B4);
    edx = MEM32(edx + 0x18);
    eax = MEM32(eax + 0x18);
    ecx = ecx + ecx * 2;
    MEM32(edx + ecx * 4 + 4) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002723B0
 * Original: 0x002723B0 - 0x0027246E (190 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002723B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002723B0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edi);
    edx = ZX8(MEM8(esi + 0x44));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002723DF; /* jle: less or equal (signed <=) */

loc_002723BE: ;
    ecx = edi + 0x3C;

loc_002723C1: ;
    ebp = MEM32(ebx);
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002723D3; /* jne: not equal / not zero */

loc_002723C8: ;
    ebp = MEM32(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027246B; /* je: equal / zero */

loc_002723D3: ;
    ebp = ZX8(MEM8(esi + 0x44));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002723C1; /* jl: less (signed <) */

loc_002723DF: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0x34B8F8);
    PUSH32(esp, 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002723F1u); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_002723F1: ;
    eax = MEM32(edi);
    edx = ZX8(MEM8(esi + 0x44));
    ebp = MEM32(eax + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0x24;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00272427; /* jle: less or equal (signed <=) */

loc_00272405: ;
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x7FFFFFFD);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027241Fu); RECOMP_ABI_CALL(0x00270AF0u, sub_00270AF0); /* call 0x00270AF0 */

loc_0027241F: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x1C) = eax;

loc_00272427: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx + 0x1C);
    eax = ZX8(MEM8(esi + 0x44));
    ecx = MEM32(esp + 0xC);
    MEM32(edx + eax * 4) = ecx;
    eax = ZX8(MEM8(esi + 0x44));
    ecx = MEM32(ebx);
    edx = eax + eax * 4;
    eax = edi + edx * 4 + 0x38;
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(ebx + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = ecx;
    SET_LO8(eax, MEM8(esi + 0x44));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x44) = LO8(edx);
    eax = ZX8(LO8(eax));

loc_0027246B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00272470
 * Original: 0x00272470 - 0x0027249A (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272470: ;
    eax = MEM32(ecx + 0x34);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    if ((_fas < 0)) goto loc_00272495; /* js: sign (negative) */

loc_00272477: ;
    edx = MEM32(ecx);
    esi = MEM32(edx + 0x18);
    edx = ecx + eax * 4 + 0x2B8;

loc_00272483: ;
    ecx = MEM32(edx);
    ecx = ecx + ecx * 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + ecx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + ecx * 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272498; /* je: equal / zero */

loc_0027248D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00272483; /* jge: greater or equal (signed >=) */

loc_00272495: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00272498: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002724A0
 * Original: 0x002724A0 - 0x002724BB (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002724A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002724A0: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002724BA; /* je: equal / zero */

loc_002724A7: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002724B3; /* jle: less or equal (signed <=) */

loc_002724AC: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002724A7; /* jne: not equal / not zero */

loc_002724B2: ;
    esp += 4; return; /* ret */

loc_002724B3: ;
    MEM32(eax + 0xC) = 1;

loc_002724BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002724C0
 * Original: 0x002724C0 - 0x002725A0 (224 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002724C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002724C0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002724E5; /* jne: not equal / not zero */

loc_002724C9: ;
    eax = MEM32(esp + 0x10);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax) = 7;
    MEM32(eax + 4) = 0xFF;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002724E5: ;
    eax = MEM32(edi + 0x34);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if ((_fas < 0)) goto loc_00272512; /* js: sign (negative) */

loc_002724F1: ;
    ecx = MEM32(edi);
    ebx = MEM32(ecx + 0x18);
    edx = edi + eax * 4 + 0x2B8;
    /* nop */

loc_00272500: ;
    ecx = MEM32(edx);
    ecx = ecx + ecx * 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + ecx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + ecx * 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272546; /* je: equal / zero */

loc_0027250A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00272500; /* jge: greater or equal (signed >=) */

loc_00272512: ;
    ebx = MEM32(esp + 0x18);
    edx = MEM32(edi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00272523u); RECOMP_ABI_CALL(0x002724C0u, sub_002724C0); /* call 0x002724C0 */

loc_00272523: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027258A; /* jne: not equal / not zero */

loc_0027252D: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027259C; /* je: equal / zero */

loc_00272535: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027253Cu); RECOMP_ABI_CALL(0x002761D0u, sub_002761D0); /* call 0x002761D0 */

loc_0027253C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebx + 4) = eax;
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00272546: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00272512; /* jl: less (signed <) */

loc_0027254A: ;
    ecx = MEM32(esp + 0x18);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx) = 5;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027259C; /* jne: not equal / not zero */

loc_00272568: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027259C; /* je: equal / zero */

loc_0027256F: ;
    /* nop */

loc_00272570: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027257F; /* jle: less or equal (signed <=) */

loc_00272575: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272570; /* jne: not equal / not zero */

loc_0027257B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0027257F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ecx + 0xC) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0027258A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272590u); RECOMP_ABI_CALL(0x002723B0u, sub_002723B0); /* call 0x002723B0 */

loc_00272590: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = 6;
    MEM32(ebx + 4) = eax;

loc_0027259C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002725A0
 * Original: 0x002725A0 - 0x002725C7 (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002725A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002725A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x002725A9u); RECOMP_ABI_CALL(0x00272140u, sub_00272140); /* call 0x00272140 */

loc_002725A9: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x1C);
    edi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002725BFu); RECOMP_ABI_CALL(0x002724C0u, sub_002724C0); /* call 0x002724C0 */

loc_002725BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002725D0
 * Original: 0x002725D0 - 0x00272642 (114 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002725D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002725D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1C);
    ebx = ecx;
    eax = MEM32(ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272617; /* jne: not equal / not zero */

loc_002725E5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002725FB; /* jg: greater (signed >) */

loc_002725EA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002725F4u); RECOMP_ABI_CALL(0x00276280u, sub_00276280); /* call 0x00276280 */

loc_002725F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002725FB: ;
    ecx = esi + -1;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272605u); RECOMP_ABI_CALL(0x002760A0u, sub_002760A0); /* call 0x002760A0 */

loc_00272605: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272610u); RECOMP_ABI_CALL(0x00276280u, sub_00276280); /* call 0x00276280 */

loc_00272610: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00272617: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272625; /* je: equal / zero */

loc_0027261B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272622u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00272622: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00272625: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027263E; /* jle: less or equal (signed <=) */

loc_00272629: ;
    ebx = MEM32(edi + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272633u); RECOMP_ABI_CALL(0x002760A0u, sub_002760A0); /* call 0x002760A0 */

loc_00272633: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027263Bu); RECOMP_ABI_CALL(0x00276470u, sub_00276470); /* call 0x00276470 */

loc_0027263B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027263E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00272650
 * Original: 0x00272650 - 0x002726C0 (112 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272650: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi + 0x1C);
    PUSH32(esp, 0x0027265Cu); RECOMP_ABI_CALL(0x002722A0u, sub_002722A0); /* call 0x002722A0 */

loc_0027265C: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, 0x34B908);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027266Du); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_0027266D: ;
    ecx = MEM32(esi);
    SET_LO8(edx, MEM8(esi + 0x34));
    MEM8(ecx + 0x45) = LO8(edx);
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(eax + 0x46) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002726B0; /* je: equal / zero */

loc_00272681: ;
    PUSH32(esp, 0);
    edx = 0x34B904;
    PUSH32(esp, 0x0027268Du); RECOMP_ABI_CALL(0x00272320u, sub_00272320); /* call 0x00272320 */

loc_0027268D: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(eax + ecx * 4 + 0x2B4);
    edx = MEM32(edx + 0x18);
    eax = MEM32(eax + 0x18);
    ecx = ecx + ecx * 2;
    MEM32(edx + ecx * 4 + 4) = eax;

loc_002726B0: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002726BAu); RECOMP_ABI_CALL(0x002760A0u, sub_002760A0); /* call 0x002760A0 */

loc_002726BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002726E0
 * Original: 0x002726E0 - 0x00272723 (67 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002726E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002726E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    eax = MEM32(edi);
    MEM32(esi + 0x14) = eax;
    edx = MEM32(edi + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x002726F4u); RECOMP_ABI_CALL(0x002722E0u, sub_002722E0); /* call 0x002722E0 */

loc_002726F4: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027270E; /* je: equal / zero */

loc_002726FB: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x21);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027270Bu); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_0027270B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027270E: ;
    edx = MEM32(esi + 0x34);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027271Eu); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_0027271E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00272730
 * Original: 0x00272730 - 0x002727E4 (180 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272730: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    ebx = MEM32(esi);
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = eax;
    eax = ebx + 0x34;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027276A; /* jle: less or equal (signed <=) */

loc_0027274A: ;
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 0x34B914);
    PUSH32(esp, 0x3FFFF);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00272764u); RECOMP_ABI_CALL(0x00270AF0u, sub_00270AF0); /* call 0x00270AF0 */

loc_00272764: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x10) = eax;

loc_0027276A: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebp);
    MEM32(eax + edx * 4) = ecx;
    edx = MEM32(esi + 0x2C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22);
    PUSH32(esp, esi);
    MEM32(esi + 0x2C) = edx;
    PUSH32(esp, 0x0027278Bu); RECOMP_ABI_CALL(0x00276440u, sub_00276440); /* call 0x00276440 */

loc_0027278B: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi) = 0xA;
    MEM32(edi + 4) = eax;
    edx = MEM32(ebp);
    SET_LO8(eax, MEM8(edx + 0x44));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002727DF; /* jbe: below or equal (unsigned <=) */

loc_002727AC: ;
    edi = ebp + 0x38;
    /* nop */

loc_002727B0: ;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002727CDu); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_002727CD: ;
    edx = MEM32(ebp);
    eax = ZX8(MEM8(edx + 0x44));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002727B0; /* jl: less (signed <) */

loc_002727DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002727F0
 * Original: 0x002727F0 - 0x00272850 (96 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002727F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002727F0: ;
    eax = MEM32(edi + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002727FBu); RECOMP_ABI_CALL(0x0026E580u, sub_0026E580); /* call 0x0026E580 */

loc_002727FB: ;
    ebx = eax;
    MEM32(esi) = ebx;
    ecx = MEM32(edi + 0x1C);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(edi + 0x20);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = edx;
    MEM32(edi + 0x1C) = esi;
    PUSH32(esp, ebp);
    MEM32(esi + 0x18) = ebp;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = ebp;
    eax = MEM32(edi + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00272831u); RECOMP_ABI_CALL(0x0026EAF0u, sub_0026EAF0); /* call 0x0026EAF0 */

loc_00272831: ;
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x30) = ebp;
    MEM32(esi + 0x34) = ebp;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 4) = eax;
    ecx = MEM32(edi + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx + 0x20) = ecx;
    MEM8(ebx + 0x47) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00272850
 * Original: 0x00272850 - 0x00272954 (260 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272850: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C);
    esi = MEM32(edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp;
    PUSH32(esp, 0x00272869u); RECOMP_ABI_CALL(0x002722E0u, sub_002722E0); /* call 0x002722E0 */

loc_00272869: ;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272875u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00272875: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027288Du); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_0027288D: ;
    edx = MEM32(esi + 0x30);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(esi + 0x14);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002728AEu); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_002728AE: ;
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(esi + 0x28);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(edi + 0x28);
    ecx = MEM32(esi + 8);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002728CFu); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_002728CF: ;
    ecx = MEM32(esi + 0x34);
    MEM32(esi + 8) = eax;
    edx = MEM32(edi + 0x28);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(edi + 0x2C);
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002728F3u); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_002728F3: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0x34) = eax;
    eax = MEM32(edi + 0x30);
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x38);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027291Au); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_0027291A: ;
    edx = ZX8(MEM8(esi + 0x44));
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 0x30);
    eax = MEM32(esi + 0x24);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x38) = ecx;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027293Cu); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_0027293C: ;
    edx = ZX8(MEM8(esi + 0x44));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x24) = edx;
    eax = MEM32(edi + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x1C) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00272960
 * Original: 0x00272960 - 0x002729DF (127 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272960: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272971u); RECOMP_ABI_CALL(0x002769C0u, sub_002769C0); /* call 0x002769C0 */

loc_00272971: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272994; /* je: equal / zero */

loc_00272986: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_002729A4;

loc_00272994: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027299Eu); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_0027299E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_002729A4: ;
    PUSH32(esp, 0x002729A9u); RECOMP_ABI_CALL(0x00272140u, sub_00272140); /* call 0x00272140 */

loc_002729A9: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002729B3u); RECOMP_ABI_CALL(0x002761D0u, sub_002761D0); /* call 0x002761D0 */

loc_002729B3: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x1C) = 4;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x002729D6u); RECOMP_ABI_CALL(0x00276F30u, sub_00276F30); /* call 0x00276F30 */

loc_002729D6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002729E0
 * Original: 0x002729E0 - 0x00272A35 (85 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002729E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002729E0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272A03; /* je: equal / zero */

loc_002729F5: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_00272A13;

loc_00272A03: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272A0Du); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00272A0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_00272A13: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272A1Cu); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_00272A1C: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00272A26u); RECOMP_ABI_CALL(0x00276A10u, sub_00276A10); /* call 0x00276A10 */

loc_00272A26: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x5D;
    PUSH32(esp, 0x00272A33u); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_00272A33: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00272A40
 * Original: 0x00272A40 - 0x00272B0E (206 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272A40: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esi = eax;
    ebx = MEM32(esi + 0x1C);
    eax = MEM32(ebx + 0x24);
    MEM32(esp + 0x38) = eax;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x116) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x116 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272AA1; /* jne: not equal / not zero */

loc_00272A5F: ;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, 0x34B92C);
    PUSH32(esp, 0x7FFFFFFD);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272A73u); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_00272A73: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00272A7Bu); RECOMP_ABI_CALL(0x00272140u, sub_00272140); /* call 0x00272140 */

loc_00272A7B: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00272A85u); RECOMP_ABI_CALL(0x002761D0u, sub_002761D0); /* call 0x002761D0 */

loc_00272A85: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0xC) = 4;
    MEM32(esp + 0x10) = eax;
    goto loc_00272AAE;

loc_00272AA1: ;
    PUSH32(esp, edi);
    edi = esp + 0x10;
    eax = esi;
    PUSH32(esp, 0x00272AADu); RECOMP_ABI_CALL(0x002729E0u, sub_002729E0); /* call 0x002729E0 */

loc_00272AAD: ;
    POP32(esp, edi);

loc_00272AAE: ;
    eax = 0x3D;
    PUSH32(esp, 0x00272AB8u); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_00272AB8: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272AC3u); RECOMP_ABI_CALL(0x00276A30u, sub_00276A30); /* call 0x00276A30 */

loc_00272AC3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272AD0u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_00272AD0: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272ADBu); RECOMP_ABI_CALL(0x00276A30u, sub_00276A30); /* call 0x00276A30 */

loc_00272ADB: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272AEAu); RECOMP_ABI_CALL(0x00276A30u, sub_00276A30); /* call 0x00276A30 */

loc_00272AEA: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272AFDu); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00272AFD: ;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x24) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272B10
 * Original: 0x00272B10 - 0x00272B56 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272B10: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272B55; /* je: equal / zero */

loc_00272B15: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272B1Cu); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00272B1C: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esi) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00272B55; /* jne: not equal / not zero */

loc_00272B2D: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1F);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272B41u); RECOMP_ABI_CALL(0x00276440u, sub_00276440); /* call 0x00276440 */

loc_00272B41: ;
    eax = MEM32(esi + 0x14);
    MEM32(esi + 0x20) = 0;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x24) = ecx;

loc_00272B55: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00272B60
 * Original: 0x00272B60 - 0x00272BC9 (105 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272B60: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272BC8; /* je: equal / zero */

loc_00272B67: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272B99; /* jne: not equal / not zero */

loc_00272B6E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272B77u); RECOMP_ABI_CALL(0x00276280u, sub_00276280); /* call 0x00276280 */

loc_00272B77: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272B8Bu); RECOMP_ABI_CALL(0x00276440u, sub_00276440); /* call 0x00276440 */

loc_00272B8B: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x24) = ecx;
    esp += 4; return; /* ret */

loc_00272B99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272BA7; /* je: equal / zero */

loc_00272B9D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272BA4u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00272BA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00272BA7: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1F);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272BBBu); RECOMP_ABI_CALL(0x00276440u, sub_00276440); /* call 0x00276440 */

loc_00272BBB: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x24) = ecx;

loc_00272BC8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00272BD0
 * Original: 0x00272BD0 - 0x00272BFF (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272BD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272BD9u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_00272BD9: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0x34B92C);
    PUSH32(esp, 0x3FFFF);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00272BEDu); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_00272BED: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00272C00
 * Original: 0x00272C00 - 0x00272E50 (592 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272C00: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    esi = ecx;
    ebx = MEM32(esi + 0x1C);
    PUSH32(esp, ebp);
    edi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xA);
    PUSH32(esp, ebx);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00272C22u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00272C22: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi) = 0xA;
    MEM32(edi + 4) = eax;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x54) = ebp;
    MEM32(esp + 0x4C) = ebp;
    MEM32(esp + 0x50) = ebp;
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x34) = ebp;
    MEM32(esp + 0x38) = ebp;
    PUSH32(esp, 0x00272C62u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00272C62: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x7B;
    PUSH32(esp, 0x00272C6Fu); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_00272C6F: ;
    edi = 0x11F;

loc_00272C74: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x3B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272CA2; /* jne: not equal / not zero */

loc_00272C7A: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = MEM32(esi + 4);
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00272C92; /* je: equal / zero */

loc_00272C87: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = edi;
    goto loc_00272C9F;

loc_00272C92: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272C9Cu); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00272C9C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00272C9F: ;
    MEM32(esi + 0xC) = eax;

loc_00272CA2: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x7D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272DDD; /* je: equal / zero */

loc_00272CAC: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272CF5; /* je: equal / zero */

loc_00272CB2: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272CBDu); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00272CBD: ;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00272CF5; /* jne: not equal / not zero */

loc_00272CCD: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(edx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00272CE3u); RECOMP_ABI_CALL(0x00276440u, sub_00276440); /* call 0x00276440 */

loc_00272CE3: ;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x48) = ebp;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x24) = edx;

loc_00272CF5: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272D59; /* je: equal / zero */

loc_00272CFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x116) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x116 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272D19; /* jne: not equal / not zero */

loc_00272D04: ;
    edx = esi + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272D0Eu); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00272D0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00272D52; /* je: equal / zero */

loc_00272D19: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272D26u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_00272D26: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x34B92C);
    PUSH32(esp, 0x3FFFF);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272D3Bu); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_00272D3B: ;
    ecx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = eax;
    goto loc_00272D68;

loc_00272D52: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    goto loc_00272D5E;

loc_00272D59: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);

loc_00272D5E: ;
    eax = esi;
    PUSH32(esp, 0x00272D65u); RECOMP_ABI_CALL(0x00272A40u, sub_00272A40); /* call 0x00272A40 */

loc_00272D65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00272D68: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272DA5; /* jne: not equal / not zero */

loc_00272D70: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00272D90; /* je: equal / zero */

loc_00272D7D: ;
    edx = eax;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edi;
    goto loc_00272C74;

loc_00272D90: ;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272D9Au); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00272D9A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    goto loc_00272C74;

loc_00272DA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272DDD; /* jne: not equal / not zero */

loc_00272DAA: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = MEM32(esi + 4);
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00272DC8; /* je: equal / zero */

loc_00272DB7: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = edi;
    goto loc_00272C74;

loc_00272DC8: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272DD2u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00272DD2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    goto loc_00272C74;

loc_00272DDD: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x7B);
    edi = 0x7D;
    PUSH32(esp, 0x00272DEDu); RECOMP_ABI_CALL(0x002720B0u, sub_002720B0); /* call 0x002720B0 */

loc_00272DED: ;
    esi = esp + 0x1C;
    edi = ebx;
    PUSH32(esp, 0x00272DF8u); RECOMP_ABI_CALL(0x00272B60u, sub_00272B60); /* call 0x00272B60 */

loc_00272DF8: ;
    eax = MEM32(ebx);
    edx = MEM32(esp + 0x38);
    ecx = MEM32(eax + 0xC);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    esi = ecx + edi * 4;
    PUSH32(esp, 0x00272E0Eu); RECOMP_ABI_CALL(0x0026DC50u, sub_0026DC50); /* call 0x0026DC50 */

loc_00272E0E: ;
    edx = MEM32(esi);
    eax = eax << 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xFF8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = edx;
    ebp = ebp ^ eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ebp;
    eax = MEM32(ebx);
    edx = MEM32(esp + 0x38);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    esi = ecx + edi * 4;
    PUSH32(esp, 0x00272E32u); RECOMP_ABI_CALL(0x0026DC70u, sub_0026DC70); /* call 0x0026DC70 */

loc_00272E32: ;
    edi = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    eax = eax & 0x7FC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272E50
 * Original: 0x00272E50 - 0x00272FEF (415 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272E50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x29 (32-bit) */
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00272FDC; /* je: equal / zero */

loc_00272E6B: ;
    PUSH32(esp, ebp);
    /* nop */

loc_00272E70: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x116) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x116;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00272E96; /* je: equal / zero */

loc_00272E7A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00272F8F; /* je: equal / zero */

loc_00272E83: ;
    PUSH32(esp, 0x34B944);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272E8Eu); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00272E8E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00272F4D;

loc_00272E96: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 4);
    eax = esi + 0x10;
    MEM32(esp + 0x14) = ecx;
    MEM32(esi + 8) = edx;
    edx = MEM32(esi + 0x14);
    ecx = 0x11F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272EBF; /* je: equal / zero */

loc_00272EB2: ;
    eax = edx;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = ecx;
    goto loc_00272EC9;

loc_00272EBF: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272EC6u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00272EC6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00272EC9: ;
    ebp = MEM32(esi + 0x1C);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x34);
    PUSH32(esp, 0x34B8E8);
    PUSH32(esp, 0xC8);
    ecx = eax + edi + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272EE7u); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_00272EE7: ;
    edi = MEM32(esi + 0x1C);
    ebx = MEM32(edi);
    edx = MEM32(edi + 0x30);
    ecx = MEM32(ebx + 0x38);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x38;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00272F1D; /* jle: less or equal (signed <=) */

loc_00272EFD: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x7FFFFFFD);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00272F17u); RECOMP_ABI_CALL(0x00270AF0u, sub_00270AF0); /* call 0x00270AF0 */

loc_00272F17: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x18) = eax;

loc_00272F1D: ;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(esp + 0x14);
    edx = eax + eax * 2;
    eax = MEM32(ebx + 0x18);
    MEM32(eax + edx * 4) = ecx;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(esp + 0xC);
    edx = eax + 1;
    MEM32(edi + 0x30) = edx;
    edx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + edx * 4 + 0x2B8) = eax;
    MEM32(esp + 0xC) = ecx;
    edi = ecx;

loc_00272F4D: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x2C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272FDB; /* jne: not equal / not zero */

loc_00272F57: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272F7A; /* je: equal / zero */

loc_00272F69: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_00272E70;

loc_00272F7A: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272F84u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00272F84: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    goto loc_00272E70;

loc_00272F8F: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esi + 0x14);
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00272FCB; /* je: equal / zero */

loc_00272FA9: ;
    ebx = MEM32(esp + 0x10);
    edx = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x14) = eax;
    POP32(esp, ebp);
    edx = edi;
    eax = esi;
    MEM32(esi + 0x10) = ecx;
    PUSH32(esp, 0x00272FC5u); RECOMP_ABI_CALL(0x00272650u, sub_00272650); /* call 0x00272650 */

loc_00272FC5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00272FCB: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00272FD5u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00272FD5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_00272FDB: ;
    POP32(esp, ebp);

loc_00272FDC: ;
    ebx = MEM32(esp + 0xC);
    edx = edi;
    eax = esi;
    PUSH32(esp, 0x00272FE9u); RECOMP_ABI_CALL(0x00272650u, sub_00272650); /* call 0x00272650 */

loc_00272FE9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272FF0
 * Original: 0x00272FF0 - 0x002730A6 (182 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272FF0: ;
    _fb = (uint32_t)(0x5D8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5D8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5E8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0xC;
    edi = ebx;
    PUSH32(esp, 0x0027300Bu); RECOMP_ABI_CALL(0x002727F0u, sub_002727F0); /* call 0x002727F0 */

loc_0027300B: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 0x3C) = ebp;
    eax = 0x28;
    esi = ebx;
    PUSH32(esp, 0x0027301Eu); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_0027301E: ;
    eax = MEM32(esp + 0x5EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273058; /* je: equal / zero */

loc_00273029: ;
    PUSH32(esp, 0);
    edx = 0x34B960;
    PUSH32(esp, 0x00273035u); RECOMP_ABI_CALL(0x00272320u, sub_00272320); /* call 0x00272320 */

loc_00273035: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(eax + ecx * 4 + 0x2B4);
    edx = MEM32(edx + 0x18);
    eax = MEM32(eax + 0x18);
    ecx = ecx + ecx * 2;
    MEM32(edx + ecx * 4 + 4) = eax;

loc_00273058: ;
    esi = ebx;
    PUSH32(esp, 0x0027305Fu); RECOMP_ABI_CALL(0x00272E50u, sub_00272E50); /* call 0x00272E50 */

loc_0027305F: ;
    eax = 0x29;
    PUSH32(esp, 0x00273069u); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_00273069: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027306Fu); RECOMP_ABI_CALL(0x00274FA0u, sub_00274FA0); /* call 0x00274FA0 */

loc_0027306F: ;
    PUSH32(esp, 0x109);
    eax = ebp;
    edi = 0x106;
    PUSH32(esp, 0x00273080u); RECOMP_ABI_CALL(0x002720B0u, sub_002720B0); /* call 0x002720B0 */

loc_00273080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00273086u); RECOMP_ABI_CALL(0x00272850u, sub_00272850); /* call 0x00272850 */

loc_00273086: ;
    eax = MEM32(esp + 0x5F4);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00273099u); RECOMP_ABI_CALL(0x00272730u, sub_00272730); /* call 0x00272730 */

loc_00273099: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x5D8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5D8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002730B0
 * Original: 0x002730B0 - 0x00273119 (105 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002730B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002730B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = 1;
    PUSH32(esp, 0x002730C0u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_002730C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0x11F;

loc_002730C8: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x2C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273114; /* jne: not equal / not zero */

loc_002730CE: ;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002730EB; /* je: equal / zero */

loc_002730DB: ;
    edx = MEM32(esi + 0x18);
    ecx = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = ebp;
    goto loc_002730FB;

loc_002730EB: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002730F5u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_002730F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_002730FB: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00273105u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00273105: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027310Eu); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_0027310E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002730C8;

loc_00273114: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00273120
 * Original: 0x00273120 - 0x0027327D (349 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273120: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    ebx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027319C; /* je: equal / zero */

loc_0027313F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027318F; /* je: equal / zero */

loc_00273144: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273161; /* je: equal / zero */

loc_0027314B: ;
    PUSH32(esp, 0x34B99C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273156u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00273156: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00273161: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027316Bu); RECOMP_ABI_CALL(0x002761D0u, sub_002761D0); /* call 0x002761D0 */

loc_0027316B: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x14) = 4;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0027318Au); RECOMP_ABI_CALL(0x00271F80u, sub_00271F80); /* call 0x00271F80 */

loc_0027318A: ;
    goto loc_0027321E;

loc_0027318F: ;
    eax = esp + 0x14;
    ecx = esi;
    PUSH32(esp, 0x0027319Au); RECOMP_ABI_CALL(0x00272C00u, sub_00272C00); /* call 0x00272C00 */

loc_0027319A: ;
    goto loc_0027321B;

loc_0027319C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002731AF; /* je: equal / zero */

loc_002731A1: ;
    PUSH32(esp, 0x34B968);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002731ACu); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_002731AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002731AF: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002731CF; /* je: equal / zero */

loc_002731C1: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_002731DF;

loc_002731CF: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002731D9u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_002731D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_002731DF: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x29 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002731EF; /* jne: not equal / not zero */

loc_002731E5: ;
    MEM32(esp + 0x14) = 0;
    goto loc_0027320A;

loc_002731EF: ;
    edi = esp + 0x14;
    PUSH32(esp, 0x002731F8u); RECOMP_ABI_CALL(0x002730B0u, sub_002730B0); /* call 0x002730B0 */

loc_002731F8: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00273203u); RECOMP_ABI_CALL(0x00276280u, sub_00276280); /* call 0x00276280 */

loc_00273203: ;
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027320A: ;
    eax = edi;
    PUSH32(esp, 0x28);
    edi = 0x29;
    PUSH32(esp, 0x00273218u); RECOMP_ABI_CALL(0x002720B0u, sub_002720B0); /* call 0x002720B0 */

loc_00273218: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027321B: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0027321E: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    esi = MEM32(ebp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0027322E; /* jne: not equal / not zero */

loc_0027322A: ;
    eax = edi;
    goto loc_00273246;

loc_0027322E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273240; /* je: equal / zero */

loc_00273232: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027323Du); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_0027323D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00273240: ;
    eax = MEM32(ebx + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00273246: ;
    PUSH32(esp, 2);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x19);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00273253u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00273253: ;
    MEM32(ebp + 4) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = edi;
    MEM32(ebp) = 0xC;
    PUSH32(esp, 0x0027326Eu); RECOMP_ABI_CALL(0x00276330u, sub_00276330); /* call 0x00276330 */

loc_0027326E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(ebx + 0x24) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273280
 * Original: 0x00273280 - 0x00273311 (145 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273280: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002732B9; /* je: equal / zero */

loc_0027328B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x116) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x116 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002732A2; /* je: equal / zero */

loc_00273292: ;
    PUSH32(esp, 0x34B9B8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027329Du); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_0027329D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002732A2: ;
    PUSH32(esp, 0x002732A7u); RECOMP_ABI_CALL(0x00272140u, sub_00272140); /* call 0x00272140 */

loc_002732A7: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002732B4u); RECOMP_ABI_CALL(0x002724C0u, sub_002724C0); /* call 0x002724C0 */

loc_002732B4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002732B9: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002732DA; /* je: equal / zero */

loc_002732CC: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_002732EA;

loc_002732DA: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002732E4u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_002732E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_002732EA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002732F3u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_002732F3: ;
    eax = edi;
    PUSH32(esp, 0x28);
    edi = 0x29;
    PUSH32(esp, 0x00273301u); RECOMP_ABI_CALL(0x002720B0u, sub_002720B0); /* call 0x002720B0 */

loc_00273301: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027330Bu); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_0027330B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00273320
 * Original: 0x00273320 - 0x00273527 (519 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273320: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1C);
    eax = esi;
    PUSH32(esp, 0x00273331u); RECOMP_ABI_CALL(0x00273280u, sub_00273280); /* call 0x00273280 */

loc_00273331: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00273521; /* ja: above (unsigned >) */

loc_00273342: ;
    PUSH32(esp, edi);
    goto loc_00273350;

    /* nop */
    /* nop */

loc_00273350: ;
    eax = ZX8(MEM8(eax + 0x27353C));
    { uint32_t _jt = MEM32(eax * 4 + 0x273528); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0027335Eu) goto loc_0027335E;
    if (_jt == 0x0027336Au) goto loc_0027336A;
    if (_jt == 0x00273449u) goto loc_00273449;
    if (_jt == 0x002734FDu) goto loc_002734FD;
    if (_jt == 0x00273520u) goto loc_00273520;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0027335E: ;
    eax = esi;
    PUSH32(esp, 0x00273365u); RECOMP_ABI_CALL(0x00272960u, sub_00272960); /* call 0x00272960 */

loc_00273365: ;
    goto loc_0027350F;

loc_0027336A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00273371u); RECOMP_ABI_CALL(0x002769C0u, sub_002769C0); /* call 0x002769C0 */

loc_00273371: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    edi = 0x11F;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00273396; /* je: equal / zero */

loc_00273386: ;
    edx = eax;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edi;
    goto loc_002733A6;

loc_00273396: ;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002733A0u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_002733A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_002733A6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002733B3u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_002733B3: ;
    ecx = MEM32(esi + 0x1C);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002733C1u); RECOMP_ABI_CALL(0x00276A10u, sub_00276A10); /* call 0x00276A10 */

loc_002733C1: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273417; /* jne: not equal / not zero */

loc_002733CC: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = MEM32(esi + 4);
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002733F6; /* je: equal / zero */

loc_002733D9: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x10) = ecx;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0x002733F1u); RECOMP_ABI_CALL(0x00276F30u, sub_00276F30); /* call 0x00276F30 */

loc_002733F1: ;
    goto loc_0027350C;

loc_002733F6: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273400u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00273400: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00273412u); RECOMP_ABI_CALL(0x00276F30u, sub_00276F30); /* call 0x00276F30 */

loc_00273412: ;
    goto loc_0027350C;

loc_00273417: ;
    PUSH32(esp, 0x5D);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027341Fu); RECOMP_ABI_CALL(0x00270C40u, sub_00270C40); /* call 0x00270C40 */

loc_0027341F: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0x34B89C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027342Eu); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_0027342E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273435u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00273435: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00273444u); RECOMP_ABI_CALL(0x00276F30u, sub_00276F30); /* call 0x00276F30 */

loc_00273444: ;
    goto loc_0027350C;

loc_00273449: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 4);
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00273469; /* je: equal / zero */

loc_0027345B: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_00273479;

loc_00273469: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273473u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00273473: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_00273479: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x116) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x116 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273490; /* je: equal / zero */

loc_00273482: ;
    PUSH32(esp, 0x34B8D8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027348Du); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_0027348D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00273490: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x14);
    edi = MEM32(esi + 0x10);
    MEM32(esi + 8) = ecx;
    ecx = 0x11F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = esi + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_002734B6; /* je: equal / zero */

loc_002734A8: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ecx;
    goto loc_002734C3;

loc_002734B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002734BDu); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_002734BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_002734C3: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002734CDu); RECOMP_ABI_CALL(0x002761D0u, sub_002761D0); /* call 0x002761D0 */

loc_002734CD: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x20) = 4;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x002734F0u); RECOMP_ABI_CALL(0x00276B90u, sub_00276B90); /* call 0x00276B90 */

loc_002734F0: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x002734F8u); RECOMP_ABI_CALL(0x00273120u, sub_00273120); /* call 0x00273120 */

loc_002734F8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0027350F;

loc_002734FD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00273504u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00273504: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x0027350Cu); RECOMP_ABI_CALL(0x00273120u, sub_00273120); /* call 0x00273120 */

loc_0027350C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027350F: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF6 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00273350; /* jbe: below or equal (unsigned <=) */

loc_00273520: ;
    POP32(esp, edi);

loc_00273521: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273640
 * Original: 0x00273640 - 0x00273735 (245 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273640: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0xFFFFFF85u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF85u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA3 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_00273729; /* ja: above (unsigned >) */

loc_00273655: ;
    eax = ZX8(MEM8(eax + 0x273758));
    { uint32_t _jt = MEM32(eax * 4 + 0x273738); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00273663u) goto loc_00273663;
    if (_jt == 0x0027368Fu) goto loc_0027368F;
    if (_jt == 0x002736A5u) goto loc_002736A5;
    if (_jt == 0x002736C5u) goto loc_002736C5;
    if (_jt == 0x002736E5u) goto loc_002736E5;
    if (_jt == 0x00273705u) goto loc_00273705;
    if (_jt == 0x00273710u) goto loc_00273710;
    if (_jt == 0x00273729u) goto loc_00273729;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00273663: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00273670u); RECOMP_ABI_CALL(0x00276200u, sub_00276200); /* call 0x00276200 */

loc_00273670: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx;
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi) = 4;
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x0027368Cu); RECOMP_ABI_CALL(0x00271F80u, sub_00271F80); /* call 0x00271F80 */

loc_0027368C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0027368F: ;
    eax = MEM32(ebx + 0x10);
    esi = edi;
    ecx = ebx;
    PUSH32(esp, 0x0027369Bu); RECOMP_ABI_CALL(0x002721B0u, sub_002721B0); /* call 0x002721B0 */

loc_0027369B: ;
    esi = ebx;
    PUSH32(esp, 0x002736A2u); RECOMP_ABI_CALL(0x00271F80u, sub_00271F80); /* call 0x00271F80 */

loc_002736A2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002736A5: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebx;
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi) = 1;
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0x002736C2u); RECOMP_ABI_CALL(0x00271F80u, sub_00271F80); /* call 0x00271F80 */

loc_002736C2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002736C5: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebx;
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi) = 2;
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0x002736E2u); RECOMP_ABI_CALL(0x00271F80u, sub_00271F80); /* call 0x00271F80 */

loc_002736E2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002736E5: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebx;
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi) = 3;
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0x00273702u); RECOMP_ABI_CALL(0x00271F80u, sub_00271F80); /* call 0x00271F80 */

loc_00273702: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00273705: ;
    POP32(esp, esi);
    ecx = ebx;
    eax = edi;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00272C00(); return; /* tail jmp 0x00272C00 */

loc_00273710: ;
    esi = ebx;
    PUSH32(esp, 0x00273717u); RECOMP_ABI_CALL(0x00271F80u, sub_00271F80); /* call 0x00271F80 */

loc_00273717: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00273723u); RECOMP_ABI_CALL(0x00272FF0u, sub_00272FF0); /* call 0x00272FF0 */

loc_00273723: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00273729: ;
    eax = edi;
    esi = ebx;
    PUSH32(esp, 0x00273732u); RECOMP_ABI_CALL(0x00273320u, sub_00273320); /* call 0x00273320 */

loc_00273732: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00273800
 * Original: 0x00273800 - 0x00273816 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273800: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273813; /* je: equal / zero */

loc_00273805: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10E (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    esp += 4; return; /* ret */

loc_00273813: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273820
 * Original: 0x00273820 - 0x0027388F (111 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273820: ;
    _fb = (uint32_t)(0xFFFFFFD6u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFD6u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF2 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00273889; /* ja: above (unsigned >) */

loc_0027382A: ;
    eax = ZX8(MEM8(eax + 0x2738CC));
    { uint32_t _jt = MEM32(eax * 4 + 0x273890); /* switch: 15 entries, 15 targets */
    if (_jt == 0x00273838u) goto loc_00273838;
    if (_jt == 0x0027383Bu) goto loc_0027383B;
    if (_jt == 0x00273841u) goto loc_00273841;
    if (_jt == 0x00273847u) goto loc_00273847;
    if (_jt == 0x0027384Du) goto loc_0027384D;
    if (_jt == 0x00273853u) goto loc_00273853;
    if (_jt == 0x00273859u) goto loc_00273859;
    if (_jt == 0x0027385Fu) goto loc_0027385F;
    if (_jt == 0x00273865u) goto loc_00273865;
    if (_jt == 0x0027386Bu) goto loc_0027386B;
    if (_jt == 0x00273871u) goto loc_00273871;
    if (_jt == 0x00273877u) goto loc_00273877;
    if (_jt == 0x0027387Du) goto loc_0027387D;
    if (_jt == 0x00273883u) goto loc_00273883;
    if (_jt == 0x00273889u) goto loc_00273889;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00273838: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0027383B: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00273841: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00273847: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_0027384D: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00273853: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_00273859: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_0027385F: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_00273865: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_0027386B: ;
    eax = 9;
    esp += 4; return; /* ret */

loc_00273871: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_00273877: ;
    eax = 0xB;
    esp += 4; return; /* ret */

loc_0027387D: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_00273883: ;
    eax = 0xD;
    esp += 4; return; /* ret */

loc_00273889: ;
    eax = 0xE;
    esp += 4; return; /* ret */

}

/**
 * sub_002739C0
 * Original: 0x002739C0 - 0x00273B07 (327 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002739C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002739C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x30);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x30) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002739E9; /* jle: less or equal (signed <=) */

loc_002739DB: ;
    PUSH32(esp, 0x34B9CC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002739E6u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_002739E6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002739E9: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002739FF; /* je: equal / zero */

loc_002739F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273A50; /* jne: not equal / not zero */

loc_002739F8: ;
    ebx = 1;
    goto loc_00273A01;

loc_002739FF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00273A01: ;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0x14);
    edi = 0x11F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273A23; /* je: equal / zero */

loc_00273A13: ;
    edx = MEM32(esi + 0x18);
    ecx = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = edi;
    goto loc_00273A33;

loc_00273A23: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273A2Du); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00273A2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_00273A33: ;
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273A40u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_00273A40: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00273A4Bu); RECOMP_ABI_CALL(0x00276F50u, sub_00276F50); /* call 0x00276F50 */

loc_00273A4B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00273A62;

loc_00273A50: ;
    ebp = MEM32(esp + 0x2C);
    edi = ebp;
    eax = esi;
    PUSH32(esp, 0x00273A5Du); RECOMP_ABI_CALL(0x00273640u, sub_00273640); /* call 0x00273640 */

loc_00273A5D: ;
    edi = 0x11F;

loc_00273A62: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x00273A6Au); RECOMP_ABI_CALL(0x00273820u, sub_00273820); /* call 0x00273820 */

loc_00273A6A: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273AF6; /* je: equal / zero */

loc_00273A75: ;
    goto loc_00273A80;

loc_00273A77: ;
    edi = 0x11F;
    /* nop */

loc_00273A80: ;
    edx = ZX8(MEM8(ebx * 2 + 0x34B880));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x30) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00273AF6; /* jle: less or equal (signed <=) */

loc_00273A8E: ;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273AAB; /* je: equal / zero */

loc_00273A9B: ;
    edx = MEM32(esi + 0x18);
    ecx = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = edi;
    goto loc_00273ABB;

loc_00273AAB: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273AB5u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00273AB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_00273ABB: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00273AC6u); RECOMP_ABI_CALL(0x00277010u, sub_00277010); /* call 0x00277010 */

loc_00273AC6: ;
    edx = ZX8(MEM8(ebx * 2 + 0x34B881));
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273ADAu); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_00273ADA: ;
    edx = MEM32(esi + 0x1C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edi = eax;
    PUSH32(esp, 0x00273AECu); RECOMP_ABI_CALL(0x00277120u, sub_00277120); /* call 0x00277120 */

loc_00273AEC: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xE (32-bit) */
    ebx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00273A77; /* jne: not equal / not zero */

loc_00273AF6: ;
    eax = MEM32(esi + 0x30);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x30) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273B10
 * Original: 0x00273B10 - 0x00273B1D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273B10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00273B19u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_00273B19: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273B20
 * Original: 0x00273B20 - 0x00273B41 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273B20: ;
    _fb = (uint32_t)(0xFFFFFEFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFEFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00273B3E; /* ja: above (unsigned >) */

loc_00273B2A: ;
    eax = ZX8(MEM8(eax + 0x273B4C));
    { uint32_t _jt = MEM32(eax * 4 + 0x273B44); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00273B38u) goto loc_00273B38;
    if (_jt == 0x00273B3Eu) goto loc_00273B3E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00273B38: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00273B3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273B38
 * Original: 0x00273B38 - 0x00273B41 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273B38(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273B38: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00273B3E
 * Original: 0x00273B3E - 0x00273B41 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273B3E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273B3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273B70
 * Original: 0x00273B70 - 0x00273BF4 (132 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273B70: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0;
    ecx = MEM32(esi + 0x34);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = 0;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    ecx = esp + 8;
    MEM32(esp + 8) = edx;
    PUSH32(esp, eax);
    MEM32(esi + 0x14) = ecx;
    PUSH32(esp, 0x00273BABu); RECOMP_ABI_CALL(0x00274FA0u, sub_00274FA0); /* call 0x00274FA0 */

loc_00273BAB: ;
    edi = MEM32(esi + 0x14);
    edx = MEM32(edi);
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x14) = edx;
    edx = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00273BC1u); RECOMP_ABI_CALL(0x002722E0u, sub_002722E0); /* call 0x002722E0 */

loc_00273BC1: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273BDB; /* je: equal / zero */

loc_00273BC8: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x21);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273BD8u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00273BD8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00273BDB: ;
    ecx = MEM32(esi + 0x34);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273BEBu); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_00273BEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273C00
 * Original: 0x00273C00 - 0x00273C5F (95 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273C00: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    edx = MEM32(esi + 0x24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273C5D; /* je: equal / zero */

loc_00273C0D: ;
    PUSH32(esp, ebp);
    edi = edi;

loc_00273C10: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273C36; /* jne: not equal / not zero */

loc_00273C16: ;
    ebp = MEM32(eax + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273C26; /* jne: not equal / not zero */

loc_00273C1E: ;
    ecx = 1;
    MEM32(eax + 8) = edx;

loc_00273C26: ;
    ebp = MEM32(eax + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273C36; /* jne: not equal / not zero */

loc_00273C2E: ;
    ecx = 1;
    MEM32(eax + 0xC) = edx;

loc_00273C36: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273C10; /* jne: not equal / not zero */

loc_00273C3C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00273C5D; /* je: equal / zero */

loc_00273C41: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273C52u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00273C52: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273C5Au); RECOMP_ABI_CALL(0x002760A0u, sub_002760A0); /* call 0x002760A0 */

loc_00273C5A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00273C5D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00273C60
 * Original: 0x00273C60 - 0x00273D94 (308 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273C60: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, ebp);
    ebp = ebx + 4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00273C7F; /* jl: less (signed <) */

loc_00273C7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00273C8D; /* jle: less or equal (signed <=) */

loc_00273C7F: ;
    PUSH32(esp, 0x31337C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273C8Au); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00273C8A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00273C8D: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x2C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273CFA; /* jne: not equal / not zero */

loc_00273C93: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273CB3; /* je: equal / zero */

loc_00273CA5: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_00273CC3;

loc_00273CB3: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273CBDu); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00273CBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_00273CC3: ;
    eax = esp + 0x28;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x00273CD0u); RECOMP_ABI_CALL(0x00273320u, sub_00273320); /* call 0x00273320 */

loc_00273CD0: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273CE4; /* jne: not equal / not zero */

loc_00273CD7: ;
    edi = esp + 0x28;
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0x00273CE4u); RECOMP_ABI_CALL(0x00273C00u, sub_00273C00); /* call 0x00273C00 */

loc_00273CE4: ;
    ecx = MEM32(esp + 0x48);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273CF5u); RECOMP_ABI_CALL(0x00273C60u, sub_00273C60); /* call 0x00273C60 */

loc_00273CF5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00273D39;

loc_00273CFA: ;
    eax = 0x3D;
    PUSH32(esp, 0x00273D04u); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_00273D04: ;
    edi = esp + 0x10;
    PUSH32(esp, 0x00273D0Du); RECOMP_ABI_CALL(0x002730B0u, sub_002730B0); /* call 0x002730B0 */

loc_00273D0D: ;
    edi = MEM32(esp + 0x48);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    ecx = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_00273D6E; /* je: equal / zero */

loc_00273D1B: ;
    PUSH32(esp, edi);
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0x00273D25u); RECOMP_ABI_CALL(0x002725D0u, sub_002725D0); /* call 0x002725D0 */

loc_00273D25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00273D39; /* jle: less or equal (signed <=) */

loc_00273D2C: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x24) = ecx;

loc_00273D39: ;
    esi = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x1C) = 0xB;
    PUSH32(esp, 0x00273D63u); RECOMP_ABI_CALL(0x00276AB0u, sub_00276AB0); /* call 0x00276AB0 */

loc_00273D63: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00273D6E: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00273D7Au); RECOMP_ABI_CALL(0x00276280u, sub_00276280); /* call 0x00276280 */

loc_00273D7A: ;
    ecx = MEM32(esi + 0x1C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00273D89u); RECOMP_ABI_CALL(0x00276AB0u, sub_00276AB0); /* call 0x00276AB0 */

loc_00273D89: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273DA0
 * Original: 0x00273DA0 - 0x00273DD4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273DA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00273DA9u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_00273DA9: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273DB9; /* jne: not equal / not zero */

loc_00273DB3: ;
    MEM32(esi) = 3;

loc_00273DB9: ;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273DC3u); RECOMP_ABI_CALL(0x00276D00u, sub_00276D00); /* call 0x00276D00 */

loc_00273DC3: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(edi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00273DD0u); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_00273DD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00273DE0
 * Original: 0x00273DE0 - 0x0027407C (668 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1E4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    ebx = MEM32(esi + 0x1C);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00273E15; /* je: equal / zero */

loc_00273E07: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_00273E25;

loc_00273E15: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273E1Fu); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00273E1F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_00273E25: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273E2Bu); RECOMP_ABI_CALL(0x00276500u, sub_00276500); /* call 0x00276500 */

loc_00273E2B: ;
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273E35u); RECOMP_ABI_CALL(0x00275D80u, sub_00275D80); /* call 0x00275D80 */

loc_00273E35: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273E46u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_00273E46: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273E5A; /* jne: not equal / not zero */

loc_00273E52: ;
    MEM32(esp + 0x1C) = 2;

loc_00273E5A: ;
    edx = MEM32(esi + 4);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273E6Cu); RECOMP_ABI_CALL(0x00276DB0u, sub_00276DB0); /* call 0x00276DB0 */

loc_00273E6C: ;
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273E7Bu); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00273E7B: ;
    edi = MEM32(ebx + 0x18);
    _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x64 (32-bit) */
    MEM32(ebx + 0x20) = 0xFFFFFFFFu;
    MEM32(esp + 0x18) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00273EA3; /* jle: less or equal (signed <=) */

loc_00273E95: ;
    PUSH32(esp, 0x34B9E4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273EA0u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00273EA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00273EA3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00273EC2; /* jle: less or equal (signed <=) */

loc_00273EA7: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 0x10);
    esi = ecx + edx * 4;
    ecx = edi;
    edi = esp + 0x48;
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
    edi = MEM32(esp + 0x18);

loc_00273EC2: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebx + 0x18) = eax;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    MEM32(esp + 0x44) = 1;
    ecx = MEM32(ebx + 0x34);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = 0;
    edx = MEM32(ebx + 0x14);
    eax = esp + 0x34;
    MEM32(esp + 0x34) = edx;
    MEM32(ebx + 0x14) = eax;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x103 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00273F33; /* jne: not equal / not zero */

loc_00273EFF: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esi + 0x14);
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273F21; /* je: equal / zero */

loc_00273F11: ;
    edx = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = eax;
    goto loc_00273F57;

loc_00273F21: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273F2Bu); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00273F2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    goto loc_00273F57;

loc_00273F33: ;
    PUSH32(esp, 0x103);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273F3Eu); RECOMP_ABI_CALL(0x00270C40u, sub_00270C40); /* call 0x00270C40 */

loc_00273F3E: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0x34B89C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273F4Du); RECOMP_ABI_CALL(0x0026E0B0u, sub_0026E0B0); /* call 0x0026E0B0 */

loc_00273F4D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273F54u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00273F54: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00273F57: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273F5Du); RECOMP_ABI_CALL(0x00275D80u, sub_00275D80); /* call 0x00275D80 */

loc_00273F5D: ;
    MEM32(esp + 0x1C) = eax;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273F68u); RECOMP_ABI_CALL(0x00273B70u, sub_00273B70); /* call 0x00273B70 */

loc_00273F68: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273F73u); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_00273F73: ;
    ecx = MEM32(esp + 0x34);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273F8C; /* je: equal / zero */

loc_00273F81: ;
    edx = MEM32(ebx + 0x18);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + edx;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00273F8C: ;
    ecx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273FA1; /* je: equal / zero */

loc_00273F94: ;
    eax = MEM32(ebx + 0x18);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = ecx;

loc_00273FA1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00273FD4; /* jle: less or equal (signed <=) */

loc_00273FAD: ;
    /* nop */

loc_00273FB0: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + edx * 4 + 0x48);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273FC4u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00273FC4: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00273FB0; /* jl: less (signed <) */

loc_00273FD4: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x115);
    edi = 0x106;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00273FE6u); RECOMP_ABI_CALL(0x002720B0u, sub_002720B0); /* call 0x002720B0 */

loc_00273FE6: ;
    esi = MEM32(ebx + 0x14);
    ecx = MEM32(esi);
    edx = MEM32(ebx + 0xC);
    MEM32(ebx + 0x14) = ecx;
    eax = MEM32(edx + 0x1C);
    ecx = MEM32(esi + 8);
    edx = MEM32(eax + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0027402D; /* jle: less or equal (signed <=) */

loc_00274005: ;
    edi = MEM32(eax + 0x34);
    edx = MEM32(eax);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x34) = edi;
    edx = MEM32(edx + 0x18);
    ecx = edi;
    ecx = MEM32(eax + ecx * 4 + 0x2B8);
    edi = MEM32(eax + 0x18);
    ecx = ecx + ecx * 2;
    MEM32(edx + ecx * 4 + 8) = edi;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00274005; /* jg: greater (signed >) */

loc_0027402D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274047; /* je: equal / zero */

loc_00274034: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x21);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00274044u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00274044: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274047: ;
    eax = MEM32(ebx + 0x34);
    MEM32(ebx + 0x24) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00274057u); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_00274057: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00274067u); RECOMP_ABI_CALL(0x00277320u, sub_00277320); /* call 0x00277320 */

loc_00274067: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00274072u); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_00274072: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00274080
 * Original: 0x00274080 - 0x002741A2 (290 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274080: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ebx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274091u); RECOMP_ABI_CALL(0x00275D80u, sub_00275D80); /* call 0x00275D80 */

loc_00274091: ;
    ebp = eax;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x20) = 1;
    eax = MEM32(ebx + 0x34);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = 0;
    ecx = MEM32(ebx + 0x14);
    MEM32(esp + 0x10) = ecx;
    edx = esp + 0x10;
    MEM32(ebx + 0x14) = edx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002740E3; /* je: equal / zero */

loc_002740D5: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_002740F3;

loc_002740E3: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002740EDu); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_002740ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_002740F3: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x002740FBu); RECOMP_ABI_CALL(0x00273B70u, sub_00273B70); /* call 0x00273B70 */

loc_002740FB: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 0x110);
    edi = 0x114;
    PUSH32(esp, 0x0027410Eu); RECOMP_ABI_CALL(0x002720B0u, sub_002720B0); /* call 0x002720B0 */

loc_0027410E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027411Bu); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_0027411B: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00274130; /* jne: not equal / not zero */

loc_00274128: ;
    MEM32(esp + 0x20) = 3;

loc_00274130: ;
    eax = MEM32(esi + 0x1C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027413Eu); RECOMP_ABI_CALL(0x00276D00u, sub_00276D00); /* call 0x00276D00 */

loc_0027413E: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027414Cu); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_0027414C: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274158u); RECOMP_ABI_CALL(0x00277320u, sub_00277320); /* call 0x00277320 */

loc_00274158: ;
    esi = MEM32(ebx + 0x14);
    ecx = MEM32(esi);
    eax = MEM32(ebx + 0xC);
    MEM32(ebx + 0x14) = ecx;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0027416Eu); RECOMP_ABI_CALL(0x002722E0u, sub_002722E0); /* call 0x002722E0 */

loc_0027416E: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274188; /* je: equal / zero */

loc_00274175: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x21);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274185u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00274185: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274188: ;
    eax = MEM32(ebx + 0x34);
    MEM32(ebx + 0x24) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274198u); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_00274198: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002741B0
 * Original: 0x002741B0 - 0x002741DD (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002741B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002741B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002741C1u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_002741C1: ;
    edx = MEM32(esi + 0x1C);
    edi = MEM32(esp + 0x10);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002741D3u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_002741D3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002741E0
 * Original: 0x002741E0 - 0x002742F3 (275 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002741E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002741E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0x002741F7u); RECOMP_ABI_CALL(0x002722A0u, sub_002722A0); /* call 0x002722A0 */

loc_002741F7: ;
    eax = 0x103;
    PUSH32(esp, 0x00274201u); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_00274201: ;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x20) = 1;
    eax = MEM32(edi + 0x34);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = 0;
    ecx = MEM32(edi + 0x14);
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, edi);
    MEM32(edi + 0x14) = edx;
    PUSH32(esp, 0x00274234u); RECOMP_ABI_CALL(0x00275D80u, sub_00275D80); /* call 0x00275D80 */

loc_00274234: ;
    ebp = eax;
    eax = esi;
    PUSH32(esp, 0x0027423Du); RECOMP_ABI_CALL(0x00273B70u, sub_00273B70); /* call 0x00273B70 */

loc_0027423D: ;
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00274247u); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_00274247: ;
    esi = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274269; /* je: equal / zero */

loc_00274252: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x1FFFE);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00274264u); RECOMP_ABI_CALL(0x00276440u, sub_00276440); /* call 0x00276440 */

loc_00274264: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0027427F;

loc_00274269: ;
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFFDu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1D);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027427Cu); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_0027427C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027427F: ;
    ebx = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027428Cu); RECOMP_ABI_CALL(0x00276330u, sub_00276330); /* call 0x00276330 */

loc_0027428C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274297; /* je: equal / zero */

loc_00274293: ;
    eax = ebx;
    goto loc_002742A0;

loc_00274297: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027429Du); RECOMP_ABI_CALL(0x00276500u, sub_00276500); /* call 0x00276500 */

loc_0027429D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002742A0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002742A8u); RECOMP_ABI_CALL(0x00277320u, sub_00277320); /* call 0x00277320 */

loc_002742A8: ;
    esi = MEM32(edi + 0x14);
    ecx = MEM32(esi);
    eax = MEM32(edi + 0xC);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002742BEu); RECOMP_ABI_CALL(0x002722E0u, sub_002722E0); /* call 0x002722E0 */

loc_002742BE: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002742D8; /* je: equal / zero */

loc_002742C5: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x21);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002742D5u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_002742D5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002742D8: ;
    eax = MEM32(edi + 0x34);
    MEM32(edi + 0x24) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002742E8u); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_002742E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00274300
 * Original: 0x00274300 - 0x00274453 (339 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274300: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ebx = MEM32(esi + 0x1C);
    eax = MEM32(ebx + 0x34);
    ebp = MEM32(ebx + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x34B8E8);
    PUSH32(esp, 0xC8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274324u); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_00274324: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00274330u); RECOMP_ABI_CALL(0x00272200u, sub_00272200); /* call 0x00272200 */

loc_00274330: ;
    edx = MEM32(ebx + 0x34);
    MEM32(ebx + edx * 4 + 0x2B8) = eax;
    PUSH32(esp, 1);
    edx = 0x34BA10;
    edi = esi;
    PUSH32(esp, 0x00274348u); RECOMP_ABI_CALL(0x00272320u, sub_00272320); /* call 0x00272320 */

loc_00274348: ;
    PUSH32(esp, 2);
    edx = 0x34BA04;
    PUSH32(esp, 0x00274354u); RECOMP_ABI_CALL(0x00272320u, sub_00272320); /* call 0x00272320 */

loc_00274354: ;
    eax = 0x3D;
    PUSH32(esp, 0x0027435Eu); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_0027435E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027436Bu); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_0027436B: ;
    edx = MEM32(esi + 0x1C);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00274379u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00274379: ;
    eax = 0x2C;
    PUSH32(esp, 0x00274383u); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_00274383: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274390u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_00274390: ;
    edx = MEM32(esi + 0x1C);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027439Eu); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_0027439E: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002743F9; /* jne: not equal / not zero */

loc_002743A9: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002743C9; /* je: equal / zero */

loc_002743BB: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_002743D9;

loc_002743C9: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002743D3u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_002743D3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_002743D9: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002743E6u); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_002743E6: ;
    eax = MEM32(esi + 0x1C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002743F4u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_002743F4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0027441C;

loc_002743F9: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274404u); RECOMP_ABI_CALL(0x00276200u, sub_00276200); /* call 0x00276200 */

loc_00274404: ;
    ecx = MEM32(ebx + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274411u); RECOMP_ABI_CALL(0x00276440u, sub_00276440); /* call 0x00276440 */

loc_00274411: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274419u); RECOMP_ABI_CALL(0x002760A0u, sub_002760A0); /* call 0x002760A0 */

loc_00274419: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027441C: ;
    eax = MEM32(ebx + 0x24);
    ecx = eax + -3;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xD);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027442Eu); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_0027442E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274434u); RECOMP_ABI_CALL(0x00276500u, sub_00276500); /* call 0x00276500 */

loc_00274434: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = 3;
    ecx = esi;
    PUSH32(esp, 0x00274448u); RECOMP_ABI_CALL(0x002741E0u, sub_002741E0); /* call 0x002741E0 */

loc_00274448: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00274460
 * Original: 0x00274460 - 0x00274633 (467 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274460: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ebp = MEM32(esi + 0x1C);
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edx = 0x34BA28;
    edi = esi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00274485u); RECOMP_ABI_CALL(0x00272320u, sub_00272320); /* call 0x00272320 */

loc_00274485: ;
    PUSH32(esp, 1);
    edx = 0x34BA1C;
    PUSH32(esp, 0x00274491u); RECOMP_ABI_CALL(0x00272320u, sub_00272320); /* call 0x00272320 */

loc_00274491: ;
    edi = MEM32(esi + 0x1C);
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, 0x34B8E8);
    PUSH32(esp, 0xC8);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002744ABu); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_002744AB: ;
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002744B7u); RECOMP_ABI_CALL(0x00272200u, sub_00272200); /* call 0x00272200 */

loc_002744B7: ;
    ecx = MEM32(edi + 0x34);
    ebx = 3;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + ecx * 4 + 0x2C0) = eax;
    MEM32(esp + 0x10) = ebx;
    /* nop */

loc_002744D0: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x2C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002745D7; /* jne: not equal / not zero */

loc_002744DA: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 4);
    edi = 0x11F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002744F7; /* je: equal / zero */

loc_002744EC: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = edi;
    goto loc_00274504;

loc_002744F7: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274501u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00274501: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274504: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x116) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x116 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027451C; /* je: equal / zero */

loc_0027450E: ;
    PUSH32(esp, 0x34B8D8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274519u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00274519: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027451C: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 4);
    eax = esi + 0x10;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00274540; /* je: equal / zero */

loc_00274533: ;
    eax = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = edi;
    goto loc_0027454A;

loc_00274540: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274547u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00274547: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027454A: ;
    ebp = MEM32(esi + 0x1C);
    MEM32(esi + 0xC) = eax;
    edx = MEM32(ebp + 0x34);
    PUSH32(esp, 0x34B8E8);
    PUSH32(esp, 0xC8);
    eax = edx + ebx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274568u); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_00274568: ;
    edi = MEM32(esi + 0x1C);
    ebx = MEM32(edi);
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ebx + 0x38);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x38;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027459E; /* jle: less or equal (signed <=) */

loc_0027457E: ;
    edx = MEM32(ebx + 0x18);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x7FFFFFFD);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00274598u); RECOMP_ABI_CALL(0x00270AF0u, sub_00270AF0); /* call 0x00270AF0 */

loc_00274598: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x18) = eax;

loc_0027459E: ;
    eax = MEM32(edi + 0x30);
    edx = MEM32(ebx + 0x18);
    ecx = eax + eax * 2;
    eax = MEM32(esp + 0x14);
    MEM32(edx + ecx * 4) = eax;
    ecx = MEM32(edi + 0x30);
    eax = MEM32(esp + 0x10);
    edx = ecx + 1;
    MEM32(edi + 0x30) = edx;
    edx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + edx * 4 + 0x2B8) = ecx;
    ebp = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = eax;
    ebx = eax;
    goto loc_002744D0;

loc_002745D7: ;
    eax = 0x10B;
    PUSH32(esp, 0x002745E1u); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_002745E1: ;
    eax = MEM32(esi + 4);
    edi = esp + 0x20;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002745F1u); RECOMP_ABI_CALL(0x002730B0u, sub_002730B0); /* call 0x002730B0 */

loc_002745F1: ;
    edx = eax;
    PUSH32(esp, ebx);
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0x002745FDu); RECOMP_ABI_CALL(0x002725D0u, sub_002725D0); /* call 0x002725D0 */

loc_002745FD: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00274605u); RECOMP_ABI_CALL(0x00276060u, sub_00276060); /* call 0x00276060 */

loc_00274605: ;
    edi = MEM32(esp + 0x28);
    PUSH32(esp, 0x1FFFE);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1E);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00274617u); RECOMP_ABI_CALL(0x00276440u, sub_00276440); /* call 0x00276440 */

loc_00274617: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0x00274628u); RECOMP_ABI_CALL(0x002741E0u, sub_002741E0); /* call 0x002741E0 */

loc_00274628: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00274640
 * Original: 0x00274640 - 0x00274748 (264 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274640: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x1C);
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 0x34);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(ebx + 0x14);
    MEM32(esp + 0xC) = ecx;
    edx = esp + 0xC;
    MEM32(ebx + 0x14) = edx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027469A; /* je: equal / zero */

loc_0027468C: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_002746AA;

loc_0027469A: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002746A4u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_002746A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_002746AA: ;
    PUSH32(esp, 0x002746AFu); RECOMP_ABI_CALL(0x00272140u, sub_00272140); /* call 0x00272140 */

loc_002746AF: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002746E2; /* je: equal / zero */

loc_002746B7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002746D4; /* je: equal / zero */

loc_002746BC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002746E2; /* je: equal / zero */

loc_002746C4: ;
    PUSH32(esp, 0x34BA38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002746CFu); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_002746CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002746ED;

loc_002746D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x002746DDu); RECOMP_ABI_CALL(0x00274300u, sub_00274300); /* call 0x00274300 */

loc_002746DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002746ED;

loc_002746E2: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x002746EAu); RECOMP_ABI_CALL(0x00274460u, sub_00274460); /* call 0x00274460 */

loc_002746EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002746ED: ;
    eax = edi;
    PUSH32(esp, 0x108);
    edi = 0x106;
    PUSH32(esp, 0x002746FEu); RECOMP_ABI_CALL(0x002720B0u, sub_002720B0); /* call 0x002720B0 */

loc_002746FE: ;
    esi = MEM32(ebx + 0x14);
    ecx = MEM32(esi);
    eax = MEM32(ebx + 0xC);
    MEM32(ebx + 0x14) = ecx;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00274714u); RECOMP_ABI_CALL(0x002722E0u, sub_002722E0); /* call 0x002722E0 */

loc_00274714: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027472E; /* je: equal / zero */

loc_0027471B: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x21);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027472Bu); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_0027472B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027472E: ;
    eax = MEM32(ebx + 0x34);
    MEM32(ebx + 0x24) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027473Eu); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_0027473E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00274750
 * Original: 0x00274750 - 0x002747C8 (120 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274750: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274773; /* je: equal / zero */

loc_00274765: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_00274783;

loc_00274773: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027477Du); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_0027477D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_00274783: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027478Cu); RECOMP_ABI_CALL(0x002739C0u, sub_002739C0); /* call 0x002739C0 */

loc_0027478C: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027479C; /* jne: not equal / not zero */

loc_00274796: ;
    MEM32(edi) = 3;

loc_0027479C: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002747A6u); RECOMP_ABI_CALL(0x00276D00u, sub_00276D00); /* call 0x00276D00 */

loc_002747A6: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002747B3u); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_002747B3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x112;
    PUSH32(esp, 0x002747C0u); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_002747C0: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00273B70(); return; /* tail jmp 0x00273B70 */

}

/**
 * sub_002747D0
 * Original: 0x002747D0 - 0x002748CF (255 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002747D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002747D0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    ebx = MEM32(esi + 0x1C);
    edi = esp + 0x10;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x002747ECu); RECOMP_ABI_CALL(0x00274750u, sub_00274750); /* call 0x00274750 */

loc_002747EC: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x105) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x105 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274829; /* jne: not equal / not zero */

loc_002747F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002747FBu); RECOMP_ABI_CALL(0x00276500u, sub_00276500); /* call 0x00276500 */

loc_002747FB: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274807u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00274807: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274812u); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_00274812: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x10;
    eax = esi;
    PUSH32(esp, 0x00274820u); RECOMP_ABI_CALL(0x00274750u, sub_00274750); /* call 0x00274750 */

loc_00274820: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x105) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x105 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002747F5; /* je: equal / zero */

loc_00274829: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x104) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x104 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274894; /* jne: not equal / not zero */

loc_00274832: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274838u); RECOMP_ABI_CALL(0x00276500u, sub_00276500); /* call 0x00276500 */

loc_00274838: ;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274844u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00274844: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027484Fu); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_0027484F: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esi + 0x14);
    eax = 0x11F;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027487B; /* je: equal / zero */

loc_00274864: ;
    edx = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = eax;
    eax = esi;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = ecx;
    PUSH32(esp, 0x00274879u); RECOMP_ABI_CALL(0x00273B70u, sub_00273B70); /* call 0x00273B70 */

loc_00274879: ;
    goto loc_002748A7;

loc_0027487B: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274885u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00274885: ;
    MEM32(esi + 0xC) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00274892u); RECOMP_ABI_CALL(0x00273B70u, sub_00273B70); /* call 0x00273B70 */

loc_00274892: ;
    goto loc_002748A7;

loc_00274894: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002748A4u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_002748A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002748A7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002748B2u); RECOMP_ABI_CALL(0x002765A0u, sub_002765A0); /* call 0x002765A0 */

loc_002748B2: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0x10A);
    edi = 0x106;
    PUSH32(esp, 0x002748C5u); RECOMP_ABI_CALL(0x002720B0u, sub_002720B0); /* call 0x002720B0 */

loc_002748C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002748D0
 * Original: 0x002748D0 - 0x002749EF (287 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002748D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002748D0: ;
    _fb = (uint32_t)(0x604) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x604;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0x002748E3u); RECOMP_ABI_CALL(0x00272140u, sub_00272140); /* call 0x00272140 */

loc_002748E3: ;
    esi = MEM32(ebx + 0x1C);
    edi = eax;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, 0x34B8E8);
    PUSH32(esp, 0xC8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002748FDu); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_002748FD: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00274905u); RECOMP_ABI_CALL(0x00272200u, sub_00272200); /* call 0x00272200 */

loc_00274905: ;
    ecx = MEM32(esi + 0x34);
    MEM32(esi + ecx * 4 + 0x2B8) = eax;
    eax = MEM32(ebp + 0x24);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x2C) = 5;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x00274931u); RECOMP_ABI_CALL(0x002760A0u, sub_002760A0); /* call 0x002760A0 */

loc_00274931: ;
    eax = MEM32(ebx + 0x1C);
    esi = MEM32(eax + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x34) = esi;
    ecx = esi;
    ecx = MEM32(eax + ecx * 4 + 0x2B4);
    edx = ecx + ecx * 2;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x18);
    MEM32(ecx + edx * 4 + 4) = eax;
    ecx = MEM32(ebx + 4);
    esi = esp + 0x54;
    edi = ebx;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x00274965u); RECOMP_ABI_CALL(0x002727F0u, sub_002727F0); /* call 0x002727F0 */

loc_00274965: ;
    edx = MEM32(esp + 0x54);
    edi = MEM32(esp + 0x28);
    eax = 0x28;
    esi = ebx;
    MEM32(edx + 0x3C) = edi;
    PUSH32(esp, 0x0027497Cu); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_0027497C: ;
    PUSH32(esp, 0x00274981u); RECOMP_ABI_CALL(0x00272E50u, sub_00272E50); /* call 0x00272E50 */

loc_00274981: ;
    eax = 0x29;
    PUSH32(esp, 0x0027498Bu); RECOMP_ABI_CALL(0x00272050u, sub_00272050); /* call 0x00272050 */

loc_0027498B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274991u); RECOMP_ABI_CALL(0x00274FA0u, sub_00274FA0); /* call 0x00274FA0 */

loc_00274991: ;
    eax = edi;
    PUSH32(esp, 0x109);
    edi = 0x106;
    PUSH32(esp, 0x002749A2u); RECOMP_ABI_CALL(0x002720B0u, sub_002720B0); /* call 0x002720B0 */

loc_002749A2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002749A8u); RECOMP_ABI_CALL(0x00272850u, sub_00272850); /* call 0x00272850 */

loc_002749A8: ;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    eax = esp + 0x50;
    ecx = ebx;
    PUSH32(esp, 0x002749B8u); RECOMP_ABI_CALL(0x00272730u, sub_00272730); /* call 0x00272730 */

loc_002749B8: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002749C8u); RECOMP_ABI_CALL(0x00276AB0u, sub_00276AB0); /* call 0x00276AB0 */

loc_002749C8: ;
    eax = MEM32(ebp + 0x34);
    eax = MEM32(ebp + eax * 4 + 0x2B4);
    edx = MEM32(ebp);
    ecx = eax + eax * 2;
    eax = MEM32(edx + 0x18);
    edx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4 + 4) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x604) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x604;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002749F0
 * Original: 0x002749F0 - 0x00274B83 (403 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002749F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002749F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    MEM32(esp + 0x10) = 0;

loc_00274A01: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x116) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x116 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274A18; /* je: equal / zero */

loc_00274A0A: ;
    PUSH32(esp, 0x34B8D8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274A15u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00274A15: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274A18: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 4);
    eax = esi + 0x10;
    MEM32(esp + 0x14) = ecx;
    MEM32(esi + 8) = edx;
    edx = MEM32(esi + 0x14);
    ecx = 0x11F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274A41; /* je: equal / zero */

loc_00274A34: ;
    eax = edx;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = ecx;
    goto loc_00274A4B;

loc_00274A41: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274A48u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00274A48: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274A4B: ;
    ebp = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x34);
    PUSH32(esp, 0x34B8E8);
    PUSH32(esp, 0xC8);
    edx = eax + ecx + 1;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274A6Du); RECOMP_ABI_CALL(0x00271170u, sub_00271170); /* call 0x00271170 */

loc_00274A6D: ;
    edi = MEM32(esi + 0x1C);
    ebx = MEM32(edi);
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ebx + 0x38);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x38;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00274AA3; /* jle: less or equal (signed <=) */

loc_00274A83: ;
    edx = MEM32(ebx + 0x18);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x7FFFFFFD);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00274A9Du); RECOMP_ABI_CALL(0x00270AF0u, sub_00270AF0); /* call 0x00270AF0 */

loc_00274A9D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x18) = eax;

loc_00274AA3: ;
    eax = MEM32(edi + 0x30);
    edx = MEM32(ebx + 0x18);
    ebx = MEM32(esp + 0x10);
    ecx = eax + eax * 2;
    eax = MEM32(esp + 0x14);
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(edi + 0x30);
    ecx = eax + 1;
    MEM32(edi + 0x30) = ecx;
    edx = MEM32(ebp + 0x34);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + edx * 4 + 0x2B8) = eax;
    eax = MEM32(esi + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2C (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00274B11; /* jne: not equal / not zero */

loc_00274AD9: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274AFC; /* je: equal / zero */

loc_00274AEB: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_00274A01;

loc_00274AFC: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274B06u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00274B06: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    goto loc_00274A01;

loc_00274B11: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x3D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274B5B; /* jne: not equal / not zero */

loc_00274B17: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274B40; /* je: equal / zero */

loc_00274B29: ;
    edx = MEM32(esi + 0x18);
    edi = esp + 0x18;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00274B3Eu); RECOMP_ABI_CALL(0x002730B0u, sub_002730B0); /* call 0x002730B0 */

loc_00274B3E: ;
    goto loc_00274B61;

loc_00274B40: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274B4Au); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00274B4A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x18;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00274B59u); RECOMP_ABI_CALL(0x002730B0u, sub_002730B0); /* call 0x002730B0 */

loc_00274B59: ;
    goto loc_00274B61;

loc_00274B5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = eax;

loc_00274B61: ;
    edx = eax;
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    eax = esi;
    PUSH32(esp, 0x00274B6Fu); RECOMP_ABI_CALL(0x002725D0u, sub_002725D0); /* call 0x002725D0 */

loc_00274B6F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0x00274B7Bu); RECOMP_ABI_CALL(0x002722A0u, sub_002722A0); /* call 0x002722A0 */

loc_00274B7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00274B90
 * Original: 0x00274B90 - 0x00274BEC (92 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00274B9Fu); RECOMP_ABI_CALL(0x00272140u, sub_00272140); /* call 0x00272140 */

loc_00274B9F: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00274BACu); RECOMP_ABI_CALL(0x002724C0u, sub_002724C0); /* call 0x002724C0 */

loc_00274BAC: ;
    eax = MEM32(esi + 0xC);
    edi = 0x2E;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274BCC; /* jne: not equal / not zero */

loc_00274BBB: ;
    goto loc_00274BC0;

    /* nop */

loc_00274BC0: ;
    eax = esi;
    PUSH32(esp, 0x00274BC7u); RECOMP_ABI_CALL(0x00272960u, sub_00272960); /* call 0x00272960 */

loc_00274BC7: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274BC0; /* je: equal / zero */

loc_00274BCC: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274BE5; /* jne: not equal / not zero */

loc_00274BD2: ;
    eax = esi;
    edi = 1;
    PUSH32(esp, 0x00274BDEu); RECOMP_ABI_CALL(0x00272960u, sub_00272960); /* call 0x00272960 */

loc_00274BDE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274BE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00274BF0
 * Original: 0x00274BF0 - 0x00274C62 (114 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274BF0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx + 0x14);
    MEM32(ebx + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274C16; /* je: equal / zero */

loc_00274C08: ;
    edx = MEM32(ebx + 0x18);
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x10) = edx;
    MEM32(ebx + 0x14) = eax;
    goto loc_00274C26;

loc_00274C16: ;
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274C20u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00274C20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xC) = eax;

loc_00274C26: ;
    eax = esp + 0x18;
    ecx = ebx;
    PUSH32(esp, 0x00274C31u); RECOMP_ABI_CALL(0x00274B90u, sub_00274B90); /* call 0x00274B90 */

loc_00274C31: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00274C3Du); RECOMP_ABI_CALL(0x00272FF0u, sub_00272FF0); /* call 0x00272FF0 */

loc_00274C3D: ;
    ecx = MEM32(ebx + 0x1C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00274C50u); RECOMP_ABI_CALL(0x00276AB0u, sub_00276AB0); /* call 0x00276AB0 */

loc_00274C50: ;
    edx = MEM32(ebx + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00274C5Au); RECOMP_ABI_CALL(0x00276330u, sub_00276330); /* call 0x00276330 */

loc_00274C5A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00274C70
 * Original: 0x00274C70 - 0x00274CBE (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274C70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    eax = esp + 0xC;
    PUSH32(esp, 0x00274C83u); RECOMP_ABI_CALL(0x00273320u, sub_00273320); /* call 0x00273320 */

loc_00274C83: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274CA0; /* jne: not equal / not zero */

loc_00274C8A: ;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00274C97u); RECOMP_ABI_CALL(0x00276280u, sub_00276280); /* call 0x00276280 */

loc_00274C97: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00274CA0: ;
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00274CB5u); RECOMP_ABI_CALL(0x00273C60u, sub_00273C60); /* call 0x00273C60 */

loc_00274CB5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00274CC0
 * Original: 0x00274CC0 - 0x00274DA5 (229 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274CC0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    ebx = MEM32(esi + 0x1C);
    MEM32(esi + 8) = eax;
    eax = 0x11F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274CEA; /* je: equal / zero */

loc_00274CDC: ;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    goto loc_00274CFA;

loc_00274CEA: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274CF4u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00274CF4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_00274CFA: ;
    ecx = MEM32(esi + 0xC);
    eax = ecx + -260;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00274D16; /* ja: above (unsigned >) */

loc_00274D08: ;
    edx = ZX8(MEM8(eax + 0x274DB0));
    { uint32_t _jt = MEM32(edx * 4 + 0x274DA8); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00274D16u) goto loc_00274D16;
    if (_jt == 0x00274D8Bu) goto loc_00274D8B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00274D16: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274D8B; /* je: equal / zero */

loc_00274D1B: ;
    PUSH32(esp, edi);
    edi = esp + 0xC;
    PUSH32(esp, 0x00274D25u); RECOMP_ABI_CALL(0x002730B0u, sub_002730B0); /* call 0x002730B0 */

loc_00274D25: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0xC (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00274D63; /* jne: not equal / not zero */

loc_00274D2F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274D3Cu); RECOMP_ABI_CALL(0x00276280u, sub_00276280); /* call 0x00276280 */

loc_00274D3C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274D5B; /* jne: not equal / not zero */

loc_00274D44: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    ecx = ecx & 0xFFFFFFDAu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x1A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;

loc_00274D5B: ;
    eax = MEM32(ebx + 0x34);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00274D8F;

loc_00274D63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274D78; /* jne: not equal / not zero */

loc_00274D68: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274D73u); RECOMP_ABI_CALL(0x002769C0u, sub_002769C0); /* call 0x002769C0 */

loc_00274D73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00274D8F;

loc_00274D78: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274D83u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00274D83: ;
    eax = MEM32(ebx + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00274D8F;

loc_00274D8B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00274D8F: ;
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274D9Cu); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00274D9C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00274D16
 * Original: 0x00274D16 - 0x00274DA5 (143 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274D16(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274D16: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274D8B; /* je: equal / zero */

loc_00274D1B: ;
    PUSH32(esp, edi);
    edi = esp + 0xC;
    PUSH32(esp, 0x00274D25u); RECOMP_ABI_CALL(0x002730B0u, sub_002730B0); /* call 0x002730B0 */

loc_00274D25: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0xC (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00274D63; /* jne: not equal / not zero */

loc_00274D2F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274D3Cu); RECOMP_ABI_CALL(0x00276280u, sub_00276280); /* call 0x00276280 */

loc_00274D3C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274D5B; /* jne: not equal / not zero */

loc_00274D44: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    ecx = ecx & 0xFFFFFFDAu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x1A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;

loc_00274D5B: ;
    eax = MEM32(ebx + 0x34);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00274D8F;

loc_00274D63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274D78; /* jne: not equal / not zero */

loc_00274D68: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274D73u); RECOMP_ABI_CALL(0x002769C0u, sub_002769C0); /* call 0x002769C0 */

loc_00274D73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00274D8F;

loc_00274D78: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274D83u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00274D83: ;
    eax = MEM32(ebx + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00274D8F;

loc_00274D8B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00274D8F: ;
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274D9Cu); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00274D9C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00274D8B
 * Original: 0x00274D8B - 0x00274DA5 (26 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274D8B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274D8B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274D9Cu); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00274D9C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00274DD0
 * Original: 0x00274DD0 - 0x00274E5F (143 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274DD0: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    MEM32(edi + 8) = eax;
    eax = 0x11F;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274DFB; /* je: equal / zero */

loc_00274DED: ;
    edx = MEM32(edi + 0x18);
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = edx;
    MEM32(edi + 0x14) = eax;
    goto loc_00274E0B;

loc_00274DFB: ;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00274E05u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00274E05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = eax;

loc_00274E0B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274E22; /* je: equal / zero */

loc_00274E0F: ;
    /* nop */

loc_00274E10: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274E30; /* jne: not equal / not zero */

loc_00274E17: ;
    ecx = MEM32(esi + 0xC);
    esi = MEM32(esi);
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274E10; /* jne: not equal / not zero */

loc_00274E22: ;
    PUSH32(esp, 0x34BA50);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00274E2Du); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00274E2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274E30: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274E47; /* je: equal / zero */

loc_00274E34: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x21);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00274E44u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00274E44: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274E47: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00274E4Du); RECOMP_ABI_CALL(0x00276500u, sub_00276500); /* call 0x00276500 */

loc_00274E4D: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00274E58u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00274E58: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00274E60
 * Original: 0x00274E60 - 0x00274F59 (249 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274E60: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xFFFFFEFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFEFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    if (CMP_A(_fa, _fb)) goto loc_00274F4C; /* ja: above (unsigned >) */

loc_00274E79: ;
    eax = ZX8(MEM8(eax + 0x274F84));
    { uint32_t _jt = MEM32(eax * 4 + 0x274F5C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x00274E87u) goto loc_00274E87;
    if (_jt == 0x00274E98u) goto loc_00274E98;
    if (_jt == 0x00274EA8u) goto loc_00274EA8;
    if (_jt == 0x00274ED0u) goto loc_00274ED0;
    if (_jt == 0x00274EDFu) goto loc_00274EDF;
    if (_jt == 0x00274EF0u) goto loc_00274EF0;
    if (_jt == 0x00274EFFu) goto loc_00274EFF;
    if (_jt == 0x00274F2Cu) goto loc_00274F2C;
    if (_jt == 0x00274F3Cu) goto loc_00274F3C;
    if (_jt == 0x00274F4Cu) goto loc_00274F4C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00274E87: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x00274E8Fu); RECOMP_ABI_CALL(0x002747D0u, sub_002747D0); /* call 0x002747D0 */

loc_00274E8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274E98: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00274E9Fu); RECOMP_ABI_CALL(0x00273DE0u, sub_00273DE0); /* call 0x00273DE0 */

loc_00274E9F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274EA8: ;
    esi = ebx;
    PUSH32(esp, 0x00274EAFu); RECOMP_ABI_CALL(0x00271F80u, sub_00271F80); /* call 0x00271F80 */

loc_00274EAF: ;
    eax = ebx;
    PUSH32(esp, 0x00274EB6u); RECOMP_ABI_CALL(0x00273B70u, sub_00273B70); /* call 0x00273B70 */

loc_00274EB6: ;
    eax = edi;
    PUSH32(esp, 0x103);
    edi = 0x106;
    PUSH32(esp, 0x00274EC7u); RECOMP_ABI_CALL(0x002720B0u, sub_002720B0); /* call 0x002720B0 */

loc_00274EC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274ED0: ;
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x00274ED9u); RECOMP_ABI_CALL(0x00274640u, sub_00274640); /* call 0x00274640 */

loc_00274ED9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274EDF: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x00274EE7u); RECOMP_ABI_CALL(0x00274080u, sub_00274080); /* call 0x00274080 */

loc_00274EE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274EF0: ;
    esi = edi;
    eax = ebx;
    PUSH32(esp, 0x00274EF9u); RECOMP_ABI_CALL(0x00274BF0u, sub_00274BF0); /* call 0x00274BF0 */

loc_00274EF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274EFF: ;
    esi = ebx;
    PUSH32(esp, 0x00274F06u); RECOMP_ABI_CALL(0x00271F80u, sub_00271F80); /* call 0x00271F80 */

loc_00274F06: ;
    ecx = 0x109;
    PUSH32(esp, 0x00274F10u); RECOMP_ABI_CALL(0x00272000u, sub_00272000); /* call 0x00272000 */

loc_00274F10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274F1F; /* je: equal / zero */

loc_00274F14: ;
    PUSH32(esp, 0x00274F19u); RECOMP_ABI_CALL(0x002748D0u, sub_002748D0); /* call 0x002748D0 */

loc_00274F19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274F1F: ;
    eax = ebx;
    PUSH32(esp, 0x00274F26u); RECOMP_ABI_CALL(0x002749F0u, sub_002749F0); /* call 0x002749F0 */

loc_00274F26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274F2C: ;
    eax = ebx;
    PUSH32(esp, 0x00274F33u); RECOMP_ABI_CALL(0x00274CC0u, sub_00274CC0); /* call 0x00274CC0 */

loc_00274F33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274F3C: ;
    edi = ebx;
    PUSH32(esp, 0x00274F43u); RECOMP_ABI_CALL(0x00274DD0u, sub_00274DD0); /* call 0x00274DD0 */

loc_00274F43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274F4C: ;
    eax = ebx;
    PUSH32(esp, 0x00274F53u); RECOMP_ABI_CALL(0x00274C70u, sub_00274C70); /* call 0x00274C70 */

loc_00274F53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00274FA0
 * Original: 0x00274FA0 - 0x0027503F (159 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274FA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x30);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x30) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00274FC5; /* jle: less or equal (signed <=) */

loc_00274FB7: ;
    PUSH32(esp, 0x34B9CC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00274FC2u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00274FC2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00274FC5: ;
    ebx = 0x11F;
    /* nop */

loc_00274FD0: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xFFFFFEFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFEFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00274FEB; /* ja: above (unsigned >) */

loc_00274FDD: ;
    eax = ZX8(MEM8(eax + 0x275048));
    { uint32_t _jt = MEM32(eax * 4 + 0x275040); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00274FEBu) goto loc_00274FEB;
    if (_jt == 0x00275034u) goto loc_00275034;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00274FEB: ;
    eax = esi;
    PUSH32(esp, 0x00274FF2u); RECOMP_ABI_CALL(0x00274E60u, sub_00274E60); /* call 0x00274E60 */

loc_00274FF2: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x3B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275027; /* jne: not equal / not zero */

loc_00274FFA: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00275017; /* je: equal / zero */

loc_00275007: ;
    edx = eax;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ebx;
    goto loc_00275027;

loc_00275017: ;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00275021u); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_00275021: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_00275027: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(esi + 0x1C);
    edx = MEM32(eax + 0x34);
    MEM32(eax + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00274FD0; /* je: equal / zero */

loc_00275034: ;
    eax = MEM32(esi + 0x30);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x30) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275070
 * Original: 0x00275070 - 0x0027514E (222 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275070: ;
    _fb = (uint32_t)(0x60C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x618);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x61C);
    ecx = MEM32(edi + 0x10);
    MEM32(esp + 0x30) = eax;
    eax = ecx;
    MEM32(esp + 0x38) = 0;
    esi = eax + 1;
    /* nop */

loc_002750A0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002750A0; /* jne: not equal / not zero */

loc_002750A7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(esp + 0x618);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002750B8u); RECOMP_ABI_CALL(0x0026E380u, sub_0026E380); /* call 0x0026E380 */

loc_002750B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002750C5u); RECOMP_ABI_CALL(0x00270CA0u, sub_00270CA0); /* call 0x00270CA0 */

loc_002750C5: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x3C;
    edi = esp + 8;
    PUSH32(esp, 0x002750D5u); RECOMP_ABI_CALL(0x002727F0u, sub_002727F0); /* call 0x002727F0 */

loc_002750D5: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0xC);
    esi = 0x11F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002750FC; /* je: equal / zero */

loc_002750EA: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = esi;
    goto loc_00275112;

loc_002750FC: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027510Bu); RECOMP_ABI_CALL(0x002719A0u, sub_002719A0); /* call 0x002719A0 */

loc_0027510B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;

loc_00275112: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027511Cu); RECOMP_ABI_CALL(0x00274FA0u, sub_00274FA0); /* call 0x00274FA0 */

loc_0027511C: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0027513A; /* je: equal / zero */

loc_00275129: ;
    ecx = esp;
    PUSH32(esp, 0x34BA64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00275137u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00275137: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027513A: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275143u); RECOMP_ABI_CALL(0x00272850u, sub_00272850); /* call 0x00272850 */

loc_00275143: ;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x610) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x610;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00275150
 * Original: 0x00275150 - 0x00275165 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275150: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275161u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275161: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00275170
 * Original: 0x00275170 - 0x002751B6 (70 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275170: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0027518E; /* jbe: below or equal (unsigned <=) */

loc_00275182: ;
    ecx = MEM32(eax + 4);
    edi = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_00275199;

loc_0027518E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275194u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00275194: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00275199: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002751B2; /* jne: not equal / not zero */

loc_0027519E: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002751AFu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_002751AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002751B2: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002751C0
 * Original: 0x002751C0 - 0x002751E7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002751C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002751C0: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002751CBu); RECOMP_ABI_CALL(0x0026F390u, sub_0026F390); /* call 0x0026F390 */

loc_002751CB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002751E6; /* je: equal / zero */

loc_002751D2: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002751E3u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_002751E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002751E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002751F0
 * Original: 0x002751F0 - 0x00275276 (134 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002751F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002751F0: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027524F; /* je: equal / zero */

loc_002751F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx + eax + -1;
    if (CMP_EQ(_fa, _fb)) goto loc_0027524D; /* je: equal / zero */

loc_00275200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax;

loc_00275204: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    if (CMP_BE(_fa, _fb)) goto loc_00275221; /* jbe: below or equal (unsigned <=) */

loc_00275215: ;
    ecx = MEM32(eax + 4);
    ebx = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_0027522C;

loc_00275221: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275227u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00275227: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_0027522C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275245; /* jne: not equal / not zero */

loc_00275231: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275242u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275242: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275245: ;
    MEM8(edi) = LO8(ebx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00275204; /* jne: not equal / not zero */

loc_0027524B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0027524D: ;
    POP32(esp, edi);

loc_0027524E: ;
    esp += 4; return; /* ret */

loc_0027524F: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027525Au); RECOMP_ABI_CALL(0x0026F390u, sub_0026F390); /* call 0x0026F390 */

loc_0027525A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027524E; /* je: equal / zero */

loc_00275261: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275272u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275272: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00275280
 * Original: 0x00275280 - 0x00275351 (209 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275280: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00275323; /* je: equal / zero */

loc_00275293: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027534C; /* je: equal / zero */

loc_0027529B: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = ecx + -1;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = eax;
    edi = edi;

loc_002752B0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275307; /* je: equal / zero */

loc_002752B4: ;
    MEM32(esp + 0xC) = ebp;

loc_002752B8: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    if (CMP_BE(_fa, _fb)) goto loc_002752D5; /* jbe: below or equal (unsigned <=) */

loc_002752C9: ;
    ecx = MEM32(eax + 4);
    ebx = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_002752E0;

loc_002752D5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002752DBu); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_002752DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_002752E0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002752F9; /* jne: not equal / not zero */

loc_002752E5: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002752F6u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_002752F6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002752F9: ;
    eax = MEM32(esp + 0xC);
    MEM8(edi) = LO8(ebx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_002752B8; /* jne: not equal / not zero */

loc_00275307: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_002752B0; /* jne: not equal / not zero */

loc_0027531C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00275323: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275331u); RECOMP_ABI_CALL(0x0026F390u, sub_0026F390); /* call 0x0026F390 */

loc_00275331: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027534C; /* je: equal / zero */

loc_00275338: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275349u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275349: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027534C: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00275360
 * Original: 0x00275360 - 0x00275395 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275360: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = 4;
    ecx = esp + 4;
    PUSH32(esp, 0x00275372u); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_00275372: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00275392; /* jge: greater or equal (signed >=) */

loc_0027537A: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34BA94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027538Bu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_0027538B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275392: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002753A0
 * Original: 0x002753A0 - 0x002753B3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002753A0(void)
{

loc_002753A0: ;
    PUSH32(esp, ecx);
    eax = 4;
    ecx = esp;
    PUSH32(esp, 0x002753AEu); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_002753AE: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002753C0
 * Original: 0x002753C0 - 0x002753D7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002753C0(void)
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

loc_002753C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 8;
    ecx = esp;
    PUSH32(esp, 0x002753D0u); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_002753D0: ;
    fp_push(MEMD(esp)); /* fld double */
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
 * sub_002753E0
 * Original: 0x002753E0 - 0x0027544A (106 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002753E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002753E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = 4;
    ecx = esp + 8;
    PUSH32(esp, 0x002753F3u); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_002753F3: ;
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275401; /* jne: not equal / not zero */

loc_002753FB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00275401: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027540Fu); RECOMP_ABI_CALL(0x0026F430u, sub_0026F430); /* call 0x0026F430 */

loc_0027540F: ;
    edx = MEM32(esi + 4);
    ebx = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027541Cu); RECOMP_ABI_CALL(0x0026F390u, sub_0026F390); /* call 0x0026F390 */

loc_0027541C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275437; /* je: equal / zero */

loc_00275423: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00275434u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275434: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275437: ;
    edx = MEM32(esi);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275442u); RECOMP_ABI_CALL(0x0026E380u, sub_0026E380); /* call 0x0026E380 */

loc_00275442: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275450
 * Original: 0x00275450 - 0x002754AF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275450: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = 4;
    ecx = esp + 8;
    PUSH32(esp, 0x00275463u); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_00275463: ;
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00275483; /* jge: greater or equal (signed >=) */

loc_0027546B: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34BA94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027547Cu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_0027547C: ;
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275483: ;
    eax = MEM32(esi);
    edx = edi * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275497u); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_00275497: ;
    ecx = eax;
    PUSH32(esp, 4);
    eax = edi;
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x2C) = edi;
    PUSH32(esp, 0x002754A8u); RECOMP_ABI_CALL(0x00275280u, sub_00275280); /* call 0x00275280 */

loc_002754A8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002754B0
 * Original: 0x002754B0 - 0x00275594 (228 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002754B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002754B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = 4;
    ecx = esp + 8;
    PUSH32(esp, 0x002754C5u); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_002754C5: ;
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002754E5; /* jge: greater or equal (signed >=) */

loc_002754CD: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34BA94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002754DEu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_002754DE: ;
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002754E5: ;
    eax = MEM32(esi);
    edx = ebp + ebp * 2;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002754F9u); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_002754F9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(ebx + 0x18) = eax;
    MEM32(ebx + 0x38) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0027558E; /* jle: less or equal (signed <=) */

loc_0027550A: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00275510: ;
    eax = esi;
    PUSH32(esp, 0x00275517u); RECOMP_ABI_CALL(0x002753E0u, sub_002753E0); /* call 0x002753E0 */

loc_00275517: ;
    ecx = MEM32(ebx + 0x18);
    MEM32(edi + ecx) = eax;
    eax = 4;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0027552Bu); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_0027552B: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00275547; /* jge: greater or equal (signed >=) */

loc_00275533: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x34BA94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275544u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275544: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275547: ;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + edi + 4) = edx;
    eax = 4;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00275560u); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_00275560: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027557C; /* jge: greater or equal (signed >=) */

loc_00275568: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34BA94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00275579u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275579: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027557C: ;
    edx = MEM32(ebx + 0x18);
    eax = MEM32(esp + 0x10);
    MEM32(edx + edi + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00275510; /* jne: not equal / not zero */

loc_0027558D: ;
    POP32(esp, edi);

loc_0027558E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002755A0
 * Original: 0x002755A0 - 0x002755FF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002755A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002755A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = 4;
    ecx = esp + 8;
    PUSH32(esp, 0x002755B3u); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_002755B3: ;
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002755D3; /* jge: greater or equal (signed >=) */

loc_002755BB: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34BA94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002755CCu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_002755CC: ;
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002755D3: ;
    eax = MEM32(esi);
    edx = edi * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002755E7u); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_002755E7: ;
    ecx = eax;
    PUSH32(esp, 4);
    eax = edi;
    MEM32(ebx + 0x14) = ecx;
    MEM32(ebx + 0x30) = edi;
    PUSH32(esp, 0x002755F8u); RECOMP_ABI_CALL(0x00275280u, sub_00275280); /* call 0x00275280 */

loc_002755F8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275600
 * Original: 0x00275600 - 0x00275697 (151 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275600: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = 4;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00275618u); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_00275618: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027563A; /* jge: greater or equal (signed >=) */

loc_00275620: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34BA94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00275631u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275631: ;
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */

loc_0027563A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0027565A; /* je: equal / zero */

loc_0027563C: ;
    eax = ZX8(MEM8(ebp + 0x44));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027565A; /* je: equal / zero */

loc_00275644: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x34BAA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275657u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275657: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027565A: ;
    edx = MEM32(esi);
    ecx = edi * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027566Eu); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_0027566E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 0x1C) = eax;
    MEM32(ebp + 0x24) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00275692; /* jle: less or equal (signed <=) */

loc_0027567D: ;
    /* nop */

loc_00275680: ;
    eax = esi;
    PUSH32(esp, 0x00275687u); RECOMP_ABI_CALL(0x002753E0u, sub_002753E0); /* call 0x002753E0 */

loc_00275687: ;
    ecx = MEM32(ebp + 0x1C);
    MEM32(ecx + ebx * 4) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00275680; /* jl: less (signed <) */

loc_00275692: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002756A0
 * Original: 0x002756A0 - 0x00275831 (401 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002756A0(void)
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

loc_002756A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = 4;
    ecx = esp + 0x20;
    PUSH32(esp, 0x002756BBu); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_002756BB: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002756DB; /* jge: greater or equal (signed >=) */

loc_002756C3: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34BA94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002756D4u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_002756D4: ;
    edi = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002756DB: ;
    eax = MEM32(esi);
    edx = edi * 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002756EFu); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_002756EF: ;
    MEM32(ebp + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 0x28) = edi;
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002757C0; /* jle: less or equal (signed <=) */

loc_00275706: ;
    ecx = MEM32(ebp + 8);
    edi = ecx + eax * 8;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    if (CMP_BE(_fa, _fb)) goto loc_00275729; /* jbe: below or equal (unsigned <=) */

loc_0027571D: ;
    ecx = MEM32(eax + 4);
    ebx = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_00275734;

loc_00275729: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027572Fu); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_0027572F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_00275734: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027574D; /* jne: not equal / not zero */

loc_00275739: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027574Au); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_0027574A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027574D: ;
    ecx = ZX8(LO8(ebx));
    eax = ecx;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002757A5; /* je: equal / zero */

loc_00275757: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00275788; /* je: equal / zero */

loc_0027575C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00275776; /* je: equal / zero */

loc_0027575F: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x34BAD4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00275771u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275771: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002757AB;

loc_00275776: ;
    eax = esi;
    MEM32(edi) = 4;
    PUSH32(esp, 0x00275783u); RECOMP_ABI_CALL(0x002753E0u, sub_002753E0); /* call 0x002753E0 */

loc_00275783: ;
    MEM32(edi + 4) = eax;
    goto loc_002757AB;

loc_00275788: ;
    eax = 8;
    ecx = esp + 0x14;
    MEM32(edi) = 3;
    PUSH32(esp, 0x0027579Cu); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_0027579C: ;
    fp_push(MEMD(esp + 0x14)); /* fld double */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_002757AB;

loc_002757A5: ;
    MEM32(edi) = 0;

loc_002757AB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00275706; /* jl: less (signed <) */

loc_002757C0: ;
    eax = 4;
    ecx = esp + 0x20;
    PUSH32(esp, 0x002757CEu); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_002757CE: ;
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002757EE; /* jge: greater or equal (signed >=) */

loc_002757D6: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x34BA94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002757E7u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_002757E7: ;
    ebx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002757EE: ;
    edx = MEM32(esi);
    ecx = ebx * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275802u); RECOMP_ABI_CALL(0x00270A10u, sub_00270A10); /* call 0x00270A10 */

loc_00275802: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 0x34) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00275829; /* jle: less or equal (signed <=) */

loc_00275811: ;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027581Bu); RECOMP_ABI_CALL(0x00275840u, sub_00275840); /* call 0x00275840 */

loc_0027581B: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edi * 4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00275811; /* jl: less (signed <) */

loc_00275829: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00275840
 * Original: 0x00275840 - 0x002759F8 (440 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027584Eu); RECOMP_ABI_CALL(0x0026E580u, sub_0026E580); /* call 0x0026E580 */

loc_0027584E: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0027585Au); RECOMP_ABI_CALL(0x002753E0u, sub_002753E0); /* call 0x002753E0 */

loc_0027585A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00275868; /* jne: not equal / not zero */

loc_00275861: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x20) = ecx;

loc_00275868: ;
    eax = 4;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00275876u); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_00275876: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00275892; /* jge: greater or equal (signed >=) */

loc_0027587E: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x34BA94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027588Fu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_0027588F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275892: ;
    ecx = MEM32(esp + 0xC);
    MEM32(edi + 0x3C) = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_002758B7; /* jbe: below or equal (unsigned <=) */

loc_002758AB: ;
    ecx = MEM32(eax + 4);
    ebx = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_002758C2;

loc_002758B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002758BDu); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_002758BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_002758C2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002758DB; /* jne: not equal / not zero */

loc_002758C7: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002758D8u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_002758D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002758DB: ;
    MEM8(edi + 0x44) = LO8(ebx);
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    if (CMP_BE(_fa, _fb)) goto loc_002758FB; /* jbe: below or equal (unsigned <=) */

loc_002758EF: ;
    ecx = MEM32(eax + 4);
    ebx = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_00275906;

loc_002758FB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275901u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00275901: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_00275906: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027591F; /* jne: not equal / not zero */

loc_0027590B: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027591Cu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_0027591C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027591F: ;
    MEM8(edi + 0x45) = LO8(ebx);
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    if (CMP_BE(_fa, _fb)) goto loc_0027593F; /* jbe: below or equal (unsigned <=) */

loc_00275933: ;
    ecx = MEM32(eax + 4);
    ebx = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_0027594A;

loc_0027593F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275945u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00275945: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_0027594A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275963; /* jne: not equal / not zero */

loc_0027594F: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275960u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275960: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275963: ;
    MEM8(edi + 0x46) = LO8(ebx);
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    if (CMP_BE(_fa, _fb)) goto loc_00275983; /* jbe: below or equal (unsigned <=) */

loc_00275977: ;
    ecx = MEM32(eax + 4);
    ebx = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_0027598E;

loc_00275983: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275989u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00275989: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_0027598E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002759A7; /* jne: not equal / not zero */

loc_00275993: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002759A4u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_002759A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002759A7: ;
    MEM8(edi + 0x47) = LO8(ebx);
    ebx = edi;
    eax = esi;
    PUSH32(esp, 0x002759B3u); RECOMP_ABI_CALL(0x002755A0u, sub_002755A0); /* call 0x002755A0 */

loc_002759B3: ;
    eax = esi;
    PUSH32(esp, 0x002759BAu); RECOMP_ABI_CALL(0x002754B0u, sub_002754B0); /* call 0x002754B0 */

loc_002759BA: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x002759C2u); RECOMP_ABI_CALL(0x00275600u, sub_00275600); /* call 0x00275600 */

loc_002759C2: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x002759CAu); RECOMP_ABI_CALL(0x002756A0u, sub_002756A0); /* call 0x002756A0 */

loc_002759CA: ;
    eax = esi;
    PUSH32(esp, 0x002759D1u); RECOMP_ABI_CALL(0x00275450u, sub_00275450); /* call 0x00275450 */

loc_002759D1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002759D7u); RECOMP_ABI_CALL(0x00270370u, sub_00270370); /* call 0x00270370 */

loc_002759D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002759F3; /* jne: not equal / not zero */

loc_002759DF: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x34BAF4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002759F0u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_002759F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002759F3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00275A00
 * Original: 0x00275A00 - 0x00275A76 (118 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275A00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0x34B50C;

loc_00275A07: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    if (CMP_BE(_fa, _fb)) goto loc_00275A24; /* jbe: below or equal (unsigned <=) */

loc_00275A18: ;
    ecx = MEM32(eax + 4);
    edi = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_00275A2F;

loc_00275A24: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275A2Au); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00275A2A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00275A2F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275A48; /* jne: not equal / not zero */

loc_00275A34: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275A45u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275A45: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275A48: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275A5A; /* jne: not equal / not zero */

loc_00275A4F: ;
    SET_LO8(eax, MEM8(ebx + 1));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275A07; /* jne: not equal / not zero */

loc_00275A57: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00275A5A: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275A73; /* je: equal / zero */

loc_00275A5F: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BB04);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275A70u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275A70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275A73: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275A80
 * Original: 0x00275A80 - 0x00275AE6 (102 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275A80: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_00275A9E; /* jbe: below or equal (unsigned <=) */

loc_00275A92: ;
    ecx = MEM32(eax + 4);
    ebx = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_00275AA9;

loc_00275A9E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275AA4u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00275AA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_00275AA9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275AC2; /* jne: not equal / not zero */

loc_00275AAE: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275ABFu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275ABF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275AC2: ;
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00275AE5; /* je: equal / zero */

loc_00275ACA: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BB18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275AE2u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275AE2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275AE5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00275AF0
 * Original: 0x00275AF0 - 0x00275AF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275AF0(void)
{

loc_00275AF0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00275B00
 * Original: 0x00275B00 - 0x00275CAF (431 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275B00(void)
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

loc_00275B00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00275B0Du); RECOMP_ABI_CALL(0x00275A00u, sub_00275A00); /* call 0x00275A00 */

loc_00275B0D: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    if (CMP_BE(_fa, _fb)) goto loc_00275B2A; /* jbe: below or equal (unsigned <=) */

loc_00275B1E: ;
    ecx = MEM32(eax + 4);
    ebx = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_00275B35;

loc_00275B2A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275B30u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00275B30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_00275B35: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275B4E; /* jne: not equal / not zero */

loc_00275B3A: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275B4Bu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275B4B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275B4E: ;
    edi = ZX8(LO8(ebx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00275B8C; /* jle: less or equal (signed <=) */

loc_00275B56: ;
    eax = edi;
    eax = eax & 0x8000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    if ((_fas >= 0)) goto loc_00275B68; /* jns: not sign (positive) */

loc_00275B63: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00275B68: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BBC4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275B86u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275B86: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x50 (32-bit) */

loc_00275B8C: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00275BC1; /* jge: greater or equal (signed >=) */

loc_00275B8E: ;
    eax = edi;
    eax = eax & 0x8000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    if ((_fas >= 0)) goto loc_00275BA0; /* jns: not sign (positive) */

loc_00275B9B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00275BA0: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BB8C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275BBEu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275BBE: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275BC1: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    eax = MEM32(esi + 4);
    if (CMP_BE(_fa, _fb)) goto loc_00275BDE; /* jbe: below or equal (unsigned <=) */

loc_00275BD2: ;
    ecx = MEM32(eax + 4);
    ebx = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    goto loc_00275BE9;

loc_00275BDE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275BE4u); RECOMP_ABI_CALL(0x0026F2D0u, sub_0026F2D0); /* call 0x0026F2D0 */

loc_00275BE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_00275BE9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275C02; /* jne: not equal / not zero */

loc_00275BEE: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BA74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275BFFu); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275BFF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275C02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x34BB88);
    edi = 4;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00275C1Cu); RECOMP_ABI_CALL(0x00275A80u, sub_00275A80); /* call 0x00275A80 */

loc_00275C1C: ;
    PUSH32(esp, 0x34BB80);
    PUSH32(esp, 0x00275C26u); RECOMP_ABI_CALL(0x00275A80u, sub_00275A80); /* call 0x00275A80 */

loc_00275C26: ;
    PUSH32(esp, 0x34BB74);
    PUSH32(esp, 0x00275C30u); RECOMP_ABI_CALL(0x00275A80u, sub_00275A80); /* call 0x00275A80 */

loc_00275C30: ;
    PUSH32(esp, 0x2E7758);
    edi = 6;
    PUSH32(esp, 0x00275C3Fu); RECOMP_ABI_CALL(0x00275A80u, sub_00275A80); /* call 0x00275A80 */

loc_00275C3F: ;
    PUSH32(esp, 0x2E7750);
    edi = 8;
    PUSH32(esp, 0x00275C4Eu); RECOMP_ABI_CALL(0x00275A80u, sub_00275A80); /* call 0x00275A80 */

loc_00275C4E: ;
    PUSH32(esp, 0x2E7754);
    edi = 9;
    PUSH32(esp, 0x00275C5Du); RECOMP_ABI_CALL(0x00275A80u, sub_00275A80); /* call 0x00275A80 */

loc_00275C5D: ;
    PUSH32(esp, 0x34B518);
    PUSH32(esp, 0x00275C67u); RECOMP_ABI_CALL(0x00275A80u, sub_00275A80); /* call 0x00275A80 */

loc_00275C67: ;
    PUSH32(esp, 0x34B28C);
    edi = 8;
    PUSH32(esp, 0x00275C76u); RECOMP_ABI_CALL(0x00275A80u, sub_00275A80); /* call 0x00275A80 */

loc_00275C76: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00275C84u); RECOMP_ABI_CALL(0x002751F0u, sub_002751F0); /* call 0x002751F0 */

loc_00275C84: ;
    fp_push(MEMD(esp + 0xC)); /* fld double */
    PUSH32(esp, 0x00275C8Du); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00275C8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1DF5E76) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1DF5E76 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275CA8; /* je: equal / zero */

loc_00275C94: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34BB58);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275CA5u); RECOMP_ABI_CALL(0x002706B0u, sub_002706B0); /* call 0x002706B0 */

loc_00275CA5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275CA8: ;
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
 * sub_00275CB0
 * Original: 0x00275CB0 - 0x00275CC3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275CB0: ;
    eax = esi;
    PUSH32(esp, 0x00275CB7u); RECOMP_ABI_CALL(0x00275B00u, sub_00275B00); /* call 0x00275B00 */

loc_00275CB7: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00275CBFu); RECOMP_ABI_CALL(0x00275840u, sub_00275840); /* call 0x00275840 */

loc_00275CBF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00275CD0
 * Original: 0x00275CD0 - 0x00275D21 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275CD0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(edx + 0x10);
    SET_LO8(eax, MEM8(ecx));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275CF2; /* je: equal / zero */

loc_00275CE0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275CF2; /* je: equal / zero */

loc_00275CE4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275CF3; /* jne: not equal / not zero */

loc_00275CE8: ;
    MEM32(esp + 0x10) = 0x34BBFC;
    goto loc_00275CF7;

loc_00275CF2: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00275CF3: ;
    MEM32(esp + 0x10) = ecx;

loc_00275CF7: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x20);
    MEM32(esp) = eax;
    eax = esp;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0x00275D12u); RECOMP_ABI_CALL(0x00275B00u, sub_00275B00); /* call 0x00275B00 */

loc_00275D12: ;
    edx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00275D1Du); RECOMP_ABI_CALL(0x00275840u, sub_00275840); /* call 0x00275840 */

loc_00275D1D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00275D30
 * Original: 0x00275D30 - 0x00275D78 (72 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275D30: ;
    edx = MEM32(ebx);
    edx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = edx + ecx * 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00275D5C; /* jle: less or equal (signed <=) */

loc_00275D4B: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, 0x34BC48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275D59u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00275D59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275D5C: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0x1FFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1FFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi & 0xFFFFC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    eax = eax ^ esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00275D80
 * Original: 0x00275D80 - 0x00275D8B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275D80(void)
{

loc_00275D80: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00275D90
 * Original: 0x00275D90 - 0x00275DB2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275D90: ;
    edx = MEM32(eax);
    eax = MEM32(edx + 0xC);
    eax = MEM32(eax + ecx * 4);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1FFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275DAD; /* jne: not equal / not zero */

loc_00275DAA: ;
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00275DAD: ;
    eax = eax + ecx + 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00275DC0
 * Original: 0x00275DC0 - 0x00275DE5 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275DC0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    edx = MEM32(eax);
    eax = MEM32(edx + 0xC);
    eax = eax + ecx * 4;
    if (CMP_L(_fas, _fbs)) goto loc_00275DE4; /* jl: less (signed <) */

loc_00275DCD: ;
    edx = MEM32(eax + -4);
    ecx = eax + -4;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x34BC0C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00275DE4; /* jns: not sign (positive) */

loc_00275DE2: ;
    eax = ecx;

loc_00275DE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00275DF0
 * Original: 0x00275DF0 - 0x00275E67 (119 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275DF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00275E56; /* je: equal / zero */

loc_00275DFF: ;
    ecx = MEM32(eax);
    edi = MEM32(ecx + 0xC);
    SET_LO8(edx, 0x80);

loc_00275E06: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    ecx = edi + esi * 4;
    if (CMP_L(_fas, _fbs)) goto loc_00275E1F; /* jl: less (signed <) */

loc_00275E0E: ;
    ebx = MEM32(ecx + -4);
    eax = ecx + -4;
    ebx = ebx & 0x3F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebx + 0x34BC0C)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x34BC0C), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00275E21; /* jne: not equal / not zero */

loc_00275E1F: ;
    eax = ecx;

loc_00275E21: ;
    eax = MEM32(eax);
    ebx = eax;
    ebx = ebx & 0x3F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x18 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275E5D; /* jne: not equal / not zero */

loc_00275E2D: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275E5D; /* jne: not equal / not zero */

loc_00275E39: ;
    eax = MEM32(ecx);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1FFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275E56; /* je: equal / zero */

loc_00275E4D: ;
    esi = esi + eax + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275E06; /* jne: not equal / not zero */

loc_00275E56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00275E5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275E70
 * Original: 0x00275E70 - 0x00275E91 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275E70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275E81; /* jne: not equal / not zero */

loc_00275E77: ;
    eax = MEM32(ecx);
    eax = eax >> 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00275E81: ;
    edx = MEM32(ecx);
    edx = edx & 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00275EA0
 * Original: 0x00275EA0 - 0x00275FD7 (311 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275EA0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275FD5; /* je: equal / zero */

loc_00275EAA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_00275EB0: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0xC);
    ebp = edx * 4;
    eax = MEM32(ecx + ebp);
    edi = ecx + ebp;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1FFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275EDA; /* jne: not equal / not zero */

loc_00275ED4: ;
    MEM32(esp + 0xC) = eax;
    goto loc_00275EE2;

loc_00275EDA: ;
    eax = eax + edx + 1;
    MEM32(esp + 0xC) = eax;

loc_00275EE2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00275EFA; /* jl: less (signed <) */

loc_00275EE7: ;
    ecx = MEM32(edi + -4);
    esi = edi + -4;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(ecx + 0x34BC0C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00275EFC; /* js: sign (negative) */

loc_00275EFA: ;
    esi = edi;

loc_00275EFC: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x18 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00275F2C; /* je: equal / zero */

loc_00275F08: ;
    esi = MEM32(esp + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00275FAC; /* jle: less or equal (signed <=) */

loc_00275F21: ;
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, 0x34BC48);
    PUSH32(esp, edx);
    goto loc_00275FA4;

loc_00275F2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FC0 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275F5C; /* je: equal / zero */

loc_00275F33: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275F4A; /* jne: not equal / not zero */

loc_00275F3F: ;
    ecx = eax;
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00275F4A: ;
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    esi = MEM32(esp + 0x14);
    goto loc_00275F83;

loc_00275F5C: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00275F73; /* jne: not equal / not zero */

loc_00275F68: ;
    ecx = eax;
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00275F73: ;
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    esi = MEM32(esp + 0x1C);

loc_00275F83: ;
    eax = MEM32(ebx);
    edi = MEM32(eax + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00275FAC; /* jle: less or equal (signed <=) */

loc_00275F9B: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, 0x34BC48);
    PUSH32(esp, ecx);

loc_00275FA4: ;
    PUSH32(esp, 0x00275FA9u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00275FA9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00275FAC: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0x1FFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1FFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    edx = MEM32(esp + 0xC);
    esi = esi & 0xFFFFC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    MEM32(edi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00275EB0; /* jne: not equal / not zero */

loc_00275FD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00275FD5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275FE0
 * Original: 0x00275FE0 - 0x00276007 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275FE0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x18);
    edx = MEM32(ebx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00275FFBu); RECOMP_ABI_CALL(0x00275EA0u, sub_00275EA0); /* call 0x00275EA0 */

loc_00275FFB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x20) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00276010
 * Original: 0x00276010 - 0x0027605E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276010: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027605D; /* je: equal / zero */

loc_00276019: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276027; /* jne: not equal / not zero */

loc_00276024: ;
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_00276027: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xC);

loc_00276032: ;
    edx = MEM32(esi + ecx * 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x3FFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1FFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x1FFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276056; /* je: equal / zero */

loc_00276049: ;
    edx = edx + ecx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276056; /* je: equal / zero */

loc_00276052: ;
    ecx = edx;
    goto loc_00276032;

loc_00276056: ;
    PUSH32(esp, 0x0027605Bu); RECOMP_ABI_CALL(0x00275D30u, sub_00275D30); /* call 0x00275D30 */

loc_0027605B: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0027605D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00276060
 * Original: 0x00276060 - 0x0027609A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276060: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x24);
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(eax + 0x47));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00276097; /* jle: less or equal (signed <=) */

loc_00276079: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276092; /* jl: less (signed <) */

loc_00276081: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0x34BC64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027608Fu); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_0027608F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276092: ;
    eax = MEM32(esi);
    MEM8(eax + 0x47) = LO8(ebx);

loc_00276097: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002760A0
 * Original: 0x002760A0 - 0x002760E4 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002760A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002760A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ebx = MEM32(esi + 0x24);
    ecx = ZX8(MEM8(eax + 0x47));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002760D8; /* jle: less or equal (signed <=) */

loc_002760BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002760D3; /* jl: less (signed <) */

loc_002760C2: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0x34BC64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002760D0u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_002760D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002760D3: ;
    eax = MEM32(esi);
    MEM8(eax + 0x47) = LO8(ebx);

loc_002760D8: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002760F0
 * Original: 0x002760F0 - 0x00276101 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002760F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002760F0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276100; /* jl: less (signed <) */

loc_002760F5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00276100; /* jge: greater or equal (signed >=) */

loc_002760FD: ;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00276100: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00276110
 * Original: 0x00276110 - 0x00276128 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276110: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276127; /* jne: not equal / not zero */

loc_00276115: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276127; /* jl: less (signed <) */

loc_0027611D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00276127; /* jge: greater or equal (signed >=) */

loc_00276124: ;
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00276127: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00276130
 * Original: 0x00276130 - 0x002761C1 (145 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276130: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027613Fu); RECOMP_ABI_CALL(0x0026ECD0u, sub_0026ECD0); /* call 0x0026ECD0 */

loc_0027613F: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276150; /* jne: not equal / not zero */

loc_00276149: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(eax + 4), g_mxcsr, 1); /* cvttss2si */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00276150: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edx = MEM32(edi + 0x28);
    eax = edi + 0x28;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00276181; /* jle: less or equal (signed <=) */

loc_00276161: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, 0x34B914);
    PUSH32(esp, 0x3FFFF);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027617Bu); RECOMP_ABI_CALL(0x00270AF0u, sub_00270AF0); /* call 0x00270AF0 */

loc_0027617B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;

loc_00276181: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(edi + 8);
    eax = edx + ecx * 8;
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002761A2u); RECOMP_ABI_CALL(0x0026ED20u, sub_0026ED20); /* call 0x0026ED20 */

loc_002761A2: ;
    MEM32(eax) = 3;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x28); /* cvtsi2ss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    POP32(esp, edi);
    MEM32(esi + 0x28) = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002761D0
 * Original: 0x002761D0 - 0x002761FE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002761D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002761D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ecx = esp + 4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ebx = ecx;
    MEM32(esp + 0xC) = 4;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002761F5u); RECOMP_ABI_CALL(0x00276130u, sub_00276130); /* call 0x00276130 */

loc_002761F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00276200
 * Original: 0x00276200 - 0x00276232 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276200: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, ebx);
    eax = esp + 4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ebx = eax;
    MEM32(esp + 0xC) = 3;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00276229u); RECOMP_ABI_CALL(0x00276130u, sub_00276130); /* call 0x00276130 */

loc_00276229: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00276240
 * Original: 0x00276240 - 0x00276275 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276240: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ebx = esp + 0x14;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0xC) = 5;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0027626Cu); RECOMP_ABI_CALL(0x00276130u, sub_00276130); /* call 0x00276130 */

loc_0027626C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00276280
 * Original: 0x00276280 - 0x002762D3 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276280: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002762D2; /* jne: not equal / not zero */

loc_00276289: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = MEM32(esi);
    edx = MEM32(edx + 0xC);
    ebx = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = edx + 1;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi ^ ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi & 0x7FC0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx ^ edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    MEM32(eax) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_002762CF; /* jne: not equal / not zero */

loc_002762B9: ;
    eax = MEM32(ecx + 4);
    MEM32(ecx) = 0xB;
    edx = MEM32(esi);
    edx = MEM32(edx + 0xC);
    eax = ZX8(MEM8(edx + eax * 4 + 3));
    MEM32(ecx + 4) = eax;

loc_002762CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002762D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002762E0
 * Original: 0x002762E0 - 0x00276323 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002762E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002762E0: ;
    edx = MEM32(ecx);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(edx + 0xC);
    ecx = ecx + eax * 4;
    if (CMP_L(_fas, _fbs)) goto loc_00276307; /* jl: less (signed <) */

loc_002762F0: ;
    edx = MEM32(ecx + -4);
    eax = ecx + -4;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x34BC0C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00276307; /* jns: not sign (positive) */

loc_00276305: ;
    ecx = eax;

loc_00276307: ;
    eax = MEM32(ecx);
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (0x18) _cf = (int)(((edx) >> (32 - (0x18))) & 1);
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00276330
 * Original: 0x00276330 - 0x00276345 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276330(void)
{

loc_00276330: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(edx + 0x14);
    edx = MEM32(esp + 8);
    MEM32(eax + ecx * 4 + -4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00276350
 * Original: 0x00276350 - 0x002763FB (171 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276350: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x18);
    edx = MEM32(ebx + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00276370u); RECOMP_ABI_CALL(0x00275EA0u, sub_00275EA0); /* call 0x00275EA0 */

loc_00276370: ;
    ecx = MEM32(ebx + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x2C;
    MEM32(ebx + 0x20) = 0xFFFFFFFFu;
    edx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002763A7; /* jle: less or equal (signed <=) */

loc_00276387: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0x34BC88);
    PUSH32(esp, 0x7FFFFFFD);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002763A1u); RECOMP_ABI_CALL(0x00270AF0u, sub_00270AF0); /* call 0x00270AF0 */

loc_002763A1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_002763A7: ;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(edx + ecx * 4) = eax;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(esi + 0x30);
    eax = esi + 0x30;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002763E2; /* jle: less or equal (signed <=) */

loc_002763C2: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0x34BC88);
    PUSH32(esp, 0x7FFFFFFD);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002763DCu); RECOMP_ABI_CALL(0x00270AF0u, sub_00270AF0); /* call 0x00270AF0 */

loc_002763DC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;

loc_002763E2: ;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(esi + 0x14);
    eax = MEM32(esp + 0x14);
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(ebx + 0x18);
    ecx = eax + 1;
    POP32(esp, esi);
    MEM32(ebx + 0x18) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00276400
 * Original: 0x00276400 - 0x00276435 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276400: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    ecx = ecx << 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x18);
    ecx = ecx << 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0xC);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00276431u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00276431: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00276440
 * Original: 0x00276440 - 0x0027646C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276440: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    ecx = ecx << 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0xC);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00276468u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00276468: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00276470
 * Original: 0x00276470 - 0x002764FF (143 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276470: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002764D7; /* jle: less or equal (signed <=) */

loc_00276485: ;
    edx = MEM32(esi);
    edx = MEM32(edx + 0xC);
    edi = edx + ecx * 4 + -4;
    ecx = MEM32(edi);
    edx = ecx;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002764D7; /* jne: not equal / not zero */

loc_0027649A: ;
    edx = ecx;
    edx = edx >> 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx;
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x1FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002764D7; /* jg: greater (signed >) */

loc_002764AE: ;
    ebx = edx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002764D7; /* jg: greater (signed >) */

loc_002764B5: ;
    esi = MEM32(esp + 0x18);
    ebx = eax + esi + -1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002764FB; /* jle: less or equal (signed <=) */

loc_002764C1: ;
    eax = eax + esi + -1;
    eax = eax << 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xFF8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002764D7: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = eax + ecx + -1;
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002764F8u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_002764F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002764FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00276500
 * Original: 0x00276500 - 0x0027653C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276500: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    MEM32(esi + 0x20) = 0xFFFFFFFFu;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFF94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276522u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00276522: ;
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00276532u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00276532: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276540
 * Original: 0x00276540 - 0x0027659D (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276540: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0xC);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    eax = eax | MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276568u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00276568: ;
    edi = MEM32(esi + 0x20);
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x20) = 0xFFFFFFFFu;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFF94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276584u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00276584: ;
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x00276594u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00276594: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276563
 * Original: 0x00276563 - 0x0027659D (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276563(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276563: ;
    PUSH32(esp, 0x00276568u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00276568: ;
    edi = MEM32(esi + 0x20);
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x20) = 0xFFFFFFFFu;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFF94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276584u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00276584: ;
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x00276594u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00276594: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002765A0
 * Original: 0x002765A0 - 0x002765BD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002765A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002765A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x1C) = ecx;
    PUSH32(esp, edx);
    ecx = eax + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002765B9u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_002765B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002765C0
 * Original: 0x002765C0 - 0x0027666E (174 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002765C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002765C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027666C; /* ja: above (unsigned >) */

loc_002765D3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x276670); /* switch: 8 entries, 6 targets */
    if (_jt == 0x002765DAu) goto loc_002765DA;
    if (_jt == 0x002765E2u) goto loc_002765E2;
    if (_jt == 0x002765F3u) goto loc_002765F3;
    if (_jt == 0x00276613u) goto loc_00276613;
    if (_jt == 0x0027665Cu) goto loc_0027665C;
    if (_jt == 0x0027666Cu) goto loc_0027666C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002765DA: ;
    MEM32(esi) = 0xB;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002765E2: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    goto loc_00276649;

loc_002765F3: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00276605u); RECOMP_ABI_CALL(0x00276440u, sub_00276440); /* call 0x00276440 */

loc_00276605: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0xA;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00276613: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    ecx = MEM32(edx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027662B; /* jl: less (signed <) */

loc_00276621: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027662B; /* jge: greater or equal (signed >=) */

loc_00276628: ;
    MEM32(edx + 0x24) = MEM32(edx + 0x24) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0027662B: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027663C; /* jl: less (signed <) */

loc_00276632: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027663C; /* jge: greater or equal (signed >=) */

loc_00276639: ;
    MEM32(edx + 0x24) = MEM32(edx + 0x24) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0027663C: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, edx);

loc_00276649: ;
    PUSH32(esp, 0x0027664Eu); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_0027664E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0xA;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0027665C: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00276669u); RECOMP_ABI_CALL(0x00276280u, sub_00276280); /* call 0x00276280 */

loc_00276669: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027666C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276690
 * Original: 0x00276690 - 0x002766C0 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276690: ;
    edx = MEM32(ecx + 0x18);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(ecx + 0xC);
    edx = MEM32(edx + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0xC);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002766BCu); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_002766BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002766C0
 * Original: 0x002766C0 - 0x0027677D (189 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002766C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002766C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002766C7u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_002766C7: ;
    eax = MEM32(ebx);
    ecx = eax + -1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0027677C; /* ja: above (unsigned >) */

loc_002766D8: ;
    ecx = ZX8(MEM8(ecx + 0x276798));
    { uint32_t _jt = MEM32(ecx * 4 + 0x276780); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002766E6u) goto loc_002766E6;
    if (_jt == 0x002766FCu) goto loc_002766FC;
    if (_jt == 0x0027671Du) goto loc_0027671D;
    if (_jt == 0x00276737u) goto loc_00276737;
    if (_jt == 0x0027675Du) goto loc_0027675D;
    if (_jt == 0x0027677Cu) goto loc_0027677C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002766E6: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002766EFu); RECOMP_ABI_CALL(0x00276470u, sub_00276470); /* call 0x00276470 */

loc_002766EF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = 0xB;
    esp += 4; return; /* ret */

loc_002766FC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00276710u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00276710: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = 0xB;
    esp += 4; return; /* ret */

loc_0027671D: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027672Au); RECOMP_ABI_CALL(0x00276440u, sub_00276440); /* call 0x00276440 */

loc_0027672A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = 0xB;
    esp += 4; return; /* ret */

loc_00276737: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(ebx + 4);
    eax = eax + ecx * 4;
    ecx = MEM32(eax);
    edx = esi;
    ecx = ecx & 0xFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = 0xB;
    esp += 4; return; /* ret */

loc_0027675D: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276773; /* je: equal / zero */

loc_00276764: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00276770u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00276770: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276773: ;
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = 0xB;

loc_0027677C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002767B0
 * Original: 0x002767B0 - 0x00276802 (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002767B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002767B0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002767FF; /* je: equal / zero */

loc_002767BE: ;
    eax = MEM32(edi);
    ecx = ZX8(MEM8(eax + 0x47));
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x24);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_002767EC; /* jle: less or equal (signed <=) */

loc_002767CE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002767E7; /* jl: less (signed <) */

loc_002767D6: ;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, 0x34BC64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002767E4u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_002767E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002767E7: ;
    eax = MEM32(edi);
    MEM8(eax + 0x47) = LO8(ebx);

loc_002767EC: ;
    eax = MEM32(edi + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax + -1;
    ebx = ebp;
    MEM32(edi + 0x24) = eax;
    PUSH32(esp, 0x002767FDu); RECOMP_ABI_CALL(0x002766C0u, sub_002766C0); /* call 0x002766C0 */

loc_002767FD: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002767FF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00276810
 * Original: 0x00276810 - 0x00276939 (297 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276810: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = eax;
    ebx = ebp;
    PUSH32(esp, 0x00276826u); RECOMP_ABI_CALL(0x002766C0u, sub_002766C0); /* call 0x002766C0 */

loc_00276826: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027683D; /* jne: not equal / not zero */

loc_0027682C: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027683Au); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_0027683A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027683D: ;
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027691C; /* je: equal / zero */

loc_0027684B: ;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    eax = edi;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0027685Bu); RECOMP_ABI_CALL(0x00275DF0u, sub_00275DF0); /* call 0x00275DF0 */

loc_0027685B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276873; /* jne: not equal / not zero */

loc_00276862: ;
    PUSH32(esp, eax);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0x0027686Cu); RECOMP_ABI_CALL(0x00275DF0u, sub_00275DF0); /* call 0x00275DF0 */

loc_0027686C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002768E3; /* je: equal / zero */

loc_00276873: ;
    eax = MEM32(ebp);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276889; /* je: equal / zero */

loc_0027687E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00276884u); RECOMP_ABI_CALL(0x00276500u, sub_00276500); /* call 0x00276500 */

loc_00276884: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00276889: ;
    edx = MEM32(edi + 0x18);
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0xC);
    MEM32(edi + 0x1C) = edx;
    ecx = MEM32(eax + 8);
    ebx = ebx << 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    edx = ebx;
    edx = edx | 0x42;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002768A9u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_002768A9: ;
    ecx = MEM32(edi + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edi + 0x18);
    MEM32(edi + 0x1C) = eax;
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    ebx = ebx | 0x8002;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002768C7u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_002768C7: ;
    PUSH32(esp, esi);
    ecx = edi + 0x20;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(edi + 0x1C) = eax;
    PUSH32(esp, 0x002768DCu); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_002768DC: ;
    ebx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002768E3: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edi + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    MEM32(edi + 0x1C) = esi;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = edi;
    PUSH32(esp, 0x00276900u); RECOMP_ABI_CALL(0x00275EA0u, sub_00275EA0); /* call 0x00275EA0 */

loc_00276900: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276919u); RECOMP_ABI_CALL(0x00275EA0u, sub_00275EA0); /* call 0x00275EA0 */

loc_00276919: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027691C: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp) = 0xB;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00276940
 * Original: 0x00276940 - 0x002769B4 (116 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276952u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_00276952: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027696E; /* jne: not equal / not zero */

loc_0027695C: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027696E; /* jl: less (signed <) */

loc_00276964: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027696E; /* jge: greater or equal (signed >=) */

loc_0027696B: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0027696E: ;
    eax = MEM32(esi);
    ebx = MEM32(esi + 0x24);
    ecx = ZX8(MEM8(eax + 0x47));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027699A; /* jle: less or equal (signed <=) */

loc_0027697C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276995; /* jl: less (signed <) */

loc_00276984: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0x34BC64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00276992u); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00276992: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276995: ;
    eax = MEM32(esi);
    MEM8(eax + 0x47) = LO8(ebx);

loc_0027699A: ;
    ebx = MEM32(esi + 0x24);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esi;
    MEM32(esi + 0x24) = ebx;
    PUSH32(esp, 0x002769ADu); RECOMP_ABI_CALL(0x00276810u, sub_00276810); /* call 0x00276810 */

loc_002769AD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002769C0
 * Original: 0x002769C0 - 0x00276A0D (77 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002769C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002769C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002769D1u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_002769D1: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002769FD; /* jne: not equal / not zero */

loc_002769DB: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    eax = MEM32(esi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00276A0A; /* je: equal / zero */

loc_002769E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002769FD; /* jl: less (signed <) */

loc_002769EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x002769F4u); RECOMP_ABI_CALL(0x00276810u, sub_00276810); /* call 0x00276810 */

loc_002769F4: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002769FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00276A04u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00276A04: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276A0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276A10
 * Original: 0x00276A10 - 0x00276A2A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276A10: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x10) (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00276A25; /* je: equal / zero */

loc_00276A20: ;
    g_seh_ebp = ebp; sub_002769C0(); return; /* tail jmp 0x002769C0 */

loc_00276A25: ;
    g_seh_ebp = ebp; sub_002765C0(); return; /* tail jmp 0x002765C0 */

}

/**
 * sub_00276A30
 * Original: 0x00276A30 - 0x00276AA2 (114 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276A30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00276A4B; /* je: equal / zero */

loc_00276A44: ;
    PUSH32(esp, 0x00276A49u); RECOMP_ABI_CALL(0x002769C0u, sub_002769C0); /* call 0x002769C0 */

loc_00276A49: ;
    goto loc_00276A50;

loc_00276A4B: ;
    PUSH32(esp, 0x00276A50u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_00276A50: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00276A79; /* je: equal / zero */

loc_00276A58: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00276A6C; /* jne: not equal / not zero */

loc_00276A5D: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00276A76; /* jle: less or equal (signed <=) */

loc_00276A6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00276A73u); RECOMP_ABI_CALL(0x002769C0u, sub_002769C0); /* call 0x002769C0 */

loc_00276A73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276A76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00276A79: ;
    ecx = MEM32(edi + 0x28);
    _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1FF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00276A6C; /* jg: greater (signed >) */

loc_00276A8A: ;
    eax = edi;
    PUSH32(esp, 0x00276A91u); RECOMP_ABI_CALL(0x00276240u, sub_00276240); /* call 0x00276240 */

loc_00276A91: ;
    MEM32(esi + 4) = eax;
    POP32(esp, edi);
    MEM32(esi) = 4;
    _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276AB0
 * Original: 0x00276AB0 - 0x00276B76 (198 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276AB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00276B5A; /* ja: above (unsigned >) */

loc_00276ACD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x276B78); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00276AD4u) goto loc_00276AD4;
    if (_jt == 0x00276B05u) goto loc_00276B05;
    if (_jt == 0x00276B17u) goto loc_00276B17;
    if (_jt == 0x00276B3Fu) goto loc_00276B3F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00276AD4: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xB (32-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00276AF4; /* jne: not equal / not zero */

loc_00276AE1: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276AF4; /* jl: less (signed <) */

loc_00276AE9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00276AF4; /* jge: greater or equal (signed >=) */

loc_00276AF1: ;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00276AF4: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00276AFEu); RECOMP_ABI_CALL(0x00276810u, sub_00276810); /* call 0x00276810 */

loc_00276AFE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00276B05: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276B0Cu); RECOMP_ABI_CALL(0x002769C0u, sub_002769C0); /* call 0x002769C0 */

loc_00276B0C: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    goto loc_00276B51;

loc_00276B17: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276B1Eu); RECOMP_ABI_CALL(0x002769C0u, sub_002769C0); /* call 0x002769C0 */

loc_00276B1E: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    edx = MEM32(edi + 4);
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276B3Au); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00276B3A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00276B5A;

loc_00276B3F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276B46u); RECOMP_ABI_CALL(0x00276A30u, sub_00276A30); /* call 0x00276A30 */

loc_00276B46: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 9);

loc_00276B51: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276B57u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00276B57: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276B5A: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276B72; /* jne: not equal / not zero */

loc_00276B5F: ;
    ebx = MEM32(ebx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276B72; /* jl: less (signed <) */

loc_00276B67: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00276B72; /* jge: greater or equal (signed >=) */

loc_00276B6F: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00276B72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00276B90
 * Original: 0x00276B90 - 0x00276C79 (233 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276BA3u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_00276BA3: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276BC8; /* jne: not equal / not zero */

loc_00276BAD: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00276BD2; /* je: equal / zero */

loc_00276BB5: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276BC8; /* jl: less (signed <) */

loc_00276BBD: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00276BC6u); RECOMP_ABI_CALL(0x00276810u, sub_00276810); /* call 0x00276810 */

loc_00276BC6: ;
    goto loc_00276BCF;

loc_00276BC8: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276BCFu); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_00276BCF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276BD2: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276BE9; /* jne: not equal / not zero */

loc_00276BD7: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276BE9; /* jl: less (signed <) */

loc_00276BDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00276BE9; /* jge: greater or equal (signed >=) */

loc_00276BE6: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00276BE9: ;
    ecx = MEM32(esi);
    ebp = MEM32(esi + 0x24);
    edx = ZX8(MEM8(ecx + 0x47));
    ebx = ebp + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00276C17; /* jle: less or equal (signed <=) */

loc_00276BF9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276C12; /* jl: less (signed <) */

loc_00276C01: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x34BC64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00276C0Fu); RECOMP_ABI_CALL(0x002710D0u, sub_002710D0); /* call 0x002710D0 */

loc_00276C0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00276C12: ;
    ecx = MEM32(esi);
    MEM8(ecx + 0x47) = LO8(ebx);

loc_00276C17: ;
    ecx = MEM32(esi + 0x24);
    ebx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esi + 0x24) = ecx;
    PUSH32(esp, 0x00276C2Bu); RECOMP_ABI_CALL(0x00276A30u, sub_00276A30); /* call 0x00276A30 */

loc_00276C2B: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    edx = ebp;
    edx = edx << 9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276C4Eu); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00276C4E: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276C6B; /* jne: not equal / not zero */

loc_00276C58: ;
    ebx = MEM32(ebx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276C6B; /* jl: less (signed <) */

loc_00276C60: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00276C6B; /* jge: greater or equal (signed >=) */

loc_00276C68: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00276C6B: ;
    MEM32(edi + 4) = ebp;
    MEM32(edi) = 0xB;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00276C80
 * Original: 0x00276C80 - 0x00276CFC (124 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276C80: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276CC2; /* jne: not equal / not zero */

loc_00276C88: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(edi + 4);
    eax = MEM32(edx + eax * 4);
    ecx = eax;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276CC2; /* jne: not equal / not zero */

loc_00276C9D: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax >> 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0xFF;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00276CBDu); RECOMP_ABI_CALL(0x00276540u, sub_00276540); /* call 0x00276540 */

loc_00276CBD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00276CC2: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00276CCAu); RECOMP_ABI_CALL(0x002767B0u, sub_002767B0); /* call 0x002767B0 */

loc_00276CCA: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276CE6; /* jne: not equal / not zero */

loc_00276CD4: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276CE6; /* jl: less (signed <) */

loc_00276CDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00276CE6; /* jge: greater or equal (signed >=) */

loc_00276CE3: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00276CE6: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 0xFF;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00276CF7u); RECOMP_ABI_CALL(0x00276540u, sub_00276540); /* call 0x00276540 */

loc_00276CF7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276D00
 * Original: 0x00276D00 - 0x00276D8C (140 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276D00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276D11u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_00276D11: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00276D70; /* ja: above (unsigned >) */

loc_00276D1E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x276D8C); /* switch: 8 entries, 4 targets */
    if (_jt == 0x00276D25u) goto loc_00276D25;
    if (_jt == 0x00276D39u) goto loc_00276D39;
    if (_jt == 0x00276D53u) goto loc_00276D53;
    if (_jt == 0x00276D70u) goto loc_00276D70;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00276D25: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276D33u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00276D33: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00276D39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276D3Fu); RECOMP_ABI_CALL(0x00276500u, sub_00276500); /* call 0x00276500 */

loc_00276D3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276D4Du); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00276D4D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00276D53: ;
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0x00276D5Cu); RECOMP_ABI_CALL(0x002762E0u, sub_002762E0); /* call 0x002762E0 */

loc_00276D5C: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276D6Au); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00276D6A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00276D70: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    PUSH32(esp, 0x00276D7Au); RECOMP_ABI_CALL(0x00276C80u, sub_00276C80); /* call 0x00276C80 */

loc_00276D7A: ;
    POP32(esp, ebx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276D86u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00276D86: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276DB0
 * Original: 0x00276DB0 - 0x00276E3B (139 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276DB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276DC1u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_00276DC1: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00276E1C; /* ja: above (unsigned >) */

loc_00276DCC: ;
    eax = ZX8(MEM8(eax + 0x276E4C));
    { uint32_t _jt = MEM32(eax * 4 + 0x276E3C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00276DDAu) goto loc_00276DDA;
    if (_jt == 0x00276DEEu) goto loc_00276DEE;
    if (_jt == 0x00276E08u) goto loc_00276E08;
    if (_jt == 0x00276E1Cu) goto loc_00276E1C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00276DDA: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276DE8u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00276DE8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00276DEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276DF4u); RECOMP_ABI_CALL(0x00276500u, sub_00276500); /* call 0x00276500 */

loc_00276DF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276E02u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00276E02: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00276E08: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276E16u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00276E16: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00276E1C: ;
    PUSH32(esp, ebx);
    ebx = 1;
    eax = esi;
    PUSH32(esp, 0x00276E29u); RECOMP_ABI_CALL(0x00276C80u, sub_00276C80); /* call 0x00276C80 */

loc_00276E29: ;
    POP32(esp, ebx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00276E35u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00276E35: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276E60
 * Original: 0x00276E60 - 0x00276F0D (173 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276E60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00276E67u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_00276E67: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00276F00; /* ja: above (unsigned >) */

loc_00276E76: ;
    eax = ZX8(MEM8(eax + 0x276F24));
    { uint32_t _jt = MEM32(eax * 4 + 0x276F10); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00276E84u) goto loc_00276E84;
    if (_jt == 0x00276E97u) goto loc_00276E97;
    if (_jt == 0x00276EAAu) goto loc_00276EAA;
    if (_jt == 0x00276EC0u) goto loc_00276EC0;
    if (_jt == 0x00276F00u) goto loc_00276F00;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00276E84: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    MEM32(esi) = 2;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0xC) = eax;
    esp += 4; return; /* ret */

loc_00276E97: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    MEM32(esi) = 3;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0xC) = eax;
    esp += 4; return; /* ret */

loc_00276EAA: ;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x00276EB3u); RECOMP_ABI_CALL(0x002762E0u, sub_002762E0); /* call 0x002762E0 */

loc_00276EB3: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0xC) = eax;
    esp += 4; return; /* ret */

loc_00276EC0: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x00276EC8u); RECOMP_ABI_CALL(0x002767B0u, sub_002767B0); /* call 0x002767B0 */

loc_00276EC8: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276EE4; /* jne: not equal / not zero */

loc_00276ED2: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276EE4; /* jl: less (signed <) */

loc_00276EDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00276EE4; /* jge: greater or equal (signed >=) */

loc_00276EE1: ;
    MEM32(edi + 0x24) = MEM32(edi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00276EE4: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00276EF4u); RECOMP_ABI_CALL(0x00276400u, sub_00276400); /* call 0x00276400 */

loc_00276EF4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0xA;

loc_00276F00: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00276F30
 * Original: 0x00276F30 - 0x00276F50 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276F30: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00276F3Fu); RECOMP_ABI_CALL(0x00276A30u, sub_00276A30); /* call 0x00276A30 */

loc_00276F3F: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00276F50
 * Original: 0x00276F50 - 0x00277004 (180 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276F50: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00276FFC; /* jne: not equal / not zero */

loc_00276F66: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00276F77; /* je: equal / zero */

loc_00276F70: ;
    PUSH32(esp, 0x00276F75u); RECOMP_ABI_CALL(0x002769C0u, sub_002769C0); /* call 0x002769C0 */

loc_00276F75: ;
    goto loc_00276F7C;

loc_00276F77: ;
    PUSH32(esp, 0x00276F7Cu); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_00276F7C: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276FB3; /* jne: not equal / not zero */

loc_00276F86: ;
    edx = MEM32(edi);
    ecx = MEM32(esi + 4);
    eax = MEM32(edx + 8);
    eax = eax + ecx * 8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276FB3; /* jne: not equal / not zero */

loc_00276F96: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00276FAAu); RECOMP_ABI_CALL(0x00276200u, sub_00276200); /* call 0x00276200 */

loc_00276FAA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00276FB3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00276FBAu); RECOMP_ABI_CALL(0x002769C0u, sub_002769C0); /* call 0x002769C0 */

loc_00276FBA: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00276FD6; /* jne: not equal / not zero */

loc_00276FC4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00276FD6; /* jl: less (signed <) */

loc_00276FCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00276FD6; /* jge: greater or equal (signed >=) */

loc_00276FD3: ;
    MEM32(edi + 0x24) = MEM32(edi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00276FD6: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx + 8);
    eax = eax << 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    eax = eax | 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00276FEDu); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00276FED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0xA;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00276FFC: ;
    PUSH32(esp, 0x00277001u); RECOMP_ABI_CALL(0x00276E60u, sub_00276E60); /* call 0x00276E60 */

loc_00277001: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00277010
 * Original: 0x00277010 - 0x002770AB (155 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277010: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00277098; /* je: equal / zero */

loc_00277019: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_00277068; /* je: equal / zero */

loc_00277020: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00277038; /* je: equal / zero */

loc_00277023: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00277032u); RECOMP_ABI_CALL(0x00276A30u, sub_00276A30); /* call 0x00276A30 */

loc_00277032: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00277038: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277047u); RECOMP_ABI_CALL(0x00276DB0u, sub_00276DB0); /* call 0x00276DB0 */

loc_00277047: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esi + 0x1C) = edx;
    PUSH32(esp, 0x0027705Bu); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_0027705B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x10) = 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00277068: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277077u); RECOMP_ABI_CALL(0x00276D00u, sub_00276D00); /* call 0x00276D00 */

loc_00277077: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, 0x0027708Bu); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_0027708B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00277098: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002770A7u); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_002770A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002770B0
 * Original: 0x002770B0 - 0x00277120 (112 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002770B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002770B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = eax;
    if (CMP_G(_fas, _fbs)) goto loc_002770E7; /* jg: greater (signed >) */

loc_002770BD: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 8);
    ecx = ecx << 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002770D8u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_002770D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi) = 0xA;
    MEM32(edi + 4) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002770E7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    eax = 1;
    if (CMP_L(_fas, _fbs)) goto loc_002770FB; /* jl: less (signed <) */

loc_002770F1: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = ebx;
    ebx = ebp;
    POP32(esp, ebp);
    goto loc_00277102;

loc_002770FB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277102; /* jne: not equal / not zero */

loc_00277100: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00277102: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(edx * 4 + 0x34BC18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00277111u); RECOMP_ABI_CALL(0x00276540u, sub_00276540); /* call 0x00276540 */

loc_00277111: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi) = 9;
    MEM32(edi + 4) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00277120
 * Original: 0x00277120 - 0x00277314 (500 bytes, 193 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277120: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_00277220; /* je: equal / zero */

loc_00277131: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002771E1; /* je: equal / zero */

loc_0027713A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002771A2; /* je: equal / zero */

loc_0027713D: ;
    edi = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027714Cu); RECOMP_ABI_CALL(0x00276A30u, sub_00276A30); /* call 0x00276A30 */

loc_0027714C: ;
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x00277159u); RECOMP_ABI_CALL(0x00276A30u, sub_00276A30); /* call 0x00276A30 */

loc_00277159: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277176; /* jne: not equal / not zero */

loc_00277163: ;
    ebx = MEM32(ebx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00277176; /* jl: less (signed <) */

loc_0027716B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00277176; /* jge: greater or equal (signed >=) */

loc_00277173: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00277176: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027718E; /* jne: not equal / not zero */

loc_0027717B: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027718E; /* jl: less (signed <) */

loc_00277183: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027718E; /* jge: greater or equal (signed >=) */

loc_0027718B: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0027718E: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0027719Au); RECOMP_ABI_CALL(0x002770B0u, sub_002770B0); /* call 0x002770B0 */

loc_0027719A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002771A2: ;
    esi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002771B1u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_002771B1: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002771C3u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_002771C3: ;
    edx = MEM32(esi);
    MEM32(edi) = edx;
    eax = MEM32(esi + 4);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = ecx;
    edx = MEM32(esi + 0x10);
    MEM32(edi + 0x10) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002771E1: ;
    esi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002771F0u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_002771F0: ;
    eax = MEM32(esi + 0x10);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = edi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00277202u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00277202: ;
    edx = MEM32(esi);
    MEM32(edi) = edx;
    eax = MEM32(esi + 4);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00277220: ;
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x10) (32-bit) */
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00277239; /* je: equal / zero */

loc_00277232: ;
    PUSH32(esp, 0x00277237u); RECOMP_ABI_CALL(0x002769C0u, sub_002769C0); /* call 0x002769C0 */

loc_00277237: ;
    goto loc_0027723E;

loc_00277239: ;
    PUSH32(esp, 0x0027723Eu); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_0027723E: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002772A6; /* jne: not equal / not zero */

loc_00277248: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + 4);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(edx + ecx * 4);
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x13 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002772A6; /* jne: not equal / not zero */

loc_0027725B: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277277; /* jne: not equal / not zero */

loc_00277264: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00277277; /* jl: less (signed <) */

loc_0027726C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00277277; /* jge: greater or equal (signed >=) */

loc_00277274: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00277277: ;
    edx = MEM32(edi + 4);
    eax = MEM32(eax + 0xC);
    ebp = MEM32(eax + edx * 4);
    eax = eax + edx * 4;
    edx = MEM32(ecx + 4);
    edx = edx << 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xFF8000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ebp;
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = esi;
    eax = MEM32(edi);
    MEM32(ecx) = eax;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 4) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002772A6: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002772ADu); RECOMP_ABI_CALL(0x00276940u, sub_00276940); /* call 0x00276940 */

loc_002772AD: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002772C9; /* jne: not equal / not zero */

loc_002772B7: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002772C9; /* jl: less (signed <) */

loc_002772BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002772C9; /* jge: greater or equal (signed >=) */

loc_002772C6: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002772C9: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002772E4; /* jne: not equal / not zero */

loc_002772D2: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002772E4; /* jl: less (signed <) */

loc_002772DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002772E4; /* jge: greater or equal (signed >=) */

loc_002772E1: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002772E4: ;
    eax = MEM32(ebx + 4);
    edi = MEM32(edi + 4);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 8);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    eax = eax | 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277303u); RECOMP_ABI_CALL(0x00276350u, sub_00276350); /* call 0x00276350 */

loc_00277303: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 4) = eax;
    MEM32(ebx) = 0xA;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00277320
 * Original: 0x00277320 - 0x00277362 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277320: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277347; /* jne: not equal / not zero */

loc_00277330: ;
    eax = MEM32(esp + 0xC);
    MEM32(ebx + 0x1C) = ecx;
    PUSH32(esp, eax);
    ecx = ebx + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00277342u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00277342: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00277347: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027735Du); RECOMP_ABI_CALL(0x00275EA0u, sub_00275EA0); /* call 0x00275EA0 */

loc_0027735D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00277325
 * Original: 0x00277325 - 0x00277362 (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277325(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277325: ;
    ebx = MEM32(esp + 8);
    ecx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277347; /* jne: not equal / not zero */

loc_00277330: ;
    eax = MEM32(esp + 0xC);
    MEM32(ebx + 0x1C) = ecx;
    PUSH32(esp, eax);
    ecx = ebx + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00277342u); RECOMP_ABI_CALL(0x00276010u, sub_00276010); /* call 0x00276010 */

loc_00277342: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00277347: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027735Du); RECOMP_ABI_CALL(0x00275EA0u, sub_00275EA0); /* call 0x00275EA0 */

loc_0027735D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00277370
 * Original: 0x00277370 - 0x002773B0 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277370: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00277394; /* je: equal / zero */

loc_00277378: ;
    edi = MEM32(esp + 0xC);
    /* nop */

loc_00277380: ;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, 0x00277389u); RECOMP_ABI_CALL(0x0027CEE0u, sub_0027CEE0); /* call 0x0027CEE0 */

loc_00277389: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027739B; /* jne: not equal / not zero */

loc_0027738D: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277380; /* jne: not equal / not zero */

loc_00277394: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0027739B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, 0x002773A9u); RECOMP_ABI_CALL(0x0027CF80u, sub_0027CF80); /* call 0x0027CF80 */

loc_002773A9: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002773B0
 * Original: 0x002773B0 - 0x002773DB (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002773B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002773B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002773D4; /* je: equal / zero */

loc_002773B8: ;
    edi = MEM32(esp + 0xC);
    /* nop */

loc_002773C0: ;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, 0x002773C9u); RECOMP_ABI_CALL(0x0027CEE0u, sub_0027CEE0); /* call 0x0027CEE0 */

loc_002773C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002773D6; /* jne: not equal / not zero */

loc_002773CD: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002773C0; /* jne: not equal / not zero */

loc_002773D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002773D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002773E0
 * Original: 0x002773E0 - 0x002773FA (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002773E0(void)
{

loc_002773E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x002773E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002773E5u); } /* indirect call */
    }

loc_002773E8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x002773EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002773ECu); } /* indirect call */
    }

loc_002773EF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x002773F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002773F5u); } /* indirect call */
    }

loc_002773F8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00277400
 * Original: 0x00277400 - 0x00277405 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277400: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00277410
 * Original: 0x00277410 - 0x0027741C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277410: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027741B; /* je: equal / zero */

loc_00277414: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0027741Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277418u); } /* indirect call */
    }

loc_0027741B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00277420
 * Original: 0x00277420 - 0x00277430 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277420: ;
    eax = ecx;
    MEM32(eax) = 0x383248;
    MEM16(0x383248) = MEM16(0x383248) + 1;
    _fa = (uint32_t)(MEM16(0x383248)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00277430
 * Original: 0x00277430 - 0x00277446 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277430: ;
    eax = MEM32(ecx);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277445; /* jne: not equal / not zero */

loc_0027743B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x534574);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00277444u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277441u); } /* indirect call */
    }

loc_00277444: ;
    POP32(esp, ecx);

loc_00277445: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00277450
 * Original: 0x00277450 - 0x0027745D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277450(void)
{

loc_00277450: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534414); PUSH32(esp, 0x0027745Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277455u); } /* indirect call */
    }

loc_0027745B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00277460
 * Original: 0x00277460 - 0x0027746B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277460: ;
    ecx = MEM32(0x5343C0);
    g_seh_ebp = ebp; sub_002A7950(); return; /* tail jmp 0x002A7950 */

}

/**
 * sub_00277470
 * Original: 0x00277470 - 0x00277530 (192 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277470: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC258);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x00277496u); RECOMP_ABI_CALL(0x002817E0u, sub_002817E0); /* call 0x002817E0 */

loc_00277496: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 4);
    eax = esp;
    MEM8(0x5343E4) = 0;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 4);
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0xC) = esp;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x002774CCu); RECOMP_ABI_CALL(0x002817E0u, sub_002817E0); /* call 0x002817E0 */

loc_002774CC: ;
    ecx = MEM32(0x5343E0);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(esp + 0x1C) = 3;
    PUSH32(esp, 0x002774E1u); RECOMP_ABI_CALL(0x0027BCF0u, sub_0027BCF0); /* call 0x0027BCF0 */

loc_002774E1: ;
    eax = MEM32(esp + 4);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    MEM8(esp + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00277500; /* jne: not equal / not zero */

loc_002774F3: ;
    ecx = MEM32(0x534574);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x002774FDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002774FAu); } /* indirect call */
    }

loc_002774FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277500: ;
    eax = MEM32(esp);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_00277521; /* jne: not equal / not zero */

loc_00277514: ;
    edx = MEM32(0x534574);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0027751Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0027751Bu); } /* indirect call */
    }

loc_0027751E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277521: ;
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277530
 * Original: 0x00277530 - 0x00277581 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277530: ;
    eax = MEM32(0x5343F0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027757D; /* je: equal / zero */

loc_0027753C: ;
    eax = MEM32(0x5343DC);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x34BCD8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00277551u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00277551: ;
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x53442C); PUSH32(esp, 0x0027755Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277556u); } /* indirect call */
    }

loc_0027755C: ;
    eax = MEM32(0x5343DC);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = 3;
    { uint32_t _icall_target = MEM32(0x534428); PUSH32(esp, 0x0027757Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00277574u); } /* indirect call */
    }

loc_0027757A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027757D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277590
 * Original: 0x00277590 - 0x002775C5 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277590: ;
    ecx = MEM32(0x5343C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002775C4; /* je: equal / zero */

loc_0027759A: ;
    PUSH32(esp, 0x0027759Fu); RECOMP_ABI_CALL(0x0028FA00u, sub_0028FA00); /* call 0x0028FA00 */

loc_0027759F: ;
    PUSH32(esp, 0x002775A4u); RECOMP_ABI_CALL(0x0027C510u, sub_0027C510); /* call 0x0027C510 */

loc_002775A4: ;
    eax = MEM32(0x534534);
    ecx = MEM32(0x5343C0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1128;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002775BDu); RECOMP_ABI_CALL(0x002A8CB0u, sub_002A8CB0); /* call 0x002A8CB0 */

loc_002775BD: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x5344C0) = MEM32(0x5344C0) - 0x60;
    _fa = (uint32_t)(MEM32(0x5344C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002775C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002775D0
 * Original: 0x002775D0 - 0x00277601 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002775D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002775D0: ;
    eax = MEM32(0x5343E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277600; /* je: equal / zero */

loc_002775D9: ;
    eax = MEM32(0x5343C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277600; /* jne: not equal / not zero */

loc_002775E2: ;
    ecx = MEM32(0x5343C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277600; /* je: equal / zero */

loc_002775EC: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00277600u); RECOMP_ABI_CALL(0x0028F6A0u, sub_0028F6A0); /* call 0x0028F6A0 */

loc_00277600: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00277610
 * Original: 0x00277610 - 0x00277652 (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277610: ;
    eax = MEM32(0x5343E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277651; /* je: equal / zero */

loc_00277619: ;
    eax = MEM32(0x5343C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277651; /* jne: not equal / not zero */

loc_00277622: ;
    ecx = MEM32(0x5343C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277651; /* je: equal / zero */

loc_0027762C: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x00277651u); RECOMP_ABI_CALL(0x00290540u, sub_00290540); /* call 0x00290540 */

loc_00277651: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00277660
 * Original: 0x00277660 - 0x0027766E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277660: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027766Au); RECOMP_ABI_CALL(0x002BFAE5u, sub_002BFAE5); /* call 0x002BFAE5 */

loc_0027766A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277670
 * Original: 0x00277670 - 0x00277678 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277670(void)
{

loc_00277670: ;
    MEM8(0x5343F4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00277680
 * Original: 0x00277680 - 0x0027768A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277680(void)
{

loc_00277680: ;
    eax = MEM32(esp + 4);
    MEM32(0x53440C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00277690
 * Original: 0x00277690 - 0x00277696 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277690(void)
{

loc_00277690: ;
    eax = MEM32(0x53440C);
    esp += 4; return; /* ret */

}

/**
 * sub_002776A0
 * Original: 0x002776A0 - 0x002776BD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002776A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002776A0: ;
    ecx = MEM32(0x5343C0);
    PUSH32(esp, 0x002776ABu); RECOMP_ABI_CALL(0x002907B0u, sub_002907B0); /* call 0x002907B0 */

loc_002776AB: ;
    ecx = MEM32(0x534558);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002776BC; /* je: equal / zero */

loc_002776B5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002776BCu); RECOMP_ABI_CALL(0x0027CD60u, sub_0027CD60); /* call 0x0027CD60 */

loc_002776BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002776C0
 * Original: 0x002776C0 - 0x002776E1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002776C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002776C0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x002776CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002776C9u); } /* indirect call */
    }

loc_002776CF: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x002776DAu); RECOMP_ABI_CALL(0x00291B50u, sub_00291B50); /* call 0x00291B50 */

loc_002776DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002776F0
 * Original: 0x002776F0 - 0x00277722 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002776F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002776F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027771D; /* jl: less (signed <) */

loc_002776FC: ;
    PUSH32(esp, esi);
    esi = 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027771A; /* jl: less (signed <) */

loc_00277706: ;
    eax = MEM32(edi);
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00277715u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277712u); } /* indirect call */
    }

loc_00277715: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00277706; /* jle: less or equal (signed <=) */

loc_0027771A: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi) = MEM32(edi) - ebx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);

loc_0027771D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277730
 * Original: 0x00277730 - 0x00277784 (84 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277730: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027777F; /* jl: less (signed <) */

loc_0027773C: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00277749u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00277747u); } /* indirect call */
    }

loc_00277749: ;
    edi = 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00277766; /* jl: less (signed <) */

loc_00277752: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edx + ecx * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00277761u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027775Eu); } /* indirect call */
    }

loc_00277761: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00277752; /* jle: less or equal (signed <=) */

loc_00277766: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx + ecx * 4) = ebp;
    ecx = MEM32(esi);
    eax = 1;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = ecx;
    POP32(esp, ebp);

loc_0027777F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00277790
 * Original: 0x00277790 - 0x002777CC (60 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277790: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002777C7; /* jle: less or equal (signed <=) */

loc_0027779C: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002777C7; /* jl: less (signed <) */

loc_002777A0: ;
    PUSH32(esp, esi);
    esi = 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002777C4; /* jl: less (signed <) */

loc_002777AA: ;
    /* nop */

loc_002777B0: ;
    eax = MEM32(edi);
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002777BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002777BCu); } /* indirect call */
    }

loc_002777BF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002777B0; /* jle: less or equal (signed <=) */

loc_002777C4: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi) = MEM32(edi) - ebx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);

loc_002777C7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002777D0
 * Original: 0x002777D0 - 0x00277805 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002777D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002777D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx;
    eax = MEM32(esi);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002777F4; /* jne: not equal / not zero */

loc_002777E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x534574);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002777F1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002777EEu); } /* indirect call */
    }

loc_002777F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002777F4: ;
    ecx = MEM32(edi);
    MEM32(esi) = ecx;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    MEM32(esi + 4) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277810
 * Original: 0x00277810 - 0x00277816 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277810: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x534414)); return; /* indirect tail jmp */

}

/**
 * sub_00277820
 * Original: 0x00277820 - 0x00277874 (84 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277820: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027786D; /* je: equal / zero */

loc_0027782E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, edi);

loc_00277834: ;
    eax = MEM32(esi);
    edi = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277855; /* jne: not equal / not zero */

loc_00277849: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x534574);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00277852u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0027784Fu); } /* indirect call */
    }

loc_00277852: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277855: ;
    ecx = MEM32(esi);
    MEM32(edi) = ecx;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(edi + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00277834; /* jne: not equal / not zero */

loc_00277866: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027786D: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00277880
 * Original: 0x00277880 - 0x002778D9 (89 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277880: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx + eax * 8 + -8;
    if (CMP_EQ(_fa, _fb)) goto loc_002778D3; /* je: equal / zero */

loc_002778A1: ;
    ebx = eax;

loc_002778A3: ;
    eax = MEM32(esi);
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002778C0; /* jne: not equal / not zero */

loc_002778B3: ;
    edx = MEM32(0x534574);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002778BDu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002778BAu); } /* indirect call */
    }

loc_002778BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002778C0: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002778A3; /* jne: not equal / not zero */

loc_002778D3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002778E0
 * Original: 0x002778E0 - 0x00277933 (83 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002778E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002778E0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00277918; /* je: equal / zero */

loc_002778ED: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x277970);
    edi = esi + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277902u); RECOMP_ABI_CALL(0x002C1A86u, sub_002C1A86); /* call 0x002C1A86 */

loc_00277902: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277910; /* je: equal / zero */

loc_00277907: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027790Du); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0027790D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277910: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00277918: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(esi) = 0x34BC9C;
    if (TEST_Z(_fa, _fb)) goto loc_0027792C; /* je: equal / zero */

loc_00277923: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277929u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00277929: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027792C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277940
 * Original: 0x00277940 - 0x00277962 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277940: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027794Bu); RECOMP_ABI_CALL(0x00291B80u, sub_00291B80); /* call 0x00291B80 */

loc_0027794B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x534418); PUSH32(esp, 0x0027795Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00277957u); } /* indirect call */
    }

loc_0027795D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00277970
 * Original: 0x00277970 - 0x00277977 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277970(void)
{

loc_00277970: ;
    MEM32(ecx) = 0x34BC9C;
    esp += 4; return; /* ret */

}

/**
 * sub_00277980
 * Original: 0x00277980 - 0x00277A05 (133 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277980: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC278);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x002779A6u); RECOMP_ABI_CALL(0x002817E0u, sub_002817E0); /* call 0x002817E0 */

loc_002779A6: ;
    eax = MEM32(esp + 0x14);
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 8);
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_002779CE; /* jne: not equal / not zero */

loc_002779C1: ;
    ecx = MEM32(0x534574);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x002779CBu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002779C8u); } /* indirect call */
    }

loc_002779CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002779CE: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 8) = eax;
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_002779F3; /* jne: not equal / not zero */

loc_002779E6: ;
    edx = MEM32(0x534574);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002779F0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002779EDu); } /* indirect call */
    }

loc_002779F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002779F3: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277A10
 * Original: 0x00277A10 - 0x00277A53 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277A10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC2D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 8;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00277A3Du); RECOMP_ABI_CALL(0x0027C590u, sub_0027C590); /* call 0x0027C590 */

loc_00277A3D: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x34BC9C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277A60
 * Original: 0x00277A60 - 0x00277A80 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277A60: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(ecx + 0x1C);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277A80
 * Original: 0x00277A80 - 0x00277A90 (16 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277A80: ;
    eax = MEM32(ecx + 0x1C);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277A90
 * Original: 0x00277A90 - 0x00277ABA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277A90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00277A98u); RECOMP_ABI_CALL(0x00277D80u, sub_00277D80); /* call 0x00277D80 */

loc_00277A98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277AB4; /* je: equal / zero */

loc_00277A9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277AA5u); RECOMP_ABI_CALL(0x00291B80u, sub_00291B80); /* call 0x00291B80 */

loc_00277AA5: ;
    eax = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534418); PUSH32(esp, 0x00277AB1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00277AABu); } /* indirect call */
    }

loc_00277AB1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277AB4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277AC0
 * Original: 0x00277AC0 - 0x00277B09 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277AC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC2D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x34BD1C;
    ecx = esi + 8;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00277AF3u); RECOMP_ABI_CALL(0x0027C590u, sub_0027C590); /* call 0x0027C590 */

loc_00277AF3: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x34BC9C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277B10
 * Original: 0x00277B10 - 0x00277B62 (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277B10: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00277B3A; /* je: equal / zero */

loc_00277B1D: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x277AC0);
    edi = esi + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277B32u); RECOMP_ABI_CALL(0x002C1A86u, sub_002C1A86); /* call 0x002C1A86 */

loc_00277B32: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00277B3A: ;
    ecx = esi;
    PUSH32(esp, 0x00277B41u); RECOMP_ABI_CALL(0x00277AC0u, sub_00277AC0); /* call 0x00277AC0 */

loc_00277B41: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277B5B; /* je: equal / zero */

loc_00277B46: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277B4Cu); RECOMP_ABI_CALL(0x00291B80u, sub_00291B80); /* call 0x00291B80 */

loc_00277B4C: ;
    ecx = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x534418); PUSH32(esp, 0x00277B58u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00277B52u); } /* indirect call */
    }

loc_00277B58: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277B5B: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277B70
 * Original: 0x00277B70 - 0x00277BB9 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277B70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC2D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x34BD58;
    ecx = esi + 8;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00277BA3u); RECOMP_ABI_CALL(0x0027C590u, sub_0027C590); /* call 0x0027C590 */

loc_00277BA3: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x34BC9C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277BC0
 * Original: 0x00277BC0 - 0x00277C12 (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277BC0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00277BEA; /* je: equal / zero */

loc_00277BCD: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x277B70);
    edi = esi + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277BE2u); RECOMP_ABI_CALL(0x002C1A86u, sub_002C1A86); /* call 0x002C1A86 */

loc_00277BE2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00277BEA: ;
    ecx = esi;
    PUSH32(esp, 0x00277BF1u); RECOMP_ABI_CALL(0x00277B70u, sub_00277B70); /* call 0x00277B70 */

loc_00277BF1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277C0B; /* je: equal / zero */

loc_00277BF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277BFCu); RECOMP_ABI_CALL(0x00291B80u, sub_00291B80); /* call 0x00291B80 */

loc_00277BFC: ;
    ecx = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x534418); PUSH32(esp, 0x00277C08u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00277C02u); } /* indirect call */
    }

loc_00277C08: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277C0B: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277C20
 * Original: 0x00277C20 - 0x00277C69 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277C20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC2D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x34BD94;
    ecx = esi + 8;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00277C53u); RECOMP_ABI_CALL(0x0027C590u, sub_0027C590); /* call 0x0027C590 */

loc_00277C53: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x34BC9C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277C70
 * Original: 0x00277C70 - 0x00277CC2 (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277C70: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00277C9A; /* je: equal / zero */

loc_00277C7D: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x277C20);
    edi = esi + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277C92u); RECOMP_ABI_CALL(0x002C1A86u, sub_002C1A86); /* call 0x002C1A86 */

loc_00277C92: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00277C9A: ;
    ecx = esi;
    PUSH32(esp, 0x00277CA1u); RECOMP_ABI_CALL(0x00277C20u, sub_00277C20); /* call 0x00277C20 */

loc_00277CA1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277CBB; /* je: equal / zero */

loc_00277CA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277CACu); RECOMP_ABI_CALL(0x00291B80u, sub_00291B80); /* call 0x00291B80 */

loc_00277CAC: ;
    ecx = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x534418); PUSH32(esp, 0x00277CB8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00277CB2u); } /* indirect call */
    }

loc_00277CB8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277CBB: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277CD0
 * Original: 0x00277CD0 - 0x00277D19 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277CD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC2D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x34BDD0;
    ecx = esi + 8;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00277D03u); RECOMP_ABI_CALL(0x0027C590u, sub_0027C590); /* call 0x0027C590 */

loc_00277D03: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x34BC9C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277D20
 * Original: 0x00277D20 - 0x00277D72 (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277D20: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00277D4A; /* je: equal / zero */

loc_00277D2D: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x277CD0);
    edi = esi + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277D42u); RECOMP_ABI_CALL(0x002C1A86u, sub_002C1A86); /* call 0x002C1A86 */

loc_00277D42: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00277D4A: ;
    ecx = esi;
    PUSH32(esp, 0x00277D51u); RECOMP_ABI_CALL(0x00277CD0u, sub_00277CD0); /* call 0x00277CD0 */

loc_00277D51: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277D6B; /* je: equal / zero */

loc_00277D56: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277D5Cu); RECOMP_ABI_CALL(0x00291B80u, sub_00291B80); /* call 0x00291B80 */

loc_00277D5C: ;
    ecx = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x534418); PUSH32(esp, 0x00277D68u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00277D62u); } /* indirect call */
    }

loc_00277D68: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277D6B: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277D80
 * Original: 0x00277D80 - 0x00277DC9 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277D80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC2D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x34BCE0;
    ecx = esi + 8;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00277DB3u); RECOMP_ABI_CALL(0x0027C590u, sub_0027C590); /* call 0x0027C590 */

loc_00277DB3: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x34BC9C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277DD0
 * Original: 0x00277DD0 - 0x00277E19 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277DD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC2D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x34BE0C;
    ecx = esi + 8;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00277E03u); RECOMP_ABI_CALL(0x0027C590u, sub_0027C590); /* call 0x0027C590 */

loc_00277E03: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x34BC9C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277E20
 * Original: 0x00277E20 - 0x00277E72 (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277E20: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00277E4A; /* je: equal / zero */

loc_00277E2D: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x277DD0);
    edi = esi + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277E42u); RECOMP_ABI_CALL(0x002C1A86u, sub_002C1A86); /* call 0x002C1A86 */

loc_00277E42: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00277E4A: ;
    ecx = esi;
    PUSH32(esp, 0x00277E51u); RECOMP_ABI_CALL(0x00277DD0u, sub_00277DD0); /* call 0x00277DD0 */

loc_00277E51: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277E6B; /* je: equal / zero */

loc_00277E56: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277E5Cu); RECOMP_ABI_CALL(0x00291B80u, sub_00291B80); /* call 0x00291B80 */

loc_00277E5C: ;
    ecx = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x534418); PUSH32(esp, 0x00277E68u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00277E62u); } /* indirect call */
    }

loc_00277E68: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00277E6B: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277E80
 * Original: 0x00277E80 - 0x00277E97 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277E80: ;
    eax = ecx;
    MEM32(eax) = 0x383248;
    MEM16(0x383248) = MEM16(0x383248) + 1;
    _fa = (uint32_t)(MEM16(0x383248)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00277EA0
 * Original: 0x00277EA0 - 0x00277F65 (197 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277EA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC29F);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5345E0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277F21; /* je: equal / zero */

loc_00277EC1: ;
    eax = MEM32(esi + 0xC);
    MEM32(0x5345E0) = eax;
    eax = MEM32(esi + 4);
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x5343F8);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    eax = ecx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_00277EF2; /* jl: less (signed <) */

loc_00277EE7: ;
    edi = edi & 0xBFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = edi;
    goto loc_00277EFA;

loc_00277EF2: ;
    ecx = MEM32(ecx + 8);
    MEM32(ecx + edx * 4) = esi;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00277EFA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x383248) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x383248 (32-bit) */
    ecx = esi + 8;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00277F0F; /* je: equal / zero */

loc_00277F08: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00277F0Fu); RECOMP_ABI_CALL(0x00281B30u, sub_00281B30); /* call 0x00281B30 */

loc_00277F0F: ;
    eax = esi;
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00277F21: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x00277F29u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00277F23u); } /* indirect call */
    }

loc_00277F29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00277F53; /* je: equal / zero */

loc_00277F3C: ;
    ecx = eax;
    PUSH32(esp, 0x00277F43u); RECOMP_ABI_CALL(0x00297FC0u, sub_00297FC0); /* call 0x00297FC0 */

loc_00277F43: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00277F53: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00277F70
 * Original: 0x00277F70 - 0x00278072 (258 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277F70: ;
    ecx = MEM32(0x5343C0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx + 0x1128);
    edx = MEM32(eax);
    eax = MEM32(edx + 0x58);
    esi = MEM32(eax + 4);
    edx = esi;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277FA1; /* jne: not equal / not zero */

loc_00277F95: ;
    edx = esi;
    edx = edx >> 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, ~LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277FA7; /* je: equal / zero */

loc_00277FA1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00277FA7: ;
    eax = MEM32(eax + 0x50);
    edx = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xC);
    esi = MEM32(eax + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027803C; /* jb: below (unsigned <) */

loc_00277FBD: ;
    ebp = 1;

loc_00277FC2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277FC8u); RECOMP_ABI_CALL(0x002900D0u, sub_002900D0); /* call 0x002900D0 */

loc_00277FC8: ;
    ecx = MEM32(0x5343C0);
    _fb = (uint32_t)(0x1128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1128;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00277FD9u); RECOMP_ABI_CALL(0x002A8E10u, sub_002A8E10); /* call 0x002A8E10 */

loc_00277FD9: ;
    ecx = MEM32(0x5343C0);
    PUSH32(esp, 0x00277FE4u); RECOMP_ABI_CALL(0x00290370u, sub_00290370); /* call 0x00290370 */

loc_00277FE4: ;
    ecx = MEM32(0x5343C0);
    PUSH32(esp, 0x00277FEFu); RECOMP_ABI_CALL(0x002A82E0u, sub_002A82E0); /* call 0x002A82E0 */

loc_00277FEF: ;
    ecx = MEM32(0x5343E0);
    PUSH32(esp, 0x00277FFAu); RECOMP_ABI_CALL(0x0027B6B0u, sub_0027B6B0); /* call 0x0027B6B0 */

loc_00277FFA: ;
    eax = MEM32(0x5343DC);
    ecx = MEM32(0x5343C0);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x5343DC) = eax;
    edx = MEM32(ecx + 0x1128);
    eax = MEM32(edx);
    eax = MEM32(eax + 0x58);
    eax = MEM32(eax + 4);
    edx = eax;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278069; /* jne: not equal / not zero */

loc_00278026: ;
    eax = eax >> 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, ~LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00278069; /* jne: not equal / not zero */

loc_0027802F: ;
    eax = MEM32(0x5343F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027803C; /* jne: not equal / not zero */

loc_00278038: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00277FC2; /* jae: above or equal (unsigned >=) */

loc_0027803C: ;
    eax = MEM32(ecx + 0x1128);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x58);
    eax = MEM32(ecx + 4);
    edx = eax;
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278063; /* jne: not equal / not zero */

loc_00278054: ;
    eax = eax >> 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, ~LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00278063; /* jne: not equal / not zero */

loc_0027805D: ;
    eax = MEM32(ecx + 0x50);
    MEM32(eax + 0x30) = edi;

loc_00278063: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00278069: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00278080
 * Original: 0x00278080 - 0x00278087 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278080(void)
{

loc_00278080: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00278090
 * Original: 0x00278090 - 0x002780B3 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278090: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002780B1; /* je: equal / zero */

loc_00278099: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027809Fu); RECOMP_ABI_CALL(0x0027A1D0u, sub_0027A1D0); /* call 0x0027A1D0 */

loc_0027809F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002780B1; /* jne: not equal / not zero */

loc_002780A6: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002780AEu); RECOMP_ABI_CALL(0x0027B240u, sub_0027B240); /* call 0x0027B240 */

loc_002780AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002780B1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002780C0
 * Original: 0x002780C0 - 0x00278148 (136 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002780C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002780C0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0xF000803Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x10008000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C (32-bit) */
    MEM32(eax) = 0x34BC9C;
    MEM32(eax + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00278136; /* je: equal / zero */

loc_002780E8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278136; /* je: equal / zero */

loc_002780ED: ;
    PUSH32(esp, ebx);
    ecx = ecx | 0x40000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(0x5343F8);
    ebx = MEM32(esi);
    edx = esi + 4;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027811F; /* jl: less (signed <) */

loc_0027810A: ;
    POP32(esp, edi);
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    MEM32(eax) = 0x34BE48;
    esp += 8; return; /* ret 4 */

loc_0027811F: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    ecx = MEM32(edx);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    MEM32(eax) = 0x34BE48;
    esp += 8; return; /* ret 4 */

loc_00278136: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x34BE48;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278150
 * Original: 0x00278150 - 0x0027817A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278150: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00278158u); RECOMP_ABI_CALL(0x00277970u, sub_00277970); /* call 0x00277970 */

loc_00278158: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278174; /* je: equal / zero */

loc_0027815F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00278165u); RECOMP_ABI_CALL(0x00291B80u, sub_00291B80); /* call 0x00291B80 */

loc_00278165: ;
    eax = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534418); PUSH32(esp, 0x00278171u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0027816Bu); } /* indirect call */
    }

loc_00278171: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00278174: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278180
 * Original: 0x00278180 - 0x00278208 (136 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278180: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0xF000803Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x10008000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C (32-bit) */
    MEM32(eax) = 0x34BC9C;
    MEM32(eax + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002781F6; /* je: equal / zero */

loc_002781A8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002781F6; /* je: equal / zero */

loc_002781AD: ;
    PUSH32(esp, ebx);
    ecx = ecx | 0x40000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(0x5343F8);
    ebx = MEM32(esi);
    edx = esi + 4;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002781DF; /* jl: less (signed <) */

loc_002781CA: ;
    POP32(esp, edi);
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    MEM32(eax) = 0x34BE84;
    esp += 8; return; /* ret 4 */

loc_002781DF: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    ecx = MEM32(edx);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    MEM32(eax) = 0x34BE84;
    esp += 8; return; /* ret 4 */

loc_002781F6: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x34BE84;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278210
 * Original: 0x00278210 - 0x00278231 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00278218u); RECOMP_ABI_CALL(0x00277970u, sub_00277970); /* call 0x00277970 */

loc_00278218: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027822B; /* je: equal / zero */

loc_0027821F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x534418); PUSH32(esp, 0x00278228u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00278222u); } /* indirect call */
    }

loc_00278228: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027822B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278240
 * Original: 0x00278240 - 0x00278317 (215 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278240: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC2C3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x18);
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xA000803Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi + 4) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x34BEC0;
    MEM32(esi + 0xC) = 0x383248;
    MEM16(0x383248) = MEM16(0x383248) + 1;
    _fa = (uint32_t)(MEM16(0x383248)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edi;
    ecx = MEM32(esp + 0x20);
    eax = 0x3F800000;
    MEM32(esi + 0x50) = ecx;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM8(esp + 0x14) = 1;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002782DE; /* je: equal / zero */

loc_002782DA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002782DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002782DCu); } /* indirect call */
    }

loc_002782DE: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(esp + 0xC);
    eax = eax & 0xFFF0FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x60) = eax;
    eax = MEM32(esi + 4);
    eax = eax & 0xEFFFC07Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + 0x60) = LO16(edi);
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x5C) = 0xFFFFFFFFu;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00278320
 * Original: 0x00278320 - 0x00278340 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278320: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(ecx + 0x60);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax << 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x60) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278340
 * Original: 0x00278340 - 0x00278350 (16 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278340: ;
    eax = MEM32(ecx + 0x60);
    eax = eax >> 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00278350
 * Original: 0x00278350 - 0x0027837A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00278358u); RECOMP_ABI_CALL(0x002ABC10u, sub_002ABC10); /* call 0x002ABC10 */

loc_00278358: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278374; /* je: equal / zero */

loc_0027835F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00278365u); RECOMP_ABI_CALL(0x00291B80u, sub_00291B80); /* call 0x00291B80 */

loc_00278365: ;
    eax = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534418); PUSH32(esp, 0x00278371u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0027836Bu); } /* indirect call */
    }

loc_00278371: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00278374: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278380
 * Original: 0x00278380 - 0x002783D6 (86 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278380: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2CC2D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x002783A7u); RECOMP_ABI_CALL(0x002780C0u, sub_002780C0); /* call 0x002780C0 */

loc_002783A7: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = esi + 8;
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x34BEFC;
    PUSH32(esp, 0x002783C2u); RECOMP_ABI_CALL(0x0027C570u, sub_0027C570); /* call 0x0027C570 */

loc_002783C2: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002783E0
 * Original: 0x002783E0 - 0x0027840A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002783E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002783E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002783E8u); RECOMP_ABI_CALL(0x00277A10u, sub_00277A10); /* call 0x00277A10 */

loc_002783E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278404; /* je: equal / zero */

loc_002783EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002783F5u); RECOMP_ABI_CALL(0x00291B80u, sub_00291B80); /* call 0x00291B80 */

loc_002783F5: ;
    eax = esi + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534418); PUSH32(esp, 0x00278401u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002783FBu); } /* indirect call */
    }

loc_00278401: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00278404: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
