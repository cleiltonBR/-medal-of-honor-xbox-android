/**
 * Medal of Honor European Assault - Recompiled code chunk 41
 * Functions: 250 (0x0015BDF0 - 0x00165260)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0015BDF0
 * Original: 0x0015BDF0 - 0x0015C2E1 (1265 bytes, 405 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015BDF0(void)
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

loc_0015BDF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM8(esp + 0xF) = 0;
    ecx = 0x3C6600;
    if (CMP_EQ(_fa, _fb)) goto loc_0015C297; /* je: equal / zero */

loc_0015BE0D: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8E);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015BE1Cu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BE1C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    esi = eax;
    PUSH32(esp, 0x8D);
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0015BE35u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BE35: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x8B);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0015BE4Eu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BE4E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x8C);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0015BE67u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BE67: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x90);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0015BE80u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BE80: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x91);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0015BE99u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BE99: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x92);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0015BEB2u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BEB2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x8F);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0015BECBu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BECB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x98);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0015BEE4u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BEE4: ;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x94);
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015BEFDu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BEFD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x97);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0015BF16u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BF16: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x93);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0015BF2Fu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BF2F: ;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BF5B; /* je: equal / zero */

loc_0015BF39: ;
    eax = MEM32(ebx + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015BF5B; /* jge: greater or equal (signed >=) */

loc_0015BF44: ;
    MEM16(ebx + eax * 2 + 8) = LO16(esi);
    eax = MEM32(ebx + 0x88);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x88) = eax;
    MEM16(ebx + eax * 2 + 8) = LO16(ebp);

loc_0015BF5B: ;
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015BFAD; /* jne: not equal / not zero */

loc_0015BF62: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x95);
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015BF74u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BF74: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015BF8E; /* je: equal / zero */

loc_0015BF78: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x96);
    PUSH32(esp, ebp);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015BF8Au); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015BF8A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015BFAD; /* jne: not equal / not zero */

loc_0015BF8E: ;
    POP32(esp, esi);
    MEM32(ebx + 0x88) = ebp;
    MEM16(ebx + 8) = LO16(ebp);
    POP32(esp, ebp);
    MEM8(ebx + 4) = 0;
    MEM8(ebx + 5) = 0;
    MEM8(ebx + 6) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0015BFAD: ;
    PUSH32(esp, edi);
    eax = ebx + 8;
    ecx = 3;
    edi = 0x31F088;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_0015BFD5; /* jne: not equal / not zero */

loc_0015BFC3: ;
    MEM8(ebx + 5) = 1;
    MEM32(ebx + 0x88) = ebp;
    MEM16(eax) = LO16(ebp);
    goto loc_0015C276;

loc_0015BFD5: ;
    SET_LO8(ecx, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C276; /* je: equal / zero */

loc_0015BFE0: ;
    ecx = 3;
    edi = 0x31F0A0;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_0015C06C; /* jne: not equal / not zero */

loc_0015BFF2: ;
    SET_LO8(edx, MEM8(0x37279C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x37279C) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x31F194;
    if (CMP_NE(_fa, _fb)) goto loc_0015C010; /* jne: not equal / not zero */

loc_0015C00B: ;
    eax = 0x31F190;

loc_0015C010: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31F178);
    PUSH32(esp, 0x0015C01Bu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0015C01B: ;
    SET_LO8(eax, MEM8(0x37279C));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x13) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0015C276; /* je: equal / zero */

loc_0015C030: ;
    eax = MEM32(0x3E8D54);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0015C276; /* jle: less or equal (signed <=) */

loc_0015C043: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015C049u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_0015C049: ;
    esi = eax;
    ebp = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x4C); PUSH32(esp, 0x0015C055u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015C052u); } /* indirect call */
    }

loc_0015C055: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp + 0x50); PUSH32(esp, 0x0015C05Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015C05Bu); } /* indirect call */
    }

loc_0015C05E: ;
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C043; /* jl: less (signed <) */

loc_0015C067: ;
    goto loc_0015C276;

loc_0015C06C: ;
    ecx = 3;
    edi = 0x31F0B8;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_0015C0AF; /* jne: not equal / not zero */

loc_0015C07E: ;
    SET_LO8(edx, MEM8(0x37279E));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x37279E) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x31F194;
    if (CMP_NE(_fa, _fb)) goto loc_0015C09C; /* jne: not equal / not zero */

loc_0015C097: ;
    eax = 0x31F190;

loc_0015C09C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31F164);
    PUSH32(esp, 0x0015C0A7u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0015C0A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015C271;

loc_0015C0AF: ;
    ecx = 3;
    edi = 0x31F094;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_0015C0D4; /* jne: not equal / not zero */

loc_0015C0C1: ;
    eax = MEM32(0x3888C0);
    MEM16(eax + 0x1354) = 1;
    goto loc_0015C271;

loc_0015C0D4: ;
    ecx = 3;
    edi = 0x31F0AC;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_0015C120; /* jne: not equal / not zero */

loc_0015C0E6: ;
    PUSH32(esp, 0x31F148);
    PUSH32(esp, 0x0015C0F0u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0015C0F0: ;
    eax = MEM32(0x3E8D54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C10E; /* jne: not equal / not zero */

loc_0015C0FD: ;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0015C109u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015C106u); } /* indirect call */
    }

loc_0015C109: ;
    goto loc_0015C271;

loc_0015C10E: ;
    PUSH32(esp, 0x31F114);
    PUSH32(esp, 0x0015C118u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0015C118: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015C271;

loc_0015C120: ;
    ecx = 3;
    edi = 0x31F0C4;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_0015C14E; /* jne: not equal / not zero */

loc_0015C132: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x12));
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 0x10);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x12) = LO8(edx);
    goto loc_0015C271;

loc_0015C14E: ;
    ecx = 3;
    edi = 0x31F0D0;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_0015C1F6; /* jne: not equal / not zero */

loc_0015C164: ;
    PUSH32(esp, 0x31F100);
    MEM8(esp + 0x17) = 1;
    PUSH32(esp, 0x0015C173u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0015C173: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015C1CE; /* je: equal / zero */

loc_0015C186: ;
    eax = MEM32(0x3E8D50);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015C276; /* jle: less or equal (signed <=) */

loc_0015C195: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015C19Bu); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_0015C19B: ;
    edx = MEM32(eax + 0x30);
    ecx = eax + 0x30;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0015C1A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015C1A4u); } /* indirect call */
    }

loc_0015C1A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C1BF; /* je: equal / zero */

loc_0015C1AB: ;
    ecx = eax + 0x13D4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C1BF; /* je: equal / zero */

loc_0015C1B5: ;
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x0015C1BFu); RECOMP_ABI_CALL(0x00127B50u, sub_00127B50); /* call 0x00127B50 */

loc_0015C1BF: ;
    eax = MEM32(0x3E8D50);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C195; /* jl: less (signed <) */

loc_0015C1C9: ;
    goto loc_0015C276;

loc_0015C1CE: ;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0015C1D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015C1D6u); } /* indirect call */
    }

loc_0015C1D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C276; /* je: equal / zero */

loc_0015C1E1: ;
    PUSH32(esp, 0x42C80000);
    ecx = eax + 0x13D4;
    PUSH32(esp, 0x0015C1F1u); RECOMP_ABI_CALL(0x00127B50u, sub_00127B50); /* call 0x00127B50 */

loc_0015C1F1: ;
    goto loc_0015C276;

loc_0015C1F6: ;
    ecx = 3;
    edi = 0x31F0DC;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_0015C225; /* jne: not equal / not zero */

loc_0015C208: ;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0015C218u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015C215u); } /* indirect call */
    }

loc_0015C218: ;
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    PUSH32(esp, 0x0015C223u); RECOMP_ABI_CALL(0x00079250u, sub_00079250); /* call 0x00079250 */

loc_0015C223: ;
    goto loc_0015C271;

loc_0015C225: ;
    ecx = 3;
    edi = 0x31F0E8;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_0015C24F; /* jne: not equal / not zero */

loc_0015C237: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xD);
    ecx = 0x3888C0;
    PUSH32(esp, 0x0015C246u); RECOMP_ABI_CALL(0x000791D0u, sub_000791D0); /* call 0x000791D0 */

loc_0015C246: ;
    ecx = eax;
    PUSH32(esp, 0x0015C24Du); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_0015C24D: ;
    goto loc_0015C271;

loc_0015C24F: ;
    esi = eax;
    ecx = 3;
    edi = 0x31F0F4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_0015C276; /* jne: not equal / not zero */

loc_0015C261: ;
    SET_LO8(eax, MEM8(0x51D6C4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x51D6C4) = LO8(ecx);

loc_0015C271: ;
    MEM8(esp + 0x13) = 1;

loc_0015C276: ;
    _fa = (uint32_t)(MEM32(ebx + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x88), 6 (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0015C2D6; /* jl: less (signed <) */

loc_0015C280: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C2D6; /* jne: not equal / not zero */

loc_0015C288: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 4) = 0;
    MEM8(ebx + 6) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0015C297: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x93);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015C2A6u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015C2A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015C2D6; /* je: equal / zero */

loc_0015C2AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x94);
    PUSH32(esp, esi);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015C2BCu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015C2BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015C2D6; /* je: equal / zero */

loc_0015C2C0: ;
    MEM32(ebx + 0x88) = esi;
    MEM16(ebx + 8) = LO16(esi);
    MEM8(ebx + 4) = 1;
    MEM8(ebx + 5) = 0;
    MEM8(ebx + 6) = 0;

loc_0015C2D6: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    POP32(esp, esi);
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
 * sub_0015C2F0
 * Original: 0x0015C2F0 - 0x0015C307 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C2F0(void)
{

loc_0015C2F0: ;
    ecx = 0x3888C0;
    PUSH32(esp, 0x0015C2FAu); RECOMP_ABI_CALL(0x00079640u, sub_00079640); /* call 0x00079640 */

loc_0015C2FA: ;
    PUSH32(esp, 1);
    ecx = 0x3C250C;
    PUSH32(esp, 0x0015C306u); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_0015C306: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C310
 * Original: 0x0015C310 - 0x0015C32E (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C310(void)
{

loc_0015C310: ;
    MEM8(ecx + 0x98) = 1;
    ecx = 0x3888C0;
    PUSH32(esp, 0x0015C321u); RECOMP_ABI_CALL(0x00079640u, sub_00079640); /* call 0x00079640 */

loc_0015C321: ;
    PUSH32(esp, 1);
    ecx = 0x3C250C;
    PUSH32(esp, 0x0015C32Du); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_0015C32D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C330
 * Original: 0x0015C330 - 0x0015C333 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C330(void)
{

loc_0015C330: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015C340
 * Original: 0x0015C340 - 0x0015C386 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015C340: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C385; /* je: equal / zero */

loc_0015C347: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0xA6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C385; /* je: equal / zero */

loc_0015C355: ;
    SET_LO8(edx, MEM8(ecx + 0x8C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015C366; /* jne: not equal / not zero */

loc_0015C35F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x190) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x190 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0015C385; /* je: equal / zero */

loc_0015C366: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x180;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x9C);
    ecx = MEM32(ecx + 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015C385u); RECOMP_ABI_CALL(0x00161510u, sub_00161510); /* call 0x00161510 */

loc_0015C385: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C390
 * Original: 0x0015C390 - 0x0015C3DF (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015C390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0015C398u); RECOMP_ABI_CALL(0x0015BDE0u, sub_0015BDE0); /* call 0x0015BDE0 */

loc_0015C398: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C3DD; /* je: equal / zero */

loc_0015C39F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xA6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C3DD; /* je: equal / zero */

loc_0015C3AD: ;
    SET_LO8(ecx, MEM8(esi + 0x8C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015C3BE; /* jne: not equal / not zero */

loc_0015C3B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x190) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x190 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0015C3DD; /* je: equal / zero */

loc_0015C3BE: ;
    ecx = MEM32(esi + 0x90);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x180;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x9C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015C3DDu); RECOMP_ABI_CALL(0x00161510u, sub_00161510); /* call 0x00161510 */

loc_0015C3DD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C3E0
 * Original: 0x0015C3E0 - 0x0015C40E (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C3E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x90);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C401; /* je: equal / zero */

loc_0015C3F1: ;
    ecx = edi;
    PUSH32(esp, 0x0015C3F8u); RECOMP_ABI_CALL(0x00161050u, sub_00161050); /* call 0x00161050 */

loc_0015C3F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015C3FEu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0015C3FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015C401: ;
    POP32(esp, edi);
    MEM32(esi + 0x90) = ebx;
    MEM8(esi + 1) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C410
 * Original: 0x0015C410 - 0x0015C577 (359 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C410: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C555; /* jne: not equal / not zero */

loc_0015C41F: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x31F1B0);
    MEM8(esi + 1) = 1;
    PUSH32(esp, 0x0015C434u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0015C434: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C444; /* je: equal / zero */

loc_0015C43B: ;
    ecx = eax;
    PUSH32(esp, 0x0015C442u); RECOMP_ABI_CALL(0x00161040u, sub_00161040); /* call 0x00161040 */

loc_0015C442: ;
    goto loc_0015C446;

loc_0015C444: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015C446: ;
    PUSH32(esp, 0x3F800000);
    ecx = 0x3C6600;
    MEM32(esi + 0x90) = eax;
    MEM8(esi + 0x9A) = 0;
    MEM8(esi + 0x9B) = 0;
    MEM8(esi + 0x9C) = 0;
    MEM8(esi + 2) = 0;
    MEM16(esi + 0xA6) = 0;
    PUSH32(esp, 0x0015C47Du); RECOMP_ABI_CALL(0x000C7280u, sub_000C7280); /* call 0x000C7280 */

loc_0015C47D: ;
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015C489u); RECOMP_ABI_CALL(0x000C5EC0u, sub_000C5EC0); /* call 0x000C5EC0 */

loc_0015C489: ;
    MEM8(esp + 4) = LO8(eax);
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015C49Cu); RECOMP_ABI_CALL(0x000C52D0u, sub_000C52D0); /* call 0x000C52D0 */

loc_0015C49C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C555; /* je: equal / zero */

loc_0015C4A5: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015C555; /* jne: not equal / not zero */

loc_0015C4B8: ;
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015C4C4u); RECOMP_ABI_CALL(0x000C5EC0u, sub_000C5EC0); /* call 0x000C5EC0 */

loc_0015C4C4: ;
    MEM8(esi + 0x9B) = LO8(eax);
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x203C)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x203C), 0xF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C555; /* jne: not equal / not zero */

loc_0015C4D8: ;
    _fa = (uint32_t)(MEM8(eax + 0x1ED5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED5), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015C555; /* jne: not equal / not zero */

loc_0015C4E1: ;
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0015C4EEu); RECOMP_ABI_CALL(0x000C6AE0u, sub_000C6AE0); /* call 0x000C6AE0 */

loc_0015C4EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C534; /* je: equal / zero */

loc_0015C4F2: ;
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015C4FCu); RECOMP_ABI_CALL(0x000C5220u, sub_000C5220); /* call 0x000C5220 */

loc_0015C4FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015C521; /* jbe: below or equal (unsigned <=) */

loc_0015C500: ;
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015C50Bu); RECOMP_ABI_CALL(0x000C60C0u, sub_000C60C0); /* call 0x000C60C0 */

loc_0015C50B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C521; /* jne: not equal / not zero */

loc_0015C50F: ;
    ecx = 0x3C6600;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0015C51Au); RECOMP_ABI_CALL(0x000C5220u, sub_000C5220); /* call 0x000C5220 */

loc_0015C51A: ;
    edx = ZX8(LO8(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C500; /* jl: less (signed <) */

loc_0015C521: ;
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015C52Bu); RECOMP_ABI_CALL(0x000C5220u, sub_000C5220); /* call 0x000C5220 */

loc_0015C52B: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C534; /* jl: less (signed <) */

loc_0015C532: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015C534: ;
    SET_LO8(eax, MEM8(0x3C250D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C554; /* jne: not equal / not zero */

loc_0015C53D: ;
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015C548u); RECOMP_ABI_CALL(0x000C6190u, sub_000C6190); /* call 0x000C6190 */

loc_0015C548: ;
    ecx = MEM32(0x3888C0);
    MEM8(ecx + 0x203C) = LO8(ebx);

loc_0015C554: ;
    POP32(esp, ebx);

loc_0015C555: ;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1ED4), 0x10 (8-bit) */
    eax = 0x31F1A4;
    if (TEST_NZ(_fa, _fb)) goto loc_0015C56E; /* jne: not equal / not zero */

loc_0015C569: ;
    eax = 0x31F198;

loc_0015C56E: ;
    MEM32(esi + 0x94) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C580
 * Original: 0x0015C580 - 0x0015C5C8 (72 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C580: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 6) = LO8(ecx);
    MEM32(eax + 0x88) = ecx;
    MEM8(eax + 0x8C) = LO8(ecx);
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEM8(eax + 0x99) = LO8(ecx);
    MEM32(eax + 0xA0) = 0xFFFFFFFFu;
    MEM16(eax + 0xA6) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C5D0
 * Original: 0x0015C5D0 - 0x0015C5FE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C5D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x90);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C5F1; /* je: equal / zero */

loc_0015C5E1: ;
    ecx = edi;
    PUSH32(esp, 0x0015C5E8u); RECOMP_ABI_CALL(0x00161050u, sub_00161050); /* call 0x00161050 */

loc_0015C5E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015C5EEu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0015C5EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015C5F1: ;
    POP32(esp, edi);
    MEM32(esi + 0x90) = ebx;
    MEM8(esi + 1) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C600
 * Original: 0x0015C600 - 0x0015C74B (331 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015C600: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015C60Fu); RECOMP_ABI_CALL(0x000C67B0u, sub_000C67B0); /* call 0x000C67B0 */

loc_0015C60F: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015C70A; /* jg: greater (signed >) */

loc_0015C61C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015C72C; /* je: equal / zero */

loc_0015C622: ;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015C73E; /* ja: above (unsigned >) */

loc_0015C62E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x15C74C); /* switch: 12 entries, 5 targets */
    if (_jt == 0x0015C635u) goto loc_0015C635;
    if (_jt == 0x0015C722u) goto loc_0015C722;
    if (_jt == 0x0015C72Cu) goto loc_0015C72C;
    if (_jt == 0x0015C737u) goto loc_0015C737;
    if (_jt == 0x0015C73Eu) goto loc_0015C73E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015C635: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C73E; /* jne: not equal / not zero */

loc_0015C644: ;
    MEM32(esi + 0x88) = ebx;
    MEM16(esi + 8) = LO16(ebx);
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1ED0), 1 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015C6AE; /* ja: above (unsigned >) */

loc_0015C65C: ;
    PUSH32(esp, 0x0015C661u); RECOMP_ABI_CALL(0x000ABCA0u, sub_000ABCA0); /* call 0x000ABCA0 */

loc_0015C661: ;
    PUSH32(esp, eax);
    ecx = esi + 0xB0;
    PUSH32(esp, 0x0015C66Du); RECOMP_ABI_CALL(0x000ACED0u, sub_000ACED0); /* call 0x000ACED0 */

loc_0015C66D: ;
    ecx = MEM32(0x373574);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015C67Eu); RECOMP_ABI_CALL(0x000AC040u, sub_000AC040); /* call 0x000AC040 */

loc_0015C67E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0015C686u); RECOMP_ABI_CALL(0x0015D4B0u, sub_0015D4B0); /* call 0x0015D4B0 */

loc_0015C686: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x9A));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8A);
    ecx = 0x3C6600;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015C6A0u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015C6A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x3788F8);
    if (CMP_EQ(_fa, _fb)) goto loc_0015C6DD; /* je: equal / zero */

loc_0015C6AA: ;
    PUSH32(esp, 0xB);
    goto loc_0015C6DF;

loc_0015C6AE: ;
    PUSH32(esp, 0x0015C6B3u); RECOMP_ABI_CALL(0x000ABCA0u, sub_000ABCA0); /* call 0x000ABCA0 */

loc_0015C6B3: ;
    PUSH32(esp, eax);
    ecx = esi + 0xB0;
    PUSH32(esp, 0x0015C6BFu); RECOMP_ABI_CALL(0x000ACED0u, sub_000ACED0); /* call 0x000ACED0 */

loc_0015C6BF: ;
    eax = MEM32(0x373574);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015C6CFu); RECOMP_ABI_CALL(0x000AC040u, sub_000AC040); /* call 0x000AC040 */

loc_0015C6CF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0015C6D7u); RECOMP_ABI_CALL(0x0015D4B0u, sub_0015D4B0); /* call 0x0015D4B0 */

loc_0015C6D7: ;
    ecx = MEM32(0x3788F8);

loc_0015C6DD: ;
    PUSH32(esp, 7);

loc_0015C6DF: ;
    PUSH32(esp, 0x0015C6E4u); RECOMP_ABI_CALL(0x00177C30u, sub_00177C30); /* call 0x00177C30 */

loc_0015C6E4: ;
    MEM8(0x3785A5) = LO8(ebx);
    MEM8(esi + 0xA6) = MEM8(esi + 0xA6) | 1;
    _fa = (uint32_t)(MEM8(esi + 0xA6)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM8(esi + 3) = LO8(ebx);
    MEM8(esi + 4) = LO8(ebx);
    MEM8(esi + 5) = LO8(ebx);
    MEM8(esi + 6) = LO8(ebx);
    MEM8(esi + 0x99) = 2;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0015C70A: ;
    eax = edi + -32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015C73E; /* ja: above (unsigned >) */

loc_0015C714: ;
    ecx = ZX8(MEM8(eax + 0x15C77C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x15C76C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0015C722u) goto loc_0015C722;
    if (_jt == 0x0015C72Cu) goto loc_0015C72C;
    if (_jt == 0x0015C737u) goto loc_0015C737;
    if (_jt == 0x0015C73Eu) goto loc_0015C73E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015C722: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(esi + 0x9C) = LO8(edx);

loc_0015C72C: ;
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, 0x0015C737u); RECOMP_ABI_CALL(0x001614B0u, sub_001614B0); /* call 0x001614B0 */

loc_0015C737: ;
    MEM16(esi + 0xA6) = MEM16(esi + 0xA6) | LO16(edi);
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0015C73E: ;
    POP32(esp, edi);
    MEM8(esi + 0x99) = 2;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015C860
 * Original: 0x0015C860 - 0x0015C98F (303 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015C860: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0015C86Au); RECOMP_ABI_CALL(0x0007E940u, sub_0007E940); /* call 0x0007E940 */

loc_0015C86A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    eax = MEM32(esp + 0x10);
    MEM8(esp + 0xB) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015C930; /* jg: greater (signed >) */

loc_0015C881: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015C961; /* je: equal / zero */

loc_0015C887: ;
    ecx = eax + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015C96A; /* ja: above (unsigned >) */

loc_0015C893: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x15C990); /* switch: 11 entries, 5 targets */
    if (_jt == 0x0015C89Au) goto loc_0015C89A;
    if (_jt == 0x0015C91Bu) goto loc_0015C91B;
    if (_jt == 0x0015C949u) goto loc_0015C949;
    if (_jt == 0x0015C961u) goto loc_0015C961;
    if (_jt == 0x0015C96Au) goto loc_0015C96A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015C89A: ;
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA6), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C96A; /* jne: not equal / not zero */

loc_0015C8A8: ;
    MEM8(esi + 0xA4) = 1;
    ecx = MEM32(0x3788F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015C8BBu); RECOMP_ABI_CALL(0x00178630u, sub_00178630); /* call 0x00178630 */

loc_0015C8BB: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x12));
    SET_LO8(ecx, LO8(ecx) >> 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    edx = esi + 0xB0;
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, edx);
    MEM8(0x3785A5) = LO8(ecx);
    PUSH32(esp, 0x0015C8DBu); RECOMP_ABI_CALL(0x000ACEB0u, sub_000ACEB0); /* call 0x000ACEB0 */

loc_0015C8DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0xA6) = MEM8(esi + 0xA6) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xA6)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 3) = LO8(ebx);
    MEM8(esi + 4) = LO8(ebx);
    MEM8(esi + 5) = LO8(ebx);
    MEM8(esi + 6) = LO8(ebx);
    edi = 3;

loc_0015C8F6: ;
    PUSH32(esp, 0x0015C8FBu); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_0015C8FB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015C901u); RECOMP_ABI_CALL(0x00080B40u, sub_00080B40); /* call 0x00080B40 */

loc_0015C901: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015C8F6; /* jne: not equal / not zero */

loc_0015C907: ;
    _fa = (uint32_t)(MEM8(esp + 0xF)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xF), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0015C913; /* jne: not equal / not zero */

loc_0015C90E: ;
    PUSH32(esp, 0x0015C913u); RECOMP_ABI_CALL(0x00070D60u, sub_00070D60); /* call 0x00070D60 */

loc_0015C913: ;
    MEM8(esi + 0xA4) = LO8(ebx);
    goto loc_0015C96A;

loc_0015C91B: ;
    PUSH32(esp, ebx);
    eax = ~eax;
    MEM16(esi + 0xA6) = MEM16(esi + 0xA6) & LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x10);
    ecx = esi;
    PUSH32(esp, 0x0015C92Eu); RECOMP_ABI_CALL(0x0015C600u, sub_0015C600); /* call 0x0015C600 */

loc_0015C92E: ;
    goto loc_0015C96A;

loc_0015C930: ;
    ecx = eax + -32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015C96A; /* ja: above (unsigned >) */

loc_0015C93B: ;
    ecx = ZX8(MEM8(ecx + 0x15C9BC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x15C9B0); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0015C949u) goto loc_0015C949;
    if (_jt == 0x0015C961u) goto loc_0015C961;
    if (_jt == 0x0015C96Au) goto loc_0015C96A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015C949: ;
    PUSH32(esp, ebx);
    eax = ~eax;
    MEM16(esi + 0xA6) = MEM16(esi + 0xA6) & LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x100);
    ecx = esi;
    PUSH32(esp, 0x0015C95Fu); RECOMP_ABI_CALL(0x0015C600u, sub_0015C600); /* call 0x0015C600 */

loc_0015C95F: ;
    goto loc_0015C96A;

loc_0015C961: ;
    eax = ~eax;
    MEM16(esi + 0xA6) = MEM16(esi + 0xA6) & LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_0015C96A: ;
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C989; /* jne: not equal / not zero */

loc_0015C973: ;
    _fa = (uint32_t)(MEM8(esp + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xB), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C989; /* jne: not equal / not zero */

loc_0015C979: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015C97Fu); RECOMP_ABI_CALL(0x00149C40u, sub_00149C40); /* call 0x00149C40 */

loc_0015C97F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x99) = 0xFF;

loc_0015C989: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015CAA0
 * Original: 0x0015CAA0 - 0x0015CCDE (574 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0015CAA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    MEM32(edi) = ebx;
    MEM8(esi + 0x8C) = LO8(ebx);
    MEM8(esi + 0x9B) = 0xFF;
    _fa = (uint32_t)(MEM8(0x3C250F)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3C250F), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CCD8; /* jne: not equal / not zero */

loc_0015CAC6: ;
    _fa = (uint32_t)(MEM8(0x3C250E)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3C250E), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CCD8; /* jne: not equal / not zero */

loc_0015CAD2: ;
    xmm0 = XMM_SCALAR(MEMF(0x3C2514)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca > _fcb)) goto loc_0015CCD8; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0015CAE7: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CCD8; /* jne: not equal / not zero */

loc_0015CAEF: ;
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0xA6), 0x180 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015CCD8; /* jne: not equal / not zero */

loc_0015CAFE: ;
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015CB09u); RECOMP_ABI_CALL(0x000C5EC0u, sub_000C5EC0); /* call 0x000C5EC0 */

loc_0015CB09: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015CB1Cu); RECOMP_ABI_CALL(0x000C52D0u, sub_000C52D0); /* call 0x000C52D0 */

loc_0015CB1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CB25; /* je: equal / zero */

loc_0015CB20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CB7D; /* jne: not equal / not zero */

loc_0015CB25: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x203C)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x203C), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CB7D; /* je: equal / zero */

loc_0015CB34: ;
    _fa = (uint32_t)(MEM8(esi + 0xA6)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA6), 2 (8-bit) */
    MEM8(esi + 0x8C) = 1;
    MEM8(esi + 0x9A) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0015CCD8; /* jne: not equal / not zero */

loc_0015CB4E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x3C94F1));
    ecx = 0x3C6600;
    MEM8(esi + 0x9B) = LO8(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015CB66u); RECOMP_ABI_CALL(0x000C6210u, sub_000C6210); /* call 0x000C6210 */

loc_0015CB66: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x9B);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0015CB77u); RECOMP_ABI_CALL(0x0015C600u, sub_0015C600); /* call 0x0015C600 */

loc_0015CB77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0015CB7D: ;
    SET_LO16(eax, MEM16(esi + 0xA6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM8(esi + 0x8C) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0015CBA5; /* je: equal / zero */

loc_0015CB8E: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x9B);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0015CB9Fu); RECOMP_ABI_CALL(0x0015C860u, sub_0015C860); /* call 0x0015C860 */

loc_0015CB9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0015CBA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015CBD1; /* je: equal / zero */

loc_0015CBA9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x89);
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015CBBBu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015CBBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CBD1; /* je: equal / zero */

loc_0015CBBF: ;
    ecx = MEM32(esp + 0x14);
    MEM8(ecx) = LO8(ebx);
    MEM32(edi) = 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0015CBD1: ;
    _fa = (uint32_t)(MEM8(0x3C250D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3C250D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CCD8; /* jne: not equal / not zero */

loc_0015CBDD: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CCD8; /* je: equal / zero */

loc_0015CBE6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x89);
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015CBF8u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015CBF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CC12; /* jne: not equal / not zero */

loc_0015CBFC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8A);
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015CC0Eu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015CC0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CC5D; /* je: equal / zero */

loc_0015CC12: ;
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA6), 0x20 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CC2E; /* jne: not equal / not zero */

loc_0015CC1C: ;
    edx = MEM32(esp + 0x14);
    MEM8(edx) = LO8(ebx);
    MEM32(edi) = 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0015CC2E: ;
    PUSH32(esp, 0x31F1E0);
    PUSH32(esp, 0x0015CC38u); RECOMP_ABI_CALL(0x00148920u, sub_00148920); /* call 0x00148920 */

loc_0015CC38: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA6), LO16(ebx) (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx) = LO8(eax);
    MEM8(esi + 0x9A) = LO8(ebx);
    MEM32(edi) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0015CC5D: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CCD8; /* je: equal / zero */

loc_0015CC62: ;
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA6), 0x40 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CCD8; /* jne: not equal / not zero */

loc_0015CC6C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x90);
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015CC7Eu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015CC7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015CCA9; /* je: equal / zero */

loc_0015CC83: ;
    MEM32(edi) = 0x40;
    PUSH32(esp, 0x0015CC8Eu); RECOMP_ABI_CALL(0x00160F10u, sub_00160F10); /* call 0x00160F10 */

loc_0015CC8E: ;
    ecx = eax;
    PUSH32(esp, 0x0015CC95u); RECOMP_ABI_CALL(0x00160D90u, sub_00160D90); /* call 0x00160D90 */

loc_0015CC95: ;
    PUSH32(esp, 0x0015CC9Au); RECOMP_ABI_CALL(0x00160F10u, sub_00160F10); /* call 0x00160F10 */

loc_0015CC9A: ;
    SET_LO8(edx, MEM8(eax + 1));
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = LO8(edx);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0015CCA9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x92);
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015CCBAu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015CCBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CCD8; /* je: equal / zero */

loc_0015CCBE: ;
    ecx = MEM32(esp + 0x14);
    MEM8(ecx) = LO8(ebx);
    PUSH32(esp, 1);
    MEM32(edi) = 0x40;
    PUSH32(esp, 0x0015CCD1u); RECOMP_ABI_CALL(0x00160F10u, sub_00160F10); /* call 0x00160F10 */

loc_0015CCD1: ;
    ecx = eax;
    PUSH32(esp, 0x0015CCD8u); RECOMP_ABI_CALL(0x00160D90u, sub_00160D90); /* call 0x00160D90 */

loc_0015CCD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015CCE0
 * Original: 0x0015CCE0 - 0x0015CEEA (522 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CCE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(eax) = 0;
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0xA6), 0x180 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015CEE5; /* jne: not equal / not zero */

loc_0015CCFD: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED0));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015CED4; /* jbe: below or equal (unsigned <=) */

loc_0015CD13: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    goto loc_0015CD20;

    /* nop */

loc_0015CD20: ;
    SET_LO8(ecx, MEM8(eax + ebp + 0x1E9C));
    MEM8(esp + 0x10) = LO8(ecx);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015CD3Au); RECOMP_ABI_CALL(0x000C52D0u, sub_000C52D0); /* call 0x000C52D0 */

loc_0015CD3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CE51; /* jne: not equal / not zero */

loc_0015CD43: ;
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA6), 0x20 (16-bit) */
    edi = MEM32(esp + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_0015CD5E; /* jne: not equal / not zero */

loc_0015CD51: ;
    edx = MEM32(esp + 0x18);
    MEM8(edi) = 0;
    MEM32(edx) = 0x20;

loc_0015CD5E: ;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CDD4; /* je: equal / zero */

loc_0015CD69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CE5A; /* jne: not equal / not zero */

loc_0015CD71: ;
    SET_LO16(eax, MEM16(esi + 0xA6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015CE74; /* jne: not equal / not zero */

loc_0015CD80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015CE5A; /* je: equal / zero */

loc_0015CD88: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x89);
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015CD9Cu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015CD9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CE5A; /* je: equal / zero */

loc_0015CDA4: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x9B);
    ecx = ZX8(MEM8(esp + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CE5A; /* jne: not equal / not zero */

loc_0015CDB8: ;
    eax = MEM32(esp + 0x18);
    MEM8(edi) = 0;
    MEM32(eax) = 0x10;
    MEM32(esi + 0xA0) = 0xFFFFFFFFu;
    goto loc_0015CED2;

loc_0015CDD4: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CE5A; /* je: equal / zero */

loc_0015CDDB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x89);
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0015CDEFu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0015CDEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CE5A; /* je: equal / zero */

loc_0015CDF3: ;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015CE5A; /* je: equal / zero */

loc_0015CE02: ;
    PUSH32(esp, 0x0015CE07u); RECOMP_ABI_CALL(0x00177CE0u, sub_00177CE0); /* call 0x00177CE0 */

loc_0015CE07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CE5A; /* je: equal / zero */

loc_0015CE0C: ;
    PUSH32(esp, 0x31F1E0);
    PUSH32(esp, 0x0015CE16u); RECOMP_ABI_CALL(0x00148920u, sub_00148920); /* call 0x00148920 */

loc_0015CE16: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA6), 0 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edi) = LO8(ecx);
    MEM8(esi + 0x9A) = LO8(ebx);
    MEM32(eax) = 1;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CE87; /* je: equal / zero */

loc_0015CE3B: ;
    edx = ZX8(MEM8(esp + 0x10));
    MEM32(0x51FB28) = edx;
    MEM32(0x3785A8) = ebx;
    goto loc_0015CED2;

loc_0015CE51: ;
    _fa = (uint32_t)(MEM8(esi + 0xA6)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA6), 0x12 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015CEA3; /* je: equal / zero */

loc_0015CE5A: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1ED0));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CD20; /* jl: less (signed <) */

loc_0015CE72: ;
    goto loc_0015CED2;

loc_0015CE74: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x9B);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0015CE85u); RECOMP_ABI_CALL(0x0015C860u, sub_0015C860); /* call 0x0015C860 */

loc_0015CE85: ;
    goto loc_0015CED2;

loc_0015CE87: ;
    _fa = (uint32_t)(MEM32(0x3785A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3785A8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CE97; /* je: equal / zero */

loc_0015CE8F: ;
    MEM32(eax) = 0;
    goto loc_0015CED2;

loc_0015CE97: ;
    MEM32(0x3785A8) = 0xFFFFFFFFu;
    goto loc_0015CED2;

loc_0015CEA3: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    eax = ZX8(LO8(ebx));
    MEM8(esi + 0x9B) = LO8(ecx);
    PUSH32(esp, edi);
    ecx = 0x3C6600;
    MEM32(esi + 0xA0) = eax;
    PUSH32(esp, 0x0015CEC1u); RECOMP_ABI_CALL(0x000C6210u, sub_000C6210); /* call 0x000C6210 */

loc_0015CEC1: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x9B);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0015CED2u); RECOMP_ABI_CALL(0x0015C600u, sub_0015C600); /* call 0x0015C600 */

loc_0015CED2: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0015CED4: ;
    _fa = (uint32_t)(MEM8(esi + 0xA6)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA6), 0x12 (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x8C) = LO8(eax);
    POP32(esp, ebx);

loc_0015CEE5: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015CEF0
 * Original: 0x0015CEF0 - 0x0015CFE3 (243 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015CEF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 0xA6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xA6), 0 (16-bit) */
    MEM32(esp + 8) = 0;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 7) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CF5F; /* je: equal / zero */

loc_0015CF14: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CF5F; /* je: equal / zero */

loc_0015CF1B: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x1ED0), 1 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015CF46; /* ja: above (unsigned >) */

loc_0015CF2A: ;
    SET_LO8(eax, MEM8(0x51FB5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CF46; /* jne: not equal / not zero */

loc_0015CF33: ;
    edx = esp + 7;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015CF44u); RECOMP_ABI_CALL(0x0015CAA0u, sub_0015CAA0); /* call 0x0015CAA0 */

loc_0015CF44: ;
    goto loc_0015CF57;

loc_0015CF46: ;
    ecx = esp + 7;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0015CF57u); RECOMP_ABI_CALL(0x0015CCE0u, sub_0015CCE0); /* call 0x0015CCE0 */

loc_0015CF57: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CFC4; /* jne: not equal / not zero */

loc_0015CF5F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xA6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CF9F; /* je: equal / zero */

loc_0015CF6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x192) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x192 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015CF9F; /* jne: not equal / not zero */

loc_0015CF74: ;
    ecx = esi;
    PUSH32(esp, 0x0015CF7Bu); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_0015CF7B: ;
    MEM8(esi + 3) = MEM8(esi + 3) | LO8(eax);
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0015CF9F; /* je: equal / zero */

loc_0015CF80: ;
    eax = 1;

loc_0015CF85: ;
    edx = ZX16(MEM16(esi + 0xA6));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015CF9F; /* je: equal / zero */

loc_0015CF90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CF9F; /* je: equal / zero */

loc_0015CF95: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015CF9Fu); RECOMP_ABI_CALL(0x0015C860u, sub_0015C860); /* call 0x0015C860 */

loc_0015CF9F: ;
    SET_LO8(eax, MEM8(esi + 0x99));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015CFBD; /* jle: less or equal (signed <=) */

loc_0015CFA9: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0x99) = LO8(eax);
    if ((_fa != 0)) goto loc_0015CFBD; /* jne: not equal / not zero */

loc_0015CFB3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0015CFBAu); RECOMP_ABI_CALL(0x00149C40u, sub_00149C40); /* call 0x00149C40 */

loc_0015CFBA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015CFBD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0015CFC4: ;
    SET_LO8(ecx, MEM8(esp + 7));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CF85; /* je: equal / zero */

loc_0015CFCC: ;
    ecx = ZX16(MEM16(esi + 0xA6));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015CF9F; /* jne: not equal / not zero */

loc_0015CFD7: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015CFE1u); RECOMP_ABI_CALL(0x0015C600u, sub_0015C600); /* call 0x0015C600 */

loc_0015CFE1: ;
    goto loc_0015CF9F;

}

/**
 * sub_0015CFF0
 * Original: 0x0015CFF0 - 0x0015CFF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CFF0(void)
{

loc_0015CFF0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0015D000
 * Original: 0x0015D000 - 0x0015D001 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D000(void)
{

loc_0015D000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015D010
 * Original: 0x0015D010 - 0x0015D027 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D010: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x51D6DE) = LO8(eax);
    MEM8(0x51D6DD) = LO8(eax);
    MEM8(0x51D6DC) = LO8(eax);
    MEM32(0x51D6E0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015D030
 * Original: 0x0015D030 - 0x0015D133 (259 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D030: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x70);
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    eax = MEM32(esp + 0x6C);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(esp + 0x74);
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(esp + 0x78);
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(esp + 0x68);
    eax = MEM32(eax);
    PUSH32(esp, 5);
    MEMF(esp + 0x4C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    PUSH32(esp, 4);
    ecx = esp + 8;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = eax;
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x50) = eax;
    MEMF(esp + 0x58) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0x0015D12Fu); RECOMP_ABI_CALL(0x000BF900u, sub_000BF900); /* call 0x000BF900 */

loc_0015D12F: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015D140
 * Original: 0x0015D140 - 0x0015D3E5 (677 bytes, 230 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm0 = XMM_SCALAR(MEMF(0x31F1EC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    SET_LO8(eax, 0xFF);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEM8(esp + 0xE) = LO8(eax);
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x18));
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(0x51D6D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D3DE; /* je: equal / zero */

loc_0015D225: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D256u); RECOMP_ABI_CALL(0x0015D030u, sub_0015D030); /* call 0x0015D030 */

loc_0015D256: ;
    ebx = MEM32(esp + 0x44);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    edx = MEM32(0x51D6D4);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D286u); RECOMP_ABI_CALL(0x0015D030u, sub_0015D030); /* call 0x0015D030 */

loc_0015D286: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D6D4);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D2B8u); RECOMP_ABI_CALL(0x0015D030u, sub_0015D030); /* call 0x0015D030 */

loc_0015D2B8: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    eax = MEM32(0x51D6D4);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D2E7u); RECOMP_ABI_CALL(0x0015D030u, sub_0015D030); /* call 0x0015D030 */

loc_0015D2E7: ;
    ecx = MEM32(esp + 0x60);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D6D4);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D317u); RECOMP_ABI_CALL(0x0015D030u, sub_0015D030); /* call 0x0015D030 */

loc_0015D317: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    eax = MEM32(0x51D6D4);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D346u); RECOMP_ABI_CALL(0x0015D030u, sub_0015D030); /* call 0x0015D030 */

loc_0015D346: ;
    esi = MEM32(ebp + 0x14);
    ecx = MEM32(esp + 0x60);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(0x51D6D4);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D37Cu); RECOMP_ABI_CALL(0x0015D030u, sub_0015D030); /* call 0x0015D030 */

loc_0015D37C: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    eax = MEM32(0x51D6D4);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D3A8u); RECOMP_ABI_CALL(0x0015D030u, sub_0015D030); /* call 0x0015D030 */

loc_0015D3A8: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(esp + 0x60);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = MEM32(0x51D6D4);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D3DBu); RECOMP_ABI_CALL(0x0015D030u, sub_0015D030); /* call 0x0015D030 */

loc_0015D3DB: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015D3DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015D3F0
 * Original: 0x0015D3F0 - 0x0015D4AE (190 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D3F0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    SET_LO8(eax, 0xFF);
    MEM8(esp + 2) = LO8(eax);
    MEM8(esp + 1) = LO8(eax);
    MEM8(esp) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x30));
    MEM8(esp + 3) = LO8(eax);
    eax = MEM32(0x51D6D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D4AA; /* je: equal / zero */

loc_0015D454: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x31F1EC); /* addss */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x31F1F0); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015D4A7u); RECOMP_ABI_CALL(0x0015D030u, sub_0015D030); /* call 0x0015D030 */

loc_0015D4A7: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015D4AA: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015D4B0
 * Original: 0x0015D4B0 - 0x0015D508 (88 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D4B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0015D4B8u); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_0015D4B8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x51D6D8);
    PUSH32(esp, 0x51D6D0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFD0B0FE4u);
    ecx = eax;
    PUSH32(esp, 0x0015D4D2u); RECOMP_ABI_CALL(0x001579A0u, sub_001579A0); /* call 0x001579A0 */

loc_0015D4D2: ;
    eax = esp;
    PUSH32(esp, 0xFACB8295u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015D4E0u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0015D4E0: ;
    ecx = MEM32(eax);
    MEM32(0x51D6D4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    PUSH32(esp, 0x0015D4F3u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0015D4F3: ;
    eax = MEM32(0x51D6D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D504; /* je: equal / zero */

loc_0015D4FC: ;
    MEM8(eax + 0x1A) = 0;
    MEM8(eax + 0x1B) = 0;

loc_0015D504: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015D510
 * Original: 0x0015D510 - 0x0015D82A (794 bytes, 198 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D510(void)
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

loc_0015D510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(0x388876));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(esi) (16-bit) */
    PUSH32(esp, edi);
    ebx = 0xFF;
    ecx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0015D5A8; /* je: equal / zero */

loc_0015D536: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D5A8; /* jne: not equal / not zero */

loc_0015D53B: ;
    SET_LO8(eax, MEM8(0x388874));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D5A8; /* jne: not equal / not zero */

loc_0015D544: ;
    SET_LO8(edx, MEM8(0x51D6DC));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D61C; /* jne: not equal / not zero */

loc_0015D552: ;
    xmm0 = XMM_SCALAR(MEMF(0x31F1F4)); /* movss */
    MEMF(0x3785AC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x31F1F8)); /* movss */
    MEMF(0x3785B0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x31F1FC)); /* movss */
    SET_LO8(edx, LO8(ecx));
    MEMF(0x51D6E4) = xmm0.f[0]; /* movss */
    MEM32(0x51D6E0) = esi;
    MEM8(0x51D6DC) = LO8(edx);
    MEM8(0x51D6DD) = LO8(ecx);
    MEM32(0x51D6E8) = esi;
    MEM32(0x51D6EC) = 0xC;
    goto loc_0015D61C;

loc_0015D5A8: ;
    SET_LO8(edx, MEM8(0x51D6DC));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D60C; /* jne: not equal / not zero */

loc_0015D5B2: ;
    xmm0 = XMM_SCALAR(MEMF(0x319DBC)); /* movss */
    MEMF(0x3785AC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x31F280)); /* movss */
    MEMF(0x3785B0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3162B8)); /* movss */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(0x51D6E4) = xmm0.f[0]; /* movss */
    MEM32(0x51D6E0) = 0x14;
    MEM8(0x51D6DC) = LO8(edx);
    MEM8(0x51D6DE) = LO8(ecx);
    MEM32(0x51D6E8) = ebx;
    MEM32(0x51D6EC) = 0xFFFFFFF4u;
    goto loc_0015D61C;

loc_0015D60C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015D61C; /* jne: not equal / not zero */

loc_0015D610: ;
    _fa = (uint32_t)(MEM32(0x51D6E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x51D6E0), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015D823; /* jle: less or equal (signed <=) */

loc_0015D61C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM16(esp + 0x28) = LO16(esi);
    ecx = 0x1F;
    edi = esp + 0x2A;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D643; /* je: equal / zero */

loc_0015D634: ;
    PUSH32(esp, 0x1033F1E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D63Eu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0015D63E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015D65D;

loc_0015D643: ;
    PUSH32(esp, 0x1EAC83AC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D64Du); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0015D64D: ;
    ecx = MEM32(0x51D6E0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x51D6E0) = ecx;

loc_0015D65D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015D670; /* je: equal / zero */

loc_0015D661: ;
    PUSH32(esp, 0x3F);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D66Eu); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0015D66E: ;
    goto loc_0015D6A3;

loc_0015D670: ;
    PUSH32(esp, 0x31F238);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D67Au); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0015D67A: ;
    SET_LO8(eax, MEM8(0x51D6DC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0015D694; /* je: equal / zero */

loc_0015D688: ;
    PUSH32(esp, 0x31F21C);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    goto loc_0015D69E;

loc_0015D694: ;
    PUSH32(esp, 0x31F204);
    eax = esp + 0x30;
    PUSH32(esp, eax);

loc_0015D69E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D6A3u); RECOMP_ABI_CALL(0x002BF6E7u, sub_002BF6E7); /* call 0x002BF6E7 */

loc_0015D6A3: ;
    SET_LO8(ecx, MEM8(0x51D6E8));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x1C;
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(0x51D6D0);
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D6CCu); RECOMP_ABI_CALL(0x000AD620u, sub_000AD620); /* call 0x000AD620 */

loc_0015D6CC: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x51D6D0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D6DCu); RECOMP_ABI_CALL(0x000AD5E0u, sub_000AD5E0); /* call 0x000AD5E0 */

loc_0015D6DC: ;
    eax = MEM32(0x51D6E8);
    _fb = (uint32_t)(MEM32(0x51D6EC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x51D6EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x51D6E8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0015D6F8; /* jle: less or equal (signed <=) */

loc_0015D6F0: ;
    MEM32(0x51D6E8) = ebx;
    goto loc_0015D702;

loc_0015D6F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015D702; /* jge: greater or equal (signed >=) */

loc_0015D6FC: ;
    MEM32(0x51D6E8) = esi;

loc_0015D702: ;
    eax = MEM32(0x51D6D0);
    SET_LO8(ecx, MEM8(eax + 5));
    SET_LO8(ebx, MEM8(eax + 4));
    MEM8(eax + 4) = 0;
    MEM8(eax + 5) = 0;
    eax = MEM32(0x38DC64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x38DC60);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 0x17) = LO8(ecx);
    ecx = MEM32(0x51D6D0);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D74Eu); RECOMP_ABI_CALL(0x000AD050u, sub_000AD050); /* call 0x000AD050 */

loc_0015D74E: ;
    ecx = MEM32(0x51D6D0);
    PUSH32(esp, 6);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D75Du); RECOMP_ABI_CALL(0x000AD040u, sub_000AD040); /* call 0x000AD040 */

loc_0015D75D: ;
    ecx = MEM32(0x51D6D0);
    PUSH32(esp, 0x3F99999A);
    PUSH32(esp, 0x3F99999A);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D772u); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_0015D772: ;
    ecx = MEM32(0x51D6D0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x190);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D792u); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_0015D792: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D799u); RECOMP_ABI_CALL(0x00157AF0u, sub_00157AF0); /* call 0x00157AF0 */

loc_0015D799: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x20); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38DC58); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    edx = MEM32(0x51D6D0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D7D5u); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_0015D7D5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D7DCu); RECOMP_ABI_CALL(0x00157740u, sub_00157740); /* call 0x00157740 */

loc_0015D7DC: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x51D6D0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D7ECu); RECOMP_ABI_CALL(0x000AD5E0u, sub_000AD5E0); /* call 0x000AD5E0 */

loc_0015D7EC: ;
    ecx = MEM32(0x51D6D0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D7F8u); RECOMP_ABI_CALL(0x000AD040u, sub_000AD040); /* call 0x000AD040 */

loc_0015D7F8: ;
    ecx = MEM32(0x51D6D0);
    SET_LO8(eax, MEM8(esp + 0x17));
    MEM8(ecx + 4) = LO8(ebx);
    edx = MEM32(0x51D6D0);
    PUSH32(esp, 0x3F800000);
    MEM8(edx + 5) = LO8(eax);
    ecx = MEM32(0x51D6D0);
    PUSH32(esp, 0x3F800000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015D823u); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_0015D823: ;
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
 * sub_0015D830
 * Original: 0x0015D830 - 0x0015D8FE (206 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D830: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0015D83Du); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0015D83D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0xDC) = eax;
    MEM32(esi + 0xE0) = eax;
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x31F284;
    MEM8(esi + 0xF8) = 1;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD4) = eax;
    MEM32(esi + 0xD8) = eax;
    eax = 0x10;
    MEM32(esi + 0xE8) = eax;
    MEM32(esi + 0xEC) = eax;
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015D900
 * Original: 0x0015D900 - 0x0015D959 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D900: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xEC) = eax;
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0xF8) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_0015D954; /* jle: less or equal (signed <=) */

loc_0015D921: ;
    PUSH32(esp, ebx);
    ebx = esi + 0xAC;
    goto loc_0015D930;

    /* nop */

loc_0015D930: ;
    ecx = MEM32(esi + 0xEC);
    edx = MEM32(esi + 0xE8);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015D945u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0015D945: ;
    eax = MEM32(esi + 0xE0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015D930; /* jl: less (signed <) */

loc_0015D953: ;
    POP32(esp, ebx);

loc_0015D954: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015D960
 * Original: 0x0015D960 - 0x0015D9B9 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D960: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xE8) = eax;
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0xF8) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_0015D9B4; /* jle: less or equal (signed <=) */

loc_0015D981: ;
    PUSH32(esp, ebx);
    ebx = esi + 0xAC;
    goto loc_0015D990;

    /* nop */

loc_0015D990: ;
    ecx = MEM32(esi + 0xEC);
    edx = MEM32(esi + 0xE8);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015D9A5u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0015D9A5: ;
    eax = MEM32(esi + 0xE0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015D990; /* jl: less (signed <) */

loc_0015D9B3: ;
    POP32(esp, ebx);

loc_0015D9B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015D9C0
 * Original: 0x0015D9C0 - 0x0015D9F9 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015D9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015D9C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x0015D9C9u); RECOMP_ABI_CALL(0x0015AD50u, sub_0015AD50); /* call 0x0015AD50 */

loc_0015D9C9: ;
    eax = MEM32(ebx + 0xE4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015D9F6; /* jle: less or equal (signed <=) */

loc_0015D9D5: ;
    PUSH32(esp, edi);
    edi = ebx + 0xBC;
    /* nop */

loc_0015D9E0: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0015D9E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015D9E4u); } /* indirect call */
    }

loc_0015D9E7: ;
    eax = MEM32(ebx + 0xE4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015D9E0; /* jl: less (signed <) */

loc_0015D9F5: ;
    POP32(esp, edi);

loc_0015D9F6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015DA00
 * Original: 0x0015DA00 - 0x0015DA48 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DA00: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0xDC);
    MEM32(ecx + 0x94) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015DA3E; /* jle: less or equal (signed <=) */

loc_0015DA16: ;
    PUSH32(esp, esi);
    edx = ecx + 0x9C;
    PUSH32(esp, edi);
    edi = edi;

loc_0015DA20: ;
    esi = MEM32(edx);
    edi = MEM32(ecx + 0x94);
    MEM32(esi + 0x94) = edi;
    esi = MEM32(ecx + 0xDC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015DA20; /* jl: less (signed <) */

loc_0015DA3C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0015DA3E: ;
    MEM8(ecx + 0xF8) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015DA50
 * Original: 0x0015DA50 - 0x0015DA9A (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DA50: ;
    edx = MEM32(ecx + 0xDC);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(ecx + 0x90) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0015DA90; /* jle: less or equal (signed <=) */

loc_0015DA6A: ;
    PUSH32(esp, esi);
    edx = ecx + 0x9C;
    PUSH32(esp, edi);

loc_0015DA72: ;
    esi = MEM32(edx);
    edi = MEM32(ecx + 0x90);
    MEM32(esi + 0x90) = edi;
    esi = MEM32(ecx + 0xDC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015DA72; /* jl: less (signed <) */

loc_0015DA8E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0015DA90: ;
    MEM8(ecx + 0xF8) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015DAA0
 * Original: 0x0015DAA0 - 0x0015DAA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DAA0(void)
{

loc_0015DAA0: ;
    eax = MEM32(ecx + 0x98);
    esp += 4; return; /* ret */

}

/**
 * sub_0015DAB0
 * Original: 0x0015DAB0 - 0x0015DB5B (171 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DAB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xDC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0015DAEC; /* jle: less or equal (signed <=) */

loc_0015DAC4: ;
    edi = esi + 0x9C;
    /* nop */

loc_0015DAD0: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DADC; /* je: equal / zero */

loc_0015DAD6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0015DADCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DADAu); } /* indirect call */
    }

loc_0015DADC: ;
    MEM32(edi) = ebp;
    eax = MEM32(esi + 0xDC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015DAD0; /* jl: less (signed <) */

loc_0015DAEC: ;
    eax = MEM32(esi + 0xE0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0xDC) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0015DB20; /* jle: less or equal (signed <=) */

loc_0015DAFE: ;
    edi = esi + 0xAC;

loc_0015DB04: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DB10; /* je: equal / zero */

loc_0015DB0A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0015DB10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DB0Eu); } /* indirect call */
    }

loc_0015DB10: ;
    MEM32(edi) = ebp;
    eax = MEM32(esi + 0xE0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015DB04; /* jl: less (signed <) */

loc_0015DB20: ;
    ecx = MEM32(esi + 0xE4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esi + 0xE0) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0015DB50; /* jle: less or equal (signed <=) */

loc_0015DB32: ;
    ecx = esi + 0xBC;
    goto loc_0015DB40;

    /* nop */

loc_0015DB40: ;
    MEM32(ecx) = ebp;
    edx = MEM32(esi + 0xE4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015DB40; /* jl: less (signed <) */

loc_0015DB50: ;
    POP32(esp, edi);
    MEM32(esi + 0xE4) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015DB60
 * Original: 0x0015DB60 - 0x0015DB6A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DB60: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015DB66u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0015DB66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015DB70
 * Original: 0x0015DB70 - 0x0015DB99 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DB70: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31F284;
    PUSH32(esp, 0x0015DB7Eu); RECOMP_ABI_CALL(0x0015DAB0u, sub_0015DAB0); /* call 0x0015DAB0 */

loc_0015DB7E: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DB91; /* je: equal / zero */

loc_0015DB88: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015DB8Eu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0015DB8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015DB91: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_0015DBA0
 * Original: 0x0015DBA0 - 0x0015DC74 (212 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DBA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0xDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xDC), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015DBC3; /* jl: less (signed <) */

loc_0015DBAF: ;
    PUSH32(esp, 0x31F2E8);
    PUSH32(esp, 0x0015DBB9u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0015DBB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0015DBC3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x31F2AC);
    PUSH32(esp, 0x0015DBD8u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0015DBD8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DBEF; /* je: equal / zero */

loc_0015DBDF: ;
    PUSH32(esp, 0xEF4419A3u);
    ecx = eax;
    PUSH32(esp, 0x0015DBEBu); RECOMP_ABI_CALL(0x00157F80u, sub_00157F80); /* call 0x00157F80 */

loc_0015DBEB: ;
    esi = eax;
    goto loc_0015DBF1;

loc_0015DBEF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015DBF1: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015DBFDu); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0015DBFD: ;
    ecx = MEM32(edi + 0x94);
    MEM32(esi + 0x94) = ecx;
    eax = MEM32(edi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 8) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = HI8(eax);
    eax = MEM32(esi);
    MEM8(esi + 0x73) = 1;
    edx = MEM32(edi + 0x90);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x90) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0015DC38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DC35u); } /* indirect call */
    }

loc_0015DC38: ;
    ecx = MEM32(edi + 0xDC);
    MEM32(edi + ecx * 4 + 0x9C) = esi;
    edx = MEM32(edi + 0xE4);
    MEM32(edi + edx * 4 + 0xBC) = esi;
    ecx = MEM32(edi + 0xDC);
    eax = MEM32(edi + 0xE4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(edi + 0xDC) = ecx;
    MEM32(edi + 0xE4) = eax;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015DC80
 * Original: 0x0015DC80 - 0x0015DD8B (267 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DC80: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE0), 4 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0015DCA5; /* jl: less (signed <) */

loc_0015DC90: ;
    PUSH32(esp, 0x31F378);
    PUSH32(esp, 0x0015DC9Au); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0015DC9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0015DCA5: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x31F340);
    PUSH32(esp, 0x0015DCB9u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0015DCB9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DCD0; /* je: equal / zero */

loc_0015DCC0: ;
    PUSH32(esp, 0x6989D80B);
    ecx = eax;
    PUSH32(esp, 0x0015DCCCu); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_0015DCCC: ;
    edi = eax;
    goto loc_0015DCD2;

loc_0015DCD0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015DCD2: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015DCE1u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0015DCE1: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(edx + 0xC) = ecx;
    ecx = edi;
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, 0x0015DD0Eu); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0015DD0E: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0015DD17u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0015DD17: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DD2F; /* je: equal / zero */

loc_0015DD1F: ;
    ecx = MEM32(esi + 0xEC);
    edx = MEM32(esi + 0xE8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_0015DD3F;

loc_0015DD2F: ;
    ecx = edi;
    PUSH32(esp, 0x0015DD36u); RECOMP_ABI_CALL(0x0015E8D0u, sub_0015E8D0); /* call 0x0015E8D0 */

loc_0015DD36: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0015DD3Eu); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_0015DD3E: ;
    PUSH32(esp, eax);

loc_0015DD3F: ;
    ecx = edi;
    PUSH32(esp, 0x0015DD46u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0015DD46: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0015DD4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DD4Cu); } /* indirect call */
    }

loc_0015DD4F: ;
    ecx = MEM32(esi + 0xE0);
    MEM32(esi + ecx * 4 + 0xAC) = edi;
    edx = MEM32(esi + 0xE4);
    MEM32(esi + edx * 4 + 0xBC) = edi;
    ecx = MEM32(esi + 0xE0);
    eax = MEM32(esi + 0xE4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xE0) = ecx;
    MEM32(esi + 0xE4) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015DD90
 * Original: 0x0015DD90 - 0x0015DE3B (171 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0015DD90: ;
    eax = MEM32(ecx + 0xE4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0015DDE2; /* jle: less or equal (signed <=) */

loc_0015DDAA: ;
    eax = ecx + 0xBC;

loc_0015DDB0: ;
    esi = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x4C); /* addss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    esi = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x50); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015DDD4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x50)) */

loc_0015DDCE: ;
    esi = MEM32(esi + 0x50);
    MEM32(ecx + 0x50) = esi;

loc_0015DDD4: ;
    esi = MEM32(ecx + 0xE4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015DDB0; /* jl: less (signed <) */

loc_0015DDE2: ;
    edx = MEM32(ecx + 0xDC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015DE1E; /* jle: less or equal (signed <=) */

loc_0015DDEE: ;
    edx = ecx + 0x9C;

loc_0015DDF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(edx);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DE08; /* je: equal / zero */

loc_0015DDFF: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xF0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015DE10; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xF0)) */

loc_0015DE08: ;
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */

loc_0015DE10: ;
    esi = MEM32(ecx + 0xDC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015DDF4; /* jl: less (signed <) */

loc_0015DE1E: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xF4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x50); /* comiss */
    POP32(esp, esi);
    MEM8(ecx + 0x73) = 1;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015DE3A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x50)) */

loc_0015DE31: ;
    eax = MEM32(ecx + 0xF4);
    MEM32(ecx + 0x50) = eax;

loc_0015DE3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015DE40
 * Original: 0x0015DE40 - 0x0015DFE3 (419 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DE40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xE4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015DE7D; /* jle: less or equal (signed <=) */

loc_0015DE58: ;
    ebx = esi + 0xBC;
    edi = edi;

loc_0015DE60: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0015DE6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015DE6Cu); } /* indirect call */
    }

loc_0015DE6F: ;
    eax = MEM32(esi + 0xE4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015DE60; /* jl: less (signed <) */

loc_0015DE7D: ;
    SET_LO8(eax, MEM8(esi + 0xF8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DE8E; /* je: equal / zero */

loc_0015DE87: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DE8Eu); RECOMP_ABI_CALL(0x0015DD90u, sub_0015DD90); /* call 0x0015DD90 */

loc_0015DE8E: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015DE9Du); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0015DE9D: ;
    SET_LO8(eax, MEM8(esi + 0xF8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015DFDA; /* je: equal / zero */

loc_0015DEAB: ;
    eax = MEM32(esi + 0xE4);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_0015DF0D; /* jle: less or equal (signed <=) */

loc_0015DEBC: ;
    ecx = esi + 0xBC;

loc_0015DEC2: ;
    eax = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm3.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ebx);
    eax = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    eax = MEM32(esi + 0xE4);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38DC5C); /* mulss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_0015DEC2; /* jl: less (signed <) */

loc_0015DF0D: ;
    eax = MEM32(esi + 0xDC);
    xmm3 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0xF0); /* subss */
    xmm4 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    if (CMP_LE(_fas, _fbs)) goto loc_0015DF75; /* jle: less or equal (signed <=) */

loc_0015DF32: ;
    edx = esi + 0x9C;
    goto loc_0015DF40;

    /* nop */

loc_0015DF40: ;
    eax = MEM32(edx);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm2.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ebx);
    eax = MEM32(esi + 0xDC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015DF40; /* jl: less (signed <) */

loc_0015DF75: ;
    eax = MEM32(esi + 0xE0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015DFD3; /* jle: less or equal (signed <=) */

loc_0015DF81: ;
    ecx = esi + 0xAC;
    goto loc_0015DF90;

    /* nop */

loc_0015DF90: ;
    eax = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x50); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm3.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ebx);
    eax = MEM32(esi + 0xE0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015DF90; /* jl: less (signed <) */

loc_0015DFD3: ;
    MEM8(esi + 0xF8) = 0;

loc_0015DFDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015DFF0
 * Original: 0x0015DFF0 - 0x0015E1B5 (453 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015DFF0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x54);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = ebx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebp;
    edx = eax + 1;

loc_0015E005: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E005; /* jne: not equal / not zero */

loc_0015E00C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x31F40C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0015E01Du); RECOMP_ABI_CALL(0x002BE150u, sub_002BE150); /* call 0x002BE150 */

loc_0015E01D: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E1A4; /* je: equal / zero */

loc_0015E02A: ;
    PUSH32(esp, esi);
    goto loc_0015E030;

    /* nop */

loc_0015E030: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015E081; /* jbe: below or equal (unsigned <=) */

loc_0015E034: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x31F3D4);
    PUSH32(esp, 0x0015E048u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0015E048: ;
    esi = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015E056u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0015E056: ;
    SET_LO8(eax, MEM8(esi + ebp + -1));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E066; /* jne: not equal / not zero */

loc_0015E061: ;
    MEM8(esi + ebp) = 0x20;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015E066: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    MEM8(esi + ebp) = 0;
    PUSH32(esp, 0x0015E074u); RECOMP_ABI_CALL(0x0015DBA0u, sub_0015DBA0); /* call 0x0015DBA0 */

loc_0015E074: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015E07Au); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0015E07A: ;
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015E081: ;
    PUSH32(esp, 0x31F3D0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015E08Cu); RECOMP_ABI_CALL(0x002BE150u, sub_002BE150); /* call 0x002BE150 */

loc_0015E08C: ;
    ebx = eax;
    esi = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 1;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015E0A1u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0015E0A1: ;
    MEM8(esp + esi + 0x4D) = 0;
    SET_LO8(eax, MEM8(esp + 0x4D));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E11A; /* jne: not equal / not zero */

loc_0015E0B1: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015E0BBu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0015E0BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2984AE94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2984AE94 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015E0FA; /* jg: greater (signed >) */

loc_0015E0C5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E0F1; /* je: equal / zero */

loc_0015E0C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x904252F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x904252F0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E0E5; /* je: equal / zero */

loc_0015E0CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF068D844u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF068D844u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E17C; /* jne: not equal / not zero */

loc_0015E0D9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x753A4AFE);
    goto loc_0015E175;

loc_0015E0E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x61740A73);
    goto loc_0015E175;

loc_0015E0F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x39C3B412);
    goto loc_0015E175;

loc_0015E0FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2BEB5A25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2BEB5A25 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E111; /* je: equal / zero */

loc_0015E101: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B15C6AC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5B15C6AC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E17C; /* jne: not equal / not zero */

loc_0015E108: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9CE65B69u);
    goto loc_0015E175;

loc_0015E111: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x406089A4);
    goto loc_0015E16C;

loc_0015E11A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E17C; /* jne: not equal / not zero */

loc_0015E11E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x19) = ecx;
    MEM32(esp + 0x1D) = ecx;
    MEM32(esp + 0x21) = ecx;
    MEM32(esp + 0x25) = ecx;
    MEM32(esp + 0x29) = ecx;
    MEM32(esp + 0x2D) = ecx;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0x35) = ecx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x1C;
    MEM16(esp + 0x39) = LO16(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM8(esp + 0x24) = 0;
    MEM8(esp + 0x43) = LO8(ecx);
    PUSH32(esp, 0x0015E15Cu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0015E15C: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015E166u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0015E166: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);

loc_0015E16C: ;
    PUSH32(esp, 0x0015E171u); RECOMP_ABI_CALL(0x0016B410u, sub_0016B410); /* call 0x0016B410 */

loc_0015E171: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);

loc_0015E175: ;
    ecx = ebp;
    PUSH32(esp, 0x0015E17Cu); RECOMP_ABI_CALL(0x0015DC80u, sub_0015DC80); /* call 0x0015DC80 */

loc_0015E17C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x31F40C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015E188u); RECOMP_ABI_CALL(0x002BE150u, sub_002BE150); /* call 0x002BE150 */

loc_0015E188: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E030; /* jne: not equal / not zero */

loc_0015E195: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x60);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_0015E1AC; /* jae: above or equal (unsigned >=) */

loc_0015E1A4: ;
    ecx = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015E1ACu); RECOMP_ABI_CALL(0x0015DBA0u, sub_0015DBA0); /* call 0x0015DBA0 */

loc_0015E1AC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015E1C0
 * Original: 0x0015E1C0 - 0x0015E288 (200 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E1C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = MEM32(ebx + 0x98);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0015E21C; /* je: equal / zero */

loc_0015E1D4: ;
    edi = esi;
    eax = ebp;

loc_0015E1D8: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015E1FC; /* jne: not equal / not zero */

loc_0015E1E0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E1F8; /* je: equal / zero */

loc_0015E1E4: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015E1FC; /* jne: not equal / not zero */

loc_0015E1EE: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015E1D8; /* jne: not equal / not zero */

loc_0015E1F8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0015E201;

loc_0015E1FC: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0015E201: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E281; /* je: equal / zero */

loc_0015E205: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E21C; /* je: equal / zero */

loc_0015E209: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015E20Fu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0015E20F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x98) = 0;

loc_0015E21C: ;
    eax = esi;
    edx = eax + 1;

loc_0015E221: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015E221; /* jne: not equal / not zero */

loc_0015E228: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015E236; /* jne: not equal / not zero */

loc_0015E232: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0015E25B;

loc_0015E236: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, edi);
    PUSH32(esp, 0x31F410);
    PUSH32(esp, 0x0015E246u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0015E246: ;
    ecx = edi;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
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

loc_0015E25B: ;
    ecx = ebx;
    MEM32(ebx + 0x98) = eax;
    PUSH32(esp, 0x0015E268u); RECOMP_ABI_CALL(0x0015DAB0u, sub_0015DAB0); /* call 0x0015DAB0 */

loc_0015E268: ;
    eax = MEM32(ebx + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E281; /* je: equal / zero */

loc_0015E272: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0015E27Au); RECOMP_ABI_CALL(0x0015DFF0u, sub_0015DFF0); /* call 0x0015DFF0 */

loc_0015E27A: ;
    MEM8(ebx + 0xF8) = 1;

loc_0015E281: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015E290
 * Original: 0x0015E290 - 0x0015E2CE (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E290: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31F284;
    PUSH32(esp, 0x0015E29Eu); RECOMP_ABI_CALL(0x0015DAB0u, sub_0015DAB0); /* call 0x0015DAB0 */

loc_0015E29E: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E2B1; /* je: equal / zero */

loc_0015E2A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015E2AEu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0015E2AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015E2B1: ;
    ecx = esi;
    PUSH32(esp, 0x0015E2B8u); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0015E2B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015E2C8; /* je: equal / zero */

loc_0015E2BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015E2C5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0015E2C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015E2C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015E2D0
 * Original: 0x0015E2D0 - 0x0015E2D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E2D0: ;
    g_seh_ebp = ebp; sub_0015A960(); return; /* tail jmp 0x0015A960 */

}

/**
 * sub_0015E2E0
 * Original: 0x0015E2E0 - 0x0015E32C (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E2E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0015E323; /* je: equal / zero */

loc_0015E2EB: ;
    eax = MEM32(esi + 0xE0);
    edx = MEM32(esi);
    eax = eax + eax * 4;
    ecx = esi + eax * 4 + 0x90;
    edi = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edi;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    edi = MEM32(ecx + 8);
    MEM32(eax + 8) = edi;
    edi = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x10);
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0015E323u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015E320u); } /* indirect call */
    }

loc_0015E323: ;
    ecx = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0015AD50(); return; /* tail jmp 0x0015AD50 */

}

/**
 * sub_0015E330
 * Original: 0x0015E330 - 0x0015E373 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E330(void)
{

loc_0015E330: ;
    eax = MEM32(esp + 0x18);
    eax = eax + eax * 4;
    edx = ecx + eax * 4 + 0x90;
    eax = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(esp + 8);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(edx + 0x10) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0015E367u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015E364u); } /* indirect call */
    }

loc_0015E367: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0015E370u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0015E370: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0015E380
 * Original: 0x0015E380 - 0x0015E403 (131 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E380: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0015E390u); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0015E390: ;
    MEM32(esi) = 0x31F448;
    edi = esi + 0x90;
    ebx = 4;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015E3A3: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0015E3B7u); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_0015E3B7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015E3A3; /* jne: not equal / not zero */

loc_0015E3BD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esi + 0x72) = 1;
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x90) = ebp;
    MEM32(esi + 0xA4) = ebp;
    MEM32(esi + 0xB8) = ebp;
    MEM32(esi + 0xCC) = ebp;
    POP32(esp, edi);
    MEM32(esi + 0xE0) = ebp;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015E410
 * Original: 0x0015E410 - 0x0015E813 (1027 bytes, 240 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E410(void)
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

loc_0015E410: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x54) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0015E43E; /* jne: not equal / not zero */

loc_0015E428: ;
    ecx = esp + 0x8C;
    PUSH32(esp, 0x0015E434u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0015E434: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0015E43E: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x48);
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, ebp);
    xmm5 = xmm7; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0015E538; /* jnp: not parity */

loc_0015E509: ;
    edi = esp + 0x20;
    ebp = 4;

loc_0015E512: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    ecx = edi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015E520u); RECOMP_ABI_CALL(0x00266600u, sub_00266600); /* call 0x00266600 */

loc_0015E520: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015E512; /* jne: not equal / not zero */

loc_0015E529: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */

loc_0015E538: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0015E60F; /* jnp: not parity */

loc_0015E54A: ;
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    fp_push(MEMF(esi + 0xF4)); /* fld float */
    fp_push(MEMF(esi + 0xF0)); /* fld float */
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
    fp_push(MEMF(0x3210B0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0015E586; /* jbe: below or equal (unsigned <=) */

loc_0015E582: ;
    SET_LO8(ebx, 1);
    goto loc_0015E588;

loc_0015E586: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0015E588: ;
    edi = esp + 0x24;
    MEM32(esp + 0x10) = 4;

loc_0015E594: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E5BA; /* je: equal / zero */

loc_0015E598: ;
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xF0); /* subss */
    MEMF(edi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xF4); /* subss */
    MEMF(edi) = xmm0.f[0]; /* movss */

loc_0015E5BA: ;
    edx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    ebp = edi + -4;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015E5C8u); RECOMP_ABI_CALL(0x00266600u, sub_00266600); /* call 0x00266600 */

loc_0015E5C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E5F1; /* je: equal / zero */

loc_0015E5CF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp); /* addss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */

loc_0015E5F1: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0015E594; /* jne: not equal / not zero */

loc_0015E5FF: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ebx = MEM32(esp + 0x14);

loc_0015E60F: ;
    xmm2 = XMM_SCALAR(MEMF(0x38DC5C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x38DC58)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm6.f[0]; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x34); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x44); /* mulss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x34); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x34); /* addss */
    SET_LO16(ecx, MEM16(esp + 0x16));
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x40); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x34); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x34); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x9C)); /* movss */
    eax = ZX8(HI8(ecx));
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX8(LO8(ebx));
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX8(HI8(ebx));
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(LO8(ecx));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esp + 0x74;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x70) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, 0x0015E7FAu); RECOMP_ABI_CALL(0x000BF670u, sub_000BF670); /* call 0x000BF670 */

loc_0015E7FA: ;
    ecx = esp + 0x98;
    PUSH32(esp, 0x0015E806u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0015E806: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015E820
 * Original: 0x0015E820 - 0x0015E83E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E820: ;
    eax = MEM32(ecx + 0xE0);
    eax = eax + eax * 4;
    ecx = MEM32(ecx + eax * 4 + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E83B; /* je: equal / zero */

loc_0015E834: ;
    SET_LO8(edx, MEM8(esp + 4));
    MEM8(ecx + 0x1B) = LO8(edx);

loc_0015E83B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015E840
 * Original: 0x0015E840 - 0x0015E85E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E840: ;
    eax = MEM32(ecx + 0xE0);
    eax = eax + eax * 4;
    ecx = MEM32(ecx + eax * 4 + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E85B; /* je: equal / zero */

loc_0015E854: ;
    SET_LO8(edx, MEM8(esp + 4));
    MEM8(ecx + 0x1A) = LO8(edx);

loc_0015E85B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015E860
 * Original: 0x0015E860 - 0x0015E881 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E860: ;
    eax = MEM32(ecx + 0xE0);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E87E; /* je: equal / zero */

loc_0015E874: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x1A) = LO8(ecx);
    MEM8(eax + 0x1B) = LO8(ecx);

loc_0015E87E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015E890
 * Original: 0x0015E890 - 0x0015E8C2 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E890: ;
    eax = MEM32(ecx + 0xE0);
    eax = eax + eax * 4;
    eax = ecx + eax * 4 + 0x90;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E8AA; /* jne: not equal / not zero */

loc_0015E8A6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0015E8AA: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_0015E8D0
 * Original: 0x0015E8D0 - 0x0015E902 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E8D0: ;
    eax = MEM32(ecx + 0xE0);
    eax = eax + eax * 4;
    eax = ecx + eax * 4 + 0x90;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E8EA; /* jne: not equal / not zero */

loc_0015E8E6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0015E8EA: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0xC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_0015E910
 * Original: 0x0015E910 - 0x0015E98C (124 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E910: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xE0) = eax;
    eax = eax + eax * 4;
    edx = MEM32(ecx + eax * 4 + 0x90);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + eax * 4 + 0x90;
    if (CMP_NE(_fa, _fb)) goto loc_0015E934; /* jne: not equal / not zero */

loc_0015E92F: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015E94B;

loc_0015E934: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(edx + 8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */

loc_0015E94B: ;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E969; /* jne: not equal / not zero */

loc_0015E95A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_0015E969: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm1.f[0] = (float)(int32_t)MEM32(edx + 0xC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015E990
 * Original: 0x0015E990 - 0x0015E9C5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E990: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x16CAE0);
    PUSH32(esp, 4);
    esi = ecx;
    PUSH32(esp, 0x14);
    eax = esi + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015E9A8u); RECOMP_ABI_CALL(0x000127C0u, sub_000127C0); /* call 0x000127C0 */

loc_0015E9A8: ;
    ecx = esi;
    PUSH32(esp, 0x0015E9AFu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0015E9AF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015E9BF; /* je: equal / zero */

loc_0015E9B6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015E9BCu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0015E9BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015E9BF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015E9D0
 * Original: 0x0015E9D0 - 0x0015E9FB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E9D0: ;
    PUSH32(esp, esi);
    esi = 0x51D838;

loc_0015E9D6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFD0B0FE4u);
    PUSH32(esp, 0x0015E9E7u); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_0015E9E7: ;
    ecx = eax;
    PUSH32(esp, 0x0015E9EEu); RECOMP_ABI_CALL(0x001579A0u, sub_001579A0); /* call 0x001579A0 */

loc_0015E9EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51D848) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x51D848 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015E9D6; /* jl: less (signed <) */

loc_0015E9F9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015EA00
 * Original: 0x0015EA00 - 0x0015EA26 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015EA00: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 8;
    PUSH32(esp, 0x23);
    ecx = eax * 8 + 0x51D718;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015EA1Bu); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0015EA1B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x51D6F4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0015EA30
 * Original: 0x0015EA30 - 0x0015EA50 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015EA30: ;
    eax = 0x51D718;
    goto loc_0015EA40;

    /* nop */
    edi = edi;

loc_0015EA40: ;
    MEM16(eax) = 0;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51D838) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x51D838 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EA40; /* jl: less (signed <) */

loc_0015EA4F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015EA50
 * Original: 0x0015EA50 - 0x0015EAD8 (136 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015EA50: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0015EAD3; /* je: equal / zero */

loc_0015EA64: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EAD3; /* je: equal / zero */

loc_0015EA6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015EAD3; /* jae: above or equal (unsigned >=) */

loc_0015EA70: ;
    edx = eax;

loc_0015EA72: ;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EACA; /* je: equal / zero */

loc_0015EA78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EA94; /* jl: less (signed <) */

loc_0015EA7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015EA94; /* jg: greater (signed >) */

loc_0015EA80: ;
    edi = MEM32(ecx);
    _fb = (uint32_t)(0xFFFFFFD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFD;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = SX8(LO8(eax));
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    goto loc_0015EAC0;

loc_0015EA94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EAAA; /* jl: less (signed <) */

loc_0015EA98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x66 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015EAAA; /* jg: greater (signed >) */

loc_0015EA9C: ;
    edi = MEM32(ecx);
    eax = SX8(LO8(eax));
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edi + eax + -87;
    goto loc_0015EABE;

loc_0015EAAA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EACA; /* jl: less (signed <) */

loc_0015EAAE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x46) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x46 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015EACA; /* jg: greater (signed >) */

loc_0015EAB2: ;
    edi = MEM32(ecx);
    eax = SX8(LO8(eax));
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edi + eax + -55;

loc_0015EABE: ;
    MEM32(ecx) = eax;

loc_0015EAC0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015EA72; /* jbe: below or equal (unsigned <=) */

loc_0015EAC5: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0015EACA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015EAD3; /* jbe: below or equal (unsigned <=) */

loc_0015EACE: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0015EAD3: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015EAE0
 * Original: 0x0015EAE0 - 0x0015EBC7 (231 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015EAE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM16(0x388876)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x388876), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EBC3; /* jne: not equal / not zero */

loc_0015EAF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x51D718;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0015EB00: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x51D838);
    PUSH32(esp, 0x0015EB15u); RECOMP_ABI_CALL(0x000AD6A0u, sub_000AD6A0); /* call 0x000AD6A0 */

loc_0015EB15: ;
    ecx = MEM32(esi + 0x51D838);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015EB25u); RECOMP_ABI_CALL(0x000AD620u, sub_000AD620); /* call 0x000AD620 */

loc_0015EB25: ;
    eax = MEM32(esi + 0x3785B8);
    ecx = MEM32(esi + 0x51D838);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015EB37u); RECOMP_ABI_CALL(0x000AD5E0u, sub_000AD5E0); /* call 0x000AD5E0 */

loc_0015EB37: ;
    xmm0 = XMM_SCALAR(MEMF(0x31F480)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x38DC58)); /* movss */
    ecx = MEM32(esi + 0x51D838);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x38DC5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0015EB70u); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_0015EB70: ;
    ecx = MEM32(esi + 0x51D6F8);
    edx = MEM32(esi + 0x51D708);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x51D838);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015EB8Au); RECOMP_ABI_CALL(0x000AD700u, sub_000AD700); /* call 0x000AD700 */

loc_0015EB8A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x51D838);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015EB9Au); RECOMP_ABI_CALL(0x000AD5E0u, sub_000AD5E0); /* call 0x000AD5E0 */

loc_0015EB9A: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x51D838);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015EBAFu); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_0015EBAF: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51D838) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x51D838 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EB00; /* jl: less (signed <) */

loc_0015EBC1: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0015EBC3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015EBD0
 * Original: 0x0015EBD0 - 0x0015ED0E (318 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EBD0(void)
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

loc_0015EBD0: ;
    SET_LO8(eax, MEM8(0x51D6F4));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015ED0A; /* je: equal / zero */

loc_0015EBE0: ;
    SET_LO8(eax, MEM8(0x3C250D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm2 = XMM_SCALAR(MEMF(0x31F47C)); /* movss */
    MEM8(0x51D6F4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0015EC00; /* jne: not equal / not zero */

loc_0015EBF8: ;
    xmm2 = XMM_SCALAR(MEMF(0x31F478)); /* movss */

loc_0015EC00: ;
    xmm0 = XMM_SCALAR(MEMF(0x38DC58)); /* movss */
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, ebx);
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x38DC5C)); /* movss */
    PUSH32(esp, ebp);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x31F480)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    ebx = MEM32(esp + 0x18);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edi = 0x51D718;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015EC62: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x51D838);
    PUSH32(esp, 0x0015EC77u); RECOMP_ABI_CALL(0x000AD6A0u, sub_000AD6A0); /* call 0x000AD6A0 */

loc_0015EC77: ;
    ecx = MEM32(esi + 0x51D838);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015EC84u); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_0015EC84: ;
    ecx = MEM32(esi + 0x51D838);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015EC9Au); RECOMP_ABI_CALL(0x000AD170u, sub_000AD170); /* call 0x000AD170 */

loc_0015EC9A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x51D838);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015ECAFu); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_0015ECAF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    ecx = MEM32(esi + 0x51D838);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0x51D708) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x51D6F8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015ECE8u); RECOMP_ABI_CALL(0x000AD6F0u, sub_000AD6F0); /* call 0x000AD6F0 */

loc_0015ECE8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51D838) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x51D838 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0015EC62; /* jl: less (signed <) */

loc_0015ED06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0015ED0A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015ED10
 * Original: 0x0015ED10 - 0x0015ED70 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ED10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015ED10: ;
    eax = MEM32(0x3785DC);
    edx = 0x3785D8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015ED3E; /* je: equal / zero */

loc_0015ED1E: ;
    PUSH32(esp, esi);
    /* nop */

loc_0015ED20: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(eax) = 0;
    esi = MEM32(0x3785D4);
    MEM32(eax + 4) = esi;
    MEM32(0x3785D4) = eax;
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0015ED20; /* jne: not equal / not zero */

loc_0015ED3D: ;
    POP32(esp, esi);

loc_0015ED3E: ;
    MEM32(0x3785DC) = edx;
    MEM32(0x3785D8) = edx;
    MEM32(0x3785C8) = 0;
    eax = 0x51D718;
    /* nop */

loc_0015ED60: ;
    MEM16(eax) = 0;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51D838) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x51D838 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015ED60; /* jl: less (signed <) */

loc_0015ED6F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015ED70
 * Original: 0x0015ED70 - 0x0015ED88 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ED70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015ED70: ;
    PUSH32(esp, 0x1E);
    ecx = 0x3785C8;
    PUSH32(esp, 0x0015ED7Cu); RECOMP_ABI_CALL(0x0015F4E0u, sub_0015F4E0); /* call 0x0015F4E0 */

loc_0015ED7C: ;
    MEM8(0x51D848) = 1;
    g_seh_ebp = ebp; sub_0015E9D0(); return; /* tail jmp 0x0015E9D0 */

}

/**
 * sub_0015ED90
 * Original: 0x0015ED90 - 0x0015EF98 (520 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ED90(void)
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

loc_0015ED90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM16(0x388876)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x388876), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EF94; /* jne: not equal / not zero */

loc_0015EDA1: ;
    SET_LO8(eax, MEM8(0x51D848));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EDC2; /* jne: not equal / not zero */

loc_0015EDAA: ;
    PUSH32(esp, 0x1E);
    ecx = 0x3785C8;
    PUSH32(esp, 0x0015EDB6u); RECOMP_ABI_CALL(0x0015F4E0u, sub_0015F4E0); /* call 0x0015F4E0 */

loc_0015EDB6: ;
    MEM8(0x51D848) = 1;
    PUSH32(esp, 0x0015EDC2u); RECOMP_ABI_CALL(0x0015E9D0u, sub_0015E9D0); /* call 0x0015E9D0 */

loc_0015EDC2: ;
    xmm0 = XMM_SCALAR(MEMF(0x31F484)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x3785DC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3785D8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3785D8 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0xB) = 0;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xA) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015EF4D; /* je: equal / zero */

loc_0015EDF4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebp = 0x51D718;
    edi = 0x3785BA;
    goto loc_0015EE20;

    /* nop */
    /* nop */

loc_0015EE20: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015EED1; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(esi + 8)) */

loc_0015EE3B: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EE5F; /* jne: not equal / not zero */

loc_0015EE43: ;
    MEM8(esp + 0x13) = 1;
    eax = 0x51D718;
    /* nop */

loc_0015EE50: ;
    MEM16(eax) = 0;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51D838) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x51D838 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EE50; /* jl: less (signed <) */

loc_0015EE5F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3785CA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3785CA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015EEA1; /* jge: greater or equal (signed >=) */

loc_0015EE67: ;
    PUSH32(esp, 0x23);
    eax = esi + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015EE73u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0015EE73: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM8(0x51D6F4) = 1;
    SET_LO8(ecx, MEM8(esi + 0xC));
    MEM8(edi + -2) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0xD));
    MEM8(edi + -1) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0xE));
    MEM8(edi) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0xF));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 1) = LO8(ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x48;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015EEA1: ;
    ecx = MEM32(esi);
    eax = MEM32(esi + 4);
    MEM32(ecx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(esi) = 0;
    edx = MEM32(0x3785D4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(0x3785C8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x3785D4) = esi;
    MEM32(0x3785C8) = ecx;
    esi = eax;
    goto loc_0015EEF8;

loc_0015EED1: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EEE5; /* je: equal / zero */

loc_0015EED9: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015EEF0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 8)) */

loc_0015EEE5: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_0015EEF0: ;
    esi = MEM32(esi + 4);
    MEM8(esp + 0x12) = 1;

loc_0015EEF8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3785D8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3785D8 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EE20; /* jne: not equal / not zero */

loc_0015EF09: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_0015EF4D; /* jle: less or equal (signed <=) */

loc_0015EF0F: ;
    SET_LO8(eax, MEM8(esp + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EF2F; /* je: equal / zero */

loc_0015EF17: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    POP32(esp, esi);
    MEMF(0x51D6F0) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0015EBD0(); return; /* tail jmp 0x0015EBD0 */

loc_0015EF2F: ;
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31F474); /* mulss */
    POP32(esp, esi);
    MEMF(0x51D6F0) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0015EBD0(); return; /* tail jmp 0x0015EBD0 */

loc_0015EF4D: ;
    xmm0 = XMM_SCALAR(MEMF(0x51D6F0)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015EF8A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0015EF5D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF020); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(0x51D6F0) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015EF8A; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0015EF7C: ;
    eax = MEM32(0x3785C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EF8A; /* jne: not equal / not zero */

loc_0015EF85: ;
    PUSH32(esp, 0x0015EF8Au); RECOMP_ABI_CALL(0x0015EA30u, sub_0015EA30); /* call 0x0015EA30 */

loc_0015EF8A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0015EBD0(); return; /* tail jmp 0x0015EBD0 */

loc_0015EF94: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015EFA0
 * Original: 0x0015EFA0 - 0x0015F249 (681 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015EFA0: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x54));
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM8(esp + 0x18) = 0xFF;
    MEM8(esp + 0x19) = 0xFF;
    MEM8(esp + 0x1A) = 0xFF;
    MEM8(esp + 0x1B) = 0xFF;
    PUSH32(esp, 0x0015EFC5u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0015EFC5: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F241; /* je: equal / zero */

loc_0015EFD2: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5E (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0015EFEA; /* je: equal / zero */

loc_0015EFD9: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x12), LO8(ebx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0015F241; /* je: equal / zero */

loc_0015EFE8: ;
    goto loc_0015EFEB;

loc_0015EFEA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015EFEB: ;
    PUSH32(esp, 0x5B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015EFF3u); RECOMP_ABI_CALL(0x002BE820u, sub_002BE820); /* call 0x002BE820 */

loc_0015EFF3: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x31F490);
    PUSH32(esp, esi);
    MEM8(esp + 0x23) = LO8(eax);
    PUSH32(esp, 0x0015F008u); RECOMP_ABI_CALL(0x002BFC70u, sub_002BFC70); /* call 0x002BFC70 */

loc_0015F008: ;
    PUSH32(esp, 0x31F48C);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0015F015u); RECOMP_ABI_CALL(0x002BFC70u, sub_002BFC70); /* call 0x002BFC70 */

loc_0015F015: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F067; /* je: equal / zero */

loc_0015F01C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F067; /* je: equal / zero */

loc_0015F020: ;
    ecx = edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0015F067; /* jbe: below or equal (unsigned <=) */

loc_0015F027: ;
    esi = eax + 1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015F037u); RECOMP_ABI_CALL(0x0015EA50u, sub_0015EA50); /* call 0x0015EA50 */

loc_0015F037: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F067; /* je: equal / zero */

loc_0015F03E: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0015F04Cu); RECOMP_ABI_CALL(0x00084AF0u, sub_00084AF0); /* call 0x00084AF0 */

loc_0015F04C: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(esp + 0x14) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esp + 0x15) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 3));
    MEM8(esp + 0x16) = LO8(ecx);
    MEM8(esp + 0x17) = LO8(edx);

loc_0015F067: ;
    SET_LO8(eax, MEM8(0x51D848));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015F082; /* jne: not equal / not zero */

loc_0015F070: ;
    PUSH32(esp, 0x1E);
    ecx = 0x3785C8;
    PUSH32(esp, 0x0015F07Cu); RECOMP_ABI_CALL(0x0015F4E0u, sub_0015F4E0); /* call 0x0015F4E0 */

loc_0015F07C: ;
    MEM8(0x51D848) = LO8(ebx);

loc_0015F082: ;
    ecx = 0x3785C8;
    PUSH32(esp, 0x0015F08Cu); RECOMP_ABI_CALL(0x001461F0u, sub_001461F0); /* call 0x001461F0 */

loc_0015F08C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm0; /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F241; /* je: equal / zero */

loc_0015F09F: ;
    goto loc_0015F0B0;

loc_0015F0A1: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_0015F0B0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F241; /* je: equal / zero */

loc_0015F0B9: ;
    PUSH32(esp, 0x31F488);
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, esi);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015F0D4u); RECOMP_ABI_CALL(0x002BFC70u, sub_002BFC70); /* call 0x002BFC70 */

loc_0015F0D4: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F125; /* je: equal / zero */

loc_0015F0DD: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0015F125; /* jge: greater or equal (signed >=) */

loc_0015F0E4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_0015F0FB; /* jbe: below or equal (unsigned <=) */

loc_0015F0EA: ;
    /* nop */

loc_0015F0F0: ;
    _fa = (uint32_t)(MEM8(edi + -1)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + -1), 0x20 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015F0FB; /* jne: not equal / not zero */

loc_0015F0F6: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0015F0F0; /* ja: above (unsigned >) */

loc_0015F0FB: ;
    SET_LO8(eax, MEM8(ebp));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5B (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015F161; /* jne: not equal / not zero */

loc_0015F103: ;
    ecx = ebp;
    PUSH32(esp, 0x0015F10Au); RECOMP_ABI_CALL(0x00194E80u, sub_00194E80); /* call 0x00194E80 */

loc_0015F10A: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x31F3D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015F119u); RECOMP_ABI_CALL(0x002BFC70u, sub_002BFC70); /* call 0x002BFC70 */

loc_0015F119: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F161; /* je: equal / zero */

loc_0015F120: ;
    ebp = eax + 1;
    goto loc_0015F161;

loc_0015F125: ;
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_0015F130: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015F130; /* jne: not equal / not zero */

loc_0015F137: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015F15C; /* jle: less or equal (signed <=) */

loc_0015F13E: ;
    ebp = esi + 0x23;
    edi = ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0015F155; /* jbe: below or equal (unsigned <=) */

loc_0015F147: ;
    SET_LO8(eax, MEM8(edi + -1));
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015F153; /* je: equal / zero */

loc_0015F14F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0015F147; /* ja: above (unsigned >) */

loc_0015F153: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);

loc_0015F155: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015F15F; /* je: equal / zero */

loc_0015F157: ;
    ebp = edi + 1;
    goto loc_0015F161;

loc_0015F15C: ;
    ebp = eax + esi;

loc_0015F15F: ;
    edi = ebp;

loc_0015F161: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015F237; /* je: equal / zero */

loc_0015F169: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(esi));
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM8(esp + 0x30) = 0;
    MEM8(esp + 0x31) = 0;
    MEM8(esp + 0x32) = 0;
    MEM8(esp + 0x33) = 0xFF;
    PUSH32(esp, 0x0015F18Bu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0015F18B: ;
    SET_LO8(eax, MEM8(esp + 0x21));
    SET_LO8(edx, MEM8(esp + 0x20));
    SET_LO8(ecx, MEM8(esp + 0x22));
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM8(esp + edi + 0x34) = 0;
    MEM8(esp + 0x31) = LO8(eax);
    eax = MEM32(0x3785C8);
    MEM8(esp + 0x30) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x23));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x26) = LO8(ecx);
    MEM8(esp + 0x27) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015F20F; /* je: equal / zero */

loc_0015F1C9: ;
    eax = MEM32(0x3785D4);
    ecx = MEM32(eax + 4);
    edx = MEM32(0x3785D8);
    MEM32(0x3785D4) = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edi = eax + 8;
    ecx = 0x11;
    esi = esp + 0x20;
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
    MEM32(0x3785C8) = MEM32(0x3785C8) + 1;
    _fa = (uint32_t)(MEM32(0x3785C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 4) = eax;
    MEM32(eax) = edx;
    MEM32(eax + 4) = 0x3785D8;
    MEM32(0x3785D8) = eax;

loc_0015F20F: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F237; /* je: equal / zero */

loc_0015F218: ;
    edx = ebx;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x80000003u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0015F227; /* jns: not sign (positive) */

loc_0015F222: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx | 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015F227: ;
    if ((edx != 0)) goto loc_0015F237; /* jne: not equal / not zero */

loc_0015F229: ;
    xmm0 = XMM_SCALAR(MEMF(0x317728)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0015F237: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0015F0A1; /* jne: not equal / not zero */

loc_0015F241: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x54)) >> 32) & 1);
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015F250
 * Original: 0x0015F250 - 0x0015F280 (48 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F250: ;
    PUSH32(esp, 0x3785C8);
    PUSH32(esp, 0x0015F25Au); RECOMP_ABI_CALL(0x0015F580u, sub_0015F580); /* call 0x0015F580 */

loc_0015F25A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x51D848) = 0;
    eax = 0x51D718;
    /* nop */

loc_0015F270: ;
    MEM16(eax) = 0;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51D838) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x51D838 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F270; /* jl: less (signed <) */

loc_0015F27F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F280
 * Original: 0x0015F280 - 0x0015F2C7 (71 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F280: ;
    PUSH32(esp, 0x3785C8);
    PUSH32(esp, 0x0015F28Au); RECOMP_ABI_CALL(0x0015F580u, sub_0015F580); /* call 0x0015F580 */

loc_0015F28A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x51D848) = 0;
    eax = 0x51D718;
    /* nop */

loc_0015F2A0: ;
    MEM16(eax) = 0;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51D838) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x51D838 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F2A0; /* jl: less (signed <) */

loc_0015F2AF: ;
    PUSH32(esp, 0x1E);
    ecx = 0x3785C8;
    PUSH32(esp, 0x0015F2BBu); RECOMP_ABI_CALL(0x0015F4E0u, sub_0015F4E0); /* call 0x0015F4E0 */

loc_0015F2BB: ;
    MEM8(0x51D848) = 1;
    g_seh_ebp = ebp; sub_0015E9D0(); return; /* tail jmp 0x0015E9D0 */

}

/**
 * sub_0015F2D0
 * Original: 0x0015F2D0 - 0x0015F38C (188 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F2D0: ;
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
    SET_LO8(ebx, MEM8(ecx + 0x5C));
    MEM32(ecx + 0xC) = edx;
    SET_LO8(edx, MEM8(eax + 0x5C));
    MEM8(eax + 0x5C) = LO8(ebx);
    MEM8(ecx + 0x5C) = LO8(edx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    edx = MEM32(eax);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0015F367; /* je: equal / zero */

loc_0015F316: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F346; /* je: equal / zero */

loc_0015F31A: ;
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

loc_0015F346: ;
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

loc_0015F367: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F386; /* je: equal / zero */

loc_0015F36B: ;
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

loc_0015F386: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015F390
 * Original: 0x0015F390 - 0x0015F408 (120 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F390: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    ebp = ecx;
    ecx = MEM32(esp + 0x10);
    ebx = MEM32(ecx);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F3FD; /* je: equal / zero */

loc_0015F3AA: ;
    PUSH32(esp, esi);
    goto loc_0015F3B0;

    /* nop */

loc_0015F3B0: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    MEM32(ebp + 0xC) = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esi = edx + 8;
    edi = eax + 8;
    ecx = 0x11;
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
    esi = MEM32(esp + 0x1C);
    MEM32(ebx + 4) = eax;
    MEM32(eax) = ebx;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    ebx = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F3B0; /* jne: not equal / not zero */

loc_0015F3ED: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, edi);
    MEM32(ebx + 4) = eax;
    POP32(esp, ebp);
    MEM32(eax) = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0015F3FD: ;
    POP32(esp, edi);
    MEM32(ebx + 4) = ecx;
    POP32(esp, ebp);
    MEM32(ecx) = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015F410
 * Original: 0x0015F410 - 0x0015F4DF (207 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F410: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    ebp = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0x0015F42Au); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_0015F42A: ;
    PUSH32(esp, 0x2FF5B8);
    edi = eax;
    PUSH32(esp, 0x0015F436u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0015F436: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4C);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FF590);
    PUSH32(esp, 0x0015F44Bu); RECOMP_ABI_CALL(0x001550D0u, sub_001550D0); /* call 0x001550D0 */

loc_0015F44B: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x0015F453u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0015F453: ;
    MEM32(ebp + 8) = esi;
    edx = ebp + 0x10;
    MEM32(ebp + 0xC) = ebx;
    MEM32(edx) = edx;
    MEM32(edx + 4) = edx;
    edi = edx + 8;
    ecx = 0x11;
    esi = esp + 0x28;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x2D) = LO8(ebx);
    MEM8(esp + 0x2E) = LO8(ebx);
    MEM8(esp + 0x2F) = 0xFF;
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
    eax = MEM32(ebp + 4);
    esi = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + esi + -76;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM8(ebp + 0x5C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0015F4AF; /* je: equal / zero */

loc_0015F49A: ;
    /* nop */

loc_0015F4A0: ;
    MEM32(eax + 4) = ecx;
    esi = MEM32(ebp + 8);
    ecx = eax;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F4A0; /* jne: not equal / not zero */

loc_0015F4AF: ;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    MEM32(ebp + 0xC) = eax;
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = ebp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0015F4D3u); RECOMP_ABI_CALL(0x0015F390u, sub_0015F390); /* call 0x0015F390 */

loc_0015F4D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015F4E0
 * Original: 0x0015F4E0 - 0x0015F571 (145 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F4E0: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015F56A; /* jle: less or equal (signed <=) */

loc_0015F4EF: ;
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
    PUSH32(esp, 0x0015F509u); RECOMP_ABI_CALL(0x0015F410u, sub_0015F410); /* call 0x0015F410 */

loc_0015F509: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015F515u); RECOMP_ABI_CALL(0x0015F2D0u, sub_0015F2D0); /* call 0x0015F2D0 */

loc_0015F515: ;
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F53F; /* je: equal / zero */

loc_0015F521: ;
    ecx = MEM32(eax + 4);
    MEM32(eax) = 0;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    edx = esp + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0015F521; /* jne: not equal / not zero */

loc_0015F53F: ;
    eax = esp + 0x14;
    ecx = eax;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(esp + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0015F56A; /* je: equal / zero */

loc_0015F55D: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015F567u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0015F567: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F56A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015F580
 * Original: 0x0015F580 - 0x0015F5E6 (102 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F580: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0015F592u); RECOMP_ABI_CALL(0x001461F0u, sub_001461F0); /* call 0x001461F0 */

loc_0015F592: ;
    SET_LO8(eax, MEM8(ebp + 0x5C));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F5A7; /* je: equal / zero */

loc_0015F59B: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F5A4u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0015F5A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F5A7: ;
    eax = ebp + 0x10;
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    MEM8(esp + 0x14) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    edi = eax + 8;
    ecx = 0x11;
    esi = esp + 0x10;
    MEM8(esp + 0x17) = 0xFF;
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
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    MEM8(ebp + 0x5C) = 1;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015F5F0
 * Original: 0x0015F5F0 - 0x0015F5F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F5F0(void)
{

loc_0015F5F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F600
 * Original: 0x0015F600 - 0x0015F62B (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F600: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx + 0x104;
    edx = 0x32;
    edi = edi;

loc_0015F610: ;
    MEM8(eax + -4) = 0;
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015F610; /* jne: not equal / not zero */

loc_0015F620: ;
    MEM32(ecx + 0x3520) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F630
 * Original: 0x0015F630 - 0x0015F66A (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0015F630: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx + 0x100;
    ecx = 0x32;

loc_0015F644: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F65F; /* je: equal / zero */

loc_0015F649: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015F65F; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0015F65C: ;
    MEM8(eax) = 0;

loc_0015F65F: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015F644; /* jne: not equal / not zero */

loc_0015F667: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015F670
 * Original: 0x0015F670 - 0x0015F6A3 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F670: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F697; /* je: equal / zero */

loc_0015F679: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x10C;

loc_0015F681: ;
    SET_LO8(ecx, MEM8(eax + -12));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F68C; /* je: equal / zero */

loc_0015F688: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F69D; /* je: equal / zero */

loc_0015F68C: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F681; /* jl: less (signed <) */

loc_0015F697: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015F69D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015F6B0
 * Original: 0x0015F6B0 - 0x0015F6D5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F6B0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F6BD; /* jne: not equal / not zero */

loc_0015F6B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0015F6BD: ;
    eax = MEM32(ecx + 0x3520);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0015F6CA; /* jns: not sign (positive) */

loc_0015F6C7: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F6CA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x110);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015F6E0
 * Original: 0x0015F6E0 - 0x0015F7EA (266 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F6E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F6EF; /* jne: not equal / not zero */

loc_0015F6E9: ;
    eax = 0x31F54C;
    esp += 4; return; /* ret */

loc_0015F6EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F6FA; /* jne: not equal / not zero */

loc_0015F6F4: ;
    eax = 0x31F540;
    esp += 4; return; /* ret */

loc_0015F6FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F705; /* jne: not equal / not zero */

loc_0015F6FF: ;
    eax = 0x31F534;
    esp += 4; return; /* ret */

loc_0015F705: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F710; /* jne: not equal / not zero */

loc_0015F70A: ;
    eax = 0x31F52C;
    esp += 4; return; /* ret */

loc_0015F710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F71B; /* jne: not equal / not zero */

loc_0015F715: ;
    eax = 0x31F524;
    esp += 4; return; /* ret */

loc_0015F71B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F726; /* jne: not equal / not zero */

loc_0015F720: ;
    eax = 0x31F51C;
    esp += 4; return; /* ret */

loc_0015F726: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F731; /* jne: not equal / not zero */

loc_0015F72B: ;
    eax = 0x31F508;
    esp += 4; return; /* ret */

loc_0015F731: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F743; /* je: equal / zero */

loc_0015F73B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F7E7; /* jne: not equal / not zero */

loc_0015F743: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F74D; /* jne: not equal / not zero */

loc_0015F747: ;
    eax = 0x31F4F8;
    esp += 4; return; /* ret */

loc_0015F74D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F758; /* jne: not equal / not zero */

loc_0015F752: ;
    eax = 0x31F4EC;
    esp += 4; return; /* ret */

loc_0015F758: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F763; /* jne: not equal / not zero */

loc_0015F75D: ;
    eax = 0x31F4E0;
    esp += 4; return; /* ret */

loc_0015F763: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F76E; /* jne: not equal / not zero */

loc_0015F768: ;
    eax = 0x31F4D0;
    esp += 4; return; /* ret */

loc_0015F76E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F779; /* jne: not equal / not zero */

loc_0015F773: ;
    eax = 0x31EC34;
    esp += 4; return; /* ret */

loc_0015F779: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F784; /* jne: not equal / not zero */

loc_0015F77E: ;
    eax = 0x31EC24;
    esp += 4; return; /* ret */

loc_0015F784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F78F; /* jne: not equal / not zero */

loc_0015F789: ;
    eax = 0x31EC18;
    esp += 4; return; /* ret */

loc_0015F78F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F79A; /* jne: not equal / not zero */

loc_0015F794: ;
    eax = 0x31EC14;
    esp += 4; return; /* ret */

loc_0015F79A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F7A5; /* jne: not equal / not zero */

loc_0015F79F: ;
    eax = 0x31F4C0;
    esp += 4; return; /* ret */

loc_0015F7A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F7B0; /* jne: not equal / not zero */

loc_0015F7AA: ;
    eax = 0x31EBF4;
    esp += 4; return; /* ret */

loc_0015F7B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F7BB; /* jne: not equal / not zero */

loc_0015F7B5: ;
    eax = 0x31EBEC;
    esp += 4; return; /* ret */

loc_0015F7BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F7C6; /* jne: not equal / not zero */

loc_0015F7C0: ;
    eax = 0x31F4AC;
    esp += 4; return; /* ret */

loc_0015F7C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F7D1; /* jne: not equal / not zero */

loc_0015F7CB: ;
    eax = 0x31F4A0;
    esp += 4; return; /* ret */

loc_0015F7D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F7DC; /* jne: not equal / not zero */

loc_0015F7D6: ;
    eax = 0x31F494;
    esp += 4; return; /* ret */

loc_0015F7DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F7E7; /* jne: not equal / not zero */

loc_0015F7E1: ;
    eax = 0x31EBB4;
    esp += 4; return; /* ret */

loc_0015F7E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015F7F0
 * Original: 0x0015F7F0 - 0x0015FCFA (1290 bytes, 305 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F7F0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(0x31F672));
    SET_LO16(eax, MEM16(0x31F670));
    MEM8(esp + 2) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x19) = ecx;
    MEM32(esp + 0x1D) = ecx;
    MEM32(esp + 0x21) = ecx;
    MEM32(esp + 0x25) = ecx;
    MEM16(esp) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x29) = ecx;
    MEM32(esp + 9) = eax;
    MEM32(esp + 0x2D) = ecx;
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x35) = ecx;
    MEM16(esp + 9) = LO16(edx);
    MEM16(esp + 0x39) = LO16(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    MEM32(esp + 0x19) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0xF) = LO8(edx);
    edx = MEM32(esi);
    MEM16(esp + 0x1D) = LO16(eax);
    MEM8(esp + 0x3F) = LO8(ecx);
    ecx = esi;
    MEM8(esp + 0xC) = LO8(ebx);
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x1F) = LO8(eax);
    MEM8(esp + 0x20) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0015F86Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015F868u); } /* indirect call */
    }

loc_0015F86E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015F8B4; /* je: equal / zero */

loc_0015F871: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015F89C; /* je: equal / zero */

loc_0015F874: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015F885; /* je: equal / zero */

loc_0015F877: ;
    SET_LO16(eax, MEM16(0x31F66C));
    SET_LO8(ecx, MEM8(0x31F66E));
    goto loc_0015F8C0;

loc_0015F885: ;
    SET_LO16(edx, MEM16(0x31F668));
    SET_LO8(eax, MEM8(0x31F66A));
    MEM16(esp + 0xC) = LO16(edx);
    MEM8(esp + 0xE) = LO8(eax);
    goto loc_0015F8C9;

loc_0015F89C: ;
    SET_LO16(ecx, MEM16(0x31F664));
    SET_LO8(edx, MEM8(0x31F666));
    MEM16(esp + 0xC) = LO16(ecx);
    MEM8(esp + 0xE) = LO8(edx);
    goto loc_0015F8C9;

loc_0015F8B4: ;
    SET_LO16(eax, MEM16(0x31F660));
    SET_LO8(ecx, MEM8(0x31F662));

loc_0015F8C0: ;
    MEM16(esp + 0xC) = LO16(eax);
    MEM8(esp + 0xE) = LO8(ecx);

loc_0015F8C9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0015F8D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015F8CDu); } /* indirect call */
    }

loc_0015F8D3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015F946; /* ja: above (unsigned >) */

loc_0015F8D9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x15FCFC); /* switch: 26 entries, 26 targets */
    if (_jt == 0x0015F8E0u) goto loc_0015F8E0;
    if (_jt == 0x0015F8EDu) goto loc_0015F8ED;
    if (_jt == 0x0015F916u) goto loc_0015F916;
    if (_jt == 0x0015F933u) goto loc_0015F933;
    if (_jt == 0x0015F97Cu) goto loc_0015F97C;
    if (_jt == 0x0015F99Eu) goto loc_0015F99E;
    if (_jt == 0x0015F9C0u) goto loc_0015F9C0;
    if (_jt == 0x0015F9DFu) goto loc_0015F9DF;
    if (_jt == 0x0015F9F6u) goto loc_0015F9F6;
    if (_jt == 0x0015FA0Du) goto loc_0015FA0D;
    if (_jt == 0x0015FA2Eu) goto loc_0015FA2E;
    if (_jt == 0x0015FA8Fu) goto loc_0015FA8F;
    if (_jt == 0x0015FABCu) goto loc_0015FABC;
    if (_jt == 0x0015FADEu) goto loc_0015FADE;
    if (_jt == 0x0015FAF7u) goto loc_0015FAF7;
    if (_jt == 0x0015FB24u) goto loc_0015FB24;
    if (_jt == 0x0015FB46u) goto loc_0015FB46;
    if (_jt == 0x0015FB68u) goto loc_0015FB68;
    if (_jt == 0x0015FB8Au) goto loc_0015FB8A;
    if (_jt == 0x0015FBA5u) goto loc_0015FBA5;
    if (_jt == 0x0015FBD0u) goto loc_0015FBD0;
    if (_jt == 0x0015FBFEu) goto loc_0015FBFE;
    if (_jt == 0x0015FC22u) goto loc_0015FC22;
    if (_jt == 0x0015FC4Du) goto loc_0015FC4D;
    if (_jt == 0x0015FC6Eu) goto loc_0015FC6E;
    if (_jt == 0x0015FC8Fu) goto loc_0015FC8F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015F8E0: ;
    eax = MEM32(0x31F658);
    ecx = MEM32(0x31F65C);
    goto loc_0015F95B;

loc_0015F8ED: ;
    edx = MEM32(0x31F648);
    eax = MEM32(0x31F64C);
    ecx = MEM32(0x31F650);
    MEM32(esp + 0x10) = edx;
    SET_LO8(edx, MEM8(0x31F654));
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM8(esp + 0x1C) = LO8(edx);
    goto loc_0015F963;

loc_0015F916: ;
    SET_LO16(ecx, MEM16(0x31F644));
    SET_LO8(edx, MEM8(0x31F646));
    eax = MEM32(0x31F640);
    MEM16(esp + 0x14) = LO16(ecx);
    MEM8(esp + 0x16) = LO8(edx);
    goto loc_0015F95F;

loc_0015F933: ;
    eax = MEM32(0x31F634);
    ecx = MEM32(0x31F638);
    SET_LO8(edx, MEM8(0x31F63C));
    goto loc_0015F957;

loc_0015F946: ;
    eax = MEM32(0x31F628);
    ecx = MEM32(0x31F62C);
    SET_LO8(edx, MEM8(0x31F630));

loc_0015F957: ;
    MEM8(esp + 0x18) = LO8(edx);

loc_0015F95B: ;
    MEM32(esp + 0x14) = ecx;

loc_0015F95F: ;
    MEM32(esp + 0x10) = eax;

loc_0015F963: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x4C);
    eax = ebp + -15;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0015FA4D; /* ja: above (unsigned >) */

loc_0015F975: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x15FD0C); /* switch: 22 entries, 22 targets */
    if (_jt == 0x0015F97Cu) goto loc_0015F97C;
    if (_jt == 0x0015F99Eu) goto loc_0015F99E;
    if (_jt == 0x0015F9C0u) goto loc_0015F9C0;
    if (_jt == 0x0015F9DFu) goto loc_0015F9DF;
    if (_jt == 0x0015F9F6u) goto loc_0015F9F6;
    if (_jt == 0x0015FA0Du) goto loc_0015FA0D;
    if (_jt == 0x0015FA2Eu) goto loc_0015FA2E;
    if (_jt == 0x0015FA8Fu) goto loc_0015FA8F;
    if (_jt == 0x0015FABCu) goto loc_0015FABC;
    if (_jt == 0x0015FADEu) goto loc_0015FADE;
    if (_jt == 0x0015FAF7u) goto loc_0015FAF7;
    if (_jt == 0x0015FB24u) goto loc_0015FB24;
    if (_jt == 0x0015FB46u) goto loc_0015FB46;
    if (_jt == 0x0015FB68u) goto loc_0015FB68;
    if (_jt == 0x0015FB8Au) goto loc_0015FB8A;
    if (_jt == 0x0015FBA5u) goto loc_0015FBA5;
    if (_jt == 0x0015FBD0u) goto loc_0015FBD0;
    if (_jt == 0x0015FBFEu) goto loc_0015FBFE;
    if (_jt == 0x0015FC22u) goto loc_0015FC22;
    if (_jt == 0x0015FC4Du) goto loc_0015FC4D;
    if (_jt == 0x0015FC6Eu) goto loc_0015FC6E;
    if (_jt == 0x0015FC8Fu) goto loc_0015FC8F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015F97C: ;
    eax = MEM32(0x31F61C);
    ecx = MEM32(0x31F620);
    SET_LO8(edx, MEM8(0x31F624));
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM8(esp + 0x30) = LO8(edx);
    goto loc_0015FA51;

loc_0015F99E: ;
    eax = MEM32(0x31F610);
    ecx = MEM32(0x31F614);
    SET_LO8(edx, MEM8(0x31F618));
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM8(esp + 0x30) = LO8(edx);
    goto loc_0015FA51;

loc_0015F9C0: ;
    eax = MEM32(0x31F604);
    ecx = MEM32(0x31F608);
    SET_LO8(edx, MEM8(0x31F60C));
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM8(esp + 0x30) = LO8(edx);
    goto loc_0015FA51;

loc_0015F9DF: ;
    eax = MEM32(0x31EB88);
    SET_LO16(ecx, MEM16(0x31EB8C));
    MEM32(esp + 0x28) = eax;
    MEM16(esp + 0x2C) = LO16(ecx);
    goto loc_0015FA51;

loc_0015F9F6: ;
    edx = MEM32(0x31EB80);
    SET_LO16(eax, MEM16(0x31EB84));
    MEM32(esp + 0x28) = edx;
    MEM16(esp + 0x2C) = LO16(eax);
    goto loc_0015FA51;

loc_0015FA0D: ;
    ecx = MEM32(0x31EB78);
    SET_LO16(edx, MEM16(0x31EB7C));
    SET_LO8(eax, MEM8(0x31EB7E));
    MEM32(esp + 0x28) = ecx;
    MEM16(esp + 0x2C) = LO16(edx);
    MEM8(esp + 0x2E) = LO8(eax);
    goto loc_0015FA51;

loc_0015FA2E: ;
    ecx = MEM32(0x31F5F8);
    edx = MEM32(0x31F5FC);
    eax = MEM32(0x31F600);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    goto loc_0015FA51;

loc_0015FA4D: ;
    MEM8(esp + 0x28) = LO8(ebx);

loc_0015FA51: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0015FA5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015FA55u); } /* indirect call */
    }

loc_0015FA5B: ;
    edi = 0x3021CE;
    esi = esp + 0x28;
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = MEM32(esp + 0x58);
    if ((_flags == 0)) goto loc_0015FA77; /* jne: not equal / not zero */

loc_0015FA73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FA7F; /* je: equal / zero */

loc_0015FA77: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FCA8; /* jne: not equal / not zero */

loc_0015FA7F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015FCA4; /* ja: above (unsigned >) */

loc_0015FA88: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x15FD28); /* switch: 15 entries, 15 targets */
    if (_jt == 0x0015FA8Fu) goto loc_0015FA8F;
    if (_jt == 0x0015FABCu) goto loc_0015FABC;
    if (_jt == 0x0015FADEu) goto loc_0015FADE;
    if (_jt == 0x0015FAF7u) goto loc_0015FAF7;
    if (_jt == 0x0015FB24u) goto loc_0015FB24;
    if (_jt == 0x0015FB46u) goto loc_0015FB46;
    if (_jt == 0x0015FB68u) goto loc_0015FB68;
    if (_jt == 0x0015FB8Au) goto loc_0015FB8A;
    if (_jt == 0x0015FBA5u) goto loc_0015FBA5;
    if (_jt == 0x0015FBD0u) goto loc_0015FBD0;
    if (_jt == 0x0015FBFEu) goto loc_0015FBFE;
    if (_jt == 0x0015FC22u) goto loc_0015FC22;
    if (_jt == 0x0015FC4Du) goto loc_0015FC4D;
    if (_jt == 0x0015FC6Eu) goto loc_0015FC6E;
    if (_jt == 0x0015FC8Fu) goto loc_0015FC8F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015FA8F: ;
    eax = MEM32(0x31F5EC);
    ecx = MEM32(0x31F5F0);
    SET_LO16(edx, MEM16(0x31F5F4));
    MEM32(esp + 0x28) = eax;
    SET_LO8(eax, MEM8(0x31F5F6));
    MEM32(esp + 0x2C) = ecx;
    MEM16(esp + 0x30) = LO16(edx);
    MEM8(esp + 0x32) = LO8(eax);
    goto loc_0015FCA8;

loc_0015FABC: ;
    ecx = MEM32(0x31F5E0);
    edx = MEM32(0x31F5E4);
    SET_LO8(eax, MEM8(0x31F5E8));
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM8(esp + 0x30) = LO8(eax);
    goto loc_0015FCA8;

loc_0015FADE: ;
    ecx = MEM32(0x31F5D8);
    edx = MEM32(0x31F5DC);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    goto loc_0015FCA8;

loc_0015FAF7: ;
    eax = MEM32(0x31F5CC);
    ecx = MEM32(0x31F5D0);
    SET_LO16(edx, MEM16(0x31F5D4));
    MEM32(esp + 0x28) = eax;
    SET_LO8(eax, MEM8(0x31F5D6));
    MEM32(esp + 0x2C) = ecx;
    MEM16(esp + 0x30) = LO16(edx);
    MEM8(esp + 0x32) = LO8(eax);
    goto loc_0015FCA8;

loc_0015FB24: ;
    ecx = MEM32(0x31F5C0);
    edx = MEM32(0x31F5C4);
    eax = MEM32(0x31F5C8);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    goto loc_0015FCA8;

loc_0015FB46: ;
    ecx = MEM32(0x31F5B4);
    edx = MEM32(0x31F5B8);
    eax = MEM32(0x31F5BC);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    goto loc_0015FCA8;

loc_0015FB68: ;
    ecx = MEM32(0x31EC18);
    edx = MEM32(0x31EC1C);
    eax = MEM32(0x31EC20);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    goto loc_0015FCA8;

loc_0015FB8A: ;
    SET_LO16(ecx, MEM16(0x31EC14));
    SET_LO8(edx, MEM8(0x31EC16));
    MEM16(esp + 0x28) = LO16(ecx);
    MEM8(esp + 0x2A) = LO8(edx);
    goto loc_0015FCA8;

loc_0015FBA5: ;
    eax = MEM32(0x31F5A4);
    ecx = MEM32(0x31F5A8);
    edx = MEM32(0x31F5AC);
    MEM32(esp + 0x28) = eax;
    SET_LO8(eax, MEM8(0x31F5B0));
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM8(esp + 0x34) = LO8(eax);
    goto loc_0015FCA8;

loc_0015FBD0: ;
    ecx = MEM32(0x31F594);
    edx = MEM32(0x31F598);
    eax = MEM32(0x31F59C);
    MEM32(esp + 0x28) = ecx;
    SET_LO16(ecx, MEM16(0x31F5A0));
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    MEM16(esp + 0x34) = LO16(ecx);
    goto loc_0015FCA8;

loc_0015FBFE: ;
    edx = MEM32(0x31A114);
    SET_LO16(eax, MEM16(0x31A118));
    SET_LO8(ecx, MEM8(0x31A11A));
    MEM32(esp + 0x28) = edx;
    MEM16(esp + 0x2C) = LO16(eax);
    MEM8(esp + 0x2E) = LO8(ecx);
    goto loc_0015FCA8;

loc_0015FC22: ;
    edx = MEM32(0x31F584);
    eax = MEM32(0x31F588);
    ecx = MEM32(0x31F58C);
    MEM32(esp + 0x28) = edx;
    SET_LO16(edx, MEM16(0x31F590));
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM16(esp + 0x34) = LO16(edx);
    goto loc_0015FCA8;

loc_0015FC4D: ;
    eax = MEM32(0x31F578);
    ecx = MEM32(0x31F57C);
    SET_LO16(edx, MEM16(0x31F580));
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM16(esp + 0x30) = LO16(edx);
    goto loc_0015FCA8;

loc_0015FC6E: ;
    eax = MEM32(0x31F56C);
    ecx = MEM32(0x31F570);
    SET_LO16(edx, MEM16(0x31F574));
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM16(esp + 0x30) = LO16(edx);
    goto loc_0015FCA8;

loc_0015FC8F: ;
    eax = MEM32(0x31F564);
    ecx = MEM32(0x31F568);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    goto loc_0015FCA8;

loc_0015FCA4: ;
    MEM8(esp + 0x28) = LO8(ebx);

loc_0015FCA8: ;
    edi = 0x3021CE;
    esi = esp + 0x28;
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, ebp);
    if ((_flags == 0)) goto loc_0015FCCC; /* jne: not equal / not zero */

loc_0015FCBE: ;
    eax = MEM32(esp + 0x44);
    MEM8(eax) = LO8(ebx);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0015FCCC: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x31F558);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015FCEFu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0015FCEF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015FD70
 * Original: 0x0015FD70 - 0x0015FD87 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FD70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FD84; /* jl: less (signed <) */

loc_0015FD79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015FD84; /* jg: greater (signed >) */

loc_0015FD7E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0015FD84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015FD90
 * Original: 0x0015FD90 - 0x0015FD9A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FD90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FD90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015FD96u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0015FD96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015FDA0
 * Original: 0x0015FDA0 - 0x0015FDCD (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FDA0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 4 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0015FDBB; /* je: equal / zero */

loc_0015FDAB: ;
    SET_LO8(ecx, 0xFF);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_0015FDBB: ;
    SET_LO8(ecx, 0x40);
    MEM8(eax) = 0x80;
    MEM8(eax + 3) = 0xFF;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015FDD0
 * Original: 0x0015FDD0 - 0x0015FEB0 (224 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FDD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0015FEAB; /* je: equal / zero */

loc_0015FDE0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015FDEBu); RECOMP_ABI_CALL(0x0015F670u, sub_0015F670); /* call 0x0015F670 */

loc_0015FDEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FEAA; /* jne: not equal / not zero */

loc_0015FDF3: ;
    eax = MEM32(esi + 0x3520);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x110);
    edx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015FE03: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FE03; /* jne: not equal / not zero */

loc_0015FE0D: ;
    eax = MEM32(esi + 0x3520);
    xmm0 = XMM_SCALAR(MEMF(0x31F674)); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x110);
    MEM8(eax + esi + 0x100) = 1;
    ecx = MEM32(esi + 0x3520);
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, ebx);
    MEMF(ecx + esi + 0x104) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FE53; /* je: equal / zero */

loc_0015FE48: ;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, LO8(edx) | 0xFF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0015FE59;

loc_0015FE53: ;
    SET_LO8(edx, 0x40);
    SET_LO8(ecx, 0x80);
    SET_LO8(ebx, LO8(edx));

loc_0015FE59: ;
    eax = MEM32(esi + 0x3520);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x110);
    eax = eax + esi + 0x108;
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 2) = LO8(ebx);
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 3) = 0xFF;
    ecx = MEM32(esi + 0x3520);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x110);
    MEM32(ecx + esi + 0x10C) = ebp;
    ecx = MEM32(esi + 0x3520);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    MEM32(esi + 0x3520) = ecx;
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_0015FEAA; /* jb: below (unsigned <) */

loc_0015FEA0: ;
    MEM32(esi + 0x3520) = 0;

loc_0015FEAA: ;
    POP32(esp, ebp);

loc_0015FEAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015FEB0
 * Original: 0x0015FEB0 - 0x0015FEE4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FEB0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FEE3; /* je: equal / zero */

loc_0015FEB8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0015FEC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015FEBAu); } /* indirect call */
    }

loc_0015FEC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FEE3; /* je: equal / zero */

loc_0015FEC4: ;
    _fb = (uint32_t)(0x424) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x424;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0015FEE3; /* je: equal / zero */

loc_0015FECB: ;
    ecx = eax + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FEE3; /* je: equal / zero */

loc_0015FED2: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015FEE3u); RECOMP_ABI_CALL(0x0015FDD0u, sub_0015FDD0); /* call 0x0015FDD0 */

loc_0015FEE3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FEF0
 * Original: 0x0015FEF0 - 0x0015FF5E (110 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FEF0: ;
    eax = MEM32(0x3E8D54);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015FF5C; /* jle: less or equal (signed <=) */

loc_0015FEFC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);

loc_0015FF07: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015FF0Du); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_0015FF0D: ;
    esi = eax;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FF4F; /* je: equal / zero */

loc_0015FF1A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0015FF24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015FF1Eu); } /* indirect call */
    }

loc_0015FF24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FF4F; /* jne: not equal / not zero */

loc_0015FF2A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0015FF34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015FF2Eu); } /* indirect call */
    }

loc_0015FF34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FF4F; /* je: equal / zero */

loc_0015FF38: ;
    _fb = (uint32_t)(0x424) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x424;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0015FF4F; /* je: equal / zero */

loc_0015FF3F: ;
    ecx = eax + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FF4F; /* je: equal / zero */

loc_0015FF46: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015FF4Fu); RECOMP_ABI_CALL(0x0015FDD0u, sub_0015FDD0); /* call 0x0015FDD0 */

loc_0015FF4F: ;
    eax = MEM32(0x3E8D54);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FF07; /* jl: less (signed <) */

loc_0015FF59: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0015FF5C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FF60
 * Original: 0x0015FF60 - 0x0015FFC5 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FF60: ;
    eax = MEM32(0x3E8D54);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015FFC3; /* jle: less or equal (signed <=) */

loc_0015FF6C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    goto loc_0015FF80;

    /* nop */

loc_0015FF80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015FF86u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_0015FF86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FFB6; /* je: equal / zero */

loc_0015FF8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FFB6; /* je: equal / zero */

loc_0015FF91: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0015FF9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015FF95u); } /* indirect call */
    }

loc_0015FF9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FFB6; /* je: equal / zero */

loc_0015FF9F: ;
    _fb = (uint32_t)(0x424) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x424;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0015FFB6; /* je: equal / zero */

loc_0015FFA6: ;
    ecx = eax + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FFB6; /* je: equal / zero */

loc_0015FFAD: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015FFB6u); RECOMP_ABI_CALL(0x0015FDD0u, sub_0015FDD0); /* call 0x0015FDD0 */

loc_0015FFB6: ;
    eax = MEM32(0x3E8D54);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FF80; /* jl: less (signed <) */

loc_0015FFC0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0015FFC3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FFD0
 * Original: 0x0015FFD0 - 0x0015FFEB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FFD0: ;
    eax = MEM32(0x51D660);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FFEA; /* je: equal / zero */

loc_0015FFD9: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = eax + 0x20;
    PUSH32(esp, 0x0015FFEAu); RECOMP_ABI_CALL(0x0015FDD0u, sub_0015FDD0); /* call 0x0015FDD0 */

loc_0015FFEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FFF0
 * Original: 0x0015FFF0 - 0x00160088 (152 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FFF0: ;
    eax = MEM32(0x3E8D54);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00160083; /* jle: less or equal (signed <=) */

loc_00160003: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x54);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    edi = edi;

loc_00160010: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00160016u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_00160016: ;
    esi = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00160025u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016001Fu); } /* indirect call */
    }

loc_00160025: ;
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00160031u); RECOMP_ABI_CALL(0x0015F6E0u, sub_0015F6E0); /* call 0x0015F6E0 */

loc_00160031: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160076; /* je: equal / zero */

loc_00160038: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    edx = esp + 0x18;
    PUSH32(esp, 0x31F678);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00160049u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00160049: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00160056u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160050u); } /* indirect call */
    }

loc_00160056: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160076; /* je: equal / zero */

loc_0016005A: ;
    _fb = (uint32_t)(0x424) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x424;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00160076; /* je: equal / zero */

loc_00160061: ;
    ecx = eax + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160076; /* je: equal / zero */

loc_00160068: ;
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00160076u); RECOMP_ABI_CALL(0x0015FDD0u, sub_0015FDD0); /* call 0x0015FDD0 */

loc_00160076: ;
    eax = MEM32(0x3E8D54);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00160010; /* jl: less (signed <) */

loc_00160080: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00160083: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00160090
 * Original: 0x00160090 - 0x00160173 (227 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160090: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 0x34) = LO8(ebx);
    ecx = 0xF;
    edi = esp + 0x35;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(0x3E8D54);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016016D; /* jle: less or equal (signed <=) */

loc_001600BA: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x80);
    PUSH32(esp, esi);

loc_001600C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001600C9u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_001600C9: ;
    esi = eax;
    eax = MEM32(esi + 0x30);
    ecx = esi + 0x30;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001600D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001600D4u); } /* indirect call */
    }

loc_001600D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160102; /* je: equal / zero */

loc_001600DB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001600E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001600DFu); } /* indirect call */
    }

loc_001600E5: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x84);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001600F9u); RECOMP_ABI_CALL(0x0015F7F0u, sub_0015F7F0); /* call 0x0015F7F0 */

loc_001600F9: ;
    SET_LO8(ebx, LO8(eax));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160110; /* jne: not equal / not zero */

loc_00160102: ;
    eax = MEM32(0x3E8D54);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001600C3; /* jl: less (signed <) */

loc_0016010C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016016B; /* je: equal / zero */

loc_00160110: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0x3C;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x14) = 0x2FF9EC;
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x3C) = LO8(eax);
    PUSH32(esp, 0x0016015Bu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0016015B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0016016Bu); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_0016016B: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0016016D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00160180
 * Original: 0x00160180 - 0x001601D9 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160180: ;
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax + 0x10A;
    esi = 0x32;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, 0xFF);

loc_00160193: ;
    MEM8(edx + -2) = LO8(ebx);
    MEM8(edx + -1) = LO8(ebx);
    MEM8(edx) = LO8(ebx);
    MEM8(edx + 1) = LO8(ecx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x110;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00160193; /* jne: not equal / not zero */

loc_001601A7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = eax + 0x104;
    esi = 0x32;
    goto loc_001601C0;

    /* nop */
    edi = edi;

loc_001601C0: ;
    MEM8(edx + -4) = LO8(ebx);
    MEMF(edx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x110;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001601C0; /* jne: not equal / not zero */

loc_001601D0: ;
    POP32(esp, esi);
    MEM32(eax + 0x3520) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001601E0
 * Original: 0x001601E0 - 0x001601E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001601E0(void)
{

loc_001601E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001601F0
 * Original: 0x001601F0 - 0x001602F5 (261 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001601F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001601F0: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x70);
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    eax = MEM32(esp + 0x6C);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(esp + 0x74);
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(esp + 0x78);
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(esp + 0x68);
    eax = MEM32(eax);
    PUSH32(esp, 5);
    MEMF(esp + 0x4C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    PUSH32(esp, 4);
    ecx = esp + 8;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = eax;
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x50) = eax;
    MEMF(esp + 0x58) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0x001602EFu); RECOMP_ABI_CALL(0x000BF900u, sub_000BF900); /* call 0x000BF900 */

loc_001602EF: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_00160300
 * Original: 0x00160300 - 0x001609A5 (1701 bytes, 461 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016099F; /* jne: not equal / not zero */

loc_00160316: ;
    eax = MEM32(0x51D65C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016099F; /* je: equal / zero */

loc_00160323: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    ebx = 1;
    PUSH32(esp, 0x31FA4C);
    MEM8(esi) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016033Eu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016033E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160353; /* je: equal / zero */

loc_00160345: ;
    PUSH32(esp, 0x1FA86198);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160351u); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00160351: ;
    goto loc_00160355;

loc_00160353: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00160355: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x54) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016044E; /* je: equal / zero */

loc_00160360: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = 0x389FD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160378u); RECOMP_ABI_CALL(0x00160F90u, sub_00160F90); /* call 0x00160F90 */

loc_00160378: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC60); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x38DC58); /* divss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x38DC5C); /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = 0x389FD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001603BAu); RECOMP_ABI_CALL(0x00160F90u, sub_00160F90); /* call 0x00160F90 */

loc_001603BA: ;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001603CEu); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_001603CE: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x4BCB2BEE);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001603E1u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_001603E1: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3003A4); /* addss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x38DC58); /* divss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    ecx = MEM32(esi + 0x54);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, edx);
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016041Du); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016041D: ;
    eax = MEM32(esi + 0x54);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 0x5C) = 0x21;
    MEM8(eax + 0x73) = LO8(ebx);
    eax = MEM32(esi + 0x54);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016044Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016044Bu); } /* indirect call */
    }

loc_0016044E: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0xFACB8295u);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016045Du); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0016045D: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x58) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016046Eu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016046E: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x31FA10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160482u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00160482: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160497; /* je: equal / zero */

loc_00160489: ;
    PUSH32(esp, 0x7B6AEBCC);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160495u); RECOMP_ABI_CALL(0x00157F80u, sub_00157F80); /* call 0x00157F80 */

loc_00160495: ;
    goto loc_00160499;

loc_00160497: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00160499: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x60) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016058B; /* je: equal / zero */

loc_001604A4: ;
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0xFD0B0FE4u);
    MEM32(esp + 0x1C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001604C4u); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_001604C4: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001604CBu); RECOMP_ABI_CALL(0x001579A0u, sub_001579A0); /* call 0x001579A0 */

loc_001604CB: ;
    ecx = MEM32(0x378668);
    eax = MEM32(esi + 0x60);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x14) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = LO8(ebx);
    eax = MEM32(esi + 0x60);
    xmm0 = XMM_SCALAR(MEMF(0x378680)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x378684)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x378688)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esi + 0x60);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x94) = edx;
    eax = MEM32(esi + 0x60);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, 0x31FA0C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160542u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_00160542: ;
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160556u); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_00160556: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x7B6AEBCC);
    PUSH32(esp, 0x1FA86198);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160572u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00160572: ;
    ecx = MEM32(esi + 0x60);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016057Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016057Bu); } /* indirect call */
    }

loc_0016057E: ;
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, 0x3021CE);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016058Bu); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016058B: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x31F9D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016059Fu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016059F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001605B4; /* je: equal / zero */

loc_001605A6: ;
    PUSH32(esp, 0x3C76B2AB);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001605B2u); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_001605B2: ;
    goto loc_001605B6;

loc_001605B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001605B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x5C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00160631; /* je: equal / zero */

loc_001605BD: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x40);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001605C8u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_001605C8: ;
    eax = MEM32(esi + 0x5C);
    xmm0 = XMM_SCALAR(MEMF(0x51D860)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x51D864)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x51D868)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ebx);
    eax = MEM32(esi + 0x5C);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160609u); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_00160609: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x3C76B2AB);
    PUSH32(esp, 0x7B6AEBCC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160625u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00160625: ;
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00160631u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016062Eu); } /* indirect call */
    }

loc_00160631: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x2D0);
    PUSH32(esp, 0x31F994);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160645u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00160645: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016065A; /* je: equal / zero */

loc_0016064C: ;
    PUSH32(esp, 0x42229FF);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160658u); RECOMP_ABI_CALL(0x0016B8A0u, sub_0016B8A0); /* call 0x0016B8A0 */

loc_00160658: ;
    goto loc_0016065C;

loc_0016065A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016065C: ;
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x378668);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x14) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = LO8(ebx);
    eax = MEM32(esi + 0x54);
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(eax + 0x50), g_mxcsr, 1); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x300C08); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016069Eu); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016069E: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ebx);
    eax = MEM32(esi + 4);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001606CAu); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_001606CA: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x42229FF);
    PUSH32(esp, 0x3C76B2AB);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001606E6u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_001606E6: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001606F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001606EFu); } /* indirect call */
    }

loc_001606F2: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x31F958);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160706u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00160706: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016071B; /* je: equal / zero */

loc_0016070D: ;
    PUSH32(esp, 0xFBC287ECu);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160719u); RECOMP_ABI_CALL(0x0015D830u, sub_0015D830); /* call 0x0015D830 */

loc_00160719: ;
    goto loc_0016071D;

loc_0016071B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016071D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x64) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00160822; /* je: equal / zero */

loc_00160728: ;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFD0B0FE4u);
    MEM32(esp + 0x1C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160748u); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_00160748: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016074Fu); RECOMP_ABI_CALL(0x001579A0u, sub_001579A0); /* call 0x001579A0 */

loc_0016074F: ;
    ecx = MEM32(0x378668);
    eax = MEM32(esi + 0x64);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x14) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = LO8(ebx);
    edx = MEM32(esp + 8);
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016077Bu); RECOMP_ABI_CALL(0x0015DA00u, sub_0015DA00); /* call 0x0015DA00 */

loc_0016077B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160788u); RECOMP_ABI_CALL(0x0015DA50u, sub_0015DA50); /* call 0x0015DA50 */

loc_00160788: ;
    eax = MEM32(esi + 0x64);
    xmm0 = XMM_SCALAR(MEMF(0x378690)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x378694)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x378698)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001607BFu); RECOMP_ABI_CALL(0x0015D960u, sub_0015D960); /* call 0x0015D960 */

loc_001607BF: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001607C9u); RECOMP_ABI_CALL(0x0015D900u, sub_0015D900); /* call 0x0015D900 */

loc_001607C9: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0x31FA0C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001607D6u); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_001607D6: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001607EAu); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_001607EA: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x110);
    PUSH32(esp, 0xFBC287ECu);
    PUSH32(esp, 0x1FA86198);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160809u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00160809: ;
    ecx = MEM32(esi + 0x64);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00160815u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160812u); } /* indirect call */
    }

loc_00160815: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0x3021CE);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160822u); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_00160822: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x31F91C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160836u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00160836: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016084B; /* je: equal / zero */

loc_0016083D: ;
    PUSH32(esp, 0xA194CE0Du);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160849u); RECOMP_ABI_CALL(0x0015D830u, sub_0015D830); /* call 0x0015D830 */

loc_00160849: ;
    goto loc_0016084D;

loc_0016084B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016084D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x68) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00160952; /* je: equal / zero */

loc_00160858: ;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFD0B0FE4u);
    MEM32(esp + 0x1C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160878u); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_00160878: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016087Fu); RECOMP_ABI_CALL(0x001579A0u, sub_001579A0); /* call 0x001579A0 */

loc_0016087F: ;
    ecx = MEM32(0x378668);
    eax = MEM32(esi + 0x68);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x14) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = LO8(ebx);
    edx = MEM32(esp + 8);
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001608ABu); RECOMP_ABI_CALL(0x0015DA00u, sub_0015DA00); /* call 0x0015DA00 */

loc_001608AB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001608B8u); RECOMP_ABI_CALL(0x0015DA50u, sub_0015DA50); /* call 0x0015DA50 */

loc_001608B8: ;
    eax = MEM32(esi + 0x68);
    xmm0 = XMM_SCALAR(MEMF(0x3786A0)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3786A4)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3786A8)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001608EFu); RECOMP_ABI_CALL(0x0015D960u, sub_0015D960); /* call 0x0015D960 */

loc_001608EF: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001608F9u); RECOMP_ABI_CALL(0x0015D900u, sub_0015D900); /* call 0x0015D900 */

loc_001608F9: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0x31FA0C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160906u); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_00160906: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016091Au); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_0016091A: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x210);
    PUSH32(esp, 0xA194CE0Du);
    PUSH32(esp, 0x1FA86198);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160939u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00160939: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00160945u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160942u); } /* indirect call */
    }

loc_00160945: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, 0x3021CE);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160952u); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_00160952: ;
    eax = MEM32(0x378630);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016096Cu); RECOMP_ABI_CALL(0x00159A20u, sub_00159A20); /* call 0x00159A20 */

loc_0016096C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x31F68C;

loc_00160974: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esi + -4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -8);
    PUSH32(esp, edx);
    edx = MEM32(esi + -12);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x278ABD4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160991u); RECOMP_ABI_CALL(0x00159AF0u, sub_00159AF0); /* call 0x00159AF0 */

loc_00160991: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31F7B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x31F7B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00160974; /* jl: less (signed <) */

loc_0016099F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001609B0
 * Original: 0x001609B0 - 0x001609D6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001609B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001609B0: ;
    eax = MEM32(0x51D850);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001609D5; /* je: equal / zero */

loc_001609BB: ;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);

loc_001609D5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001609E0
 * Original: 0x001609E0 - 0x00160B28 (328 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001609E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001609E0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160B21; /* je: equal / zero */

loc_001609F1: ;
    eax = MEM32(0x378664);
    edx = MEM32(esp + 0x30);
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    MEM8(esp + 0xC) = LO8(eax);
    MEM8(esp + 0xD) = HI8(eax);
    SET_LO16(eax, MEM16(0x378666));
    MEM8(esp + 0xE) = LO8(eax);
    MEM8(esp + 0xF) = HI8(eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00160A83u); RECOMP_ABI_CALL(0x001601F0u, sub_001601F0); /* call 0x001601F0 */

loc_00160A83: ;
    xmm1 = XMM_SCALAR(MEMF(0x38DC58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x31FA88); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x30105C); /* addss */
    ecx = MEM32(esp + 0x44);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x58);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FF224)); /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x00160B1Fu); RECOMP_ABI_CALL(0x001601F0u, sub_001601F0); /* call 0x001601F0 */

loc_00160B1F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00160B21: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00160B30
 * Original: 0x00160B30 - 0x00160B4D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160B30: ;
    MEM32(ecx + 0x10) = 0;
    SET_LO8(eax, MEM8(ecx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160B4C; /* je: equal / zero */

loc_00160B3E: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160B4C; /* je: equal / zero */

loc_00160B45: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00160B4Bu); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00160B4B: ;
    POP32(esp, ecx);

loc_00160B4C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00160B50
 * Original: 0x00160B50 - 0x00160D84 (564 bytes, 190 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160B50(void)
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

loc_00160B50: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00160D7B; /* jne: not equal / not zero */

loc_00160B63: ;
    ebp = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160D7B; /* je: equal / zero */

loc_00160B6F: ;
    edi = MEM32(0x3E8D08);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160D7B; /* je: equal / zero */

loc_00160B7D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00160B84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160B81u); } /* indirect call */
    }

loc_00160B84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160D7B; /* je: equal / zero */

loc_00160B8C: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00160B93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160B90u); } /* indirect call */
    }

loc_00160B93: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00160B9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160B97u); } /* indirect call */
    }

loc_00160B9A: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (!(_fa & 1u) /* fcompi */) goto loc_00160D7B; /* jae: above or equal (unsigned >=) */

loc_00160BAA: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160C22; /* jne: not equal / not zero */

loc_00160BB1: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    edi = esi + 8;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = edx + ecx * 4;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00160BCBu); RECOMP_ABI_CALL(0x00161020u, sub_00161020); /* call 0x00161020 */

loc_00160BCB: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi);
    edx = ecx + edx * 4;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160D7B; /* jne: not equal / not zero */

loc_00160BDE: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00160BEBu); RECOMP_ABI_CALL(0x00160FF0u, sub_00160FF0); /* call 0x00160FF0 */

loc_00160BEB: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160C22; /* je: equal / zero */

loc_00160BF2: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160D7B; /* je: equal / zero */

loc_00160BFE: ;
    ecx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x50) = eax;
    edx = eax + eax * 2;
    eax = esi + edx * 4 + 0x20;
    edx = MEM32(esp + 0x2C);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00160C22: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    ecx = 0x3887D0;
    PUSH32(esp, 0x00160C30u); RECOMP_ABI_CALL(0x0015C600u, sub_0015C600); /* call 0x0015C600 */

loc_00160C30: ;
    ecx = esi;
    MEM8(esi + 1) = 1;
    PUSH32(esp, 0x00160C3Bu); RECOMP_ABI_CALL(0x00160300u, sub_00160300); /* call 0x00160300 */

loc_00160C3B: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160C4B; /* je: equal / zero */

loc_00160C42: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00160C4Bu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00160C4B: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160C84; /* je: equal / zero */

loc_00160C52: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00160C58u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00160C58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160C7B; /* jne: not equal / not zero */

loc_00160C5F: ;
    eax = MEM32(esi + 4);
    edi = MEM32(eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x31FAE8);
    PUSH32(esp, 0x00160C6Fu); RECOMP_ABI_CALL(0x00154820u, sub_00154820); /* call 0x00154820 */

loc_00160C6F: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x28); PUSH32(esp, 0x00160C79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160C76u); } /* indirect call */
    }

loc_00160C79: ;
    goto loc_00160C84;

loc_00160C7B: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00160C84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160C81u); } /* indirect call */
    }

loc_00160C84: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160D5C; /* je: equal / zero */

loc_00160C8F: ;
    MEM8(eax + 0x1A) = 0;
    MEM8(eax + 0x1B) = 0;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160CBF; /* je: equal / zero */

loc_00160C9E: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00160CA8u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00160CA8: ;
    ecx = MEM32(esi + 0x60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160CB5; /* je: equal / zero */

loc_00160CB2: ;
    PUSH32(esp, eax);
    goto loc_00160CBA;

loc_00160CB5: ;
    PUSH32(esp, 0x31FADC);

loc_00160CBA: ;
    PUSH32(esp, 0x00160CBFu); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_00160CBF: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160CE7; /* je: equal / zero */

loc_00160CC6: ;
    PUSH32(esp, 0xFBC287ECu);
    PUSH32(esp, 0x00160CD0u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00160CD0: ;
    ecx = MEM32(esi + 0x64);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160CDD; /* je: equal / zero */

loc_00160CDA: ;
    PUSH32(esp, eax);
    goto loc_00160CE2;

loc_00160CDD: ;
    PUSH32(esp, 0x31FAB4);

loc_00160CE2: ;
    PUSH32(esp, 0x00160CE7u); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_00160CE7: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160D0F; /* je: equal / zero */

loc_00160CEE: ;
    PUSH32(esp, 0xA194CE0Du);
    PUSH32(esp, 0x00160CF8u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00160CF8: ;
    ecx = MEM32(esi + 0x68);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160D05; /* je: equal / zero */

loc_00160D02: ;
    PUSH32(esp, eax);
    goto loc_00160D0A;

loc_00160D05: ;
    PUSH32(esp, 0x31FA8C);

loc_00160D0A: ;
    PUSH32(esp, 0x00160D0Fu); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_00160D0F: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160D5C; /* je: equal / zero */

loc_00160D16: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00160D25u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00160D25: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = eax;
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, 0x00160D53u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00160D53: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00160D5Cu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00160D5C: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x108);
    PUSH32(esp, 0xEC20599Cu);
    PUSH32(esp, 0x1FA86198);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00160D7Bu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00160D7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00160D90
 * Original: 0x00160D90 - 0x00160E10 (128 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160D90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160DAA; /* jne: not equal / not zero */

loc_00160DA0: ;
    MEM8(esi + 2) = LO8(ecx);
    MEM32(esi + 0x50) = 0xFFFFFFFFu;

loc_00160DAA: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 1) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_00160DED; /* jge: greater or equal (signed >=) */

loc_00160DB5: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0xEC20599Cu);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00160DC9u); RECOMP_ABI_CALL(0x0015A320u, sub_0015A320); /* call 0x0015A320 */

loc_00160DC9: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160DD9; /* je: equal / zero */

loc_00160DD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00160DD9u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00160DD9: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160E0C; /* je: equal / zero */

loc_00160DE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00160DE9u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00160DE9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00160DED: ;
    ecx = eax + eax * 2;
    ecx = esi + ecx * 4 + 0x20;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x50) = eax;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00160E0Cu); RECOMP_ABI_CALL(0x00160B50u, sub_00160B50); /* call 0x00160B50 */

loc_00160E0C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160E10
 * Original: 0x00160E10 - 0x00160E80 (112 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160E7C; /* je: equal / zero */

loc_00160E20: ;
    eax = MEM32(ecx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160E7C; /* je: equal / zero */

loc_00160E27: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x38DC58); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x38DC5C); /* mulss */
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00160E7Cu); RECOMP_ABI_CALL(0x001609E0u, sub_001609E0); /* call 0x001609E0 */

loc_00160E7C: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00160E80
 * Original: 0x00160E80 - 0x00160ECE (78 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160E80: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    SET_LO8(eax, 1);
    MEM8(esi + 2) = LO8(eax);
    MEM8(ecx + 0x10) = LO8(eax);
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = ebx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x14) = eax;
    PUSH32(esp, 0x40);
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x68) = ebx;
    PUSH32(esp, 0x00160EC6u); RECOMP_ABI_CALL(0x000F2470u, sub_000F2470); /* call 0x000F2470 */

loc_00160EC6: ;
    MEM32(esi + 0x20) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00160ED0
 * Original: 0x00160ED0 - 0x00160F0F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160ED0: ;
    eax = MEM32(0x51D850);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160F0E; /* je: equal / zero */

loc_00160ED9: ;
    MEM32(eax + 0x10) = 0;
    SET_LO8(ecx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00160EFA; /* je: equal / zero */

loc_00160EEA: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160EFA; /* je: equal / zero */

loc_00160EF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00160EF7u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00160EF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00160EFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00160F00u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00160F00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51D850) = 0;
    POP32(esp, esi);

loc_00160F0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00160F10
 * Original: 0x00160F10 - 0x00160F46 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160F10: ;
    eax = MEM32(0x51D850);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160F45; /* jne: not equal / not zero */

loc_00160F19: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x31FB0C);
    PUSH32(esp, 0x00160F2Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00160F2A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160F3E; /* je: equal / zero */

loc_00160F31: ;
    ecx = eax;
    PUSH32(esp, 0x00160F38u); RECOMP_ABI_CALL(0x00160E80u, sub_00160E80); /* call 0x00160E80 */

loc_00160F38: ;
    MEM32(0x51D850) = eax;
    esp += 4; return; /* ret */

loc_00160F3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x51D850) = eax;

loc_00160F45: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00160F50
 * Original: 0x00160F50 - 0x00160F86 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160F50: ;
    SET_LO8(eax, MEM8(ecx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160F83; /* jne: not equal / not zero */

loc_00160F57: ;
    edx = MEM32(esp + 4);
    eax = 0x378634;

loc_00160F60: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160F71; /* je: equal / zero */

loc_00160F64: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x378664) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x378664 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00160F60; /* jl: less (signed <) */

loc_00160F6E: ;
    esp += 8; return; /* ret 4 */

loc_00160F71: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00160F83u); RECOMP_ABI_CALL(0x00160B50u, sub_00160B50); /* call 0x00160B50 */

loc_00160F83: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160F90
 * Original: 0x00160F90 - 0x00160FE1 (81 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160F90(void)
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

loc_00160F90: ;
    fp_push(MEMF(0x3727CC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC94)); /* fadd dword ptr [0x38dc94] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00160FB1u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_00160FB1: ;
    eax = MEM32(esp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3727D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC98)); /* fadd dword ptr [0x38dc98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00160FD5u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_00160FD5: ;
    ecx = MEM32(esp + 0x10);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00160FF0
 * Original: 0x00160FF0 - 0x0016101D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160FF0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx);
    edx = edx + eax * 4;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016100F; /* je: equal / zero */

loc_00161000: ;
    PUSH32(esp, esi);

loc_00161001: ;
    esi = MEM32(edx + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(edx + 4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00161001; /* jne: not equal / not zero */

loc_0016100E: ;
    POP32(esp, esi);

loc_0016100F: ;
    edx = MEM32(esp + 8);
    edx = MEM32(edx);
    MEM32(eax) = edx;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161020
 * Original: 0x00161020 - 0x0016103E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161020: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = esp + 3;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016103Au); RECOMP_ABI_CALL(0x00045310u, sub_00045310); /* call 0x00045310 */

loc_0016103A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00161040
 * Original: 0x00161040 - 0x00161050 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161040(void)
{

loc_00161040: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00161050
 * Original: 0x00161050 - 0x00161051 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161050(void)
{

loc_00161050: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161060
 * Original: 0x00161060 - 0x00161165 (261 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161060: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x70);
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    eax = MEM32(esp + 0x6C);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(esp + 0x74);
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(esp + 0x78);
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(esp + 0x68);
    eax = MEM32(eax);
    PUSH32(esp, 5);
    MEMF(esp + 0x4C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    PUSH32(esp, 4);
    ecx = esp + 8;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = eax;
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x50) = eax;
    MEMF(esp + 0x58) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0x0016115Fu); RECOMP_ABI_CALL(0x000BF900u, sub_000BF900); /* call 0x000BF900 */

loc_0016115F: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_00161170
 * Original: 0x00161170 - 0x00161416 (678 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x317728)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    SET_LO8(eax, 0xFF);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    esi = ecx;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEM8(esp + 0xA) = LO8(eax);
    MEM8(esp + 9) = LO8(eax);
    MEM8(esp + 8) = LO8(eax);
    MEM8(esp + 0xB) = LO8(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0016140D; /* je: equal / zero */

loc_00161252: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00161285u); RECOMP_ABI_CALL(0x00161060u, sub_00161060); /* call 0x00161060 */

loc_00161285: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001612B4u); RECOMP_ABI_CALL(0x00161060u, sub_00161060); /* call 0x00161060 */

loc_001612B4: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001612E6u); RECOMP_ABI_CALL(0x00161060u, sub_00161060); /* call 0x00161060 */

loc_001612E6: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00161315u); RECOMP_ABI_CALL(0x00161060u, sub_00161060); /* call 0x00161060 */

loc_00161315: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00161345u); RECOMP_ABI_CALL(0x00161060u, sub_00161060); /* call 0x00161060 */

loc_00161345: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00161378u); RECOMP_ABI_CALL(0x00161060u, sub_00161060); /* call 0x00161060 */

loc_00161378: ;
    edi = MEM32(ebp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001613AAu); RECOMP_ABI_CALL(0x00161060u, sub_00161060); /* call 0x00161060 */

loc_001613AA: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001613DAu); RECOMP_ABI_CALL(0x00161060u, sub_00161060); /* call 0x00161060 */

loc_001613DA: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016140Du); RECOMP_ABI_CALL(0x00161060u, sub_00161060); /* call 0x00161060 */

loc_0016140D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00161420
 * Original: 0x00161420 - 0x001614AA (138 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FBCA3FE);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00161437u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00161437: ;
    edx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161488; /* je: equal / zero */

loc_00161440: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp + 8) = 0;
    ecx = 0xFF;
    edi = esp + 0xA;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, 0x1FF);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00161466u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_00161466: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016147Eu); RECOMP_ABI_CALL(0x002BFCB0u, sub_002BFCB0); /* call 0x002BFCB0 */

loc_0016147E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_00161488: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x31FB48);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001614A0u); RECOMP_ABI_CALL(0x002BFCB0u, sub_002BFCB0); /* call 0x002BFCB0 */

loc_001614A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001614B0
 * Original: 0x001614B0 - 0x00161504 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001614B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001614B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001614BBu); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_001614BB: ;
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFD0B0FE4u);
    ecx = eax;
    PUSH32(esp, 0x001614D0u); RECOMP_ABI_CALL(0x001579A0u, sub_001579A0); /* call 0x001579A0 */

loc_001614D0: ;
    edx = esp + 4;
    PUSH32(esp, 0xFACB8295u);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001614DFu); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_001614DF: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x001614F0u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_001614F0: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001614FF; /* je: equal / zero */

loc_001614F7: ;
    MEM8(esi + 0x1A) = 0;
    MEM8(esi + 0x1B) = 0;

loc_001614FF: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00161510
 * Original: 0x00161510 - 0x001616F3 (483 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161510: ;
    _fb = (uint32_t)(0x41C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x41C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x424);
    edx = MEM32(esp + 0x420);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x200);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016153Cu); RECOMP_ABI_CALL(0x00161420u, sub_00161420); /* call 0x00161420 */

loc_0016153C: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 5));
    SET_LO8(ebx, MEM8(eax + 4));
    MEM8(esp + 0xF) = LO8(ecx);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    eax = MEM32(0x38DC64);
    ecx = MEM32(esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(0x38DC60);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016157Fu); RECOMP_ABI_CALL(0x000AD050u, sub_000AD050); /* call 0x000AD050 */

loc_0016157F: ;
    ecx = MEM32(esi);
    PUSH32(esp, 2);
    edi = eax;
    PUSH32(esp, 0x0016158Au); RECOMP_ABI_CALL(0x000AD040u, sub_000AD040); /* call 0x000AD040 */

loc_0016158A: ;
    xmm0 = XMM_SCALAR(MEMF(0x38DC58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    ecx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x38DC5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001615B9u); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_001615B9: ;
    ecx = MEM32(esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x190);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001615D5u); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_001615D5: ;
    ecx = eax;
    PUSH32(esp, 0x001615DCu); RECOMP_ABI_CALL(0x00157AF0u, sub_00157AF0); /* call 0x00157AF0 */

loc_001615DC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)MEM32(esp + 0x20); /* cvtsi2ss */
    xmm3 = XMM_SCALAR(MEMF(0x307EE4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00161653u); RECOMP_ABI_CALL(0x00161170u, sub_00161170); /* call 0x00161170 */

loc_00161653: ;
    ecx = MEM32(esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016165Fu); RECOMP_ABI_CALL(0x000AD620u, sub_000AD620); /* call 0x000AD620 */

loc_0016165F: ;
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x11) = LO8(eax);
    MEM8(esp + 0x12) = LO8(eax);
    MEM8(esp + 0x13) = LO8(eax);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0016167Du); RECOMP_ABI_CALL(0x000AD5E0u, sub_000AD5E0); /* call 0x000AD5E0 */

loc_0016167D: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    eax = MEM32(esp + 0x1C);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001616ADu); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_001616AD: ;
    ecx = eax;
    PUSH32(esp, 0x001616B4u); RECOMP_ABI_CALL(0x00157740u, sub_00157740); /* call 0x00157740 */

loc_001616B4: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001616C0u); RECOMP_ABI_CALL(0x000AD5E0u, sub_000AD5E0); /* call 0x000AD5E0 */

loc_001616C0: ;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001616C8u); RECOMP_ABI_CALL(0x000AD040u, sub_000AD040); /* call 0x000AD040 */

loc_001616C8: ;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(esp + 0xF));
    MEM8(eax + 4) = LO8(ebx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    MEM8(ecx + 5) = LO8(edx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x001616E7u); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_001616E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x41C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x41C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161700
 * Original: 0x00161700 - 0x00161740 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161700: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0016172E; /* je: equal / zero */

loc_00161712: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00161719u); RECOMP_ABI_CALL(0x00161AA0u, sub_00161AA0); /* call 0x00161AA0 */

loc_00161719: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016172E; /* jne: not equal / not zero */

loc_0016171D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00161724u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161721u); } /* indirect call */
    }

loc_00161724: ;
    MEM32(esi + 0x10C) = 0;

loc_0016172E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0016173Bu); RECOMP_ABI_CALL(0x0015E2D0u, sub_0015E2D0); /* call 0x0015E2D0 */

loc_0016173B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161740
 * Original: 0x00161740 - 0x00161750 (16 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161740(void)
{

loc_00161740: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161750
 * Original: 0x00161750 - 0x001617B1 (97 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161750: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x100);
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001617AE; /* je: equal / zero */

loc_00161761: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x00161769u); RECOMP_ABI_CALL(0x00161A60u, sub_00161A60); /* call 0x00161A60 */

loc_00161769: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0016178B; /* je: equal / zero */

loc_00161772: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001617A4; /* je: equal / zero */

loc_0016177B: ;
    goto loc_00161780;

    /* nop */

loc_00161780: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161780; /* jne: not equal / not zero */

loc_00161789: ;
    goto loc_001617A4;

loc_0016178B: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016179D; /* jne: not equal / not zero */

loc_00161793: ;
    eax = ecx;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161793; /* je: equal / zero */

loc_0016179D: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001617A4; /* je: equal / zero */

loc_001617A2: ;
    eax = ecx;

loc_001617A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x100)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x100) (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00161761; /* jne: not equal / not zero */

loc_001617AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001617C0
 * Original: 0x001617C0 - 0x00161809 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001617C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001617C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    edi = esi + 0x100;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001617DDu); RECOMP_ABI_CALL(0x00067EC0u, sub_00067EC0); /* call 0x00067EC0 */

loc_001617DD: ;
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161802; /* je: equal / zero */

loc_001617E5: ;
    ecx = MEM32(esi + 0x10C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001617F4; /* je: equal / zero */

loc_001617EF: ;
    PUSH32(esp, 0x001617F4u); RECOMP_ABI_CALL(0x00161A60u, sub_00161A60); /* call 0x00161A60 */

loc_001617F4: ;
    ecx = MEM32(ebx + 0x14);
    MEM32(esi + 0x10C) = ecx;
    PUSH32(esp, 0x00161802u); RECOMP_ABI_CALL(0x00161A60u, sub_00161A60); /* call 0x00161A60 */

loc_00161802: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161810
 * Original: 0x00161810 - 0x0016183C (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161810: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x590AA501) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x590AA501 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0016182D; /* jne: not equal / not zero */

loc_00161825: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016182Du); RECOMP_ABI_CALL(0x001617C0u, sub_001617C0); /* call 0x001617C0 */

loc_0016182D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00161836u); RECOMP_ABI_CALL(0x0015AD80u, sub_0015AD80); /* call 0x0015AD80 */

loc_00161836: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161840
 * Original: 0x00161840 - 0x001618AA (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161840: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = ebx + 0x100;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x31FBD0;
    eax = MEM32(esi + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161879; /* je: equal / zero */

loc_0016185A: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00161867u); RECOMP_ABI_CALL(0x00161940u, sub_00161940); /* call 0x00161940 */

loc_00161867: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    edx = MEM32(esi);
    MEM32(edx + 4) = edi;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = edi;

loc_00161879: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161888; /* je: equal / zero */

loc_0016187F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00161885u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00161885: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00161888: ;
    esi = ebx + 0xE0;
    edi = 4;

loc_00161893: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0016189Du); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016189D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00161893; /* jne: not equal / not zero */

loc_001618A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_001618B0
 * Original: 0x001618B0 - 0x0016190C (92 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001618B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001618B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001618BEu); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_001618BE: ;
    MEM32(esi) = 0x31FBD0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x18);
    MEM32(esi + 0x100) = ebx;
    PUSH32(esp, 0x001618D3u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_001618D3: ;
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x104) = ebx;
    MEM8(eax) = LO8(ebx);
    ecx = MEM32(esi + 0x100);
    MEM32(ecx + 4) = ebx;
    eax = MEM32(esi + 0x100);
    MEM32(eax + 8) = eax;
    eax = MEM32(esi + 0x100);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 0x10C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161910
 * Original: 0x00161910 - 0x0016193C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161910: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(esp) = eax;
    eax = esp;
    MEM32(esp + 4) = edx;
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00161936u); RECOMP_ABI_CALL(0x0013D7D0u, sub_0013D7D0); /* call 0x0013D7D0 */

loc_00161936: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161940
 * Original: 0x00161940 - 0x00161973 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016196E; /* je: equal / zero */

loc_0016194C: ;
    PUSH32(esp, edi);
    /* nop */

loc_00161950: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0016195Bu); RECOMP_ABI_CALL(0x00161940u, sub_00161940); /* call 0x00161940 */

loc_0016195B: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00161964u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00161964: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00161950; /* jne: not equal / not zero */

loc_0016196D: ;
    POP32(esp, edi);

loc_0016196E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161980
 * Original: 0x00161980 - 0x0016199E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161980: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00161988u); RECOMP_ABI_CALL(0x00161840u, sub_00161840); /* call 0x00161840 */

loc_00161988: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00161998; /* je: equal / zero */

loc_0016198F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00161995u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00161995: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00161998: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001619A0
 * Original: 0x001619A0 - 0x001619AD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001619A0(void)
{

loc_001619A0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM8(eax + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001619B0
 * Original: 0x001619B0 - 0x001619C9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001619B0(void)
{

loc_001619B0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM32(eax) = 0;
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001619D0
 * Original: 0x001619D0 - 0x001619DA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001619D0(void)
{

loc_001619D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 4) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001619E0
 * Original: 0x001619E0 - 0x001619F3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001619E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001619E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001619ED; /* jne: not equal / not zero */

loc_001619E8: ;
    eax = MEM32(ecx);
    esp += 8; return; /* ret 4 */

loc_001619ED: ;
    eax = MEM32(eax + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161A00
 * Original: 0x00161A00 - 0x00161A14 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161A00: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00161A02: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00161A0C; /* jne: not equal / not zero */

loc_00161A08: ;
    edx = MEM32(ecx);
    goto loc_00161A0F;

loc_00161A0C: ;
    edx = MEM32(edx + 8);

loc_00161A0F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161A02; /* jne: not equal / not zero */

loc_00161A13: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161A20
 * Original: 0x00161A20 - 0x00161A58 (56 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161A20: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00161A25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00161A2F; /* jne: not equal / not zero */

loc_00161A2B: ;
    eax = MEM32(edi);
    goto loc_00161A32;

loc_00161A2F: ;
    eax = MEM32(eax + 8);

loc_00161A32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161A25; /* jne: not equal / not zero */

loc_00161A36: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161A50; /* je: equal / zero */

loc_00161A3A: ;
    PUSH32(esp, esi);
    goto loc_00161A40;

    /* nop */

loc_00161A40: ;
    eax = MEM32(ecx);
    esi = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00161A49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161A47u); } /* indirect call */
    }

loc_00161A49: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00161A40; /* jne: not equal / not zero */

loc_00161A4F: ;
    POP32(esp, esi);

loc_00161A50: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00161A60
 * Original: 0x00161A60 - 0x00161A81 (33 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161A60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00161A66: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161A6E; /* jne: not equal / not zero */

loc_00161A6A: ;
    esi = MEM32(edi);
    goto loc_00161A71;

loc_00161A6E: ;
    esi = MEM32(esi + 8);

loc_00161A71: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161A7E; /* je: equal / zero */

loc_00161A75: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00161A7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161A79u); } /* indirect call */
    }

loc_00161A7C: ;
    goto loc_00161A66;

loc_00161A7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00161A90
 * Original: 0x00161A90 - 0x00161A95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161A90: ;
    g_seh_ebp = ebp; sub_00161A20(); return; /* tail jmp 0x00161A20 */

}

/**
 * sub_00161AA0
 * Original: 0x00161AA0 - 0x00161B11 (113 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161AA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebp = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 1);
    edi = edi;

loc_00161AB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161AB9; /* jne: not equal / not zero */

loc_00161AB4: ;
    esi = MEM32(ebp);
    goto loc_00161ABC;

loc_00161AB9: ;
    esi = MEM32(esi + 8);

loc_00161ABC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161AE8; /* je: equal / zero */

loc_00161AC0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00161AC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161AC5u); } /* indirect call */
    }

loc_00161AC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161AD9; /* je: equal / zero */

loc_00161ACC: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00161AD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161AD6u); } /* indirect call */
    }

loc_00161AD9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00161AE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161ADDu); } /* indirect call */
    }

loc_00161AE0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161AB0; /* jne: not equal / not zero */

loc_00161AE4: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00161AB0;

loc_00161AE8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161AFA; /* je: equal / zero */

loc_00161AEC: ;
    SET_LO8(eax, MEM8(ebp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00161B03; /* je: equal / zero */

loc_00161AF5: ;
    PUSH32(esp, 0x00161AFAu); RECOMP_ABI_CALL(0x00161A60u, sub_00161A60); /* call 0x00161A60 */

loc_00161AFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00161B03: ;
    PUSH32(esp, 0x00161B08u); RECOMP_ABI_CALL(0x00161A60u, sub_00161A60); /* call 0x00161A60 */

loc_00161B08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161B20
 * Original: 0x00161B20 - 0x00161B49 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161B20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00161B22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00161B2C; /* jne: not equal / not zero */

loc_00161B28: ;
    eax = MEM32(ecx);
    goto loc_00161B2F;

loc_00161B2C: ;
    eax = MEM32(eax + 8);

loc_00161B2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161B22; /* jne: not equal / not zero */

loc_00161B33: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00161B44; /* je: equal / zero */

loc_00161B3B: ;
    MEM32(edx + 8) = eax;
    MEM32(eax + 4) = edx;
    esp += 8; return; /* ret 4 */

loc_00161B44: ;
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161B50
 * Original: 0x00161B50 - 0x00161B61 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161B50: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x31FC00;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00161B70
 * Original: 0x00161B70 - 0x00161B77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161B70(void)
{

loc_00161B70: ;
    MEM32(ecx) = 0x31FC00;
    esp += 4; return; /* ret */

}

/**
 * sub_00161B80
 * Original: 0x00161B80 - 0x00161BEB (107 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00161B80: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00161BB0; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00161B8D: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00161BB0; /* jp: parity */

loc_00161B9B: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 4); /* subss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */

loc_00161BB0: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x10); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00161BD4; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0x10)) */

loc_00161BB6: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x10); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0x10); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00161BD4; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00161BCF: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00161BD4: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161BE6; /* je: equal / zero */

loc_00161BDB: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x10); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00161BE6; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0x10)) */

loc_00161BE1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00161BE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161BE3u); } /* indirect call */
    }

loc_00161BE6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161BF0
 * Original: 0x00161BF0 - 0x00161C04 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00161BF0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x14); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00161C01; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0x14)) */

loc_00161BFB: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00161C01: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00161C10
 * Original: 0x00161C10 - 0x00161C1F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161C10(void)
{

loc_00161C10: ;
    eax = MEM32(ecx + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x10) = eax;
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00161C20
 * Original: 0x00161C20 - 0x00161C27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161C20(void)
{

loc_00161C20: ;
    MEM32(ecx) = 0x31FC00;
    esp += 4; return; /* ret */

}

/**
 * sub_00161C30
 * Original: 0x00161C30 - 0x00161C37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161C30(void)
{

loc_00161C30: ;
    MEM32(ecx) = 0x31FC00;
    esp += 4; return; /* ret */

}

/**
 * sub_00161C40
 * Original: 0x00161C40 - 0x00161C75 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161C40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x31FC14;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00161C80
 * Original: 0x00161C80 - 0x00161CC1 (65 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161C80: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x31FC14;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00161CD0
 * Original: 0x00161CD0 - 0x00161CD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161CD0(void)
{

loc_00161CD0: ;
    MEM32(ecx) = 0x31FC00;
    esp += 4; return; /* ret */

}

/**
 * sub_00161CE0
 * Original: 0x00161CE0 - 0x00161D15 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161CE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x31FC2C;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00161D20
 * Original: 0x00161D20 - 0x00161D66 (70 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161D20: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x31FC2C;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00161D70
 * Original: 0x00161D70 - 0x00161D77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D70(void)
{

loc_00161D70: ;
    MEM32(ecx) = 0x31FC00;
    esp += 4; return; /* ret */

}

/**
 * sub_00161D80
 * Original: 0x00161D80 - 0x00161D87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D80(void)
{

loc_00161D80: ;
    MEM32(ecx) = 0x31FC00;
    esp += 4; return; /* ret */

}

/**
 * sub_00161D90
 * Original: 0x00161D90 - 0x00161DA1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161D90: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x31FC44;
    esp += 4; return; /* ret */

}

/**
 * sub_00161DB0
 * Original: 0x00161DB0 - 0x00161E09 (89 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161DB0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    edx = MEM32(esp + 0x10);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x28) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax) = 0x31FC44;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = edx;
    MEM8(eax + 0x1C) = LO8(ecx);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00161E10
 * Original: 0x00161E10 - 0x00161E17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161E10(void)
{

loc_00161E10: ;
    MEM32(ecx) = 0x31FC00;
    esp += 4; return; /* ret */

}

/**
 * sub_00161E20
 * Original: 0x00161E20 - 0x00161E79 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161E20: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161E76; /* je: equal / zero */

loc_00161E2A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    edx = MEM32(eax + 0x24);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x2C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x14); /* divss */
    eax = MEM32(eax + 0x28);
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edi = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00161E74u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_00161E74: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00161E76: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161E80
 * Original: 0x00161E80 - 0x00161E91 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161E80: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x31FC5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00161EA0
 * Original: 0x00161EA0 - 0x00161F01 (97 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161EA0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    SET_LO8(edx, MEM8(esp + 0x18));
    eax = ecx;
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x31FC5C;
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(edx);
    MEM8(eax + 0x20) = LO8(ecx);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00161F10
 * Original: 0x00161F10 - 0x00161F17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161F10(void)
{

loc_00161F10: ;
    MEM32(ecx) = 0x31FC00;
    esp += 4; return; /* ret */

}

/**
 * sub_00161F20
 * Original: 0x00161F20 - 0x00161F4B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161F20: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x18); /* addss */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, edx);
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00161F45u); RECOMP_ABI_CALL(0x000B17E0u, sub_000B17E0); /* call 0x000B17E0 */

loc_00161F45: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00161F50
 * Original: 0x00161F50 - 0x00161FC5 (117 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00161F50: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00161F80; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00161F5D: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00161F80; /* jp: parity */

loc_00161F6B: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 4); /* subss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */

loc_00161F80: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x10); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00161FAE; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0x10)) */

loc_00161F86: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x10); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0x10); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00161FAE; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00161F9F: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161FC0; /* jne: not equal / not zero */

loc_00161FA6: ;
    SET_LO8(eax, 1);
    MEM8(ecx + 0x20) = LO8(eax);
    esp += 8; return; /* ret 4 */

loc_00161FAE: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161FC0; /* je: equal / zero */

loc_00161FB5: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x10); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00161FC0; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0x10)) */

loc_00161FBB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00161FC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161FBDu); } /* indirect call */
    }

loc_00161FC0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161FD0
 * Original: 0x00161FD0 - 0x00161FE3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161FD0(void)
{

loc_00161FD0: ;
    eax = MEM32(ecx + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x10) = eax;
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00161FF0
 * Original: 0x00161FF0 - 0x00162001 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161FF0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x31FC74;
    esp += 4; return; /* ret */

}

/**
 * sub_00162010
 * Original: 0x00162010 - 0x00162054 (68 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162010: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    SET_LO8(edx, MEM8(esp + 0xC));
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax) = 0x31FC74;
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x20) = LO8(edx);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00162060
 * Original: 0x00162060 - 0x00162067 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162060(void)
{

loc_00162060: ;
    MEM32(ecx) = 0x31FC00;
    esp += 4; return; /* ret */

}

/**
 * sub_00162070
 * Original: 0x00162070 - 0x00162092 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162070: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016208F; /* je: equal / zero */

loc_0016207A: ;
    eax = ZX8(MEM8(eax + 0x20));
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015ADB0(); return; /* tail jmp 0x0015ADB0 */

loc_0016208F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001620A0
 * Original: 0x001620A0 - 0x001620CB (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001620A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001620A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x31FC8C;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001620D0
 * Original: 0x001620D0 - 0x00162114 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001620D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001620D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax) = 0x31FC8C;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x28) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00162120
 * Original: 0x00162120 - 0x0016218F (111 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0x14); /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x24) = xmm5.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x28) = xmm6.f[0]; /* movss */
    MEM8(eax + 0x73) = 1;
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x18); /* addss */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162190
 * Original: 0x00162190 - 0x001621F0 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162190: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    MEM32(eax) = 0x31FCA4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM8(eax + 0x20) = LO8(edx);
    MEM8(eax + 0x21) = LO8(edx);
    MEM8(eax + 0x22) = LO8(edx);
    SET_LO8(ecx, 0xFF);
    MEM8(eax + 0x23) = LO8(ecx);
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x27) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(ecx);
    MEM8(eax + 0x23) = LO8(ecx);
    MEM8(eax + 0x24) = LO8(ecx);
    MEM8(eax + 0x25) = LO8(ecx);
    MEM8(eax + 0x26) = LO8(ecx);
    MEM8(eax + 0x27) = LO8(ecx);
    MEM8(eax + 0x1C) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00162260
 * Original: 0x00162260 - 0x00162347 (231 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162260(void)
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

loc_00162260: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016233F; /* je: equal / zero */

loc_00162273: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    ecx = ZX8(MEM8(esi + 0x24));
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    edx = ZX8(LO8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = ecx;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x14); /* divss */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x001622ACu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001622AC: ;
    SET_LO8(ecx, MEM8(esi + 0x20));
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x22));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = ZX8(MEM8(esi + 0x26));
    edx = ZX8(LO8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x001622D0u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001622D0: ;
    _fb = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = ZX8(MEM8(esi + 0x25));
    MEM8(esp + 0xE) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x21));
    edx = ZX8(LO8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x001622F4u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001622F4: ;
    _fb = (uint32_t)(MEM8(esi + 0x21)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = ZX8(MEM8(esi + 0x27));
    MEM8(esp + 0xD) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x23));
    edx = ZX8(LO8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ecx;
    MEM8(esp + 0x18) = LO8(eax);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x0016231Cu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016231C: ;
    _fb = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00162326; /* jbe: below or equal (unsigned <=) */

loc_00162324: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00162326: ;
    SET_LO8(ecx, MEM8(esp + 0xD));
    SET_LO8(edx, MEM8(esp + 0xE));
    MEM8(edi + 0x48) = LO8(ebx);
    MEM8(edi + 0x49) = LO8(ecx);
    MEM8(edi + 0x4A) = LO8(edx);
    MEM8(edi + 0x4B) = LO8(eax);
    MEM8(edi + 0x73) = 1;
    POP32(esp, ebx);

loc_0016233F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00162350
 * Original: 0x00162350 - 0x00162386 (54 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162350: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162383; /* je: equal / zero */

loc_00162358: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0x14); /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x73) = 1;
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x18); /* addss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */

loc_00162383: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162390
 * Original: 0x00162390 - 0x001623FD (109 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00162390: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001623FA; /* je: equal / zero */

loc_00162398: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001623AC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x18)) */

loc_001623A6: ;
    edx = MEM32(eax + 0x44);
    MEM32(ecx + 0x24) = edx;

loc_001623AC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0x14); /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x24); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x24); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = MEMF(ecx + 0x14); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001623E3; /* jb: below (unsigned <) (xmm2.f[0] vs MEMF(ecx + 0x14)) */

loc_001623DE: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */

loc_001623E3: ;
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = 1;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */

loc_001623FA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162400
 * Original: 0x00162400 - 0x0016242B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162400: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x31FCBC;
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(ecx);
    SET_LO8(edx, 0xFF);
    MEM8(eax + 0x23) = LO8(edx);
    MEM8(eax + 0x24) = LO8(ecx);
    MEM8(eax + 0x25) = LO8(ecx);
    MEM8(eax + 0x26) = LO8(ecx);
    MEM8(eax + 0x27) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00162430
 * Original: 0x00162430 - 0x0016248E (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162430: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x31FCBC;
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(ecx);
    SET_LO8(edx, 0xFF);
    MEM8(eax + 0x23) = LO8(edx);
    MEM8(eax + 0x24) = LO8(ecx);
    MEM8(eax + 0x25) = LO8(ecx);
    MEM8(eax + 0x26) = LO8(ecx);
    ecx = MEM32(esp + 0xC);
    MEM8(eax + 0x27) = LO8(edx);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x24) = LO8(ecx);
    MEM8(eax + 0x25) = HI8(ecx);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x26) = LO8(ecx);
    MEM8(eax + 0x27) = HI8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00162490
 * Original: 0x00162490 - 0x001625D2 (322 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162490(void)
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

loc_00162490: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001625CA; /* je: equal / zero */

loc_001624A3: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001624C7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x18)) */

loc_001624B1: ;
    eax = MEM32(edi + 0x48);
    MEM32(esp + 0x14) = eax;
    MEM8(esi + 0x20) = LO8(eax);
    MEM8(esi + 0x21) = HI8(eax);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x22) = LO8(eax);
    MEM8(esi + 0x23) = HI8(eax);

loc_001624C7: ;
    SET_LO8(eax, MEM8(esi + 0x27));
    SET_LO8(ecx, MEM8(esi + 0x23));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    MEM8(esp + 0xB) = LO8(eax);
    MEM8(esp + 0x20) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001624F5; /* jne: not equal / not zero */

loc_001624D9: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x20) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001624F5; /* jne: not equal / not zero */

loc_001624E1: ;
    SET_LO8(ecx, MEM8(esi + 0x25));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x21)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x21) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001624F5; /* jne: not equal / not zero */

loc_001624E9: ;
    SET_LO8(edx, MEM8(esi + 0x26));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 0x22) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001625CA; /* je: equal / zero */

loc_001624F5: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    ecx = ZX8(MEM8(esi + 0x24));
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    edx = ZX8(LO8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = ecx;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x14); /* divss */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0016252Eu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016252E: ;
    SET_LO8(ecx, MEM8(esi + 0x20));
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x22));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = ZX8(MEM8(esi + 0x26));
    edx = ZX8(LO8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = ecx;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x00162552u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00162552: ;
    _fb = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = ZX8(MEM8(esi + 0x25));
    MEM8(esp + 0x16) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x21));
    edx = ZX8(LO8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    MEM8(esp + 0x28) = LO8(eax);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0016257Au); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016257A: ;
    _fb = (uint32_t)(MEM8(esp + 0x28)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = ZX8(MEM8(esp + 0xF));
    MEM8(esp + 0x15) = LO8(eax);
    eax = ZX8(MEM8(esp + 0x24));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = ecx;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0016259Fu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016259F: ;
    _fb = (uint32_t)(MEM8(esp + 0x24)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x14 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001625AB; /* jae: above or equal (unsigned >=) */

loc_001625A7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001625B1;

loc_001625AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001625B1; /* jbe: below or equal (unsigned <=) */

loc_001625AF: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001625B1: ;
    SET_LO8(edx, MEM8(esp + 0x15));
    SET_LO8(ecx, MEM8(esp + 0x16));
    MEM8(edi + 0x48) = LO8(ebx);
    MEM8(edi + 0x49) = LO8(edx);
    MEM8(edi + 0x4A) = LO8(ecx);
    MEM8(edi + 0x4B) = LO8(eax);
    MEM8(edi + 0x73) = 1;
    POP32(esp, ebx);

loc_001625CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001625E0
 * Original: 0x001625E0 - 0x001625E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001625E0(void)
{

loc_001625E0: ;
    eax = 0x378708;
    esp += 4; return; /* ret */

}

/**
 * sub_001625F0
 * Original: 0x001625F0 - 0x001625F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001625F0(void)
{

loc_001625F0: ;
    eax = 0x37872C;
    esp += 4; return; /* ret */

}

/**
 * sub_00162600
 * Original: 0x00162600 - 0x00162606 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162600(void)
{

loc_00162600: ;
    eax = 0x37877C;
    esp += 4; return; /* ret */

}

/**
 * sub_00162610
 * Original: 0x00162610 - 0x00162616 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162610(void)
{

loc_00162610: ;
    eax = 0x3787AC;
    esp += 4; return; /* ret */

}

/**
 * sub_00162620
 * Original: 0x00162620 - 0x00162626 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162620(void)
{

loc_00162620: ;
    eax = 0x3787DC;
    esp += 4; return; /* ret */

}

/**
 * sub_00162630
 * Original: 0x00162630 - 0x00162636 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162630(void)
{

loc_00162630: ;
    eax = 0x3786B0;
    esp += 4; return; /* ret */

}

/**
 * sub_00162640
 * Original: 0x00162640 - 0x00162646 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162640(void)
{

loc_00162640: ;
    eax = 0x3786E0;
    esp += 4; return; /* ret */

}

/**
 * sub_00162650
 * Original: 0x00162650 - 0x00162656 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162650(void)
{

loc_00162650: ;
    eax = 0x378754;
    esp += 4; return; /* ret */

}

/**
 * sub_00162660
 * Original: 0x00162660 - 0x0016267F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162660: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31FC00;
    if (TEST_Z(_fa, _fb)) goto loc_00162679; /* je: equal / zero */

loc_00162670: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00162676u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00162676: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00162679: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162680
 * Original: 0x00162680 - 0x001626E5 (101 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162680(void)
{

loc_00162680: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00162694u); RECOMP_ABI_CALL(0x00169080u, sub_00169080); /* call 0x00169080 */

loc_00162694: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    MEMF(esi + 0xE10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x31FCD4;
    MEM32(esi + 0xE14) = 0;
    MEMF(esi + 0xE1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE28) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001626F0
 * Original: 0x001626F0 - 0x001626FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001626F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001626F0: ;
    MEM32(ecx) = 0x31FCD4;
    g_seh_ebp = ebp; sub_00168D30(); return; /* tail jmp 0x00168D30 */

}

/**
 * sub_00162700
 * Original: 0x00162700 - 0x00162705 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162700: ;
    g_seh_ebp = ebp; sub_00168C90(); return; /* tail jmp 0x00168C90 */

}

/**
 * sub_00162710
 * Original: 0x00162710 - 0x0016273F (47 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162710(void)
{

loc_00162710: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FF084)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0xE18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0xE1C) = xmm1.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162740
 * Original: 0x00162740 - 0x00162E54 (1812 bytes, 420 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162740(void)
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

loc_00162740: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x7C));
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x54) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00162E41; /* je: equal / zero */

loc_00162759: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x100); /* comiss */
    if ((_fca >= _fcb)) goto loc_00162E41; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0x100)) */

loc_00162769: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x100); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00162DD2; /* jnp: not parity */

loc_00162783: ;
    fp_push(MEMF(esi + 0xE1C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xE18)); /* fsub dword ptr [esi + 0xe18] */
    eax = MEM32(esi + 0x100);
    xmm1 = XMM_SCALAR(MEMF(esi + 0xE20)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x100)); /* fmul dword ptr [esi + 0x100] */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEM32(esi + 0xE10) = eax;
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    MEMF(esi + 0xE24) = xmm0.f[0]; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esi + 0xE28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31FD08)); /* fmul dword ptr [0x31fd08] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001627E0u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_001627E0: ;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xE8840);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001627F8u); RECOMP_ABI_CALL(0x00012790u, sub_00012790); /* call 0x00012790 */

loc_001627F8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x54);
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x50);
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEM32(esp + 0x64) = edx;
    edx = MEM32(esp + 0x54);
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esp + 0x50);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x38DC5C); /* mulss */
    MEM32(esp + 0x6C) = ecx;
    ecx = MEM32(esp + 0x54);
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x38DC58); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x34); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE18)); /* movss */
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(esp + 0x74) = eax;
    eax = MEM32(esp + 0x54);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x7C) = edx;
    MEM32(esp + 0x80) = eax;
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEM32(esp + 8) = 0;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00162DC8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0016290D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ebp = esi + 0xF4;
    MEM32(esp + 0x38) = ebp;
    ebp = esi + 0xF0;
    MEM32(esp + 0x18) = ebp;
    ebp = esi + 0x100;
    MEM32(esp + 0x34) = ebp;
    ebp = esi + 0xFC;
    MEM32(esp + 0x30) = ebp;
    ebp = esi + 0xF8;
    MEM32(esp + 0x2C) = ebp;
    ebp = esi + 0xDC;
    MEM32(esp + 0x28) = ebp;
    ebp = esi + 0xD8;
    MEM32(esp + 0x14) = ebp;
    ebp = esi + 0xE8;
    MEM32(esp + 0x24) = ebp;
    ebp = esi + 0xE4;
    MEM32(esp + 0x20) = ebp;
    ebp = esi + 0xE0;
    ebx = esi + 0x124;
    eax = esi + 0x120;
    edi = esi + 0x130;
    edx = esi + 0x12C;
    ecx = esi + 0x128;
    MEM32(esp + 0x1C) = ebp;

loc_0016299F: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x84 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm3 = XMM_SCALAR(MEMF(0x31FD04)); /* movss */
    if (CMP_G(_fas, _fbs)) goto loc_00162DC6; /* jg: greater (signed >) */

loc_001629B5: ;
    _fca = xmm3.f[0]; _fcb = MEMF(esp + 0x40); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001629C4; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(esp + 0x40)) */

loc_001629BC: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    goto loc_001629D6;

loc_001629C4: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = MEMF(esp + 0x3C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001629D6; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(esp + 0x3C)) */

loc_001629CE: ;
    xmm3 = XMM_SCALAR(MEMF(0x31FD00)); /* movss */

loc_001629D6: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    ebp = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x14)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x18)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x1C)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEM32(esp + 0x20) = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x24)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x28)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x2C)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x30)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x34)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x34) = MEM32(esp + 0x34) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x18)) >> 32) & 1);
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x18)) >> 32) & 1);
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x18)) >> 32) & 1);
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x38) = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x18)) >> 32) & 1);
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x38DC5C)); /* fmul dword ptr [0x38dc5c] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x38DC58)); /* fmul dword ptr [0x38dc58] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x38DC5C)); /* fmul dword ptr [0x38dc5c] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x38DC58)); /* fmul dword ptr [0x38dc58] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xE24)); /* fmul dword ptr [esi + 0xe24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x64)); /* fadd dword ptr [esp + 0x64] */
    MEMF(ecx + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xE24)); /* fmul dword ptr [esi + 0xe24] */
    MEMF(eax + -24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    MEMF(ebx + -24) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x68) - fp_top()); /* fsubr dword ptr [esp + 0x68] */
    MEMF(edi + -24) = xmm0.f[0]; /* movss */
    MEMF(edx + -24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xE28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xE28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x50); /* mulss */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x14)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x18)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x1C)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x20)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x24)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x28)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x2C)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x30)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x34)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x34) = MEM32(esp + 0x34) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x38)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x38) = MEM32(esp + 0x38) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(edx) = xmm4.f[0]; /* movss */
    MEMF(ebx) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xE28)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x18)) >> 32) & 1);
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x18)) >> 32) & 1);
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x18)) >> 32) & 1);
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x18)) >> 32) & 1);
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x14)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x18)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x1C)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x20);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0xE28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(esp + 0x24);
    MEMF(eax) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ebp;
    ebp = MEM32(esp + 0x28);
    MEMF(edx) = xmm7.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(ebx) = xmm6.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x2C)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x30)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x34)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x34) = MEM32(esp + 0x34) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x38)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x38) = MEM32(esp + 0x38) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x1C);
    ebp = MEM32(ebp);
    MEM32(ecx + 0x18) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(ebp);
    MEM32(edx + 0x18) = ebp;
    ebp = MEM32(esp + 0x24);
    ebp = MEM32(ebp);
    MEM32(edi + 0x18) = ebp;
    ebp = MEM32(esp + 0x14);
    ebp = MEM32(ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(esp + 0x28);
    ebp = MEM32(ebp);
    MEM32(ebx + 0x18) = ebp;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x18)) >> 32) & 1);
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x18)) >> 32) & 1);
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x18)) >> 32) & 1);
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x18)) >> 32) & 1);
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x14)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x18)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x1C)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x20)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x24)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x28)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x2C)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x30)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x34)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x34) = MEM32(esp + 0x34) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x38)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x38) = MEM32(esp + 0x38) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x2C);
    ebp = MEM32(ebp);
    MEM32(ecx + 0x18) = ebp;
    ebp = MEM32(esp + 0x30);
    ebp = MEM32(ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x18)) >> 32) & 1);
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x18)) >> 32) & 1);
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebp;
    ebp = MEM32(esp + 0x34);
    ebp = MEM32(ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x18)) >> 32) & 1);
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebp;
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x18)) >> 32) & 1);
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(esp + 0x38);
    ebp = MEM32(ebp);
    MEM32(ebx) = ebp;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x14)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x18)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x1C)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x20)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x24)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x28)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x2C)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x30)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x34)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x34) = MEM32(esp + 0x34) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x38)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x38) = MEM32(esp + 0x38) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);
    xmm6 = XMM_SCALAR(MEMF(esi + 0xE24)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x18)) >> 32) & 1);
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x18)) >> 32) & 1);
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x18)) >> 32) & 1);
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x18)) >> 32) & 1);
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x14)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x18)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x1C)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x20)) + (uint64_t)(0x18)) >> 32) & 1);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x18;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 0x24) = ebp;
    ebp = MEM32(esp + 0x28);
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm6.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xE24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEM32(esp + 0x28) = ebp;
    ebp = MEM32(esp + 0x2C);
    MEMF(eax) = xmm3.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx) = xmm4.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(ebx) = xmm5.f[0]; /* movss */
    MEM32(esp + 0x2C) = ebp;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    ebp = MEM32(esp + 0x30);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = ebp;
    ebp = MEM32(esp + 0x34);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fabs(fp_top()); /* fabs */
    MEM32(esp + 0x34) = ebp;
    ebp = MEM32(esp + 0x38);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x18)) >> 32) & 1);
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x18)) >> 32) & 1);
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x18)) >> 32) & 1);
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x18)) >> 32) & 1);
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x38) = ebp;
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0016299F; /* ja: above (unsigned >) */

loc_00162DC6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00162DC8: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0xE14) = ecx;

loc_00162DD2: ;
    SET_LO8(ecx, MEM8(esi + 0x4A));
    SET_LO8(edx, MEM8(esi + 0x48));
    SET_LO8(eax, MEM8(esi + 0x49));
    MEM8(esp + 0x42) = LO8(ecx);
    ecx = MEM32(esi + 0xE14);
    MEM8(esp + 0x40) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x4B));
    MEM8(esp + 0x41) = LO8(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x43) = LO8(edx);
    if (CMP_LE(_fas, _fbs)) goto loc_00162E14; /* jle: less or equal (signed <=) */

loc_00162DFA: ;
    edx = MEM32(esp + 0x40);
    ecx = esi + 0x134;

loc_00162E04: ;
    MEM32(ecx) = edx;
    edi = MEM32(esi + 0xE14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x18)) >> 32) & 1);
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00162E04; /* jl: less (signed <) */

loc_00162E14: ;
    ecx = MEM32(esi + 0xE14);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00162E41; /* jne: not equal / not zero */

loc_00162E29: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00162E41; /* jl: less (signed <) */

loc_00162E2E: ;
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x120)) >> 32) & 1);
    esi = esi + 0x120;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00162E41u); RECOMP_ABI_CALL(0x000BF900u, sub_000BF900); /* call 0x000BF900 */

loc_00162E41: ;
    ecx = esp + 0x84;
    PUSH32(esp, 0x00162E4Du); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00162E4D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x7C)) >> 32) & 1);
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00162E60
 * Original: 0x00162E60 - 0x00162E84 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31FCD4;
    PUSH32(esp, 0x00162E6Eu); RECOMP_ABI_CALL(0x00168D30u, sub_00168D30); /* call 0x00168D30 */

loc_00162E6E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00162E7E; /* je: equal / zero */

loc_00162E75: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00162E7Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00162E7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00162E7E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162E90
 * Original: 0x00162E90 - 0x00162EA3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162E90: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x90) = eax;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_0015A960(); return; /* tail jmp 0x0015A960 */

}

/**
 * sub_00162EB0
 * Original: 0x00162EB0 - 0x00162EC5 (21 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162EB0: ;
    MEM32(ecx) = 0x31FD0C;
    MEM32(ecx + 0xA0) = 0x307E40;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00162ED0
 * Original: 0x00162ED0 - 0x00163302 (1074 bytes, 274 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162ED0(void)
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

loc_00162ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x164));
    esp = esp - 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x90);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00162EEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162EE9u); } /* indirect call */
    }

loc_00162EEF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    esi = MEM32(ebp + 8);
    xmm3 = XMM_SCALAR(MEMF(0x31FD54)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x31FD50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB0)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xD0); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xC8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xD4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xB8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    ecx = esp + 0x60;
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0xD8); /* addss */
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00162FE5u); RECOMP_ABI_CALL(0x00266270u, sub_00266270); /* call 0x00266270 */

loc_00162FE5: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31FD4C)); /* fmul dword ptr [0x31fd4c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0016300D; /* ja: above (unsigned >) */

loc_00163007: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */

loc_0016300D: ;
    xmm0 = XMM_SCALAR(MEMF(0x378808)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x378804)); /* movss */
    ecx = MEM32(edi + 0x90);
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x48); /* addss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00163043u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016303Du); } /* indirect call */
    }

loc_00163043: ;
    ecx = MEM32(0x3C2F14);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016304Fu); RECOMP_ABI_CALL(0x0018D5B0u, sub_0018D5B0); /* call 0x0018D5B0 */

loc_0016304F: ;
    eax = MEM32(0x3C3580);
    ecx = MEM32(0x3C2F14);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163060u); RECOMP_ABI_CALL(0x0018D5E0u, sub_0018D5E0); /* call 0x0018D5E0 */

loc_00163060: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C2F14);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163075u); RECOMP_ABI_CALL(0x0018DF20u, sub_0018DF20); /* call 0x0018DF20 */

loc_00163075: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001632F9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_001630A0: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001630ABu); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_001630AB: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFD0B0FE4u);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001630C4u); RECOMP_ABI_CALL(0x001579A0u, sub_001579A0); /* call 0x001579A0 */

loc_001630C4: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001630D6; /* jne: not equal / not zero */

loc_001630CD: ;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x1F) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001630DB; /* je: equal / zero */

loc_001630D6: ;
    MEM8(esp + 0x1F) = 1;

loc_001630DB: ;
    MEM8(eax + 4) = LO8(ebx);
    MEM8(eax + 5) = LO8(ebx);
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED4));
    edx = MEM32(esi);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00163108; /* je: equal / zero */

loc_001630F5: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001630FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001630F5u); } /* indirect call */
    }

loc_001630FB: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163106u); RECOMP_ABI_CALL(0x00083ED0u, sub_00083ED0); /* call 0x00083ED0 */

loc_00163106: ;
    goto loc_00163119;

loc_00163108: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0016310Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163108u); } /* indirect call */
    }

loc_0016310E: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163119u); RECOMP_ABI_CALL(0x00083EF0u, sub_00083EF0); /* call 0x00083EF0 */

loc_00163119: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163128u); RECOMP_ABI_CALL(0x000AD5E0u, sub_000AD5E0); /* call 0x000AD5E0 */

loc_00163128: ;
    edx = MEM32(esi + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x30)) >> 32) & 1);
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00163133u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163130u); } /* indirect call */
    }

loc_00163133: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x138); PUSH32(esp, 0x0016313Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163138u); } /* indirect call */
    }

loc_0016313E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163149u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00163149: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163164u); RECOMP_ABI_CALL(0x000AD060u, sub_000AD060); /* call 0x000AD060 */

loc_00163164: ;
    ecx = MEM32(esp + 0x18);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163177u); RECOMP_ABI_CALL(0x000AD6A0u, sub_000AD6A0); /* call 0x000AD6A0 */

loc_00163177: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163186u); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_00163186: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x24), g_mxcsr, 1); /* cvttss2si */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x38), g_mxcsr, 1); /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FE9A0); /* mulss */
    edx = SX16(LO16(ecx));
    MEM32(esp + 0x24) = edx;
    ecx = SX16(LO16(eax));
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    edx = esp + 0x70;
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001631DAu); RECOMP_ABI_CALL(0x000ADC10u, sub_000ADC10); /* call 0x000ADC10 */

loc_001631DA: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001631E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001631E1u); } /* indirect call */
    }

loc_001631E4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001632D8; /* je: equal / zero */

loc_001631EE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x001631F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001631F2u); } /* indirect call */
    }

loc_001631F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00163260; /* je: equal / zero */

loc_001631FC: ;
    PUSH32(esp, 0x31FD40);
    PUSH32(esp, 0x71C644A4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016320Bu); RECOMP_ABI_CALL(0x00154E60u, sub_00154E60); /* call 0x00154E60 */

loc_0016320B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x2C;
    esi = eax;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163224u); RECOMP_ABI_CALL(0x000AD060u, sub_000AD060); /* call 0x000AD060 */

loc_00163224: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x378800); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FE9A0); /* mulss */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    goto loc_001632D0;

loc_00163260: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x0016326Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163264u); } /* indirect call */
    }

loc_0016326A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001632D8; /* je: equal / zero */

loc_0016326E: ;
    PUSH32(esp, 0x31FD34);
    PUSH32(esp, 0x203DD629);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016327Du); RECOMP_ABI_CALL(0x00154E60u, sub_00154E60); /* call 0x00154E60 */

loc_0016327D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163296u); RECOMP_ABI_CALL(0x000AD060u, sub_000AD060); /* call 0x000AD060 */

loc_00163296: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x378800); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FE9A0); /* mulss */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);

loc_001632D0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001632D5u); RECOMP_ABI_CALL(0x000ADC10u, sub_000ADC10); /* call 0x000ADC10 */

loc_001632D5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001632D8: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001632EBu); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_001632EB: ;
    eax = MEM32(esp + 0x18);
    SET_LO8(ecx, MEM8(esp + 0x1F));
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);

loc_001632F9: ;
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
 * sub_00163310
 * Original: 0x00163310 - 0x00163330 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163310: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x30) = eax;
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x40) = eax;
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00163330
 * Original: 0x00163330 - 0x00163460 (304 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163330: ;
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
    ecx = MEM32(esi + 0x90);
    MEM8(esp + 0x40) = 0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0016334Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163349u); } /* indirect call */
    }

loc_0016334F: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016335Bu); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_0016335B: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00163369u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163363u); } /* indirect call */
    }

loc_00163369: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x32388C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0xA0;
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(eax + 0x30) = 0;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x40) = 0;
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    eax = esp + 0x24;
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    MEM8(esp + 0x48) = 1;
    MEM32(esp + 0x4C) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163429u); RECOMP_ABI_CALL(0x00223510u, sub_00223510); /* call 0x00223510 */

loc_00163429: ;
    eax = MEM32(esi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016345B; /* je: equal / zero */

loc_00163433: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0016343Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163437u); } /* indirect call */
    }

loc_0016343D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x90) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016345B; /* je: equal / zero */

loc_00163445: ;
    ecx = MEM32(esi + 0xE0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00163453u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016344Du); } /* indirect call */
    }

loc_00163453: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016345Bu); RECOMP_ABI_CALL(0x00162ED0u, sub_00162ED0); /* call 0x00162ED0 */

loc_0016345B: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00163460
 * Original: 0x00163460 - 0x00163777 (791 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163460(void)
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

loc_00163460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x64));
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3E8D54);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00163770; /* jle: less or equal (signed <=) */

loc_00163481: ;
    eax = MEM32(edi + 0x90);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x90)) >> 32) & 1);
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x60) = LO8(ebx);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001634BAu); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_001634BA: ;
    esi = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001634F7u); RECOMP_ABI_CALL(0x00266270u, sub_00266270); /* call 0x00266270 */

loc_001634F7: ;
    fp_push(MEMF(0x32388C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00163759; /* jbe: below or equal (unsigned <=) */

loc_00163507: ;
    eax = MEM32(edi + 0x90);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xB8)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x31FD54)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x31FD50)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA0)) >> 32) & 1);
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x38); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC0)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0xB0)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0xD0); /* addss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x3210B0); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0xD4); /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0xB8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x31FD50); /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esi + 0xD8); /* addss */
    eax = edi + 0xA0;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(eax + 0x30) = ebx;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm6.f[0]; /* movss */
    MEM8(esp + 0x60) = 1;
    MEM32(esp + 0x64) = 4;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    edx = esp + 0x44;
    MEM32(eax + 0x40) = ebx;
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001636E4u); RECOMP_ABI_CALL(0x00223510u, sub_00223510); /* call 0x00223510 */

loc_001636E4: ;
    eax = MEM32(edi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00163759; /* je: equal / zero */

loc_001636EE: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x001636F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001636F2u); } /* indirect call */
    }

loc_001636F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x90) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00163759; /* je: equal / zero */

loc_00163700: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00163759; /* je: equal / zero */

loc_0016370F: ;
    ecx = MEM32(edi + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0016371Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163717u); } /* indirect call */
    }

loc_0016371D: ;
    edx = MEM32(eax);
    esi = MEM32(edi + 0x90);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0016372Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163727u); } /* indirect call */
    }

loc_0016372D: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0016373Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163735u); } /* indirect call */
    }

loc_0016373B: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00163759; /* jne: not equal / not zero */

loc_00163743: ;
    ecx = MEM32(edi + 0xE0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00163751u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016374Bu); } /* indirect call */
    }

loc_00163751: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163759u); RECOMP_ABI_CALL(0x00162ED0u, sub_00162ED0); /* call 0x00162ED0 */

loc_00163759: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x3E8D54);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00163481; /* jl: less (signed <) */

loc_00163770: ;
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
 * sub_00163780
 * Original: 0x00163780 - 0x001637B8 (56 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163780: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x31FD58;
    MEM32(eax + 0x30) = ecx;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x40) = ecx;
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001637C0
 * Original: 0x001637C0 - 0x001638B5 (245 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001637C0(void)
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

loc_001637C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001638B0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x14)) */

loc_001637D7: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_001637EE; /* je: equal / zero */

loc_001637E5: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001637E5; /* jne: not equal / not zero */

loc_001637EE: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001638AF; /* je: equal / zero */

loc_001637F9: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001638AE; /* jle: less or equal (signed <=) */

loc_00163807: ;
    edx = MEM32(ecx + 0x30);
    /* nop */

loc_00163810: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00163824; /* je: equal / zero */

loc_00163815: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00163810; /* jl: less (signed <) */

loc_0016381D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00163824: ;
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00163830u); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_00163830: ;
    esi = MEM32(esp + 0x18);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0016383Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163838u); } /* indirect call */
    }

loc_0016383E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00163883; /* je: equal / zero */

loc_00163842: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0016384Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163846u); } /* indirect call */
    }

loc_0016384C: ;
    eax = MEM32(eax + 0x1648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016385B; /* je: equal / zero */

loc_00163856: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016385D;

loc_0016385B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016385D: ;
    MEM32(edi + 0x40) = eax;
    ecx = MEM32(ebx + 0x14);
    MEM32(edi + 0x44) = ecx;
    ecx = ebp;
    PUSH32(esp, 0x0016386Du); RECOMP_ABI_CALL(0x00039960u, sub_00039960); /* call 0x00039960 */

loc_0016386D: ;
    MEM32(edi + 0x30) = eax;
    edx = MEM32(ebx + 0x14);
    POP32(esp, esi);
    MEM32(edi + 0x24) = edx;
    ecx = MEM32(ebx + 0x14);
    POP32(esp, ebp);
    MEM32(edi + 4) = ecx;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00163883: ;
    eax = MEM32(ebx + 0x14);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x44)); /* movss */
    MEM32(edi + 0x24) = eax;
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001638A8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x14)) */

loc_00163894: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(edi + 0x40) = 0;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */

loc_001638A8: ;
    ecx = MEM32(ebx + 0x14);
    MEM32(edi + 4) = ecx;

loc_001638AE: ;
    POP32(esp, esi);

loc_001638AF: ;
    POP32(esp, ebp);

loc_001638B0: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001638C0
 * Original: 0x001638C0 - 0x0016392D (109 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001638C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001638C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001638CDu); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_001638CD: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi) = 0x31FD0C;
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD0) = eax;
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xA0) = 0x31FD58;
    MEM32(esi + 0xD0) = eax;
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xE0) = eax;
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE4) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163930
 * Original: 0x00163930 - 0x00163940 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00163930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00163938u); RECOMP_ABI_CALL(0x00163330u, sub_00163330); /* call 0x00163330 */

loc_00163938: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00163460(); return; /* tail jmp 0x00163460 */

}

/**
 * sub_00163940
 * Original: 0x00163940 - 0x00163970 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163940: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31FD0C;
    MEM32(esi + 0xA0) = 0x307E40;
    PUSH32(esp, 0x00163958u); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_00163958: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00163968; /* je: equal / zero */

loc_0016395F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00163965u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00163965: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00163968: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163970
 * Original: 0x00163970 - 0x0016398F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163970: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x307E40;
    if (TEST_Z(_fa, _fb)) goto loc_00163989; /* je: equal / zero */

loc_00163980: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00163986u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00163986: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00163989: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163990
 * Original: 0x00163990 - 0x001639A0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00163990: ;
    SET_LO8(eax, MEM8(ecx + 0x108));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016399F; /* je: equal / zero */

loc_0016399A: ;
    g_seh_ebp = ebp; sub_0015E2E0(); return; /* tail jmp 0x0015E2E0 */

loc_0016399F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001639A0
 * Original: 0x001639A0 - 0x001639C1 (33 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001639A0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001639A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0x104) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001639BE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_001639B6: ;
    MEMF(ecx + 0x104) = xmm1.f[0]; /* movss */

loc_001639BE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001639D0
 * Original: 0x001639D0 - 0x00163A29 (89 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001639D0(void)
{

loc_001639D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001639DDu); RECOMP_ABI_CALL(0x001618B0u, sub_001618B0); /* call 0x001618B0 */

loc_001639DD: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0x114;
    MEM32(esi) = 0x31FD60;
    MEM32(esi + 0x110) = 0;
    PUSH32(esp, 0x00163A08u); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_00163A08: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0x128;
    PUSH32(esp, 0x00163A23u); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_00163A23: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163A30
 * Original: 0x00163A30 - 0x00163A57 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00163A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x128;
    MEM32(esi) = 0x31FD60;
    PUSH32(esp, 0x00163A44u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00163A44: ;
    ecx = esi + 0x114;
    PUSH32(esp, 0x00163A4Fu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00163A4F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00161840(); return; /* tail jmp 0x00161840 */

}

/**
 * sub_00163A60
 * Original: 0x00163A60 - 0x00163A7D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163A60(void)
{

loc_00163A60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x00163A6Cu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00163A6C: ;
    ecx = MEM32(esi + 0x110);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00163A7Bu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00163A7B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00163A80
 * Original: 0x00163A80 - 0x00163A97 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163A80(void)
{

loc_00163A80: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x13C) = eax;
    MEM32(ecx + 0x140) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00163AA0
 * Original: 0x00163AA0 - 0x00163AB7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163AA0(void)
{

loc_00163AA0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x144) = eax;
    MEM32(ecx + 0x148) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00163AC0
 * Original: 0x00163AC0 - 0x00163ACA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163AC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00163AC6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00163AC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00163AD0
 * Original: 0x00163AD0 - 0x00163AFD (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00163AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x31FD90;
    esi = ebx + 0xE0;
    edi = 4;

loc_00163AE6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00163AF0u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00163AF0: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00163AE6; /* jne: not equal / not zero */

loc_00163AF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00163B00
 * Original: 0x00163B00 - 0x00163B96 (150 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00163B00: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00163B75; /* je: equal / zero */

loc_00163B13: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x104)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00163B4C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_00163B2C: ;
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    MEM8(esi + 0x108) = 1;
    PUSH32(esp, 0x00163B47u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00163B47: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00163B65;

loc_00163B4C: ;
    edx = esp + 4;
    PUSH32(esp, 0x31AC28);
    PUSH32(esp, edx);
    MEM8(esi + 0x108) = 0;
    PUSH32(esp, 0x00163B62u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00163B62: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00163B65: ;
    ecx = MEM32(esi + 0x100);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00163B75u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_00163B75: ;
    ecx = MEM32(esp + 0x10C);
    edx = MEM32(esp + 0x108);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00163B8Cu); RECOMP_ABI_CALL(0x0015E2D0u, sub_0015E2D0); /* call 0x0015E2D0 */

loc_00163B8C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00163BA0
 * Original: 0x00163BA0 - 0x00163BCF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163BA0: ;
    eax = MEM32(ecx + 0x100);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00163BC9; /* je: equal / zero */

loc_00163BAD: ;
    ecx = MEM32(esp + 0xC);
    ecx = MEM32(ecx);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = 1;

loc_00163BC9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163BD0
 * Original: 0x00163BD0 - 0x00163D02 (306 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = ecx;
    ecx = esp + 0x28;
    PUSH32(esp, 0x31D59C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163BF8u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00163BF8: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x31FDBC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163C0Cu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00163C0C: ;
    esi = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00163C2E; /* je: equal / zero */

loc_00163C15: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163C1Fu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00163C1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163C2Au); RECOMP_ABI_CALL(0x00157F80u, sub_00157F80); /* call 0x00157F80 */

loc_00163C2A: ;
    esi = eax;
    goto loc_00163C30;

loc_00163C2E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00163C30: ;
    PUSH32(esp, 0x3021CE);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163C3Cu); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_00163C3C: ;
    SET_LO8(eax, 0xFF);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = LO8(eax);
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(esi + 0x73) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163C5Au); RECOMP_ABI_CALL(0x00158170u, sub_00158170); /* call 0x00158170 */

loc_00163C5A: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x73) = 1;
    MEM32(edi + 0x100) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00163CC6; /* je: equal / zero */

loc_00163C7F: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163C8Au); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00163C8A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(edx + 0xC) = ecx;
    ecx = edi;
    MEM32(edx + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163CBDu); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00163CBD: ;
    ecx = esp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163CC6u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00163CC6: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163CD7u); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_00163CD7: ;
    ecx = MEM32(edi + 0x100);
    edx = MEM32(ecx + 0x54);
    eax = MEM32(edi + 0x54);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163CF7u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00163CF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00163D10
 * Original: 0x00163D10 - 0x00163E72 (354 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163D10: ;
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
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00163E6B; /* je: equal / zero */

loc_00163D29: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    ebx = MEM32(esi + 0x48);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x144); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x148); /* cvtsi2ss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm3.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x140);
    ecx = MEM32(esi + 0x13C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEM8(esi + 0x73) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163DA7u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_00163DA7: ;
    edx = MEM32(esi);
    eax = esi + 0x128;
    edi = MEM32(eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edi;
    edi = MEM32(eax + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(eax + 8);
    MEM32(ecx + 8) = edi;
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = eax;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00163DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163DD2u); } /* indirect call */
    }

loc_00163DD5: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x14), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x18), g_mxcsr, 1); /* cvttss2si */
    SET_LO8(eax, 0xFF);
    PUSH32(esp, ecx);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = LO8(eax);
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(eax);
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esi + 0x73) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163DFCu); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_00163DFC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    ecx = esi + 0x114;
    edi = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(ecx + 8);
    MEM32(edx + 8) = edi;
    edi = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x10);
    MEM32(edx + 0xC) = edi;
    MEM32(edx + 0x10) = ecx;
    ecx = esi;
    MEM8(esi + 0x73) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00163E4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163E4Cu); } /* indirect call */
    }

loc_00163E4F: ;
    SET_LO16(eax, MEM16(esp + 0x1E));
    MEM8(esi + 0x48) = LO8(ebx);
    MEM8(esi + 0x49) = HI8(ebx);
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = HI8(eax);
    ecx = esi;
    MEM8(esi + 0x73) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163E6Bu); RECOMP_ABI_CALL(0x0015E2E0u, sub_0015E2E0); /* call 0x0015E2E0 */

loc_00163E6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00163E80
 * Original: 0x00163E80 - 0x00163EB2 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163E80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00163E8Du); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00163E8D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x108) = LO8(eax);
    MEM32(esi + 0x100) = eax;
    MEM32(esi) = 0x31FD90;
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163EC0
 * Original: 0x00163EC0 - 0x00163EFC (60 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x128;
    MEM32(esi) = 0x31FD60;
    PUSH32(esp, 0x00163ED4u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00163ED4: ;
    ecx = esi + 0x114;
    PUSH32(esp, 0x00163EDFu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00163EDF: ;
    ecx = esi;
    PUSH32(esp, 0x00163EE6u); RECOMP_ABI_CALL(0x00161840u, sub_00161840); /* call 0x00161840 */

loc_00163EE6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00163EF6; /* je: equal / zero */

loc_00163EED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00163EF3u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00163EF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00163EF6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163F00
 * Original: 0x00163F00 - 0x00163F42 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163F00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x31FD90;
    esi = edi + 0xE0;
    ebx = 4;

loc_00163F16: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00163F20u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00163F20: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00163F16; /* jne: not equal / not zero */

loc_00163F23: ;
    ecx = edi;
    PUSH32(esp, 0x00163F2Au); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_00163F2A: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00163F3A; /* je: equal / zero */

loc_00163F31: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00163F37u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00163F37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00163F3A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163F50
 * Original: 0x00163F50 - 0x00163F87 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163F50: ;
    eax = MEM32(ecx + 0x168);
    eax = eax + eax * 4;
    edx = ecx + eax * 4;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 8);
    MEM32(edx + 8) = esi;
    esi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = esi;
    eax = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = eax;
    MEM32(ecx + 0x168) = MEM32(ecx + 0x168) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x168)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163F90
 * Original: 0x00163F90 - 0x00163FA7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163F90(void)
{

loc_00163F90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x170) = eax;
    MEM32(ecx + 0x174) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00163FB0
 * Original: 0x00163FB0 - 0x00163FC7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163FB0(void)
{

loc_00163FB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x178) = eax;
    MEM32(ecx + 0x17C) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00163FD0
 * Original: 0x00163FD0 - 0x0016402B (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00163FD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi;
    ebx = 0x12;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00163FE0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00163FF4u); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_00163FF4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00163FE0; /* jne: not equal / not zero */

loc_00163FFA: ;
    MEM32(edi + 0x168) = ebp;
    MEM32(edi + 0x16C) = ebp;
    MEM32(edi + 0x170) = ebp;
    MEM32(edi + 0x174) = ebp;
    MEM32(edi + 0x178) = ebp;
    MEM32(edi + 0x17C) = ebp;
    MEM32(edi + 0x180) = ebp;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00164030
 * Original: 0x00164030 - 0x00164073 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164030: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x180);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164058; /* je: equal / zero */

loc_0016403E: ;
    ecx = edi;
    PUSH32(esp, 0x00164045u); RECOMP_ABI_CALL(0x00161A90u, sub_00161A90); /* call 0x00161A90 */

loc_00164045: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016404Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016404B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x180) = 0;

loc_00164058: ;
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x168;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x12;

loc_00164063: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0016406Du); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016406D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00164063; /* jne: not equal / not zero */

loc_00164070: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00164080
 * Original: 0x00164080 - 0x00164104 (132 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00164080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x120);
    PUSH32(esp, 0x31FE00);
    ebx = ecx;
    PUSH32(esp, 0x0016409Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016409A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001640B1; /* je: equal / zero */

loc_001640A1: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001640ADu); RECOMP_ABI_CALL(0x00163E80u, sub_00163E80); /* call 0x00163E80 */

loc_001640AD: ;
    ebp = eax;
    goto loc_001640B3;

loc_001640B1: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001640B3: ;
    eax = MEM32(ebx + 0x168);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001640FB; /* jle: less or equal (signed <=) */

loc_001640BF: ;
    edi = ebx;

loc_001640C1: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi;
    ecx = MEM32(edx);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = ebp;
    MEM32(eax + 0x10) = edx;
    PUSH32(esp, 0x001640EDu); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_001640ED: ;
    eax = MEM32(ebx + 0x168);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001640C1; /* jl: less (signed <) */

loc_001640FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164110
 * Original: 0x00164110 - 0x001641CF (191 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x150);
    PUSH32(esp, 0x31FE48);
    esi = ecx;
    PUSH32(esp, 0x00164128u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00164128: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016413F; /* je: equal / zero */

loc_0016412F: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0016413Bu); RECOMP_ABI_CALL(0x001639D0u, sub_001639D0); /* call 0x001639D0 */

loc_0016413B: ;
    edi = eax;
    goto loc_00164141;

loc_0016413F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00164141: ;
    eax = esi;
    ecx = MEM32(eax);
    edx = edi + 0x114;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = eax;
    eax = MEM32(esi + 0x168);
    ecx = eax + eax * 4;
    edx = esi + ecx * 4 + -20;
    ecx = MEM32(edx);
    eax = edi + 0x128;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(edx + 0x10);
    MEM32(eax + 0x10) = edx;
    eax = MEM32(esi + 0x174);
    ecx = MEM32(esi + 0x170);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001641A9u); RECOMP_ABI_CALL(0x00163A80u, sub_00163A80); /* call 0x00163A80 */

loc_001641A9: ;
    edx = MEM32(esi + 0x17C);
    eax = MEM32(esi + 0x178);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001641BEu); RECOMP_ABI_CALL(0x00163AA0u, sub_00163AA0); /* call 0x00163AA0 */

loc_001641BE: ;
    ecx = MEM32(esp + 0x10);
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x16C) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001641D0
 * Original: 0x001641D0 - 0x00164418 (584 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001641D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001641D0: ;
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
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x5E532D44);
    ecx = edi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001641F0u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_001641F0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016440F; /* je: equal / zero */

loc_001641FA: ;
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016440F; /* je: equal / zero */

loc_00164205: ;
    edi = MEM32(edi + 0x3560);
    eax = MEM32(edi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 0x18) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = HI8(eax);
    eax = MEM32(esp + 0x14);
    MEM8(esi + 0x73) = 1;
    ecx = MEM32(eax + 0x180);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164273; /* jne: not equal / not zero */

loc_00164233: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x31FF20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164244u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00164244: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164265; /* je: equal / zero */

loc_0016424B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C3F0F01u);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164259u); RECOMP_ABI_CALL(0x001619B0u, sub_001619B0); /* call 0x001619B0 */

loc_00164259: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx + 0x180) = eax;
    goto loc_00164278;

loc_00164265: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x180) = eax;
    goto loc_00164278;

loc_00164273: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164278u); RECOMP_ABI_CALL(0x00161A20u, sub_00161A20); /* call 0x00161A20 */

loc_00164278: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x31FED8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164289u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00164289: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001642D7; /* je: equal / zero */

loc_00164290: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    PUSH32(esp, 0);
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    ecx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    edx = (uint32_t)recomp_cvt_si32((double)xmm2.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x16C); /* cvtsi2ss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm3.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001642D5u); RECOMP_ABI_CALL(0x00161DB0u, sub_00161DB0); /* call 0x00161DB0 */

loc_001642D5: ;
    goto loc_001642D9;

loc_001642D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001642D9: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x180);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001642E9u); RECOMP_ABI_CALL(0x00161B20u, sub_00161B20); /* call 0x00161B20 */

loc_001642E9: ;
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    PUSH32(esp, 0x400);
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    PUSH32(esp, 0x30);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    PUSH32(esp, 0x31FE90);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016437Eu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016437E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001643A7; /* je: equal / zero */

loc_00164385: ;
    edx = MEM32(esp + 0x14);
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x16C); /* cvtsi2ss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001643A5u); RECOMP_ABI_CALL(0x001620D0u, sub_001620D0); /* call 0x001620D0 */

loc_001643A5: ;
    goto loc_001643A9;

loc_001643A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001643A9: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x180);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001643B9u); RECOMP_ABI_CALL(0x00161B20u, sub_00161B20); /* call 0x00161B20 */

loc_001643B9: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm2.f[0]; /* movss */
    MEM8(esi + 0x73) = 1;
    edx = MEM32(ecx + 0x180);
    PUSH32(esp, edx);
    PUSH32(esp, 0x8C3F0F01u);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001643F2u); RECOMP_ABI_CALL(0x00161910u, sub_00161910); /* call 0x00161910 */

loc_001643F2: ;
    PUSH32(esp, 0x8C3F0F01u);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001643FEu); RECOMP_ABI_CALL(0x001617C0u, sub_001617C0); /* call 0x001617C0 */

loc_001643FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x110) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016440Fu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016440F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00164420
 * Original: 0x00164420 - 0x00164455 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164420: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00164432u); RECOMP_ABI_CALL(0x00083ED0u, sub_00083ED0); /* call 0x00083ED0 */

loc_00164432: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 8) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00164460
 * Original: 0x00164460 - 0x00164480 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164460(void)
{

loc_00164460: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016446Du); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016446D: ;
    MEM32(esi) = 0x31FF68;
    MEM8(esi + 0xA8) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164490
 * Original: 0x00164490 - 0x001644C0 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164490: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00164498u); RECOMP_ABI_CALL(0x0015AD50u, sub_0015AD50); /* call 0x0015AD50 */

loc_00164498: ;
    SET_LO8(eax, MEM8(esi + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001644BE; /* je: equal / zero */

loc_001644A2: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 6;
    edi = edi;

loc_001644B0: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001644B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001644B4u); } /* indirect call */
    }

loc_001644B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001644B0; /* jne: not equal / not zero */

loc_001644BD: ;
    POP32(esp, edi);

loc_001644BE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001644C0
 * Original: 0x001644C0 - 0x001644D0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001644C0(void)
{

loc_001644C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xA8) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001644D0
 * Original: 0x001644D0 - 0x001644DA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001644D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001644D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001644D6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001644D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001644E0
 * Original: 0x001644E0 - 0x001645E4 (260 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001644E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001644E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + 0x90;
    goto loc_00164500;

    /* nop */

loc_00164500: ;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 0x31FFD8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164510u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00164510: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x31FF98);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164524u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00164524: ;
    ebx = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164544; /* je: equal / zero */

loc_0016452D: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164537u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00164537: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164542u); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00164542: ;
    goto loc_00164546;

loc_00164544: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00164546: ;
    edx = esp + 0x1C;
    PUSH32(esp, 0x2CA273BB);
    PUSH32(esp, edx);
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164557u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00164557: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = eax;
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164584u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00164584: ;
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016458Du); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016458D: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164598u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_00164598: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001645A3u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001645A3: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001645B3u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_001645B3: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x54);
    ecx = MEM32(ebp + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001645CFu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_001645CF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00164500; /* jl: less (signed <) */

loc_001645DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001645F0
 * Original: 0x001645F0 - 0x00164752 (354 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001645F0(void)
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

loc_001645F0: ;
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
    MEM32(esp + 0x18) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164607u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_00164607: ;
    esi = eax;
    ecx = esi;
    MEM32(esp + 0x10) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164614u); RECOMP_ABI_CALL(0x00124CA0u, sub_00124CA0); /* call 0x00124CA0 */

loc_00164614: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0016467C; /* jle: less or equal (signed <=) */

loc_0016461E: ;
    goto loc_00164624;

loc_00164620: ;
    esi = MEM32(esp + 0x10);

loc_00164624: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016462Cu); RECOMP_ABI_CALL(0x00124D70u, sub_00124D70); /* call 0x00124D70 */

loc_0016462C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016467C; /* je: equal / zero */

loc_00164632: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016467C; /* jge: greater or equal (signed >=) */

loc_00164637: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x00164641u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016463Bu); } /* indirect call */
    }

loc_00164641: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00164648u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164645u); } /* indirect call */
    }

loc_00164648: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x00164656u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164650u); } /* indirect call */
    }

loc_00164656: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0016465Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016465Au); } /* indirect call */
    }

loc_0016465D: ;
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x9C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x98); /* divss */
    MEMF(esp + edi * 4 + 0x38) = xmm0.f[0]; /* movss */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00164620; /* jl: less (signed <) */

loc_0016467C: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016468Fu); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016468F: ;
    ecx = ebx + ebx * 4;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0xA;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_001646B0: ;
    fp_push(MEMF(esp + edi * 4 + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEC4C)); /* fmul dword ptr [0x2fec4c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001646BFu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001646BF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + edi * 4 + 0x38); /* comiss */
    SET_LO8(edx, LO8(eax));
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001646D4; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + edi * 4 + 0x38)) */

loc_001646CE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001646D4: ;
    ecx = MEM32(esi);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM8(ecx + 0x49) = LO8(edx);
    MEM8(ecx + 0x4A) = LO8(eax);
    MEM8(ecx + 0x48) = LO8(ebx);
    MEM8(ecx + 0x4B) = 0x80;
    edx = 1;
    MEM8(ecx + 0x73) = LO8(edx);
    eax = MEM32(esi);
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x1C) (32-bit) */
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    if (CMP_L(_fas, _fbs)) goto loc_00164713; /* jl: less (signed <) */

loc_0016470F: ;
    PUSH32(esp, 0);
    goto loc_00164714;

loc_00164713: ;
    PUSH32(esp, edx);

loc_00164714: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164719u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00164719: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00164728u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164725u); } /* indirect call */
    }

loc_00164728: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x307EE4); /* addss */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_001646B0; /* jl: less (signed <) */

loc_00164749: ;
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
 * sub_00164760
 * Original: 0x00164760 - 0x00164784 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164760: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31FF68;
    PUSH32(esp, 0x0016476Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016476E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016477E; /* je: equal / zero */

loc_00164775: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016477Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016477B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016477E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164790
 * Original: 0x00164790 - 0x001647CF (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164790: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016479Du); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016479D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x31FFE0;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001647D0
 * Original: 0x001647D0 - 0x001647DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001647D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001647D0: ;
    MEM32(ecx) = 0x31FFE0;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_001647E0
 * Original: 0x001647E0 - 0x0016487A (154 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001647E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001647E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001647F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001647EFu); } /* indirect call */
    }

loc_001647F2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164867; /* je: equal / zero */

loc_001647F8: ;
    SET_LO8(eax, MEM8(edi + 0x73));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164811; /* jne: not equal / not zero */

loc_001647FF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00164809u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164803u); } /* indirect call */
    }

loc_00164809: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xA4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164867; /* je: equal / zero */

loc_00164811: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x0016481Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164816u); } /* indirect call */
    }

loc_0016481C: ;
    MEM32(edi + 0xA4) = eax;
    esi = edi + 0x90;
    ebx = 5;
    /* nop */

loc_00164830: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016483F; /* je: equal / zero */

loc_00164836: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016483Fu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016483F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00164830; /* jne: not equal / not zero */

loc_00164845: ;
    SET_LO8(eax, MEM8(edi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00164867; /* je: equal / zero */

loc_0016484D: ;
    ecx = MEM32(edi + 0xA4);
    ecx = MEM32(edi + ecx * 4 + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164867; /* je: equal / zero */

loc_0016485E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00164867u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00164867: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00164874u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_00164874: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00164880
 * Original: 0x00164880 - 0x00164BFE (894 bytes, 291 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164880: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320128);
    esi = ecx;
    PUSH32(esp, 0x0016489Cu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016489C: ;
    ebx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001648B3; /* je: equal / zero */

loc_001648A7: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x001648AFu); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_001648AF: ;
    edi = eax;
    goto loc_001648B5;

loc_001648B3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001648B5: ;
    eax = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001648C0u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_001648C0: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = eax;
    ecx = edi;
    PUSH32(esp, 0x001648EDu); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_001648ED: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x001648F6u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_001648F6: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x50), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x4C), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00164909u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_00164909: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00164917u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_00164917: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00164931u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00164931: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x3200E0);
    MEM32(esi + 0x90) = edi;
    PUSH32(esp, 0x0016494Bu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016494B: ;
    ebx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164962; /* je: equal / zero */

loc_00164956: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0016495Eu); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_0016495E: ;
    edi = eax;
    goto loc_00164964;

loc_00164962: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00164964: ;
    edx = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016496Fu); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0016496F: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = eax;
    ecx = edi;
    PUSH32(esp, 0x0016499Cu); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0016499C: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x001649A5u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_001649A5: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x50), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x4C), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001649B8u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_001649B8: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001649C6u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_001649C6: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001649E0u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_001649E0: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320098);
    MEM32(esi + 0x94) = edi;
    PUSH32(esp, 0x001649FAu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_001649FA: ;
    ebx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164A11; /* je: equal / zero */

loc_00164A05: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00164A0Du); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00164A0D: ;
    edi = eax;
    goto loc_00164A13;

loc_00164A11: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00164A13: ;
    edx = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00164A1Eu); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00164A1E: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = eax;
    ecx = edi;
    PUSH32(esp, 0x00164A4Bu); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00164A4B: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00164A54u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00164A54: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x50), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x4C), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00164A67u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_00164A67: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00164A75u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_00164A75: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00164A8Fu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00164A8F: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320050);
    MEM32(esi + 0x98) = edi;
    PUSH32(esp, 0x00164AA9u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00164AA9: ;
    ebx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164AC0; /* je: equal / zero */

loc_00164AB4: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00164ABCu); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00164ABC: ;
    edi = eax;
    goto loc_00164AC2;

loc_00164AC0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00164AC2: ;
    edx = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00164ACDu); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00164ACD: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = eax;
    ecx = edi;
    PUSH32(esp, 0x00164AFAu); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00164AFA: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00164B03u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00164B03: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x50), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x4C), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00164B16u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_00164B16: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00164B24u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_00164B24: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00164B3Eu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00164B3E: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320008);
    MEM32(esi + 0x9C) = edi;
    PUSH32(esp, 0x00164B58u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00164B58: ;
    ebx = MEM32(esp + 0x40);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164B6F; /* je: equal / zero */

loc_00164B63: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00164B6Bu); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00164B6B: ;
    edi = eax;
    goto loc_00164B71;

loc_00164B6F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00164B71: ;
    edx = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00164B7Cu); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00164B7C: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = eax;
    ecx = edi;
    PUSH32(esp, 0x00164BA9u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00164BA9: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00164BB2u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00164BB2: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x50), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x4C), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00164BC5u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_00164BC5: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00164BD3u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_00164BD3: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00164BEDu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00164BED: ;
    MEM32(esi + 0xA0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00164C00
 * Original: 0x00164C00 - 0x00164C24 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31FFE0;
    PUSH32(esp, 0x00164C0Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_00164C0E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164C1E; /* je: equal / zero */

loc_00164C15: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00164C1Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00164C1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00164C1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164C30
 * Original: 0x00164C30 - 0x00164C31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164C30(void)
{

loc_00164C30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00164C40
 * Original: 0x00164C40 - 0x00164C5B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164C40: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00164C60
 * Original: 0x00164C60 - 0x00164CB2 (82 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164C60: ;
    eax = ecx;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax) = LO8(edx);
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(ecx, 0xFF);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 4) = LO8(edx);
    MEM8(eax + 5) = LO8(edx);
    MEM8(eax + 6) = LO8(edx);
    MEM8(eax + 7) = LO8(ecx);
    MEM8(eax + 9) = LO8(edx);
    MEM8(eax + 0xA) = LO8(edx);
    MEM8(eax + 0xB) = LO8(edx);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(edx);
    MEM8(eax + 0xE) = LO8(edx);
    MEM8(eax + 0xF) = LO8(edx);
    MEM8(eax + 0x10) = LO8(ecx);
    MEM8(eax + 8) = 1;
    MEM8(eax + 9) = LO8(ecx);
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(ecx);
    MEM8(eax + 0xF) = LO8(ecx);
    MEM8(eax + 0x10) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00164CC0
 * Original: 0x00164CC0 - 0x00164DBA (250 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164CC0: ;
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = ZX8(LO8(edx));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    eax = ZX8(LO8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(HI8(edx));
    edx = ZX8(HI8(ebx));
    ebx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX8(LO8(ebx));
    edx = ZX8(LO8(edx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x18);
    esi = ZX8(HI8(ebx));
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00164D4D; /* jle: less or equal (signed <=) */

loc_00164D46: ;
    eax = 0xFF;
    goto loc_00164D53;

loc_00164D4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00164D53; /* jge: greater or equal (signed >=) */

loc_00164D51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00164D53: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00164D62; /* jle: less or equal (signed <=) */

loc_00164D5B: ;
    ebx = 0xFF;
    goto loc_00164D72;

loc_00164D62: ;
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00164D6E; /* jge: greater or equal (signed >=) */

loc_00164D6A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00164D72;

loc_00164D6E: ;
    SET_LO8(ebx, MEM8(esp + 0x1C));

loc_00164D72: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00164D81; /* jle: less or equal (signed <=) */

loc_00164D7A: ;
    edx = 0xFF;
    goto loc_00164D87;

loc_00164D81: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00164D87; /* jge: greater or equal (signed >=) */

loc_00164D85: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00164D87: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00164D96; /* jle: less or equal (signed <=) */

loc_00164D8F: ;
    ecx = 0xFF;
    goto loc_00164D9C;

loc_00164D96: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00164D9C; /* jge: greater or equal (signed >=) */

loc_00164D9A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00164D9C: ;
    POP32(esp, edi);
    MEM8(esp + 0x14) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(edx);
    MEM8(esp + 0x17) = LO8(ecx);
    edx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00164DC0
 * Original: 0x00164DC0 - 0x00164E59 (153 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00164DC0: ;
    PUSH32(esp, ecx);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00164DE0; /* jnp: not parity */

loc_00164DD5: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00164DF0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x18)) */

loc_00164DE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_00164E20;

loc_00164DF0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x18); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00164E15; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00164E0D: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    goto loc_00164E20;

loc_00164E15: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00164E20; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00164E1A: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_00164E20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esi + 0xD);
    edx = MEM32(esi + 9);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00164E37u); RECOMP_ABI_CALL(0x00164CC0u, sub_00164CC0); /* call 0x00164CC0 */

loc_00164E37: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x14); /* addss */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00164E60
 * Original: 0x00164E60 - 0x00164F1C (188 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00164E60: ;
    PUSH32(esp, ecx);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00164E80; /* jnp: not parity */

loc_00164E75: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00164E90; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x18)) */

loc_00164E80: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_00164EC0;

loc_00164E90: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x18); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00164EB5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00164EAD: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    goto loc_00164EC0;

loc_00164EB5: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00164EC0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00164EBA: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_00164EC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esi + 0xD);
    edx = MEM32(esi + 9);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00164ED7u); RECOMP_ABI_CALL(0x00164CC0u, sub_00164CC0); /* call 0x00164CC0 */

loc_00164ED7: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(esp + 0x16));
    SET_LO8(edx, MEM8(esp + 0x17));
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM8(esi + 9) = LO8(eax);
    MEM8(esi + 0xA) = HI8(eax);
    eax = MEM32(esp + 0x20);
    MEM8(esi + 0xB) = LO8(ecx);
    MEM8(esi + 0xC) = LO8(edx);
    MEM8(esi + 0xD) = LO8(eax);
    MEM8(esi + 0xE) = HI8(eax);
    SET_LO16(eax, MEM16(esp + 0x22));
    MEM8(esi + 0xF) = LO8(eax);
    MEM8(esi + 0x10) = HI8(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00164F20
 * Original: 0x00164F20 - 0x00164F6D (77 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164F20: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 8));
    if (CMP_EQ(_fa, _fb)) goto loc_00164F4E; /* je: equal / zero */

loc_00164F2F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164F65; /* jne: not equal / not zero */

loc_00164F33: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00164F46u); RECOMP_ABI_CALL(0x00164E60u, sub_00164E60); /* call 0x00164E60 */

loc_00164F46: ;
    MEM8(esi + 8) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00164F4E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164F65; /* je: equal / zero */

loc_00164F52: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00164F65u); RECOMP_ABI_CALL(0x00164E60u, sub_00164E60); /* call 0x00164E60 */

loc_00164F65: ;
    MEM8(esi + 8) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164F70
 * Original: 0x00164F70 - 0x00164F9E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164F70(void)
{

loc_00164F70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00164F7Du); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_00164F7D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x320184;
    MEM32(esi + 0x90) = 0;
    MEMF(esi + 0xB8) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164FA0
 * Original: 0x00164FA0 - 0x00164FAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00164FA0: ;
    MEM32(ecx) = 0x320184;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00164FB0
 * Original: 0x00164FB0 - 0x00164FCC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00164FB0: ;
    SET_LO8(eax, MEM8(ecx + 0xB5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164FCB; /* je: equal / zero */

loc_00164FBA: ;
    eax = MEM32(ecx + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164FCB; /* je: equal / zero */

loc_00164FC4: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

loc_00164FCB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00164FD0
 * Original: 0x00164FD0 - 0x00164FE9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164FD0: ;
    ecx = MEM32(ecx + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164FE6; /* je: equal / zero */

loc_00164FDA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00164FE6u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00164FE6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164FF0
 * Original: 0x00164FF0 - 0x00164FF3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164FF0(void)
{

loc_00164FF0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00165000
 * Original: 0x00165000 - 0x00165003 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165000(void)
{

loc_00165000: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00165010
 * Original: 0x00165010 - 0x00165011 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165010(void)
{

loc_00165010: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00165020
 * Original: 0x00165020 - 0x00165053 (51 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165020(void)
{

loc_00165020: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0xC0);
    xmm0 = XMM_SCALAR(MEMF(0x320170)); /* movss */
    edx = eax + edx * 4;
    edx = MEM32(ecx + edx * 4 + 0x94);
    MEM32(ecx + 0x90) = edx;
    MEM32(ecx + 0xBC) = eax;
    MEMF(ecx + 0xB8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00165060
 * Original: 0x00165060 - 0x001651AD (333 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165060: ;
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
    esi = edi + 0x94;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00165080;

    /* nop */
    /* nop */

loc_00165080: ;
    eax = MEM32(ebx + 0x320174);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x3201B0);
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016509Eu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016509E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001650B3; /* je: equal / zero */

loc_001650A5: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001650B1u); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_001650B1: ;
    goto loc_001650B5;

loc_001650B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001650B5: ;
    edx = MEM32(esp + 0x14);
    MEM32(esi) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001650C6u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_001650C6: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = eax;
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001650F3u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_001650F3: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001650FCu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_001650FC: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(edi + 0x50), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(edi + 0x4C), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016510Fu); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016510F: ;
    eax = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(edi + 0x48);
    eax = MEM32(esi);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x18) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = 1;
    eax = MEM32(esi);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165162u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_00165162: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x54);
    eax = MEM32(edi + 0x54);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016517Eu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016517E: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165189u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00165189: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00165080; /* jb: below (unsigned <) */

loc_00165198: ;
    MEM8(edi + 0xB4) = 0;
    MEM8(edi + 0xB5) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001651B0
 * Original: 0x001651B0 - 0x00165255 (165 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001651B0(void)
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

loc_001651B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xB8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00165250; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_001651C9: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x90);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016524F; /* je: equal / zero */

loc_001651D4: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3201F4); /* mulss */
    eax = MEM32(esi + 0x48);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = eax;
    MEMF(edi + 0xB8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00165205u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00165205: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    SET_LO8(edx, MEM8(esp + 0xD));
    SET_LO8(ebx, MEM8(esp + 0xE));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esi + 0x48) = LO8(ecx);
    MEM8(esi + 0x49) = LO8(edx);
    MEM8(esi + 0x4A) = LO8(ebx);
    MEM8(esi + 0x4B) = LO8(eax);
    MEM8(esi + 0x73) = 1;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0xB8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016524E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edi + 0xB8)) */

loc_0016522D: ;
    eax = MEM32(edi + 0x90);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = LO8(edx);
    MEM8(eax + 0x4A) = LO8(ebx);
    MEM8(eax + 0x4B) = 0xFF;
    MEM8(eax + 0x73) = 1;
    MEM32(edi + 0x90) = 0;

loc_0016524E: ;
    POP32(esp, ebx);

loc_0016524F: ;
    POP32(esp, esi);

loc_00165250: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00165260
 * Original: 0x00165260 - 0x00165304 (164 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00165260: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00165275u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_00165275: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016528Eu); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_0016528E: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x00165297u); RECOMP_ABI_CALL(0x00124CA0u, sub_00124CA0); /* call 0x00124CA0 */

loc_00165297: ;
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x001652A0u); RECOMP_ABI_CALL(0x00124E10u, sub_00124E10); /* call 0x00124E10 */

loc_001652A0: ;
    SET_LO8(ecx, MEM8(esi + 0xB5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001652C4; /* je: equal / zero */

loc_001652AA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001652B2; /* je: equal / zero */

loc_001652AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001652DC; /* jne: not equal / not zero */

loc_001652B2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEM8(esi + 0xB5) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001652C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001652BFu); } /* indirect call */
    }

loc_001652C2: ;
    goto loc_001652DC;

loc_001652C4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001652DC; /* jle: less or equal (signed <=) */

loc_001652C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001652DC; /* je: equal / zero */

loc_001652CC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    MEM8(esi + 0xB5) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x001652DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001652D9u); } /* indirect call */
    }

loc_001652DC: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001652E8u); RECOMP_ABI_CALL(0x001651B0u, sub_001651B0); /* call 0x001651B0 */

loc_001652E8: ;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001652FD; /* je: equal / zero */

loc_001652F2: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001652FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001652FAu); } /* indirect call */
    }

loc_001652FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
