/**
 * Medal of Honor European Assault - Recompiled code chunk 42
 * Functions: 250 (0x00165310 - 0x0016EA30)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00165310
 * Original: 0x00165310 - 0x00165334 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165310: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x320184;
    PUSH32(esp, 0x0016531Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016531E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016532E; /* je: equal / zero */

loc_00165325: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016532Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016532B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016532E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00165340
 * Original: 0x00165340 - 0x0016536B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165340: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016534F; /* jne: not equal / not zero */

loc_00165349: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_0016534F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016535A; /* jne: not equal / not zero */

loc_00165354: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_0016535A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = ecx * 8 + -1;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00165370
 * Original: 0x00165370 - 0x00165375 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00165370: ;
    g_seh_ebp = ebp; sub_0015E2E0(); return; /* tail jmp 0x0015E2E0 */

}

/**
 * sub_00165380
 * Original: 0x00165380 - 0x00165394 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165380: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 0x1E4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001653A0
 * Original: 0x001653A0 - 0x001653BA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001653A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001653A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1B4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001653A8: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001653B9; /* je: equal / zero */

loc_001653AD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001653A8; /* jl: less (signed <) */

loc_001653B6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001653B9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001653C0
 * Original: 0x001653C0 - 0x001653F3 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001653C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001653C0: ;
    eax = MEM32(ecx + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001653D0; /* jne: not equal / not zero */

loc_001653CA: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

loc_001653D0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1B0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_001653E0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001653F0; /* je: equal / zero */

loc_001653E4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001653E0; /* jl: less (signed <) */

loc_001653ED: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001653F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00165400
 * Original: 0x00165400 - 0x001656A9 (681 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165400: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, 0xAED70631u);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00165417u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00165417: ;
    edx = MEM32(eax);
    ecx = esi + 0x100;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, 0x00165445u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165445: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x332C98E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00165454u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00165454: ;
    ecx = MEM32(eax);
    edx = esi + 0x114;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, 0x00165482u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165482: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0xB40E1066u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00165491u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00165491: ;
    ecx = MEM32(eax);
    edx = esi + 0x128;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, 0x001654BFu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_001654BF: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x96FF8C4Du);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001654CEu); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_001654CE: ;
    ecx = MEM32(eax);
    edx = esi + 0x13C;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, 0x001654FCu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_001654FC: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0xBF7D484Cu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016550Bu); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0016550B: ;
    ecx = MEM32(eax);
    edx = esi + 0x150;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, 0x00165539u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165539: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x7C6B96E5);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00165548u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00165548: ;
    ecx = MEM32(eax);
    edx = esi + 0x164;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, 0x00165576u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165576: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x3A55682B);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00165585u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00165585: ;
    ecx = MEM32(eax);
    edx = esi + 0x178;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, 0x001655B3u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_001655B3: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0xF9D75C39u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001655C2u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_001655C2: ;
    ecx = MEM32(eax);
    edx = esi + 0x18C;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(edx + 0x10) = eax;
    PUSH32(esp, 0x001655F0u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_001655F0: ;
    edi = MEM32(esp + 0x24);
    PUSH32(esp, 0xB12036BFu);
    ecx = edi;
    PUSH32(esp, 0x00165600u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_00165600: ;
    PUSH32(esp, 0x1E76A5DA);
    ecx = edi;
    MEM32(esi + 0x1A0) = eax;
    PUSH32(esp, 0x00165612u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_00165612: ;
    MEM32(esi + 0x1A4) = eax;
    edi = esi + 0x1E4;
    ebx = 0x32;

loc_00165623: ;
    ecx = MEM32(edi);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0016562Eu); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016562E: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x0016563Eu); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_0016563E: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 0x54);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4BCB2BEE);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016565Bu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016565B: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00165666u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00165666: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00165623; /* jne: not equal / not zero */

loc_0016566C: ;
    eax = MEM32(esi + 0x1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001656A0; /* je: equal / zero */

loc_00165676: ;
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x4BCB2BEE);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00165691u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00165691: ;
    ecx = MEM32(esi + 0x1A4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001656A0u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001656A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001656B0
 * Original: 0x001656B0 - 0x001659C7 (791 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001656B0(void)
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

loc_001656B0: ;
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
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, edi);
    eax = esp + 0x20;
    edi = ecx;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165723u); RECOMP_ABI_CALL(0x00266270u, sub_00266270); /* call 0x00266270 */

loc_00165723: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x34); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001657C2; /* jnp: not parity */

loc_0016579B: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 8); /* divss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm5; /* movaps */

loc_001657C2: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3210B0); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001657FD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001657F5: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_00165808;

loc_001657FD: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00165808; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00165802: ;
    MEMF(esp + 8) = xmm4.f[0]; /* movss */

loc_00165808: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165811u); RECOMP_ABI_CALL(0x002BE484u, sub_002BE484); /* call 0x002BE484 */

loc_00165811: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016584D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016583F: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC54); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0016584D: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = esp + 0x14;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016587Au); RECOMP_ABI_CALL(0x002661A0u, sub_002661A0); /* call 0x002661A0 */

loc_0016587A: ;
    xmm0 = XMM_SCALAR(MEMF(0x307EE4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    ecx = MEM32(esi + 0x34);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001658FE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0016588C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165891u); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_00165891: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esi + 0x39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x300BA0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00165999; /* je: equal / zero */

loc_001658FA: ;
    PUSH32(esp, 0);
    goto loc_00165959;

loc_001658FE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165903u); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_00165903: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esi + 0x39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00165999; /* je: equal / zero */

loc_00165957: ;
    PUSH32(esp, 1);

loc_00165959: ;
    ecx = MEM32(esi + 0x34);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165961u); RECOMP_ABI_CALL(0x0015E910u, sub_0015E910); /* call 0x0015E910 */

loc_00165961: ;
    SET_LO8(eax, MEM8(esi + 0x39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00165999; /* je: equal / zero */

loc_0016597A: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165987u); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_00165987: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_00165999: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ebp + 8);
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    POP32(esp, edi);
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
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
 * sub_001659D0
 * Original: 0x001659D0 - 0x00165B6F (415 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001659D0(void)
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

loc_001659D0: ;
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
    edi = ecx;
    ecx = MEM32(edi + 0x1A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001659F1; /* je: equal / zero */

loc_001659E8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001659F1u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001659F1: ;
    eax = MEM32(edi + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165B68; /* je: equal / zero */

loc_001659FF: ;
    esi = edi + 0x1D8;
    MEM32(esp + 0x18) = 0x32;
    /* nop */

loc_00165A10: ;
    _fa = (uint32_t)(MEM32(esi + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -36), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165B56; /* je: equal / zero */

loc_00165A1A: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165B56; /* je: equal / zero */

loc_00165A25: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165B4D; /* je: equal / zero */

loc_00165A30: ;
    eax = MEM32(esi + 8);
    SET_LO8(ebx, LO8(eax));
    edx = eax;
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esp + 0x12));
    MEM8(ecx + 0x4A) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x13));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + 0x49) = LO8(edx);
    MEM8(ecx + 0x48) = LO8(ebx);
    MEM8(ecx + 0x4B) = LO8(eax);
    MEM8(ecx + 0x73) = 1;
    ecx = MEM32(edi + 0x48);
    edx = ecx;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x12));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x305FE4); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00165ABE; /* je: equal / zero */

loc_00165A7B: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = MEM32(esi + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x1C)); /* fdiv dword ptr [esi + 0x1c] */
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x301054)); /* fmul dword ptr [0x301054] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE99C)); /* fadd dword ptr [0x2fe99c] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x1C)); /* fimul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165AB2u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00165AB2: ;
    ecx = MEM32(esi + 0xC);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(ecx + 0x48) = LO8(edx);
    goto loc_00165AD8;

loc_00165ABE: ;
    eax = ZX8(LO8(eax));
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165AD2u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00165AD2: ;
    ecx = MEM32(esi + 0xC);
    MEM8(ecx + 0x48) = LO8(ebx);

loc_00165AD8: ;
    SET_LO8(edx, MEM8(esp + 0x11));
    MEM8(ecx + 0x49) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x12));
    MEM8(ecx + 0x4B) = LO8(eax);
    MEM8(ecx + 0x4A) = LO8(edx);
    MEM8(ecx + 0x73) = 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165B56; /* je: equal / zero */

loc_00165AF3: ;
    ecx = MEM32(edi + 0x1A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165B56; /* je: equal / zero */

loc_00165AFD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165B06u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00165B06: ;
    eax = MEM32(edi + 0x1A4);
    ecx = MEM32(esi + -8);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(esi + -4);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(esi);
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x73) = 1;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165B36; /* jne: not equal / not zero */

loc_00165B28: ;
    ecx = MEM32(edi + 0x1A4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165B34u); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_00165B34: ;
    goto loc_00165B56;

loc_00165B36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165B56; /* jne: not equal / not zero */

loc_00165B3B: ;
    ecx = MEM32(edi + 0x1A4);
    PUSH32(esp, 0x40490FDB);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165B4Bu); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_00165B4B: ;
    goto loc_00165B56;

loc_00165B4D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165B56u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00165B56: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00165A10; /* jne: not equal / not zero */

loc_00165B68: ;
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
 * sub_00165B70
 * Original: 0x00165B70 - 0x00165C34 (196 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00165B70: ;
    eax = MEM32(ecx + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00165B9F; /* je: equal / zero */

loc_00165B7B: ;
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x1B0;

loc_00165B87: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165B9A; /* je: equal / zero */

loc_00165B8B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00165B87; /* jl: less (signed <) */

loc_00165B94: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00165B9A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165BA5; /* jne: not equal / not zero */

loc_00165B9F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00165BA5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00165BCB; /* jp: parity */

loc_00165BB7: ;
    eax = edx + edx * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + ecx + 0x1EA) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00165BCB: ;
    edx = edx + edx * 2;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(eax + 0x1EC) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x1EA) = 1;
    xmm1 = XMM_SCALAR(MEMF(0x3727C4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x1F0) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3727C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    MEMF(eax + 0x1F4) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1F8) = LO8(ecx);
    MEM8(eax + 0x1F9) = HI8(ecx);
    SET_LO16(ecx, MEM16(esp + 0x16));
    MEM8(eax + 0x1FA) = LO8(ecx);
    MEM8(eax + 0x1FB) = HI8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00165C40
 * Original: 0x00165C40 - 0x00165C6E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165C40(void)
{

loc_00165C40: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00165C4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165C46u); } /* indirect call */
    }

loc_00165C4C: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x3980);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00165C6Du); RECOMP_ABI_CALL(0x00165B70u, sub_00165B70); /* call 0x00165B70 */

loc_00165C6D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00165C70
 * Original: 0x00165C70 - 0x00165D13 (163 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00165C70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x3888C0);
    SET_LO8(edx, MEM8(ecx + 0x1ED0));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, 1);
    MEM8(esp + 3) = LO8(eax);
    MEM32(esp + 4) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_00165D0F; /* jbe: below or equal (unsigned <=) */

loc_00165C91: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);

loc_00165CA1: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00165CABu); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_00165CAB: ;
    esi = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00165CBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165CB4u); } /* indirect call */
    }

loc_00165CBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165CED; /* jne: not equal / not zero */

loc_00165CC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x30) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165CED; /* je: equal / zero */

loc_00165CC6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00165CD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165CCAu); } /* indirect call */
    }

loc_00165CD0: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(eax + 0x3980);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00165CE5u); RECOMP_ABI_CALL(0x00165B70u, sub_00165B70); /* call 0x00165B70 */

loc_00165CE5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165CED; /* jne: not equal / not zero */

loc_00165CE9: ;
    MEM8(esp + 0x13) = LO8(eax);

loc_00165CED: ;
    edx = MEM32(0x3888C0);
    eax = MEM32(esp + 0x14);
    ecx = ZX8(MEM8(edx + 0x1ED0));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00165CA1; /* jl: less (signed <) */

loc_00165D07: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00165D0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00165D20
 * Original: 0x00165D20 - 0x00165DC3 (163 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00165D20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x3888C0);
    SET_LO8(edx, MEM8(ecx + 0x1ED0));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, 1);
    MEM8(esp + 3) = LO8(eax);
    MEM32(esp + 4) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_00165DBF; /* jbe: below or equal (unsigned <=) */

loc_00165D41: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);

loc_00165D51: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00165D5Bu); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_00165D5B: ;
    esi = eax;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165D9D; /* je: equal / zero */

loc_00165D68: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00165D72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165D6Cu); } /* indirect call */
    }

loc_00165D72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165D9D; /* je: equal / zero */

loc_00165D76: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00165D80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165D7Au); } /* indirect call */
    }

loc_00165D80: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(eax + 0x3980);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00165D95u); RECOMP_ABI_CALL(0x00165B70u, sub_00165B70); /* call 0x00165B70 */

loc_00165D95: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165D9D; /* jne: not equal / not zero */

loc_00165D99: ;
    MEM8(esp + 0x13) = LO8(eax);

loc_00165D9D: ;
    edx = MEM32(0x3888C0);
    eax = MEM32(esp + 0x14);
    ecx = ZX8(MEM8(edx + 0x1ED0));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00165D51; /* jl: less (signed <) */

loc_00165DB7: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00165DBF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00165DD0
 * Original: 0x00165DD0 - 0x00165E87 (183 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00165DD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x320210;
    esi = edi + 0x14C4;
    ebx = 0x32;

loc_00165DE6: ;
    ecx = MEM32(esi + -96);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + -4;
    MEM32(eax) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00165DFF; /* je: equal / zero */

loc_00165DF9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00165DFFu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00165DFF: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0;
    if ((_fa != 0)) goto loc_00165DE6; /* jne: not equal / not zero */

loc_00165E08: ;
    ecx = edi + 0x18C;
    PUSH32(esp, 0x00165E13u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165E13: ;
    ecx = edi + 0x178;
    PUSH32(esp, 0x00165E1Eu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165E1E: ;
    ecx = edi + 0x164;
    PUSH32(esp, 0x00165E29u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165E29: ;
    ecx = edi + 0x150;
    PUSH32(esp, 0x00165E34u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165E34: ;
    ecx = edi + 0x13C;
    PUSH32(esp, 0x00165E3Fu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165E3F: ;
    ecx = edi + 0x128;
    PUSH32(esp, 0x00165E4Au); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165E4A: ;
    ecx = edi + 0x114;
    PUSH32(esp, 0x00165E55u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165E55: ;
    ecx = edi + 0x100;
    PUSH32(esp, 0x00165E60u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165E60: ;
    esi = edi + 0xE0;
    ebx = 4;
    goto loc_00165E70;

    /* nop */

loc_00165E70: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00165E7Au); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00165E7A: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00165E70; /* jne: not equal / not zero */

loc_00165E7D: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00165E90
 * Original: 0x00165E90 - 0x00165F93 (259 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00165E90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1A8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165F8D; /* je: equal / zero */

loc_00165EA5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x1B0;
    /* nop */

loc_00165EB0: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165EC6; /* je: equal / zero */

loc_00165EB8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00165EB0; /* jl: less (signed <) */

loc_00165EC1: ;
    goto loc_00165F6A;

loc_00165EC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00165F6A; /* jl: less (signed <) */

loc_00165ECE: ;
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + edi;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1B4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165EFC; /* jne: not equal / not zero */

loc_00165EE0: ;
    ecx = MEM32(0x51D880);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00165EEEu); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_00165EEE: ;
    edx = MEM32(0x51D87C);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00165EFCu); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_00165EFC: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x200;
    MEM32(esi + 0x1B0) = ebx;
    MEM32(esi + 0x1B4) = 0xFFFFFFFFu;
    MEM8(esi + 0x1E8) = LO8(ebx);
    MEM8(esi + 0x1E9) = LO8(ebx);
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165F2C; /* je: equal / zero */

loc_00165F26: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00165F2Cu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00165F2C: ;
    MEM32(ebp + 4) = ebx;
    ecx = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00165F59; /* je: equal / zero */

loc_00165F3A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00165F41u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00165F41: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00165F4Du); RECOMP_ABI_CALL(0x0015E910u, sub_0015E910); /* call 0x0015E910 */

loc_00165F4D: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00165F59u); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_00165F59: ;
    eax = MEM32(edi + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00165F6A; /* jle: less or equal (signed <=) */

loc_00165F63: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x1A8) = eax;

loc_00165F6A: ;
    _fa = (uint32_t)(MEM32(edi + 0x1A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1A8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165F8D; /* je: equal / zero */

loc_00165F72: ;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x1B0;
    edi = edi;

loc_00165F80: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165F8D; /* je: equal / zero */

loc_00165F84: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00165F80; /* jl: less (signed <) */

loc_00165F8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00165FA0
 * Original: 0x00165FA0 - 0x00165FC1 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1474));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165FB8; /* jne: not equal / not zero */

loc_00165FAD: ;
    eax = MEM32(0x51D884);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00165FB8u); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_00165FB8: ;
    MEM8(esi + 0x1474) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00165FD0
 * Original: 0x00165FD0 - 0x00166288 (696 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165FE5u); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00165FE5: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = edi + 0x100;
    MEM32(edi) = 0x320210;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166005u); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_00166005: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = edi + 0x114;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016601Du); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_0016601D: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = edi + 0x128;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166035u); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_00166035: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = edi + 0x13C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016604Du); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_0016604D: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = edi + 0x150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166065u); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_00166065: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = edi + 0x164;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016607Du); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_0016607D: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = edi + 0x178;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166095u); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_00166095: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = edi + 0x18C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001660ADu); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_001660AD: ;
    MEM32(edi + 0x1A0) = ebx;
    MEM32(edi + 0x1A4) = ebx;
    MEM32(edi + 0x1A8) = ebx;
    eax = edi + 0x1E1;
    ecx = 0x32;
    edx = 0x2FF02C;
    /* nop */

loc_001660D0: ;
    MEM8(eax + -1) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax + 2) = 0xFF;
    MEM8(eax + 0x17) = LO8(ebx);
    MEM8(eax + 0x18) = LO8(ebx);
    MEM8(eax + 0x19) = LO8(ebx);
    MEM8(eax + 0x1A) = 0xFF;
    MEM32(eax + 0x23) = ebx;
    MEM32(eax + 0x27) = ebx;
    MEM32(eax + 0x2B) = ebx;
    MEM32(eax + 0x1F) = edx;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001660D0; /* jne: not equal / not zero */

loc_001660FB: ;
    MEM32(edi + 0x1470) = ebx;
    MEM8(edi + 0x1474) = LO8(ebx);
    MEM32(edi + 0x1478) = ebx;
    MEM8(edi + 0x147C) = LO8(ebx);
    MEM32(esp + 0xC) = ebx;
    esi = edi + 0x1C8;
    /* nop */

loc_00166120: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + -24) = ebx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + -20) = eax;
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x18) = LO8(ebx);
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    MEM8(esi + 0x1B) = 0xFF;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x21) = LO8(ebx);
    MEM8(esi + 0x22) = LO8(ebx);
    xmm0 = XMM_SCALAR(MEMF(0x3727C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC54); /* mulss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3727C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x300768); /* mulss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x30) = 0xFF;
    MEM8(esi + 0x31) = 0xFF;
    MEM8(esi + 0x32) = 0xFF;
    MEM8(esi + 0x33) = 0xFF;
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001661B4; /* je: equal / zero */

loc_001661AB: ;
    edx = esi + 0x38;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001661B4u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_001661B4: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x32023C);
    MEM32(esi + 0x3C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001661CBu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_001661CB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001661E1; /* je: equal / zero */

loc_001661D2: ;
    ecx = MEM32(esp + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001661DFu); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_001661DF: ;
    goto loc_001661E3;

loc_001661E1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001661E3: ;
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00166120; /* jl: less (signed <) */

loc_001661FB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x51D888) = 0x208E9DDA;
    MEM32(0x51D88C) = 0xB987CC60u;
    MEM32(0x51D890) = 0xCE80FCF6u;
    MEM32(0x51D894) = 0x50E46955;
    MEM32(0x51D898) = 0x27E359C3;
    MEM32(0x51D89C) = 0xBEEA0879u;
    MEM32(0x51D8A0) = 0xC9ED38EFu;
    MEM32(0x51D8A4) = 0x5952257E;
    MEM32(0x51D8A8) = 0x2E5515E8;
    MEM32(0x51D8AC) = 0x4E929C0D;
    MEM32(0x51D884) = 0xE861ECFCu;
    MEM32(0x51D880) = 0x6E4D3CCC;
    MEM32(0x51D87C) = 0x82554AABu;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00166290
 * Original: 0x00166290 - 0x00166951 (1729 bytes, 499 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166290: ;
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
    edi = ecx;
    eax = MEM32(edi + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001662C0; /* je: equal / zero */

loc_001662A8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 0x1B0;

loc_001662B0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001662C3; /* je: equal / zero */

loc_001662B7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001662B0; /* jl: less (signed <) */

loc_001662C0: ;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001662C3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(esp + 0x1B) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_0016630D; /* jge: greater or equal (signed >=) */

loc_001662CC: ;
    MEM8(esp + 0x1B) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 0x1B4;
    /* nop */

loc_001662E0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001662F0; /* je: equal / zero */

loc_001662E5: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001662E0; /* jl: less (signed <) */

loc_001662EE: ;
    goto loc_001662F4;

loc_001662F0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016632F; /* jge: greater or equal (signed >=) */

loc_001662F4: ;
    PUSH32(esp, 0x32027C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001662FEu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001662FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_0016630D: ;
    eax = MEM32(ebp + 0xC);
    edx = ebx + ebx * 2;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx + edi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + edi + 0x1B4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016632F; /* je: equal / zero */

loc_0016631F: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016632Au); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_0016632A: ;
    MEM8(esp + 0x1B) = 1;

loc_0016632F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = ebx + ebx * 2;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + edi;
    MEM32(esi + 0x1B0) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x1B4) = ecx;
    edx = MEM32(eax);
    MEM32(esi + 0x1C0) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x1C4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x1C8) = edx;
    eax = esi + 0x200;
    MEM8(esi + 0x1E8) = 1;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166381; /* je: equal / zero */

loc_0016637B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166381u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00166381: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + 0x200;
    MEM32(eax + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00166397; /* je: equal / zero */

loc_00166391: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166397u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_00166397: ;
    eax = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00166894; /* ja: above (unsigned >) */

loc_001663A6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x166954); /* switch: 11 entries, 11 targets */
    if (_jt == 0x001663ADu) goto loc_001663AD;
    if (_jt == 0x0016646Du) goto loc_0016646D;
    if (_jt == 0x001664E0u) goto loc_001664E0;
    if (_jt == 0x0016650Eu) goto loc_0016650E;
    if (_jt == 0x0016654Fu) goto loc_0016654F;
    if (_jt == 0x001665C2u) goto loc_001665C2;
    if (_jt == 0x00166674u) goto loc_00166674;
    if (_jt == 0x001666D8u) goto loc_001666D8;
    if (_jt == 0x0016674Bu) goto loc_0016674B;
    if (_jt == 0x00166784u) goto loc_00166784;
    if (_jt == 0x001667F9u) goto loc_001667F9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001663AD: ;
    SET_LO8(ecx, MEM8(0x37880C));
    eax = ebx + ebx * 2 + 0xF;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = LO8(ecx);
    SET_LO8(edx, MEM8(0x37880D));
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(0x37880E));
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(edx, MEM8(0x37880F));

loc_001663D6: ;
    MEM8(eax + 3) = LO8(edx);
    MEM8(esi + 0x1E9) = 1;
    PUSH32(esp, 0);
    eax = edi + 0x114;
    edx = MEM32(eax);
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
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166414u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00166414: ;
    ecx = edi + 0x128;

loc_0016641A: ;
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x10);
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166448u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00166448: ;
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166453u); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_00166453: ;
    ecx = MEM32(esi + 0x1E4);
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166462u); RECOMP_ABI_CALL(0x0015E8D0u, sub_0015E8D0); /* call 0x0015E8D0 */

loc_00166462: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    goto loc_001665A3;

loc_0016646D: ;
    SET_LO8(ecx, MEM8(0x378818));
    eax = ebx + ebx * 2 + 0xF;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + edi) = LO8(ecx);
    SET_LO8(edx, MEM8(0x378819));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(0x37881A));
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(edx, MEM8(0x37881B));
    MEM8(eax + 3) = LO8(edx);
    MEM8(esi + 0x1E9) = 1;
    PUSH32(esp, 0);
    eax = edi + 0x13C;
    edx = MEM32(eax);
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
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001664D5u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_001664D5: ;
    ecx = edi + 0x150;
    goto loc_0016641A;

loc_001664E0: ;
    SET_LO8(ecx, MEM8(0x378820));
    eax = ebx + ebx * 2 + 0xF;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = LO8(ecx);
    SET_LO8(edx, MEM8(0x378821));
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(0x378822));
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(edx, MEM8(0x378823));
    goto loc_001663D6;

loc_0016650E: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016652F; /* je: equal / zero */

loc_0016651C: ;
    ecx = MEM32(edi + 0x1470);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016652Du); RECOMP_ABI_CALL(0x00083ED0u, sub_00083ED0); /* call 0x00083ED0 */

loc_0016652D: ;
    goto loc_0016653D;

loc_0016652F: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016653Du); RECOMP_ABI_CALL(0x00083EF0u, sub_00083EF0); /* call 0x00083EF0 */

loc_0016653D: ;
    ecx = ebx + ebx * 2 + 0xF;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016654Fu); RECOMP_ABI_CALL(0x000141A0u, sub_000141A0); /* call 0x000141A0 */

loc_0016654F: ;
    PUSH32(esp, 0);
    edx = edi + 0x100;
    ecx = MEM32(edx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esi + 0x1E4);
    MEM32(eax + 0x10) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166583u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00166583: ;
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016658Eu); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_0016658E: ;
    ecx = MEM32(esi + 0x1E4);
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016659Du); RECOMP_ABI_CALL(0x0015E8D0u, sub_0015E8D0); /* call 0x0015E8D0 */

loc_0016659D: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);

loc_001665A3: ;
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001665AEu); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_001665AE: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001665BDu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001665BD: ;
    goto loc_00166894;

loc_001665C2: ;
    ecx = esp + 0x28;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001665CEu); RECOMP_ABI_CALL(0x00083ED0u, sub_00083ED0); /* call 0x00083ED0 */

loc_001665CE: ;
    ecx = ebx + ebx * 2 + 0xF;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001665E0u); RECOMP_ABI_CALL(0x000141A0u, sub_000141A0); /* call 0x000141A0 */

loc_001665E0: ;
    MEM8(esi + 0x1E9) = 1;
    PUSH32(esp, 0);
    edx = edi + 0x178;
    ecx = MEM32(edx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esi + 0x1E4);
    MEM32(eax + 0x10) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016661Bu); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0016661B: ;
    PUSH32(esp, 1);
    eax = edi + 0x18C;

loc_00166623: ;
    edx = MEM32(eax);
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
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016664Fu); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0016664F: ;
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016665Au); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_0016665A: ;
    ecx = MEM32(esi + 0x1E4);
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166669u); RECOMP_ABI_CALL(0x0015E8D0u, sub_0015E8D0); /* call 0x0015E8D0 */

loc_00166669: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_001665A3;

loc_00166674: ;
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166680u); RECOMP_ABI_CALL(0x00083ED0u, sub_00083ED0); /* call 0x00083ED0 */

loc_00166680: ;
    ecx = ebx + ebx * 2 + 0xF;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166692u); RECOMP_ABI_CALL(0x000141A0u, sub_000141A0); /* call 0x000141A0 */

loc_00166692: ;
    MEM8(esi + 0x1E9) = 1;
    PUSH32(esp, 0);
    eax = edi + 0x178;
    edx = MEM32(eax);
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
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001666CDu); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_001666CD: ;
    ecx = edi + 0x18C;
    goto loc_0016641A;

loc_001666D8: ;
    SET_LO8(ecx, MEM8(0x37882C));
    eax = ebx + ebx * 2 + 0xF;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + edi) = LO8(ecx);
    SET_LO8(edx, MEM8(0x37882D));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(0x37882E));
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(edx, MEM8(0x37882F));
    MEM8(eax + 3) = LO8(edx);
    MEM8(esi + 0x1E9) = 1;
    PUSH32(esp, 0);
    eax = edi + 0x178;
    edx = MEM32(eax);
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
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166740u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00166740: ;
    ecx = edi + 0x18C;
    goto loc_0016641A;

loc_0016674B: ;
    SET_LO8(ecx, MEM8(0x378828));
    eax = ebx + ebx * 2 + 0xF;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = LO8(ecx);
    SET_LO8(edx, MEM8(0x378829));
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(0x37882A));
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(edx, MEM8(0x37882B));
    MEM8(eax + 3) = LO8(edx);
    PUSH32(esp, 0);
    eax = edi + 0x100;
    goto loc_00166623;

loc_00166784: ;
    SET_LO8(ecx, MEM8(0x37883C));
    eax = ebx + ebx * 2 + 0xF;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + edi) = LO8(ecx);
    SET_LO8(edx, MEM8(0x37883D));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(0x37883E));
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(edx, MEM8(0x37883F));
    MEM8(eax + 3) = LO8(edx);
    PUSH32(esp, 0);
    eax = edi + 0x100;
    edx = MEM32(eax);
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
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001667E5u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_001667E5: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001667F4u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001667F4: ;
    goto loc_00166894;

loc_001667F9: ;
    SET_LO8(ecx, MEM8(0x378840));
    eax = ebx + ebx * 2 + 0xF;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + edi) = LO8(ecx);
    SET_LO8(edx, MEM8(0x378841));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(ecx, MEM8(0x378842));
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(edx, MEM8(0x378843));
    MEM8(eax + 3) = LO8(edx);
    PUSH32(esp, 0);
    eax = edi + 0x164;
    edx = MEM32(eax);
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
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016685Au); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0016685A: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166869u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00166869: ;
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166874u); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_00166874: ;
    ecx = MEM32(esi + 0x1E4);
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166883u); RECOMP_ABI_CALL(0x0015E8D0u, sub_0015E8D0); /* call 0x0015E8D0 */

loc_00166883: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166894u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_00166894: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166946; /* je: equal / zero */

loc_001668A0: ;
    MEM32(edi + 0x1A8) = MEM32(edi + 0x1A8) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x1A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001668C4; /* jne: not equal / not zero */

loc_001668B1: ;
    edx = MEM32(0x378810);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41100000);
    goto loc_0016693B;

loc_001668C4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001668F0; /* jne: not equal / not zero */

loc_001668C9: ;
    ecx = MEM32(0x37881C);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41100000);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001668E5u); RECOMP_ABI_CALL(0x00165B70u, sub_00165B70); /* call 0x00165B70 */

loc_001668E5: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_001668F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016691B; /* jne: not equal / not zero */

loc_001668F5: ;
    eax = MEM32(0x378844);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41100000);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166910u); RECOMP_ABI_CALL(0x00165B70u, sub_00165B70); /* call 0x00165B70 */

loc_00166910: ;
    eax = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_0016691B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016692A; /* je: equal / zero */

loc_00166920: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016692A; /* je: equal / zero */

loc_00166925: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166946; /* jne: not equal / not zero */

loc_0016692A: ;
    edx = MEM32(0x378810);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40800000);

loc_0016693B: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166946u); RECOMP_ABI_CALL(0x00165B70u, sub_00165B70); /* call 0x00165B70 */

loc_00166946: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00166980
 * Original: 0x00166980 - 0x00166B85 (517 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00166980: ;
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
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166993u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_00166993: ;
    ecx = eax;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016699Eu); RECOMP_ABI_CALL(0x00124CA0u, sub_00124CA0); /* call 0x00124CA0 */

loc_0016699E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001669B5; /* jle: less or equal (signed <=) */

loc_001669A9: ;
    MEM32(esp + 0x14) = 0xA;
    esi = MEM32(esp + 0x14);

loc_001669B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1478)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x1478) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001669D7; /* je: equal / zero */

loc_001669BD: ;
    edi = 0x51D888;

loc_001669C2: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001669CCu); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_001669CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51D8B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x51D8B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001669C2; /* jl: less (signed <) */

loc_001669D7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 0x1478) = esi;
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00166B14; /* jle: less or equal (signed <=) */

loc_001669EB: ;
    goto loc_001669F0;

    /* nop */

loc_001669F0: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001669FAu); RECOMP_ABI_CALL(0x00124D70u, sub_00124D70); /* call 0x00124D70 */

loc_001669FA: ;
    esi = eax;
    edx = MEM32(esi + 0xB0);
    ecx = esi + 0xB0;
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00166A10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166A0Du); } /* indirect call */
    }

loc_00166A10: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x00166A1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166A14u); } /* indirect call */
    }

loc_00166A1A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00166A21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166A1Eu); } /* indirect call */
    }

loc_00166A21: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    ecx = MEM32(edi * 4 + 0x51D888);
    PUSH32(esp, 0);
    eax = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00166B76; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_00166A46: ;
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166A50u); RECOMP_ABI_CALL(0x00166290u, sub_00166290); /* call 0x00166290 */

loc_00166A50: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x00166A5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166A56u); } /* indirect call */
    }

loc_00166A5C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00166A63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166A60u); } /* indirect call */
    }

loc_00166A63: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x00166A71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166A6Bu); } /* indirect call */
    }

loc_00166A71: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00166A78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166A75u); } /* indirect call */
    }

loc_00166A78: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x9C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x98); /* divss */
    if (CMP_EQ(_fa, _fb)) goto loc_00166AD5; /* je: equal / zero */

loc_00166A91: ;
    edx = edi + edi * 2;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, MEM8(edx + ebx + 0x1EA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166AD5; /* jne: not equal / not zero */

loc_00166AA2: ;
    edi = edi + edi * 2 + 0xF;
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x316F48); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00166B22; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x316F48)) */

loc_00166AB4: ;
    SET_LO8(eax, MEM8(0x378830));
    MEM8(edi) = LO8(eax);
    SET_LO8(ecx, MEM8(0x378831));
    MEM8(edi + 1) = LO8(ecx);
    SET_LO8(edx, MEM8(0x378832));
    MEM8(edi + 2) = LO8(edx);
    SET_LO8(eax, MEM8(0x378833));
    MEM8(edi + 3) = LO8(eax);

loc_00166AD5: ;
    edi = MEM32(esp + 0x10);

loc_00166AD9: ;
    SET_LO8(eax, MEM8(ebx + 0x147C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166B03; /* je: equal / zero */

loc_00166AE3: ;
    edx = MEM32(0x378848);
    eax = MEM32(edi * 4 + 0x51D888);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166B03u); RECOMP_ABI_CALL(0x00165B70u, sub_00165B70); /* call 0x00165B70 */

loc_00166B03: ;
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001669F0; /* jl: less (signed <) */

loc_00166B14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x147C) = 0;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00166B22: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x316F44); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00166B4F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x316F44)) */

loc_00166B2B: ;
    SET_LO8(ecx, MEM8(0x378834));
    MEM8(edi) = LO8(ecx);
    SET_LO8(edx, MEM8(0x378835));
    MEM8(edi + 1) = LO8(edx);
    SET_LO8(eax, MEM8(0x378836));
    MEM8(edi + 2) = LO8(eax);
    SET_LO8(ecx, MEM8(0x378837));
    MEM8(edi + 3) = LO8(ecx);
    goto loc_00166AD5;

loc_00166B4F: ;
    SET_LO8(edx, MEM8(0x378838));
    MEM8(edi) = LO8(edx);
    SET_LO8(eax, MEM8(0x378839));
    MEM8(edi + 1) = LO8(eax);
    SET_LO8(ecx, MEM8(0x37883A));
    MEM8(edi + 2) = LO8(ecx);
    SET_LO8(edx, MEM8(0x37883B));
    MEM8(edi + 3) = LO8(edx);
    goto loc_00166AD5;

loc_00166B76: ;
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166B80u); RECOMP_ABI_CALL(0x00166290u, sub_00166290); /* call 0x00166290 */

loc_00166B80: ;
    goto loc_00166AD9;

}

/**
 * sub_00166B90
 * Original: 0x00166B90 - 0x00166BB7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166B90(void)
{

loc_00166B90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(0x51D884);
    PUSH32(esp, 0xA);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00166BACu); RECOMP_ABI_CALL(0x00166290u, sub_00166290); /* call 0x00166290 */

loc_00166BAC: ;
    MEM8(esi + 0x1474) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00166BC0
 * Original: 0x00166BC0 - 0x00166D86 (454 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x00166BDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166BD9u); } /* indirect call */
    }

loc_00166BDF: ;
    ecx = ZX8(LO8(eax));
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x3E8D54);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00166D7D; /* jle: less or equal (signed <=) */

loc_00166BFA: ;
    /* nop */

loc_00166C00: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166C06u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_00166C06: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166D66; /* je: equal / zero */

loc_00166C13: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x00166C1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166C17u); } /* indirect call */
    }

loc_00166C1D: ;
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00166C2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166C25u); } /* indirect call */
    }

loc_00166C2B: ;
    edx = MEM32(esi);
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00166C37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166C31u); } /* indirect call */
    }

loc_00166C37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    eax = MEM32(esi + 0x30);
    ecx = esi + 0x30;
    MEM8(esp + 0x12) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x00166C4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166C45u); } /* indirect call */
    }

loc_00166C4B: ;
    edx = MEM32(esp + 0x1C);
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166D30; /* je: equal / zero */

loc_00166C65: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00166CDC; /* jne: not equal / not zero */

loc_00166C93: ;
    SET_LO8(ecx, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166CDC; /* jne: not equal / not zero */

loc_00166C9B: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166CC5; /* je: equal / zero */

loc_00166CA3: ;
    _fa = (uint32_t)(MEM32(0x389414)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x389414), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166CDC; /* jne: not equal / not zero */

loc_00166CAC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x00166CB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166CB0u); } /* indirect call */
    }

loc_00166CB6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx;
    goto loc_00166CE1;

loc_00166CC5: ;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1ED4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00166CE1; /* je: equal / zero */

loc_00166CD4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166CE1; /* je: equal / zero */

loc_00166CD8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00166CE1;

loc_00166CDC: ;
    edi = 4;

loc_00166CE1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00166CE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166CE5u); } /* indirect call */
    }

loc_00166CE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166D09; /* je: equal / zero */

loc_00166CEC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00166CF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166CF0u); } /* indirect call */
    }

loc_00166CF3: ;
    SET_LO8(ecx, MEM8(eax + 0x3B8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166D09; /* je: equal / zero */

loc_00166CFD: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166D07u); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_00166D07: ;
    goto loc_00166D2B;

loc_00166D09: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166D30; /* je: equal / zero */

loc_00166D0E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00166D1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166D14u); } /* indirect call */
    }

loc_00166D1A: ;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166D2Bu); RECOMP_ABI_CALL(0x00166290u, sub_00166290); /* call 0x00166290 */

loc_00166D2B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166D66; /* jne: not equal / not zero */

loc_00166D30: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166D66; /* je: equal / zero */

loc_00166D3E: ;
    ecx = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1B0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00166D48: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166D57; /* je: equal / zero */

loc_00166D4C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00166D48; /* jl: less (signed <) */

loc_00166D55: ;
    goto loc_00166D66;

loc_00166D57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166D66; /* je: equal / zero */

loc_00166D5C: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166D66u); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_00166D66: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x3E8D54);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00166C00; /* jl: less (signed <) */

loc_00166D7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00166D90
 * Original: 0x00166D90 - 0x00166F47 (439 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166D90(void)
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

loc_00166D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x3888C0);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    ecx = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00166E02; /* jne: not equal / not zero */

loc_00166DDC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166DE1u); RECOMP_ABI_CALL(0x00166980u, sub_00166980); /* call 0x00166980 */

loc_00166DE1: ;
    SET_LO8(eax, MEM8(edi + 0x1474));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166DF9; /* jne: not equal / not zero */

loc_00166DEB: ;
    edx = MEM32(0x51D884);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166DF9u); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_00166DF9: ;
    MEM8(edi + 0x1474) = 0;
    goto loc_00166E08;

loc_00166E02: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166E08u); RECOMP_ABI_CALL(0x00166BC0u, sub_00166BC0); /* call 0x00166BC0 */

loc_00166E08: ;
    eax = MEM32(edi + 0x1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166F3E; /* je: equal / zero */

loc_00166E16: ;
    ebx = MEM32(ebp + 0xC);
    esi = edi + 0x1D4;
    MEM32(esp + 0xC) = 0x32;
    goto loc_00166E30;

    /* nop */

loc_00166E30: ;
    _fa = (uint32_t)(MEM32(esi + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -32), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166F2C; /* je: equal / zero */

loc_00166E3A: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166E53; /* je: equal / zero */

loc_00166E41: ;
    ecx = MEM32(eax + 0x60);
    MEM32(esi + -20) = ecx;
    edx = MEM32(eax + 0x64);
    MEM32(esi + -16) = edx;
    eax = MEM32(eax + 0x68);
    MEM32(esi + -12) = eax;

loc_00166E53: ;
    SET_LO8(eax, MEM8(esi + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166E80; /* je: equal / zero */

loc_00166E5A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x10); /* addss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00166E80; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x3210B0)) */

loc_00166E77: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00166E80; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00166E7C: ;
    MEM8(esi + 0x16) = 0;

loc_00166E80: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esi + -36;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166E96u); RECOMP_ABI_CALL(0x001656B0u, sub_001656B0); /* call 0x001656B0 */

loc_00166E96: ;
    ecx = MEM32(eax);
    MEM32(esi + -4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(esi);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x28) = ecx;
    PUSH32(esp, 0);
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166EC7u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00166EC7: ;
    eax = MEM32(esi + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166ED9; /* je: equal / zero */

loc_00166ECF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166ED9; /* je: equal / zero */

loc_00166ED4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166F2C; /* jne: not equal / not zero */

loc_00166ED9: ;
    edx = esi + -20;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166EE6u); RECOMP_ABI_CALL(0x002662B0u, sub_002662B0); /* call 0x002662B0 */

loc_00166EE6: ;
    fp_push(MEMF(0x30075C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_00166F25; /* jb: below (unsigned <) */

loc_00166EF2: ;
    xmm0 = XMM_SCALAR(MEMF(esi + -12)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x31A180); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00166F0F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x31A180)) */

loc_00166F06: ;
    MEM32(esi + 0x28) = 0;
    goto loc_00166F2C;

loc_00166F0F: ;
    xmm1 = XMM_SCALAR(MEMF(0x32029C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00166F25; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00166F1C: ;
    MEM32(esi + 0x28) = 1;
    goto loc_00166F2C;

loc_00166F25: ;
    MEM32(esi + 0x28) = 0xFFFFFFFFu;

loc_00166F2C: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_00166E30; /* jne: not equal / not zero */

loc_00166F3E: ;
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
 * sub_00166F50
 * Original: 0x00166F50 - 0x00167081 (305 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166F50(void)
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

loc_00166F50: ;
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
    edi = MEM32(ebp + 0xC);
    eax = esp + 0x10;
    esi = ecx;
    PUSH32(esp, eax);
    ecx = edi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166F6Eu); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_00166F6E: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
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
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00166FE1; /* jnp: not parity */

loc_00166FA4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_00166FE1: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167000u); RECOMP_ABI_CALL(0x002BE484u, sub_002BE484); /* call 0x002BE484 */

loc_00167000: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3210B0); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00167033; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_0016701F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC54); /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_00167033: ;
    ecx = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00167047; /* je: equal / zero */

loc_0016703D: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167047u); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_00167047: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167058u); RECOMP_ABI_CALL(0x00166D90u, sub_00166D90); /* call 0x00166D90 */

loc_00167058: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016705Fu); RECOMP_ABI_CALL(0x001659D0u, sub_001659D0); /* call 0x001659D0 */

loc_0016705F: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167068u); RECOMP_ABI_CALL(0x0015E2D0u, sub_0015E2D0); /* call 0x0015E2D0 */

loc_00167068: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00167072u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016706Cu); } /* indirect call */
    }

loc_00167072: ;
    POP32(esp, edi);
    MEM32(esi + 0x1470) = eax;
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
 * sub_00167090
 * Original: 0x00167090 - 0x001670AE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167090: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00167098u); RECOMP_ABI_CALL(0x00165DD0u, sub_00165DD0); /* call 0x00165DD0 */

loc_00167098: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001670A8; /* je: equal / zero */

loc_0016709F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001670A5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001670A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001670A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001670B0
 * Original: 0x001670B0 - 0x001670B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001670B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001670B0: ;
    g_seh_ebp = ebp; sub_0015A960(); return; /* tail jmp 0x0015A960 */

}

/**
 * sub_001670C0
 * Original: 0x001670C0 - 0x001671AF (239 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001670C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001670C0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C640F7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C640F7A (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0016714F; /* jne: not equal / not zero */

loc_001670D2: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    eax = MEM32(edi + 0x94);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00167118; /* je: equal / zero */

loc_001670EC: ;
    /* nop */

loc_001670F0: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x54), ebx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00167101u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00167101: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xBAD4C295u);
    PUSH32(esp, 0x0016710Eu); RECOMP_ABI_CALL(0x001617C0u, sub_001617C0); /* call 0x001617C0 */

loc_0016710E: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x94) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001670F0; /* jne: not equal / not zero */

loc_00167118: ;
    eax = MEM32(edi + 0x90);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001671A7; /* je: equal / zero */

loc_00167129: ;
    /* nop */

loc_00167130: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xBAD4C295u);
    PUSH32(esp, 0x0016713Du); RECOMP_ABI_CALL(0x001617C0u, sub_001617C0); /* call 0x001617C0 */

loc_0016713D: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167130; /* jne: not equal / not zero */

loc_00167147: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0016714F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97AF097) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x97AF097 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001671A7; /* jne: not equal / not zero */

loc_00167156: ;
    eax = MEM32(edi + 0x90);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167179; /* je: equal / zero */

loc_00167162: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xA80E5E89u);
    PUSH32(esp, 0x0016716Fu); RECOMP_ABI_CALL(0x001617C0u, sub_001617C0); /* call 0x001617C0 */

loc_0016716F: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167162; /* jne: not equal / not zero */

loc_00167179: ;
    eax = MEM32(edi + 0x94);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001671A7; /* je: equal / zero */

loc_00167185: ;
    goto loc_00167190;

    /* nop */
    edi = edi;

loc_00167190: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xA80E5E89u);
    PUSH32(esp, 0x0016719Du); RECOMP_ABI_CALL(0x001617C0u, sub_001617C0); /* call 0x001617C0 */

loc_0016719D: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x94) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167190; /* jne: not equal / not zero */

loc_001671A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001671B0
 * Original: 0x001671B0 - 0x00167204 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001671B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001671B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001671BDu); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_001671BD: ;
    MEM32(esi) = 0x3202A0;
    PUSH32(esp, 0xC);
    MEM32(esi + 0x90) = 0;
    PUSH32(esp, 0x001671D4u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_001671D4: ;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    MEM32(esi + 0x90) = eax;
    PUSH32(esp, 0xC);
    MEM32(esi + 0x94) = 0;
    PUSH32(esp, 0x001671F0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_001671F0: ;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    MEM32(esi + 0x94) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167210
 * Original: 0x00167210 - 0x00167237 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167210: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x94;
    MEM32(esi) = 0x3202A0;
    PUSH32(esp, 0x00167224u); RECOMP_ABI_CALL(0x0004FAF0u, sub_0004FAF0); /* call 0x0004FAF0 */

loc_00167224: ;
    ecx = esi + 0x90;
    PUSH32(esp, 0x0016722Fu); RECOMP_ABI_CALL(0x0004FAF0u, sub_0004FAF0); /* call 0x0004FAF0 */

loc_0016722F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00167240
 * Original: 0x00167240 - 0x0016726F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167240: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x90);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0016724Eu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0016724E: ;
    ecx = eax + 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016725E; /* je: equal / zero */

loc_00167258: ;
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;

loc_0016725E: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167270
 * Original: 0x00167270 - 0x0016729F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167270: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x94);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0016727Eu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0016727E: ;
    ecx = eax + 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016728E; /* je: equal / zero */

loc_00167288: ;
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;

loc_0016728E: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001672A0
 * Original: 0x001672A0 - 0x001672DC (60 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001672A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001672A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x94;
    MEM32(esi) = 0x3202A0;
    PUSH32(esp, 0x001672B4u); RECOMP_ABI_CALL(0x0004FAF0u, sub_0004FAF0); /* call 0x0004FAF0 */

loc_001672B4: ;
    ecx = esi + 0x90;
    PUSH32(esp, 0x001672BFu); RECOMP_ABI_CALL(0x0004FAF0u, sub_0004FAF0); /* call 0x0004FAF0 */

loc_001672BF: ;
    ecx = esi;
    PUSH32(esp, 0x001672C6u); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_001672C6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001672D6; /* je: equal / zero */

loc_001672CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001672D3u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001672D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001672D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001672E0
 * Original: 0x001672E0 - 0x00167303 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001672E0(void)
{

loc_001672E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001672EDu); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_001672ED: ;
    MEM32(esi) = 0x3202C8;
    MEM32(esi + 0x90) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167310
 * Original: 0x00167310 - 0x0016731B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167310: ;
    MEM32(ecx) = 0x3202C8;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00167320
 * Original: 0x00167320 - 0x00167339 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167320: ;
    ecx = MEM32(ecx + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167336; /* je: equal / zero */

loc_0016732A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00167336u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00167336: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167340
 * Original: 0x00167340 - 0x00167399 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167340: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167392; /* je: equal / zero */

loc_00167350: ;
    ecx = MEM32(0x37884C);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 4) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = 1;
    eax = MEM32(esi + 0x9C);
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00167381u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_00167381: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00167392u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_00167392: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001673A0
 * Original: 0x001673A0 - 0x00167401 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001673A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001673A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x90) = edi;
    MEM8(edi + 0x110) = 0;
    eax = MEM32(esi + 0x9C);
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001673D4u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_001673D4: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001673E2u); RECOMP_ABI_CALL(0x00158460u, sub_00158460); /* call 0x00158460 */

loc_001673E2: ;
    ecx = MEM32(edi + 0x54);
    edx = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001673FCu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_001673FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167410
 * Original: 0x00167410 - 0x00167434 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167410: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3202C8;
    PUSH32(esp, 0x0016741Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016741E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016742E; /* je: equal / zero */

loc_00167425: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016742Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016742B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016742E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167440
 * Original: 0x00167440 - 0x00167451 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167440(void)
{

loc_00167440: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM8(ecx + 0x100) = 1;
    PUSH32(esp, 0x00167450u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00167450: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00167460
 * Original: 0x00167460 - 0x00167465 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167460: ;
    g_seh_ebp = ebp; sub_0015E2E0(); return; /* tail jmp 0x0015E2E0 */

}

/**
 * sub_00167470
 * Original: 0x00167470 - 0x001674AC (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167470: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x114);
    PUSH32(esp, eax);
    MEM32(edi) = 0x3202F4;
    PUSH32(esp, 0x00167487u); RECOMP_ABI_CALL(0x00156B90u, sub_00156B90); /* call 0x00156B90 */

loc_00167487: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + 0xE0;
    ebx = 4;

loc_00167495: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0016749Fu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016749F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00167495; /* jne: not equal / not zero */

loc_001674A2: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_001674B0
 * Original: 0x001674B0 - 0x001674D0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001674B0(void)
{

loc_001674B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0);
    MEM8(esi + 0x100) = 0;
    PUSH32(esp, 0x001674C3u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001674C3: ;
    esi = MEM32(esi + 0x114);
    eax = MEM32(esi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001674D0
 * Original: 0x001674D0 - 0x001675D2 (258 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001674D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001674D0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(eax) = 0;
    SET_LO8(eax, MEM8(edi + 0x100));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001675CE; /* je: equal / zero */

loc_001674E8: ;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x114);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001674FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001674F9u); } /* indirect call */
    }

loc_001674FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167503; /* je: equal / zero */

loc_00167500: ;
    MEM32(esi + 4) = eax;

loc_00167503: ;
    eax = MEM32(edi + 0x114);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00167512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016750Fu); } /* indirect call */
    }

loc_00167512: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001675CC; /* je: equal / zero */

loc_0016751C: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    esi = MEM32(esp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_00167572; /* je: equal / zero */

loc_0016752E: ;
    edx = MEM32(esi + 0x30);
    ecx = esi + 0x30;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00167538u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167535u); } /* indirect call */
    }

loc_00167538: ;
    ebp = eax + 0x30;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00167545u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016753Fu); } /* indirect call */
    }

loc_00167545: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x138); PUSH32(esp, 0x00167551u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016754Bu); } /* indirect call */
    }

loc_00167551: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00167558u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167556u); } /* indirect call */
    }

loc_00167558: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016755Eu); RECOMP_ABI_CALL(0x0015FFF0u, sub_0015FFF0); /* call 0x0015FFF0 */

loc_0016755E: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00167568u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167566u); } /* indirect call */
    }

loc_00167568: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016756Eu); RECOMP_ABI_CALL(0x00160090u, sub_00160090); /* call 0x00160090 */

loc_0016756E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);

loc_00167572: ;
    edx = MEM32(esi);
    SET_LO8(eax, 0xFF);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x15) = LO8(eax);
    MEM8(esp + 0x16) = LO8(eax);
    MEM8(esp + 0x17) = LO8(eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0016759Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167599u); } /* indirect call */
    }

loc_0016759F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001675A5u); RECOMP_ABI_CALL(0x00165C70u, sub_00165C70); /* call 0x00165C70 */

loc_001675A5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    MEM8(edi + 0x100) = 0;
    PUSH32(esp, 0x001675BAu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001675BA: ;
    edi = MEM32(edi + 0x114);
    eax = MEM32(edi);
    ecx = MEM32(esp + 0x18);
    MEM32(edi + 4) = eax;
    MEM8(ecx) = 1;

loc_001675CC: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_001675CE: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001675E0
 * Original: 0x001675E0 - 0x00167640 (96 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001675E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001675E0: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x100));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016763C; /* je: equal / zero */

loc_001675ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + 0x104;
    goto loc_00167600;

    /* nop */

loc_00167600: ;
    eax = MEM32(edi + 0x114);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0016760Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016760Cu); } /* indirect call */
    }

loc_0016760F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167618; /* jne: not equal / not zero */

loc_00167613: ;
    eax = 0x3021CE;

loc_00167618: ;
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00167620u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_00167620: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00167600; /* jl: less (signed <) */

loc_00167629: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0016763Au); RECOMP_ABI_CALL(0x0015E2D0u, sub_0015E2D0); /* call 0x0015E2D0 */

loc_0016763A: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0016763C: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00167640
 * Original: 0x00167640 - 0x0016767F (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167640: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016764Du); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_0016764D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x100) = LO8(eax);
    MEM32(esi + 0x114) = eax;
    MEM32(esi) = 0x3202F4;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x10C) = eax;
    MEM32(esi + 0x110) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167680
 * Original: 0x00167680 - 0x001676FD (125 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167680(void)
{

loc_00167680: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0x462FE7D2);
    ecx = edi;
    PUSH32(esp, 0x00167694u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_00167694: ;
    PUSH32(esp, 0xF912F34Fu);
    ecx = edi;
    MEM32(esi + 0x10C) = eax;
    PUSH32(esp, 0x001676A6u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_001676A6: ;
    PUSH32(esp, 0x9F8A841Cu);
    ecx = edi;
    MEM32(esi + 0x110) = eax;
    PUSH32(esp, 0x001676B8u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_001676B8: ;
    PUSH32(esp, 0xE3472D52u);
    ecx = edi;
    MEM32(esi + 0x104) = eax;
    PUSH32(esp, 0x001676CAu); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_001676CA: ;
    MEM32(esi + 0x108) = eax;
    PUSH32(esp, 0x001676D5u); RECOMP_ABI_CALL(0x00157600u, sub_00157600); /* call 0x00157600 */

loc_001676D5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x114) = eax;
    MEM8(esi + 0x100) = 0;
    PUSH32(esp, 0x001676EDu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001676ED: ;
    esi = MEM32(esi + 0x114);
    eax = MEM32(esi);
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167700
 * Original: 0x00167700 - 0x0016771E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167700: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00167708u); RECOMP_ABI_CALL(0x00167470u, sub_00167470); /* call 0x00167470 */

loc_00167708: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00167718; /* je: equal / zero */

loc_0016770F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00167715u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00167715: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167718: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167720
 * Original: 0x00167720 - 0x0016778A (106 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167720: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016772Du); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016772D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3003A4)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi) = 0x320338;
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167790
 * Original: 0x00167790 - 0x0016779B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167790: ;
    MEM32(ecx) = 0x320338;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_001677A0
 * Original: 0x001677A0 - 0x001677D4 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001677A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001677A0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001677D2; /* je: equal / zero */

loc_001677AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0xA8;
    edi = 4;

loc_001677B7: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001677BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001677BBu); } /* indirect call */
    }

loc_001677BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001677B7; /* jne: not equal / not zero */

loc_001677C4: ;
    ecx = MEM32(ebx + 0xA0);
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_001677D2: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001677E0
 * Original: 0x001677E0 - 0x001677FF (31 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001677E0(void)
{

loc_001677E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x94) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00167800
 * Original: 0x00167800 - 0x0016781F (31 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167800(void)
{

loc_00167800: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x9C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00167820
 * Original: 0x00167820 - 0x0016787A (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167820: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00167832u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00167832: ;
    ecx = MEM32(esi + 0xAC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00167841u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00167841: ;
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00167850u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00167850: ;
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016785Fu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016785F: ;
    SET_LO8(edx, MEM8(esp + 8));
    ecx = MEM32(esi + 0xA0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00167876u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00167876: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167880
 * Original: 0x00167880 - 0x001678DA (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167880: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00167892u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00167892: ;
    ecx = MEM32(esi + 0xAC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001678A1u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001678A1: ;
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001678B0u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001678B0: ;
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001678BFu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001678BF: ;
    SET_LO8(edx, MEM8(esp + 8));
    ecx = MEM32(esi + 0xA0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001678D6u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001678D6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001678E0
 * Original: 0x001678E0 - 0x00167B65 (645 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001678E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001678E0: ;
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
    PUSH32(esp, edi);
    ebx = 0x320324;
    edi = esi + 0xA8;
    /* nop */

loc_00167900: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x3203A8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167914u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00167914: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167927; /* je: equal / zero */

loc_0016791B: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167925u); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00167925: ;
    goto loc_00167929;

loc_00167927: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00167929: ;
    MEM32(edi) = eax;
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x50), g_mxcsr, 1); /* cvttss2si */
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x4C), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016793Eu); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016793E: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016794Bu); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0016794B: ;
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
    ecx = MEM32(edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167978u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00167978: ;
    ecx = esp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167981u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00167981: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167991u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_00167991: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 0x54);
    ecx = MEM32(esi + 0x54);
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
    PUSH32(esp, 0x001679ADu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_001679AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320334) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x320334 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00167900; /* jl: less (signed <) */

loc_001679BF: ;
    eax = MEM32(esi + 0xA8);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    SET_LO8(ebx, 1);
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, 0xBFC90FDBu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001679F4u); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_001679F4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    eax = MEM32(esi + 0xAC);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC54); /* mulss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esi + 0xAC);
    PUSH32(esp, 0x3FC90FDB);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167A2Fu); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_00167A2F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    eax = MEM32(esi + 0xB0);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC54); /* mulss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, 0x40490FDB);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167A6Au); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_00167A6A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    eax = MEM32(esi + 0xB4);
    PUSH32(esp, 0x400);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x100);
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x320360);
    MEM8(eax + 0x73) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167AA1u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00167AA1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167AB6; /* je: equal / zero */

loc_00167AA8: ;
    PUSH32(esp, 0x88DBE32Bu);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167AB4u); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00167AB4: ;
    goto loc_00167AB8;

loc_00167AB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00167AB8: ;
    PUSH32(esp, 9);
    PUSH32(esp, 9);
    ecx = eax;
    MEM32(esi + 0xA0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167AC9u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_00167AC9: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x88DBE32Bu);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167AD8u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00167AD8: ;
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
    ecx = MEM32(esi + 0xA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167B09u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00167B09: ;
    ecx = esp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167B12u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00167B12: ;
    eax = MEM32(esi + 0xA0);
    SET_LO8(ecx, 0xFF);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = LO8(ecx);
    MEM8(eax + 0x4A) = 0;
    MEM8(eax + 0x4B) = LO8(ecx);
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esi + 0xA0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167B3Eu); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_00167B3E: ;
    edx = MEM32(esi + 0xA0);
    eax = MEM32(edx + 0x54);
    ecx = MEM32(esi + 0x54);
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
    PUSH32(esp, 0x00167B5Eu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00167B5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00167B70
 * Original: 0x00167B70 - 0x00167C24 (180 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167B70(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00167B70: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x9C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x98); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x90); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x98); /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x98)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00167BA2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00167B9D: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00167BB3;

loc_00167BA2: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x9C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00167BB3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0x9C)) */

loc_00167BAB: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x9C)); /* movss */

loc_00167BB3: ;
    eax = MEM32(ecx + 0xA8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    SET_LO8(edx, 1);
    MEM8(eax + 0x73) = LO8(edx);
    eax = MEM32(ecx + 0xAC);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2FEC54); /* mulss */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(edx);
    eax = MEM32(ecx + 0xB0);
    MEMF(eax + 0x20) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(edx);
    ecx = MEM32(ecx + 0xB4);
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x73) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00167C30
 * Original: 0x00167C30 - 0x00167E48 (536 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167C30(void)
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

loc_00167C30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x00167C48u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_00167C48: ;
    ecx = MEM32(0x3888C0);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x14) = edx;
    SET_LO8(edx, MEM8(edi + 0x72));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    SET_LO8(edx, LO8(edx) & LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(edi + 0x72) = LO8(edx);
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00167C76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167C73u); } /* indirect call */
    }

loc_00167C76: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00167C7Fu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00167C7F: ;
    ecx = edi;
    PUSH32(esp, 0x00167C86u); RECOMP_ABI_CALL(0x00167B70u, sub_00167B70); /* call 0x00167B70 */

loc_00167C86: ;
    ebx = MEM32(esi + 0x194);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(edi + 0x48);
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00167CB3; /* je: equal / zero */

loc_00167C97: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00167CA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167C9Bu); } /* indirect call */
    }

loc_00167CA1: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00167CAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167CA9u); } /* indirect call */
    }

loc_00167CAF: ;
    ebx = eax;
    goto loc_00167CBD;

loc_00167CB3: ;
    MEM32(esp + 0x10) = 0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00167CBD: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00167CC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167CC2u); } /* indirect call */
    }

loc_00167CC5: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00167D38; /* jbe: below or equal (unsigned <=) */

loc_00167CD3: ;
    xmm0 = XMM_SCALAR(MEMF(0x3193C8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1B8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00167D38; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x1B8)) */

loc_00167CE4: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167DC6; /* je: equal / zero */

loc_00167CF0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00167CF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167CF2u); } /* indirect call */
    }

loc_00167CF5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00167CFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167CF9u); } /* indirect call */
    }

loc_00167CFC: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x00167D08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167D02u); } /* indirect call */
    }

loc_00167D08: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167D38; /* je: equal / zero */

loc_00167D0C: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x00167D18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167D12u); } /* indirect call */
    }

loc_00167D18: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00167D1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167D1Cu); } /* indirect call */
    }

loc_00167D1F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00167E31; /* jp: parity */

loc_00167D38: ;
    SET_LO8(ebx, 0x7F);

loc_00167D3A: ;
    esi = edi + 0xA8;
    MEM32(esp + 0x10) = 4;
    goto loc_00167D50;

    /* nop */

loc_00167D50: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(esp + 0x28));
    SET_LO8(edx, MEM8(esp + 0x29));
    MEM8(eax + 0x48) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2A));
    MEM8(eax + 0x49) = LO8(edx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = LO8(ebx);
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(esi);
    eax = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00167D7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167D78u); } /* indirect call */
    }

loc_00167D7B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00167D50; /* jne: not equal / not zero */

loc_00167D89: ;
    eax = MEM32(edi + 0xA0);
    SET_LO8(ecx, MEM8(esp + 0x28));
    SET_LO8(edx, MEM8(esp + 0x29));
    MEM8(eax + 0x48) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2A));
    MEM8(eax + 0x49) = LO8(edx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = LO8(ebx);
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(edi + 0xA0);
    eax = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00167DBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167DB9u); } /* indirect call */
    }

loc_00167DBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00167DC6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167D38; /* je: equal / zero */

loc_00167DCE: ;
    SET_LO8(eax, MEM8(ebx + 0x16C3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167D38; /* jne: not equal / not zero */

loc_00167DDC: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00167E08; /* je: equal / zero */

loc_00167DEA: ;
    ecx = MEM32(ebx + 0x1648);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00167DF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167DF2u); } /* indirect call */
    }

loc_00167DF8: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00167E04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167DFEu); } /* indirect call */
    }

loc_00167E04: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    goto loc_00167E26;

loc_00167E08: ;
    edx = MEM32(esi);
    ebx = MEM32(ebx + 0x1648);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00167E18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167E12u); } /* indirect call */
    }

loc_00167E18: ;
    esi = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00167E24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167E1Eu); } /* indirect call */
    }

loc_00167E24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */

loc_00167E26: ;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167D38; /* je: equal / zero */

loc_00167E31: ;
    MEM8(esp + 0x28) = 0xFF;
    MEM8(esp + 0x29) = 0;
    MEM8(esp + 0x2A) = 0;
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00167D3A;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00167E50
 * Original: 0x00167E50 - 0x00167E74 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x320338;
    PUSH32(esp, 0x00167E5Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_00167E5E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00167E6E; /* je: equal / zero */

loc_00167E65: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00167E6Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00167E6B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167E6E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167E80
 * Original: 0x00167E80 - 0x00167EA3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167E80(void)
{

loc_00167E80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00167E8Du); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_00167E8D: ;
    MEM32(esi) = 0x3203F0;
    MEM32(esi + 0x90) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00167EB0
 * Original: 0x00167EB0 - 0x00167EBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167EB0: ;
    MEM32(ecx) = 0x3203F0;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00167EC0
 * Original: 0x00167EC0 - 0x00167F60 (160 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167EC0: ;
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
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x320418);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167EE1u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00167EE1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167EF8; /* je: equal / zero */

loc_00167EE8: ;
    PUSH32(esp, 0x1DAAB77E);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167EF4u); RECOMP_ABI_CALL(0x00157F80u, sub_00157F80); /* call 0x00157F80 */

loc_00167EF4: ;
    edi = eax;
    goto loc_00167EFA;

loc_00167EF8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00167EFA: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167F09u); RECOMP_ABI_CALL(0x00158170u, sub_00158170); /* call 0x00158170 */

loc_00167F09: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167F1Au); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_00167F1A: ;
    edx = MEM32(edi + 0x54);
    eax = MEM32(esi + 0x54);
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
    PUSH32(esp, 0x00167F34u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00167F34: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x90) = edi;
    ecx = MEM32(eax);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x18);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x28) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x5C) = ecx;
    MEM8(esi + 0x73) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00167F60
 * Original: 0x00167F60 - 0x00168019 (185 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00167F60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168007; /* je: equal / zero */

loc_00167F76: ;
    eax = MEM32(0x389414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167F9E; /* je: equal / zero */

loc_00167F80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167F9E; /* je: equal / zero */

loc_00167F85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167F9E; /* je: equal / zero */

loc_00167F8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167F9E; /* je: equal / zero */

loc_00167F8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167F9E; /* je: equal / zero */

loc_00167F94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167F9E; /* je: equal / zero */

loc_00167F99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167FF7; /* jne: not equal / not zero */

loc_00167F9E: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00167FC8; /* jne: not equal / not zero */

loc_00167FAC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00167FB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167FB0u); } /* indirect call */
    }

loc_00167FB6: ;
    ecx = MEM32(0x3888C0);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx + 0x1FC8);
    goto loc_00167FE4;

loc_00167FC8: ;
    edx = MEM32(esi + 0x30);
    ecx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x00167FD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167FCEu); } /* indirect call */
    }

loc_00167FD4: ;
    ecx = MEM32(0x3888C0);
    eax = ZX8(LO8(eax));
    edx = MEM32(ecx + eax * 4 + 0x1FAC);

loc_00167FE4: ;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00167FF4u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00167FF4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167FF7: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x90);
    PUSH32(esp, 0x00168007u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_00168007: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00168014u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_00168014: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00168020
 * Original: 0x00168020 - 0x0016807D (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168020: ;
    eax = MEM32(0x389414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00168046; /* je: equal / zero */

loc_0016802D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168046; /* je: equal / zero */

loc_00168032: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168046; /* je: equal / zero */

loc_00168037: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168046; /* je: equal / zero */

loc_0016803C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168046; /* je: equal / zero */

loc_00168041: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168052; /* jne: not equal / not zero */

loc_00168046: ;
    ecx = esi;
    PUSH32(esp, 0x0016804Du); RECOMP_ABI_CALL(0x0015AD50u, sub_0015AD50); /* call 0x0015AD50 */

loc_0016804D: ;
    eax = MEM32(0x389414);

loc_00168052: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016807B; /* jne: not equal / not zero */

loc_00168057: ;
    eax = MEM32(0x3C3B38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168067; /* je: equal / zero */

loc_00168060: ;
    _fb = (uint32_t)(0xFFFFFF20u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF20u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00168069;

loc_00168067: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00168069: ;
    ecx = MEM32(eax + 0x11C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016807B; /* jne: not equal / not zero */

loc_00168073: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0015AD50(); return; /* tail jmp 0x0015AD50 */

loc_0016807B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00168080
 * Original: 0x00168080 - 0x001680A4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168080: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3203F0;
    PUSH32(esp, 0x0016808Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016808E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016809E; /* je: equal / zero */

loc_00168095: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016809Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016809B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016809E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001680B0
 * Original: 0x001680B0 - 0x001680E3 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001680B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001680B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001680BDu); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_001680BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x90) = eax;
    MEM8(esi + 0x94) = LO8(eax);
    MEM8(esi + 0x95) = LO8(eax);
    MEM8(esi + 0x96) = LO8(eax);
    MEM32(esi) = 0x320464;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001680F0
 * Original: 0x001680F0 - 0x001680FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001680F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001680F0: ;
    MEM32(ecx) = 0x320464;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00168100
 * Original: 0x00168100 - 0x00168279 (377 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168100(void)
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

loc_00168100: ;
    xmm0 = XMM_SCALAR(MEMF(0x320458)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM8(esp + 0x10) = 1;
    if ((_fca > _fcb)) goto loc_0016811E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_00168119: ;
    MEM8(esp + 0x10) = 0;

loc_0016811E: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x94)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x94) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001681EB; /* je: equal / zero */

loc_0016812E: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1CF4668E);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00168142u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_00168142: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0xB12036BFu);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x00168157u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_00168157: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x83316C75u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    PUSH32(esp, 0x0016816Cu); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016816C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001681EA; /* je: equal / zero */

loc_00168172: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001681EA; /* je: equal / zero */

loc_00168176: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001681EA; /* je: equal / zero */

loc_00168180: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001681EA; /* je: equal / zero */

loc_00168184: ;
    SET_LO8(eax, MEM8(esi + 0x94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001681CC; /* jne: not equal / not zero */

loc_00168190: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x0016819Cu); RECOMP_ABI_CALL(0x0015A8E0u, sub_0015A8E0); /* call 0x0015A8E0 */

loc_0016819C: ;
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x001681AEu); RECOMP_ABI_CALL(0x0015A8E0u, sub_0015A8E0); /* call 0x0015A8E0 */

loc_001681AE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x42200000);
    ecx = ebp;
    PUSH32(esp, 0x001681BCu); RECOMP_ABI_CALL(0x0015A8E0u, sub_0015A8E0); /* call 0x0015A8E0 */

loc_001681BC: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x42200000);
    ecx = ebx;
    PUSH32(esp, 0x001681CAu); RECOMP_ABI_CALL(0x0015A8E0u, sub_0015A8E0); /* call 0x0015A8E0 */

loc_001681CA: ;
    goto loc_001681EA;

loc_001681CC: ;
    PUSH32(esp, 0x001681D1u); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_001681D1: ;
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, 0x001681DCu); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_001681DC: ;
    ecx = ebp;
    PUSH32(esp, 0x001681E3u); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_001681E3: ;
    ecx = ebx;
    PUSH32(esp, 0x001681EAu); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_001681EA: ;
    POP32(esp, ebp);

loc_001681EB: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016825F; /* je: equal / zero */

loc_001681F3: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001681FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001681F9u); } /* indirect call */
    }

loc_001681FC: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0xB12036BFu);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x00168211u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_00168211: ;
    eax = MEM32(eax + 0x48);
    SET_LO8(edx, MEM8(esi + 0x95));
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    SET_LO8(ebx, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016823F; /* je: equal / zero */

loc_0016822C: ;
    SET_LO8(eax, MEM8(esi + 0x96));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016823F; /* jne: not equal / not zero */

loc_00168236: ;
    PUSH32(esp, 0x18);
    ecx = edi;
    PUSH32(esp, 0x0016823Fu); RECOMP_ABI_CALL(0x00117220u, sub_00117220); /* call 0x00117220 */

loc_0016823F: ;
    SET_LO8(edx, MEM8(esp + 0x17));
    SET_LO8(eax, MEM8(esp + 0x10));
    POP32(esp, edi);
    MEM8(esi + 0x96) = LO8(ebx);
    MEM8(esi + 0x95) = LO8(edx);
    MEM8(esi + 0x94) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0016825F: ;
    POP32(esp, edi);
    MEM8(esi + 0x96) = 0;
    MEM8(esi + 0x95) = 0xFF;
    MEM8(esi + 0x94) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00168280
 * Original: 0x00168280 - 0x001682D4 (84 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    MEM32(esi + 0x90) = edi;
    PUSH32(esp, 1);
    MEM8(edi + 0x110) = 1;
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x001682A7u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_001682A7: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001682B5u); RECOMP_ABI_CALL(0x00158460u, sub_00158460); /* call 0x00158460 */

loc_001682B5: ;
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
    PUSH32(esp, 0x001682CFu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_001682CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001682E0
 * Original: 0x001682E0 - 0x0016841F (319 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001682E0(void)
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

loc_001682E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016841A; /* je: equal / zero */

loc_001682F2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00168300u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001682FDu); } /* indirect call */
    }

loc_00168300: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0016830Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168308u); } /* indirect call */
    }

loc_0016830B: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    ecx = MEM32(edi + 0x90);
    PUSH32(esp, 0);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00168325u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_00168325: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMF(0x320458)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0016834A; /* jbe: below or equal (unsigned <=) */

loc_00168335: ;
    eax = MEM32(0x378858);
    MEM8(esp + 0x1C) = LO8(eax);
    MEM8(esp + 0x1D) = HI8(eax);
    SET_LO16(eax, MEM16(0x37885A));
    goto loc_00168381;

loc_0016834A: ;
    xmm0 = XMM_SCALAR(MEMF(0x303CFC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016836E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_00168359: ;
    eax = MEM32(0x378854);
    MEM8(esp + 0x1C) = LO8(eax);
    MEM8(esp + 0x1D) = HI8(eax);
    SET_LO16(eax, MEM16(0x378856));
    goto loc_00168381;

loc_0016836E: ;
    eax = MEM32(0x378850);
    MEM8(esp + 0x1C) = LO8(eax);
    MEM8(esp + 0x1D) = HI8(eax);
    SET_LO16(eax, MEM16(0x378852));

loc_00168381: ;
    MEM8(esp + 0x1E) = LO8(eax);
    SET_LO8(ebx, HI8(eax));
    PUSH32(esp, 0x0016838Cu); RECOMP_ABI_CALL(0x00160F10u, sub_00160F10); /* call 0x00160F10 */

loc_0016838C: ;
    SET_LO8(ecx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001683B3; /* jne: not equal / not zero */

loc_00168393: ;
    xmm0 = XMM_SCALAR(MEMF(0x320460)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001683B3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_001683A2: ;
    PUSH32(esp, 0xFE8907E1u);
    PUSH32(esp, 0x001683ACu); RECOMP_ABI_CALL(0x00160F10u, sub_00160F10); /* call 0x00160F10 */

loc_001683AC: ;
    ecx = eax;
    PUSH32(esp, 0x001683B3u); RECOMP_ABI_CALL(0x00160F50u, sub_00160F50); /* call 0x00160F50 */

loc_001683B3: ;
    ecx = MEM32(0x51D65C);
    ebp = MEM32(ecx + 0x35BC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001683DB; /* je: equal / zero */

loc_001683C3: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x001683CCu); RECOMP_ABI_CALL(0x0015AF60u, sub_0015AF60); /* call 0x0015AF60 */

loc_001683CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001683DB; /* jne: not equal / not zero */

loc_001683D0: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x001683D9u); RECOMP_ABI_CALL(0x0015AF30u, sub_0015AF30); /* call 0x0015AF30 */

loc_001683D9: ;
    SET_LO8(ebx, LO8(eax));

loc_001683DB: ;
    eax = MEM32(edi + 0x90);
    SET_LO8(edx, MEM8(esp + 0x1C));
    SET_LO8(ecx, MEM8(esp + 0x1D));
    MEM8(eax + 0x48) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1E));
    MEM8(eax + 0x49) = LO8(ecx);
    MEM8(eax + 0x4A) = LO8(edx);
    MEM8(eax + 0x4B) = LO8(ebx);
    MEM8(eax + 0x73) = 1;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0016840Au); RECOMP_ABI_CALL(0x00168100u, sub_00168100); /* call 0x00168100 */

loc_0016840A: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00168417u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_00168417: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0016841A: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00168420
 * Original: 0x00168420 - 0x00168444 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168420: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x320464;
    PUSH32(esp, 0x0016842Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016842E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016843E; /* je: equal / zero */

loc_00168435: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016843Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016843B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016843E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168450
 * Original: 0x00168450 - 0x00168479 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168450(void)
{

loc_00168450: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016845Du); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016845D: ;
    xmm0 = XMM_SCALAR(MEMF(0x3003A4)); /* movss */
    MEM32(esi) = 0x3204FC;
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168480
 * Original: 0x00168480 - 0x0016848B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168480: ;
    MEM32(ecx) = 0x3204FC;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00168490
 * Original: 0x00168490 - 0x001684B0 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168490: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x94;
    edi = 8;
    /* nop */

loc_001684A0: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001684A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001684A4u); } /* indirect call */
    }

loc_001684A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001684A0; /* jne: not equal / not zero */

loc_001684AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001684B0
 * Original: 0x001684B0 - 0x001684EA (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001684B0(void)
{

loc_001684B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + edi * 4 + 0x94);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001684C8u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001684C8: ;
    ecx = MEM32(esi + edi * 4 + 0x94);
    PUSH32(esp, 0x001684D4u); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_001684D4: ;
    ecx = MEM32(esi + edi * 4 + 0x94);
    PUSH32(esp, 0x43160000);
    PUSH32(esp, 0x001684E5u); RECOMP_ABI_CALL(0x0015A910u, sub_0015A910); /* call 0x0015A910 */

loc_001684E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001684F0
 * Original: 0x001684F0 - 0x001684FA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001684F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001684F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001684F6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001684F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00168500
 * Original: 0x00168500 - 0x001686A1 (417 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168500(void)
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

loc_00168500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebx = 0x378860;
    esi = edi + 0x94;
    goto loc_00168530;

    /* nop */
    goto loc_00168530;

    /* nop */

loc_00168530: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320528);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168544u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00168544: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00168566; /* je: equal / zero */

loc_0016854F: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168557u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00168557: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168564u); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00168564: ;
    goto loc_00168568;

loc_00168566: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00168568: ;
    MEM32(esi) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168578u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_00168578: ;
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
    ecx = MEM32(esi);
    MEM32(edx + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001685A5u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_001685A5: ;
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001685AEu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_001685AE: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(edi + 0x50), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(edi + 0x4C), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001685C1u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_001685C1: ;
    ecx = MEM32(edi + 0x48);
    eax = MEM32(esi);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x24) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    PUSH32(esp, 0);
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001685E8u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001685E8: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001685F4u); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_001685F4: ;
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x50)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x90)); /* fadd dword ptr [edi + 0x90] */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x304BE4); /* subss */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3003A0)); /* fsub dword ptr [0x3003a0] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168661u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_00168661: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    edx = MEM32(esi);
    eax = MEM32(edx + 0x54);
    ecx = MEM32(edi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016867Du); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016867D: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00168686u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168683u); } /* indirect call */
    }

loc_00168686: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x378880) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x378880 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00168530; /* jl: less (signed <) */

loc_00168698: ;
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
 * sub_001686B0
 * Original: 0x001686B0 - 0x00168862 (434 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001686B0(void)
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

loc_001686B0: ;
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
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001686CBu); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_001686CB: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001686D8u); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_001686D8: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
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
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0016874B; /* jnp: not parity */

loc_0016870E: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */

loc_0016874B: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016876Au); RECOMP_ABI_CALL(0x002BE484u, sub_002BE484); /* call 0x002BE484 */

loc_0016876A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3210B0); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x20); /* comiss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016879D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x20)) */

loc_0016878F: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC54); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0016879D: ;
    edx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x40); /* subss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001687B4u); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_001687B4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x94)) >> 32) & 1);
    esi = esi + 0x94;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 8;
    edi = edi;

loc_001687D0: ;
    ecx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001687E8u); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_001687E8: ;
    eax = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016881Cu); RECOMP_ABI_CALL(0x002661A0u, sub_002661A0); /* call 0x002661A0 */

loc_0016881C: ;
    eax = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016884Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016884Cu); } /* indirect call */
    }

loc_0016884F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001687D0; /* jne: not equal / not zero */

loc_00168859: ;
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
 * sub_00168870
 * Original: 0x00168870 - 0x00168894 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168870: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3204FC;
    PUSH32(esp, 0x0016887Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016887E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016888E; /* je: equal / zero */

loc_00168885: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016888Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016888B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016888E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001688A0
 * Original: 0x001688A0 - 0x001688AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001688A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001688A0: ;
    ecx = MEM32(ecx + 0x100);
    g_seh_ebp = ebp; sub_001581B0(); return; /* tail jmp 0x001581B0 */

}

/**
 * sub_001688B0
 * Original: 0x001688B0 - 0x001688BA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001688B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001688B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001688B6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001688B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001688C0
 * Original: 0x001688C0 - 0x001688ED (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001688C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001688C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x32056C;
    esi = ebx + 0xE0;
    edi = 4;

loc_001688D6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x001688E0u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_001688E0: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001688D6; /* jne: not equal / not zero */

loc_001688E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_001688F0
 * Original: 0x001688F0 - 0x00168A24 (308 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001688F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001688F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x3205EC);
    eax = MEM32(0x3205E4);
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = edx;
    SET_LO8(edx, MEM8(ebp + 8));
    ebx = ecx;
    ecx = MEM32(0x3205E8);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x3205F0);
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x30);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ecx;
    SET_LO16(ecx, MEM16(0x3205F4));
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, esi);
    MEM16(esp + 8) = 0x31;
    eax = esp + 8;
    MEM8(esp + 8) = LO8(edx);
    PUSH32(esp, edi);
    MEM16(esp + 0x20) = LO16(ecx);
    edx = eax;

loc_00168947: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168947; /* jne: not equal / not zero */

loc_0016894E: ;
    edi = esp + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00168955: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168955; /* jne: not equal / not zero */

loc_0016895D: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
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
    PUSH32(esp, 0x400);
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x320598);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168981u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00168981: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001689A3; /* je: equal / zero */

loc_0016898A: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168994u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00168994: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016899Fu); RECOMP_ABI_CALL(0x00157F80u, sub_00157F80); /* call 0x00157F80 */

loc_0016899F: ;
    esi = eax;
    goto loc_001689A5;

loc_001689A3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001689A5: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001689B1u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_001689B1: ;
    SET_LO8(eax, 0xFF);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = LO8(eax);
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(eax);
    eax = MEM32(ebp + 0x14);
    SET_LO8(ecx, 1);
    MEM8(esi + 0x73) = LO8(ecx);
    edx = MEM32(eax);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(ebp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM8(esi + 0x73) = LO8(ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001689EAu); RECOMP_ABI_CALL(0x00158170u, sub_00158170); /* call 0x00158170 */

loc_001689EA: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001689FBu); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_001689FB: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(ebx + 0x54);
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
    PUSH32(esp, 0x00168A15u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_00168A15: ;
    POP32(esp, edi);
    MEM32(ebx + 0x100) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00168A30
 * Original: 0x00168A30 - 0x00168A78 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168A30: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x100);
    ecx = MEM32(eax + 0x48);
    MEM32(esp) = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168A52; /* jne: not equal / not zero */

loc_00168A45: ;
    edx = MEM32(esp);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    goto loc_00168A55;

loc_00168A52: ;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00168A55: ;
    SET_LO8(edx, MEM8(esp));
    MEM8(eax + 0x48) = LO8(edx);
    edx = MEM32(esp);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x49) = LO8(edx);
    edx = MEM32(esp);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(edx);
    MEM8(eax + 0x4B) = LO8(ecx);
    MEM8(eax + 0x73) = 1;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168A80
 * Original: 0x00168A80 - 0x00168AB0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168A80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00168A8Du); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00168A8D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi) = 0x32056C;
    MEM32(esi + 0x100) = eax;
    MEM8(esi + 0x104) = LO8(eax);
    PUSH32(esp, 0x00168AAAu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00168AAA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168AB0
 * Original: 0x00168AB0 - 0x00168B40 (144 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00168AB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x104));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168B23; /* je: equal / zero */

loc_00168ABE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x108)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x108) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00168B23; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00168ADC: ;
    eax = MEM32(esi + 0x100);
    xmm0 = XMM_SCALAR(MEMF(0x300914)); /* movss */
    MEMF(esi + 0x108) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x48);
    MEM32(esp + 4) = ecx;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) | 0xFF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x48) = LO8(ecx);
    ecx = MEM32(esp + 4);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x49) = LO8(ecx);
    ecx = MEM32(esp + 4);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = LO8(edx);
    MEM8(eax + 0x73) = 1;

loc_00168B23: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00168B34u); RECOMP_ABI_CALL(0x0015E2D0u, sub_0015E2D0); /* call 0x0015E2D0 */

loc_00168B34: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00168B40
 * Original: 0x00168B40 - 0x00168BA5 (101 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168B40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x104));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168BA2; /* jne: not equal / not zero */

loc_00168B4E: ;
    eax = MEM32(esi + 0x100);
    xmm0 = XMM_SCALAR(MEMF(0x300914)); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ecx, 1);
    MEM8(esi + 0x104) = LO8(ecx);
    edx = MEM32(eax + 0x48);
    MEM32(esp + 8) = edx;
    ebx = MEM32(esp + 8);
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) | 0xFF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + 0x48) = LO8(ebx);
    ebx = MEM32(esp + 8);
    ebx = ebx >> 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x49) = LO8(ebx);
    ebx = MEM32(esp + 8);
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ebx);
    MEM8(eax + 0x4B) = LO8(edx);
    MEM8(eax + 0x73) = LO8(ecx);
    MEMF(esi + 0x108) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);

loc_00168BA2: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00168BB0
 * Original: 0x00168BB0 - 0x00168BDA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168BB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x100);
    MEM8(ecx + 0x104) = 0;
    ecx = MEM32(eax + 0x48);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = 0xFF;
    MEM8(eax + 0x73) = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00168BE0
 * Original: 0x00168BE0 - 0x00168C22 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00168BE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x32056C;
    esi = edi + 0xE0;
    ebx = 4;

loc_00168BF6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00168C00u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00168C00: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00168BF6; /* jne: not equal / not zero */

loc_00168C03: ;
    ecx = edi;
    PUSH32(esp, 0x00168C0Au); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_00168C0A: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168C1A; /* je: equal / zero */

loc_00168C11: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00168C17u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00168C17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00168C1A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168C30
 * Original: 0x00168C30 - 0x00168C6D (61 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00168C30: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x108); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00168C4C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x108)) */

loc_00168C3C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    goto loc_00168C52;

loc_00168C4C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_00168C52: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(ecx + 0x104) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00168C6A; /* je: equal / zero */

loc_00168C62: ;
    MEMF(ecx + 0x100) = xmm0.f[0]; /* movss */

loc_00168C6A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00168C70
 * Original: 0x00168C70 - 0x00168C81 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168C70(void)
{

loc_00168C70: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x108) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00168C90
 * Original: 0x00168C90 - 0x00168D22 (146 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168C90(void)
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

loc_00168C90: ;
    SET_LO8(eax, MEM8(ecx + 0x114));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF460); /* mulss */
    if (CMP_EQ(_fa, _fb)) goto loc_00168CD2; /* je: equal / zero */

loc_00168CA8: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x100)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x104); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00168CE3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x104)) */

loc_00168CB9: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x104)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0x100) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00168CDE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00168CD2: ;
    eax = MEM32(ecx + 0x104);
    MEM32(ecx + 0x100) = eax;

loc_00168CDE: ;
    g_seh_ebp = ebp; sub_0015E2D0(); return; /* tail jmp 0x0015E2D0 */

loc_00168CE3: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x104)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x100); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00168CDE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x100)) */

loc_00168CF4: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x100)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x104); /* comiss */
    MEMF(ecx + 0x100) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00168CDE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x104)) */

loc_00168D11: ;
    edx = MEM32(ecx + 0x104);
    MEM32(ecx + 0x100) = edx;
    g_seh_ebp = ebp; sub_0015E2D0(); return; /* tail jmp 0x0015E2D0 */

}

/**
 * sub_00168D30
 * Original: 0x00168D30 - 0x00168D5D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168D30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x3205F8;
    esi = ebx + 0xE0;
    edi = 4;

loc_00168D46: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00168D50u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00168D50: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00168D46; /* jne: not equal / not zero */

loc_00168D53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00168D60
 * Original: 0x00168D60 - 0x00169074 (788 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00168D60: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168D85; /* jne: not equal / not zero */

loc_00168D70: ;
    ecx = esp + 0x8C;
    PUSH32(esp, 0x00168D7Cu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00168D7C: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00168D85: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x100)); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x110));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00168DAB; /* jne: not equal / not zero */

loc_00168D9F: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x4C); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    goto loc_00168DBD;

loc_00168DAB: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0x100)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x50); /* mulss */

loc_00168DBD: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x9C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x108); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm6 = xmm1; /* movaps */
    xmm5 = xmm3; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00168E87; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x108)) */

loc_00168E1D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00168E5B; /* jne: not equal / not zero */

loc_00168E27: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * MEMF(eax + 0x100); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    goto loc_00168E87;

loc_00168E5B: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 0x100); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */

loc_00168E87: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(0x38DC5C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x38DC58)); /* movss */
    edx = MEM32(eax + 0x48);
    xmm1 = xmm3; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 8); /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x30); /* addss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x34); /* addss */
    xmm3 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00168FB7; /* jne: not equal / not zero */

loc_00168F95: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    goto loc_00168FD4;

loc_00168FB7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */

loc_00168FD4: ;
    SET_LO16(ebx, MEM16(esp + 0x1E));
    esi = ZX8(LO8(edx));
    eax = ZX8(HI8(ebx));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX8(HI8(edx));
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX8(LO8(ebx));
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEMF(esp + 0x7C) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016905Du); RECOMP_ABI_CALL(0x000BF670u, sub_000BF670); /* call 0x000BF670 */

loc_0016905D: ;
    ecx = esp + 0x94;
    PUSH32(esp, 0x00169069u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00169069: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00169080
 * Original: 0x00169080 - 0x001690E3 (99 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169080: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016908Du); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_0016908D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esi + 0x108) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esi + 0x110) = LO8(eax);
    MEM8(esi + 0x111) = LO8(eax);
    MEM8(esi + 0x112) = LO8(eax);
    MEM8(esi + 0x113) = LO8(eax);
    MEM32(esi) = 0x3205F8;
    MEMF(esi + 0x10C) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x114) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001690F0
 * Original: 0x001690F0 - 0x00169132 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001690F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001690F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x3205F8;
    esi = edi + 0xE0;
    ebx = 4;

loc_00169106: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00169110u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00169110: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00169106; /* jne: not equal / not zero */

loc_00169113: ;
    ecx = edi;
    PUSH32(esp, 0x0016911Au); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016911A: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016912A; /* je: equal / zero */

loc_00169121: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00169127u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00169127: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016912A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169140
 * Original: 0x00169140 - 0x001691B7 (119 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169140: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x104);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = 0x320624;
    if (CMP_EQ(_fa, _fb)) goto loc_0016916D; /* je: equal / zero */

loc_00169157: ;
    ecx = edi;
    PUSH32(esp, 0x0016915Eu); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_0016915E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00169164u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00169164: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x104) = ebx;

loc_0016916D: ;
    edi = MEM32(esi + 0x108);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016918D; /* je: equal / zero */

loc_00169177: ;
    ecx = edi;
    PUSH32(esp, 0x0016917Eu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016917E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00169184u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00169184: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x108) = ebx;

loc_0016918D: ;
    MEM32(esi + 0x100) = ebx;
    edi = esi + 0xE0;
    ebx = 4;
    edi = edi;

loc_001691A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    PUSH32(esp, 0x001691AAu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_001691AA: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001691A0; /* jne: not equal / not zero */

loc_001691AD: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_001691C0
 * Original: 0x001691C0 - 0x00169241 (129 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001691C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001691C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x001691CFu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_001691CF: ;
    eax = MEM32(0x37888C);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 4) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x316F80);
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = HI8(eax);
    PUSH32(esp, 0x7E0C8402);
    MEM8(esi + 0x73) = 1;
    PUSH32(esp, 0x001691FAu); RECOMP_ABI_CALL(0x00154E60u, sub_00154E60); /* call 0x00154E60 */

loc_001691FA: ;
    ecx = MEM32(esi + 0x100);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169209u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_00169209: ;
    ecx = MEM32(0x37888C);
    eax = MEM32(esi + 0x100);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 4) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = 1;
    xmm0 = XMM_SCALAR(MEMF(0x378880)); /* movss */
    MEMF(esi + 0x10C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00169250
 * Original: 0x00169250 - 0x00169324 (212 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169250: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016925Du); RECOMP_ABI_CALL(0x000BEFC0u, sub_000BEFC0); /* call 0x000BEFC0 */

loc_0016925D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169320; /* je: equal / zero */

loc_00169268: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x320698);
    PUSH32(esp, 0x00169279u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00169279: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016928E; /* je: equal / zero */

loc_00169280: ;
    PUSH32(esp, 0x1095423E);
    ecx = eax;
    PUSH32(esp, 0x0016928Cu); RECOMP_ABI_CALL(0x000C00F0u, sub_000C00F0); /* call 0x000C00F0 */

loc_0016928C: ;
    goto loc_00169290;

loc_0016928E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00169290: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x104) = eax;
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x104);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x320650);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x001692BBu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_001692BB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001692E0; /* je: equal / zero */

loc_001692C2: ;
    ecx = MEM32(esi + 0x104);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001692DEu); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_001692DE: ;
    goto loc_001692E2;

loc_001692E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001692E2: ;
    edx = MEM32(esi + 0x104);
    MEM32(esi + 0x108) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x108);
    edx = MEM32(eax);
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
    ecx = esi;
    PUSH32(esp, 0x00169320u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_00169320: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00169330
 * Original: 0x00169330 - 0x0016937D (77 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169330(void)
{

loc_00169330: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016933Du); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_0016933D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi) = 0x320624;
    PUSH32(esp, 0x0016934Eu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016934E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x100) = 0;
    MEM32(esi + 0x104) = 0;
    MEM32(esi + 0x108) = 0;
    MEMF(esi + 0x10C) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169380
 * Original: 0x00169380 - 0x001694B5 (309 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00169380: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x378890));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001693B6; /* jne: not equal / not zero */

loc_001693A4: ;
    MEM8(0x378890) = 1;
    PUSH32(esp, 0x001693B0u); RECOMP_ABI_CALL(0x001691C0u, sub_001691C0); /* call 0x001691C0 */

loc_001693B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_001693B6: ;
    ecx = MEM32(esi + 0x100);
    eax = MEM32(esi + 0x48);
    edx = MEM32(ecx + 0x48);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016944B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_001693DA: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x10C) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x378880)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x378884)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00169430; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00169402: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */

loc_00169412: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC4C); /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00169426; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00169423: ;
    xmm0 = xmm2; /* movaps */

loc_00169426: ;
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(edx, LO8(eax));
    goto loc_0016945E;

loc_00169430: ;
    xmm3 = XMM_SCALAR(MEMF(0x378888)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00169456; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0016943D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    goto loc_00169412;

loc_0016944B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00169456u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00169456: ;
    SET_LO8(ecx, MEM8(esp + 0xF));
    SET_LO8(edx, MEM8(esp + 0xB));

loc_0016945E: ;
    eax = MEM32(esi + 0x100);
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + 0x48) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 9));
    MEM8(eax + 0x49) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0xA));
    MEM8(eax + 0x4B) = LO8(edx);
    MEM8(eax + 0x4A) = LO8(ebx);
    SET_LO8(edx, 1);
    MEM8(eax + 0x73) = LO8(edx);
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(esi + 0x48) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xD));
    MEM8(esi + 0x49) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xE));
    MEM8(esi + 0x4B) = LO8(ecx);
    ecx = MEM32(esp + 0x18);
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x73) = LO8(edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001694ADu); RECOMP_ABI_CALL(0x0015E2D0u, sub_0015E2D0); /* call 0x0015E2D0 */

loc_001694AD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001694C0
 * Original: 0x001694C0 - 0x001694DE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001694C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001694C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001694C8u); RECOMP_ABI_CALL(0x00169140u, sub_00169140); /* call 0x00169140 */

loc_001694C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001694D8; /* je: equal / zero */

loc_001694CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001694D5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001694D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001694D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001694E0
 * Original: 0x001694E0 - 0x001694F9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001694E0(void)
{

loc_001694E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001694EDu); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_001694ED: ;
    MEM32(esi) = 0x3206E8;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169500
 * Original: 0x00169500 - 0x0016950B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169500: ;
    MEM32(ecx) = 0x3206E8;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00169510
 * Original: 0x00169510 - 0x001697EA (730 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169510(void)
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

loc_00169510: ;
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
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169526u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_00169526: ;
    esi = eax;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169533u); RECOMP_ABI_CALL(0x00124CA0u, sub_00124CA0); /* call 0x00124CA0 */

loc_00169533: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001697E1; /* je: equal / zero */

loc_0016953D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3206E0); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_00169556;

loc_00169552: ;
    esi = MEM32(esp + 0x1C);

loc_00169556: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x18) = edi;
    MEM8(esp + 0x13) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169568u); RECOMP_ABI_CALL(0x00124D70u, sub_00124D70); /* call 0x00124D70 */

loc_00169568: ;
    ecx = MEM32(ebx + 0x90);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00169575u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169572u); } /* indirect call */
    }

loc_00169575: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x194) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00169736; /* jne: not equal / not zero */

loc_00169581: ;
    edx = MEM32(esi + 0xB0);
    edi = esi + 0xB0;
    eax = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016959Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169597u); } /* indirect call */
    }

loc_0016959A: ;
    ecx = MEM32(ebx + 0x90);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x001695A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001695A2u); } /* indirect call */
    }

loc_001695A8: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001695DDu); RECOMP_ABI_CALL(0x00266270u, sub_00266270); /* call 0x00266270 */

loc_001695DD: ;
    fp_push(MEMF(0x3206DC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00169732; /* jbe: below or equal (unsigned <=) */

loc_001695ED: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBFED3C6Au);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x001695FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001695F6u); } /* indirect call */
    }

loc_001695FC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169603u); RECOMP_ABI_CALL(0x00065E40u, sub_00065E40); /* call 0x00065E40 */

loc_00169603: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0016960Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169608u); } /* indirect call */
    }

loc_0016960E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = esp + 0x50;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0016963Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016963Bu); } /* indirect call */
    }

loc_0016963E: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    ecx = MEM32(ebx + 0x90);
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x80); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x84); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x88); /* addss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001696FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001696F7u); } /* indirect call */
    }

loc_001696FA: ;
    xmm0 = XMM_SCALAR(MEMF(0x3193C8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1B8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00169732; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x1B8)) */

loc_0016970B: ;
    ecx = MEM32(ebx + 0x90);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00169722u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016971Fu); } /* indirect call */
    }

loc_00169722: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169729u); RECOMP_ABI_CALL(0x0011C410u, sub_0011C410); /* call 0x0011C410 */

loc_00169729: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00169732; /* je: equal / zero */

loc_0016972D: ;
    MEM8(esp + 0xF) = 1;

loc_00169732: ;
    edi = MEM32(esp + 0x14);

loc_00169736: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016973Du); RECOMP_ABI_CALL(0x000F9840u, sub_000F9840); /* call 0x000F9840 */

loc_0016973D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0016975A; /* je: equal / zero */

loc_00169742: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0016975A; /* je: equal / zero */

loc_00169747: ;
    SET_LO8(ecx, MEM8(esp + 0xF));
    MEM8(esi + 0x25A2) = LO8(ecx);
    MEM8(esi + 0x25A1) = 1;
    goto loc_00169768;

loc_0016975A: ;
    MEM8(esi + 0x25A2) = 0;
    MEM8(esi + 0x25A1) = 0;

loc_00169768: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x25A4)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0016979D; /* je: equal / zero */

loc_00169778: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001697B7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00169795: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_001697B7;

loc_0016979D: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001697B7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001697B1: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_001697B7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001697BCu); RECOMP_ABI_CALL(0x00160F10u, sub_00160F10); /* call 0x00160F10 */

loc_001697BC: ;
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001697D1; /* je: equal / zero */

loc_001697C9: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF224); /* mulss */

loc_001697D1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esi + 0x25A4) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00169552; /* jne: not equal / not zero */

loc_001697E1: ;
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
 * sub_001697F0
 * Original: 0x001697F0 - 0x00169B59 (873 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001697F0(void)
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

loc_001697F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x264) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x264;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    SET_LO8(eax, MEM8(0x51D8E0));
    PUSH32(esp, esi);
    ebx = 1;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_00169867; /* jne: not equal / not zero */

loc_00169833: ;
    eax = MEM32(0x51D8E0);
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x3075E0)); /* movss */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm5 = xmm4; /* movaps */
    MEM32(0x51D8E0) = eax;
    MEMF(0x51D8D0) = xmm5.f[0]; /* movss */
    MEMF(0x51D8D4) = xmm4.f[0]; /* movss */
    MEMF(0x51D8D8) = xmm3.f[0]; /* movss */
    goto loc_0016987F;

loc_00169867: ;
    xmm3 = XMM_SCALAR(MEMF(0x51D8D8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x51D8D4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x51D8D0)); /* movss */

loc_0016987F: ;
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xA0); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xA4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    eax = esp + 0x60;
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0xA8); /* addss */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169935u); RECOMP_ABI_CALL(0x00266270u, sub_00266270); /* call 0x00266270 */

loc_00169935: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31FD4C)); /* fmul dword ptr [0x31fd4c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0016995D; /* ja: above (unsigned >) */

loc_00169957: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_0016995D: ;
    xmm0 = XMM_SCALAR(MEMF(0x378898)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x378894)); /* movss */
    ecx = MEM32(edi + 0x90);
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00169993u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016998Du); } /* indirect call */
    }

loc_00169993: ;
    ecx = MEM32(0x3C2F14);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016999Fu); RECOMP_ABI_CALL(0x0018D5B0u, sub_0018D5B0); /* call 0x0018D5B0 */

loc_0016999F: ;
    eax = MEM32(0x3C3580);
    ecx = MEM32(0x3C2F14);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001699B0u); RECOMP_ABI_CALL(0x0018D5E0u, sub_0018D5E0); /* call 0x0018D5E0 */

loc_001699B0: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C2F14);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001699C5u); RECOMP_ABI_CALL(0x0018DF20u, sub_0018DF20); /* call 0x0018DF20 */

loc_001699C5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00169B50; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_001699F0: ;
    MEM32(esp + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001699FDu); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_001699FD: ;
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFD0B0FE4u);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169A17u); RECOMP_ABI_CALL(0x001579A0u, sub_001579A0); /* call 0x001579A0 */

loc_00169A17: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169A2B; /* jne: not equal / not zero */

loc_00169A22: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169A2B; /* jne: not equal / not zero */

loc_00169A29: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00169A2B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169A32u); RECOMP_ABI_CALL(0x000F8BB0u, sub_000F8BB0); /* call 0x000F8BB0 */

loc_00169A32: ;
    ecx = esi;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169A3Bu); RECOMP_ABI_CALL(0x000F8BD0u, sub_000F8BD0); /* call 0x000F8BD0 */

loc_00169A3B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169B50; /* je: equal / zero */

loc_00169A43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169A5C; /* je: equal / zero */

loc_00169A47: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x98A27830u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169A57u); RECOMP_ABI_CALL(0x00154E80u, sub_00154E80); /* call 0x00154E80 */

loc_00169A57: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00169A5E;

loc_00169A5C: ;
    eax = edi;

loc_00169A5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169B50; /* je: equal / zero */

loc_00169A66: ;
    PUSH32(esp, 0xFF);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169A76u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_00169A76: ;
    eax = MEM32(esp + 0x1C);
    MEM8(eax + 4) = 0;
    MEM8(eax + 5) = 0;
    fp_push(MEMF(esi + 0x25A4)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x14) = 0xFF;
    MEM8(esp + 0x15) = 0xFF;
    MEM8(esp + 0x16) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169A9Fu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00169A9F: ;
    ecx = MEM32(esp + 0x10);
    MEM8(esp + 0x17) = LO8(eax);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169AB1u); RECOMP_ABI_CALL(0x000AD5E0u, sub_000AD5E0); /* call 0x000AD5E0 */

loc_00169AB1: ;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169AC9u); RECOMP_ABI_CALL(0x000AD170u, sub_000AD170); /* call 0x000AD170 */

loc_00169AC9: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169ADCu); RECOMP_ABI_CALL(0x000AD6A0u, sub_000AD6A0); /* call 0x000AD6A0 */

loc_00169ADC: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169AEBu); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_00169AEB: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x2C), g_mxcsr, 1); /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FE9A0); /* mulss */
    edx = esp + 0x70;
    ecx = SX16(LO16(eax));
    PUSH32(esp, edx);
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x2C), g_mxcsr, 1); /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = SX16(LO16(edx));
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169B33u); RECOMP_ABI_CALL(0x000AD700u, sub_000AD700); /* call 0x000AD700 */

loc_00169B33: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169B46u); RECOMP_ABI_CALL(0x000AD6C0u, sub_000AD6C0); /* call 0x000AD6C0 */

loc_00169B46: ;
    eax = MEM32(esp + 0x10);
    MEM8(eax + 4) = LO8(ebx);
    MEM8(eax + 5) = LO8(ebx);

loc_00169B50: ;
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
 * sub_00169B60
 * Original: 0x00169B60 - 0x00169B86 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169B60(void)
{

loc_00169B60: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x90) = eax;
    PUSH32(esp, 0x00169B79u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_00169B79: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00169B81u); RECOMP_ABI_CALL(0x00169510u, sub_00169510); /* call 0x00169510 */

loc_00169B81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00169B90
 * Original: 0x00169B90 - 0x00169C02 (114 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00169B90: ;
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
    MEM32(esp + 0xC) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169BA5u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_00169BA5: ;
    ebx = eax;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169BAEu); RECOMP_ABI_CALL(0x00124CA0u, sub_00124CA0); /* call 0x00124CA0 */

loc_00169BAE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169BFB; /* je: equal / zero */

loc_00169BB4: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169BBDu); RECOMP_ABI_CALL(0x00124D70u, sub_00124D70); /* call 0x00124D70 */

loc_00169BBD: ;
    esi = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x25A4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00169BF7; /* jnp: not parity */

loc_00169BD4: ;
    eax = MEM32(esi + 0xB0);
    ecx = esi + 0xB0;
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00169BE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169BE5u); } /* indirect call */
    }

loc_00169BE8: ;
    ecx = MEM32(esp + 0xC);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169BF7u); RECOMP_ABI_CALL(0x001697F0u, sub_001697F0); /* call 0x001697F0 */

loc_00169BF7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169BB4; /* jne: not equal / not zero */

loc_00169BFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00169C10
 * Original: 0x00169C10 - 0x00169C15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169C10: ;
    g_seh_ebp = ebp; sub_00169B90(); return; /* tail jmp 0x00169B90 */

}

/**
 * sub_00169C20
 * Original: 0x00169C20 - 0x00169C44 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169C20: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3206E8;
    PUSH32(esp, 0x00169C2Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_00169C2E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169C3E; /* je: equal / zero */

loc_00169C35: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00169C3Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00169C3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00169C3E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169C50
 * Original: 0x00169C50 - 0x00169C7D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169C50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x320710;
    esi = ebx + 0xE0;
    edi = 4;

loc_00169C66: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00169C70u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00169C70: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00169C66; /* jne: not equal / not zero */

loc_00169C73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00169C80
 * Original: 0x00169C80 - 0x00169CA2 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169C80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    MEM32(ecx + 0x104) = eax;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(ecx + 0x108) = xmm0.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169CB0
 * Original: 0x00169CB0 - 0x00169CDF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169CB0: ;
    eax = MEM32(ecx + 0x104);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169CD9; /* je: equal / zero */

loc_00169CBD: ;
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

loc_00169CD9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169CE0
 * Original: 0x00169CE0 - 0x00169D3D (93 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx + 0x104);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169D2A; /* je: equal / zero */

loc_00169CF0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x100)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x4C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x108); /* addss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    MEM8(eax + 0x73) = 1;

loc_00169D2A: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169D37u); RECOMP_ABI_CALL(0x0015E2D0u, sub_0015E2D0); /* call 0x0015E2D0 */

loc_00169D37: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00169D40
 * Original: 0x00169D40 - 0x00169D6F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169D40(void)
{

loc_00169D40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00169D4Du); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_00169D4D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi) = 0x320710;
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00169D69u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00169D69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169D70
 * Original: 0x00169D70 - 0x00169DB2 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169D70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x320710;
    esi = edi + 0xE0;
    ebx = 4;

loc_00169D86: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00169D90u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_00169D90: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00169D86; /* jne: not equal / not zero */

loc_00169D93: ;
    ecx = edi;
    PUSH32(esp, 0x00169D9Au); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_00169D9A: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169DAA; /* je: equal / zero */

loc_00169DA1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00169DA7u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00169DA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00169DAA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169DC0
 * Original: 0x00169DC0 - 0x00169DE0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x98);
    PUSH32(esp, eax);
    MEM32(esi) = 0x32073C;
    PUSH32(esp, 0x00169DD5u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_00169DD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_00169DE0
 * Original: 0x00169DE0 - 0x00169DF0 (16 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00169DE0: ;
    g_seh_ebp = ebp; sub_0015AD50(); return; /* tail jmp 0x0015AD50 */

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

}

/**
 * sub_00169DF0
 * Original: 0x00169DF0 - 0x00169E05 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169DF0(void)
{

loc_00169DF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169E02u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00169E02: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169E10
 * Original: 0x00169E10 - 0x00169E78 (104 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00169E10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00169E1Du); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_00169E1D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x320768);
    MEM32(esi) = 0x32073C;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA8) = eax;
    PUSH32(esp, 0x00169E5Fu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00169E5F: ;
    MEM32(esi + 0x98) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00169E80
 * Original: 0x00169E80 - 0x0016A006 (390 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00169E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00169E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00169FF4; /* je: equal / zero */

loc_00169E96: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00169E9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169E9Au); } /* indirect call */
    }

loc_00169E9D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2000);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00169EA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169EA6u); } /* indirect call */
    }

loc_00169EA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169ECD; /* jne: not equal / not zero */

loc_00169EAD: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00169EB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169EB1u); } /* indirect call */
    }

loc_00169EB4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000000);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00169EC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169EBDu); } /* indirect call */
    }

loc_00169EC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169ECD; /* jne: not equal / not zero */

loc_00169EC4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    goto loc_00169FE9;

loc_00169ECD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00169EDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169EDCu); } /* indirect call */
    }

loc_00169EDF: ;
    MEM32(esi + 0xA4) = eax;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00169EECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169EE9u); } /* indirect call */
    }

loc_00169EEC: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi + 0xA8) = eax;
    ecx = MEM32(eax + 0x1C0);
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0xC); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x1D0); /* mulss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(eax + 0x2BF));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00169F5C; /* je: equal / zero */

loc_00169F28: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00169F3Au); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_00169F3A: ;
    ecx = MEM32(esi + 0x98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00169F57u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_00169F57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00169F5C: ;
    eax = MEM32(esi + 0x98);
    edx = MEM32(eax + 4);
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x98);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xA0); /* addss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0x98);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF504); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xA0); /* addss */
    edx = MEM32(esi + 0x9C);
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEM32(eax + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x9C); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF224); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00169FE0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00169FD8: ;
    MEMF(esi + 0xA0) = xmm1.f[0]; /* movss */

loc_00169FE0: ;
    eax = MEM32(esi + 0xA0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);

loc_00169FE9: ;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, 0x00169FF4u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_00169FF4: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016A001u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016A001: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016A010
 * Original: 0x0016A010 - 0x0016A04B (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A010: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi + 0x94) = edi;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016A02Cu); RECOMP_ABI_CALL(0x00158460u, sub_00158460); /* call 0x00158460 */

loc_0016A02C: ;
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
    PUSH32(esp, 0x0016A046u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016A046: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A050
 * Original: 0x0016A050 - 0x0016A085 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A050: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x98);
    PUSH32(esp, eax);
    MEM32(esi) = 0x32073C;
    PUSH32(esp, 0x0016A065u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0016A065: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0016A06Fu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016A06F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016A07F; /* je: equal / zero */

loc_0016A076: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016A07Cu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016A07C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016A07F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A090
 * Original: 0x0016A090 - 0x0016A0C9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A090: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ecx;
    MEM8(eax + 0x24) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016A0D0
 * Original: 0x0016A0D0 - 0x0016A0D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A0D0(void)
{

loc_0016A0D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016A0E0
 * Original: 0x0016A0E0 - 0x0016A19B (187 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A0E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016A0EDu); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016A0ED: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x3207D0;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xC8) = eax;
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0xE8) = LO8(eax);
    PUSH32(esp, 0xD0EBC73Eu);
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    PUSH32(esp, 0x0016A18Cu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0016A18C: ;
    MEM32(esi + 0xCC) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A1A0
 * Original: 0x0016A1A0 - 0x0016A1B9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A1A0: ;
    ecx = MEM32(ecx + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A1B6; /* je: equal / zero */

loc_0016A1AA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016A1B6u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016A1B6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A1C0
 * Original: 0x0016A1C0 - 0x0016A227 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A1C0: ;
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
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    edx = MEM32(ebp + 0xC);
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x4C);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x50);
    MEM32(ecx + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax + 0x48);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0xC) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = 0;
    MEM8(eax + 0x73) = 1;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016A230
 * Original: 0x0016A230 - 0x0016A2F0 (192 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x51D65C);
    xmm0 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x35AC);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016A25F; /* jg: greater (signed >) */

loc_0016A257: ;
    xmm0 = XMM_SCALAR(MEMF(0x3207B4)); /* movss */

loc_0016A25F: ;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A289u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016A289: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x48);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM8(eax + 0x4B) = 0;
    MEM32(esp + 0xC) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    SET_LO8(ecx, 1);
    MEM8(eax + 0x73) = LO8(ecx);
    xmm0 = XMM_SCALAR(MEMF(edi + 0xD8)); /* movss */
    eax = MEM32(esi);
    xmm1 = XMM_SCALAR(MEMF(edi + 0xDC)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ecx);
    MEM8(esi + 0x24) = LO8(ecx);
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016A2EA; /* jl: less (signed <) */

loc_0016A2DC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016A2EA; /* jg: greater (signed >) */

loc_0016A2E1: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A2EAu); RECOMP_ABI_CALL(0x0016AC30u, sub_0016AC30); /* call 0x0016AC30 */

loc_0016A2EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016A2F0
 * Original: 0x0016A2F0 - 0x0016A32B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016A2F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebx) = 0x3207D0;
    esi = ebx + 0x90;
    edi = 0xA;

loc_0016A306: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A31B; /* je: equal / zero */

loc_0016A30C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016A312u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016A312: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_0016A31B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016A306; /* jne: not equal / not zero */

loc_0016A321: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_0016A330
 * Original: 0x0016A330 - 0x0016A33E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A330(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016A330: ;
    eax = MEM32(0x51D65C);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx + 0x13DC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016A340
 * Original: 0x0016A340 - 0x0016A391 (81 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A340: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    MEM32(esi + 0xB8) = edi;
    PUSH32(esp, 1);
    MEM8(edi + 0x110) = 0;
    ecx = MEM32(esi + 0xB8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016A364u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_0016A364: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016A372u); RECOMP_ABI_CALL(0x00158460u, sub_00158460); /* call 0x00158460 */

loc_0016A372: ;
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
    PUSH32(esp, 0x0016A38Cu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016A38C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016A3A0
 * Original: 0x0016A3A0 - 0x0016AB24 (1924 bytes, 500 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A3A0: ;
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
    edi = ecx;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0xFE985A52u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A3BFu); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016A3BF: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A50D; /* je: equal / zero */

loc_0016A3CB: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x320A40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A3DCu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016A3DC: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A419; /* je: equal / zero */

loc_0016A3EE: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x24) = LO8(ebx);
    goto loc_0016A41B;

loc_0016A419: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016A41B: ;
    MEM32(edi + 0x90) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x50);
    MEM32(eax + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    PUSH32(esp, 0x400);
    MEM32(esp + 0x10) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x28);
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(ebx);
    PUSH32(esp, 0x320A00);
    MEM8(esi + 0x73) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A47Bu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016A47B: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A4B8; /* je: equal / zero */

loc_0016A48D: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x24) = LO8(ebx);
    goto loc_0016A4BA;

loc_0016A4B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016A4BA: ;
    MEM32(edi + 0x94) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = 1;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x50);
    MEM32(eax + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 0xC) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(ebx);
    MEM8(esi + 0x73) = 1;

loc_0016A50D: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x8D866145u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A520u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016A520: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A5CD; /* je: equal / zero */

loc_0016A52A: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3209C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A53Bu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016A53B: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A578; /* je: equal / zero */

loc_0016A54D: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x24) = LO8(ebx);
    goto loc_0016A57A;

loc_0016A578: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016A57A: ;
    MEM32(edi + 0x98) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = 2;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x50);
    MEM32(eax + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 0xC) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(ebx);
    MEM8(esi + 0x73) = 1;

loc_0016A5CD: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0xCFB40828u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A5E0u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016A5E0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A68D; /* je: equal / zero */

loc_0016A5EA: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x320980);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A5FBu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016A5FB: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A638; /* je: equal / zero */

loc_0016A60D: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x24) = LO8(ebx);
    goto loc_0016A63A;

loc_0016A638: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016A63A: ;
    MEM32(edi + 0x9C) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = 3;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x50);
    MEM32(eax + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 0xC) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(ebx);
    MEM8(esi + 0x73) = 1;

loc_0016A68D: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x323A5BE4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A6A0u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016A6A0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A74D; /* je: equal / zero */

loc_0016A6AA: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x320940);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A6BBu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016A6BB: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A6F8; /* je: equal / zero */

loc_0016A6CD: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x24) = LO8(ebx);
    goto loc_0016A6FA;

loc_0016A6F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016A6FA: ;
    MEM32(edi + 0xA0) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = 4;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x50);
    MEM32(eax + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 0xC) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(ebx);
    MEM8(esi + 0x73) = 1;

loc_0016A74D: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x9E49F152u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A760u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016A760: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A80D; /* je: equal / zero */

loc_0016A76A: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x320900);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A77Bu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016A77B: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A7B8; /* je: equal / zero */

loc_0016A78D: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x24) = LO8(ebx);
    goto loc_0016A7BA;

loc_0016A7B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016A7BA: ;
    MEM32(edi + 0xA4) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = 5;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x50);
    MEM32(eax + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 0xC) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(ebx);
    MEM8(esi + 0x73) = 1;

loc_0016A80D: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x8B445767u);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A820u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016A820: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A8CD; /* je: equal / zero */

loc_0016A82A: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3208C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A83Bu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016A83B: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A878; /* je: equal / zero */

loc_0016A84D: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x24) = LO8(ebx);
    goto loc_0016A87A;

loc_0016A878: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016A87A: ;
    MEM32(edi + 0xA8) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = 6;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x50);
    MEM32(eax + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 0xC) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(ebx);
    MEM8(esi + 0x73) = 1;

loc_0016A8CD: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x431251B2);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A8E0u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016A8E0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A995; /* je: equal / zero */

loc_0016A8EA: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x320880);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A8FBu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016A8FB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016A938; /* je: equal / zero */

loc_0016A905: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x24) = LO8(ebx);
    goto loc_0016A93A;

loc_0016A938: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016A93A: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207B0)); /* movss */
    MEM32(edi + 0xAC) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = 7;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x50);
    MEM32(eax + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 0xC) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(ebx);
    MEM8(esi + 0x73) = 1;

loc_0016A995: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x26278AEE);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A9A8u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016A9A8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AA55; /* je: equal / zero */

loc_0016A9B2: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x320840);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016A9C3u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016A9C3: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AA00; /* je: equal / zero */

loc_0016A9D5: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x24) = LO8(ebx);
    goto loc_0016AA02;

loc_0016AA00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016AA02: ;
    MEM32(edi + 0xB0) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = 8;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x50);
    MEM32(eax + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 0xC) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(ebx);
    MEM8(esi + 0x73) = 1;

loc_0016AA55: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x9741D3FAu);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016AA68u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016AA68: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AB1D; /* je: equal / zero */

loc_0016AA72: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x320800);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016AA83u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016AA83: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AAC0; /* je: equal / zero */

loc_0016AA8D: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207AC)); /* movss */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x24) = LO8(ebx);
    goto loc_0016AAC2;

loc_0016AAC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016AAC2: ;
    xmm1 = XMM_SCALAR(MEMF(0x3207B0)); /* movss */
    MEM32(edi + 0xB4) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = 9;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x50);
    MEM32(eax + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x48);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 0xC) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = LO8(ebx);
    MEM8(esi + 0x73) = 1;

loc_0016AB1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016AB30
 * Original: 0x0016AB30 - 0x0016ABE9 (185 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0016AB30: ;
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
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016ABE2; /* je: equal / zero */

loc_0016AB47: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x48);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    MEM32(esp + 0xC) = edx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016AB7A; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_0016AB59: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AB6F; /* je: equal / zero */

loc_0016AB60: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016AB65u); RECOMP_ABI_CALL(0x0016A230u, sub_0016A230); /* call 0x0016A230 */

loc_0016AB65: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0016AB6F: ;
    MEM8(esi + 0x24) = 0;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0016AB7A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3207BC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x49) = HI8(edx);
    MEM8(eax + 0x48) = LO8(edx);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016ABD3; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016ABA8: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC4C); /* mulss */
    SET_LO8(edx, MEM8(esp + 0xE));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM8(eax + 0x4A) = LO8(edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax + 0x4B) = LO8(ecx);
    MEM8(eax + 0x73) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0016ABD3: ;
    SET_LO8(ecx, MEM8(esp + 0xE));
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = 0xFF;
    MEM8(eax + 0x73) = 1;

loc_0016ABE2: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016ABF0
 * Original: 0x0016ABF0 - 0x0016AC00 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016ABF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016ABF0: ;
    SET_LO8(eax, MEM8(ecx + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016ABFB; /* je: equal / zero */

loc_0016ABF7: ;
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0016ABFB: ;
    g_seh_ebp = ebp; sub_0016A230(); return; /* tail jmp 0x0016A230 */

}

/**
 * sub_0016AC00
 * Original: 0x0016AC00 - 0x0016AC2A (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AC00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x90;
    edi = 0xA;

loc_0016AC12: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AC1E; /* je: equal / zero */

loc_0016AC18: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0016AC1Eu); RECOMP_ABI_CALL(0x0016AB30u, sub_0016AB30); /* call 0x0016AB30 */

loc_0016AC1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016AC12; /* jne: not equal / not zero */

loc_0016AC24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AC30
 * Original: 0x0016AC30 - 0x0016AC54 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AC30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + eax * 4 + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AC51; /* je: equal / zero */

loc_0016AC3F: ;
    SET_LO8(eax, MEM8(ecx + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AC4C; /* je: equal / zero */

loc_0016AC46: ;
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0016AC4C: ;
    PUSH32(esp, 0x0016AC51u); RECOMP_ABI_CALL(0x0016A230u, sub_0016A230); /* call 0x0016A230 */

loc_0016AC51: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AC60
 * Original: 0x0016AC60 - 0x0016AEBF (607 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AC60(void)
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

loc_0016AC60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AEBA; /* je: equal / zero */

loc_0016AC72: ;
    ecx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0016AC90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016AC8Du); } /* indirect call */
    }

loc_0016AC90: ;
    ebx = MEM32(eax + 0x13D8);
    eax = ebx;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0016ACE6; /* je: equal / zero */

loc_0016AC9D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0016ACD9; /* je: equal / zero */

loc_0016ACA0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016AD02; /* jne: not equal / not zero */

loc_0016ACA3: ;
    SET_LO8(eax, MEM8(esi + 0xE9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016AD02; /* jne: not equal / not zero */

loc_0016ACAD: ;
    ecx = MEM32(esi + 0xB8);
    xmm0 = XMM_SCALAR(MEMF(0x3207CC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x100); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016AD02; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x100)) */

loc_0016ACC4: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x0016ACD0u); RECOMP_ABI_CALL(0x0015A8E0u, sub_0015A8E0); /* call 0x0015A8E0 */

loc_0016ACD0: ;
    MEM8(esi + 0xE9) = 1;
    goto loc_0016AD02;

loc_0016ACD9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    goto loc_0016AD02;

loc_0016ACE6: ;
    SET_LO8(eax, MEM8(esi + 0xE9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AD02; /* je: equal / zero */

loc_0016ACF0: ;
    ecx = MEM32(esi + 0xB8);
    MEM8(esi + 0xE9) = 0;
    PUSH32(esp, 0x0016AD02u); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_0016AD02: ;
    ecx = MEM32(0x51D65C);
    edx = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x13DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF460); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xB8);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016AD2Du); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_0016AD2D: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016AD39u); RECOMP_ABI_CALL(0x0016AC00u, sub_0016AC00); /* call 0x0016AC00 */

loc_0016AD39: ;
    ecx = MEM32(esi + 0xB8);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x100)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0xD4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0016ADD3; /* jnp: not parity */

loc_0016AD5A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x3207C0)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0016ADA8; /* jne: not equal / not zero */

loc_0016AD67: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016ADA8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016AD6C: ;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0xC8);
    if (CMP_EQ(_fa, _fb)) goto loc_0016AD7F; /* je: equal / zero */

loc_0016AD7C: ;
    PUSH32(esp, eax);
    goto loc_0016AD84;

loc_0016AD7F: ;
    PUSH32(esp, 0x320A80);

loc_0016AD84: ;
    PUSH32(esp, 0x0016AD89u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016AD89: ;
    PUSH32(esp, 0x0016AD8Eu); RECOMP_ABI_CALL(0x00160F10u, sub_00160F10); /* call 0x00160F10 */

loc_0016AD8E: ;
    SET_LO8(ecx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016ADC5; /* jne: not equal / not zero */

loc_0016AD95: ;
    PUSH32(esp, 0x8F05459Du);
    PUSH32(esp, 0x0016AD9Fu); RECOMP_ABI_CALL(0x00160F10u, sub_00160F10); /* call 0x00160F10 */

loc_0016AD9F: ;
    ecx = eax;
    PUSH32(esp, 0x0016ADA6u); RECOMP_ABI_CALL(0x00160F50u, sub_00160F50); /* call 0x00160F50 */

loc_0016ADA6: ;
    goto loc_0016ADC5;

loc_0016ADA8: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xD4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016ADC5; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016ADB5: ;
    ecx = MEM32(esi + 0xC8);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x0016ADC5u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016ADC5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */

loc_0016ADD3: ;
    eax = MEM32(0x51D65C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AEA8; /* je: equal / zero */

loc_0016ADE0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x9109EDFAu);
    ecx = eax + 8;
    PUSH32(esp, 0x0016ADEFu); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016ADEF: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x233B7510);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x0016AE04u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016AE04: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016AEA6; /* je: equal / zero */

loc_0016AE0E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AEA6; /* je: equal / zero */

loc_0016AE16: ;
    SET_LO8(eax, MEM8(esi + 0xE8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x3207C0)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0016AE72; /* jne: not equal / not zero */

loc_0016AE28: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016AE6E; /* jne: not equal / not zero */

loc_0016AE2D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016AE6E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016AE38: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x42200000);
    ecx = edi;
    MEM8(esi + 0xE8) = LO8(ebx);
    PUSH32(esp, 0x0016AE4Cu); RECOMP_ABI_CALL(0x0015A8E0u, sub_0015A8E0); /* call 0x0015A8E0 */

loc_0016AE4C: ;
    ecx = MEM32(esi + 0xB8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x0016AE5Eu); RECOMP_ABI_CALL(0x0015A8E0u, sub_0015A8E0); /* call 0x0015A8E0 */

loc_0016AE5E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x42200000);
    ecx = ebp;
    PUSH32(esp, 0x0016AE6Cu); RECOMP_ABI_CALL(0x0015A8E0u, sub_0015A8E0); /* call 0x0015A8E0 */

loc_0016AE6C: ;
    goto loc_0016AEA6;

loc_0016AE6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AEA6; /* je: equal / zero */

loc_0016AE72: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AEA6; /* je: equal / zero */

loc_0016AE77: ;
    edx = MEM32(esi + 0xB8);
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x100); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016AEA6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x100)) */

loc_0016AE86: ;
    ecx = edi;
    MEM8(esi + 0xE8) = 0;
    PUSH32(esp, 0x0016AE94u); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_0016AE94: ;
    ecx = MEM32(esi + 0xB8);
    PUSH32(esp, 0x0016AE9Fu); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_0016AE9F: ;
    ecx = ebp;
    PUSH32(esp, 0x0016AEA6u); RECOMP_ABI_CALL(0x0015A940u, sub_0015A940); /* call 0x0015A940 */

loc_0016AEA6: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0016AEA8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016AEB9u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016AEB9: ;
    POP32(esp, ebx);

loc_0016AEBA: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016AEC0
 * Original: 0x0016AEC0 - 0x0016AEDE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0016AEC8u); RECOMP_ABI_CALL(0x0016A2F0u, sub_0016A2F0); /* call 0x0016A2F0 */

loc_0016AEC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016AED8; /* je: equal / zero */

loc_0016AECF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016AED5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016AED5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AED8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AEE0
 * Original: 0x0016AEE0 - 0x0016AF03 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AEE0(void)
{

loc_0016AEE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016AEEDu); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016AEED: ;
    MEM32(esi) = 0x320A8C;
    MEM32(esi + 0x90) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AF10
 * Original: 0x0016AF10 - 0x0016AF1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016AF10: ;
    MEM32(ecx) = 0x320A8C;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_0016AF20
 * Original: 0x0016AF20 - 0x0016AF66 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016AF20: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0016AF62; /* ja: above (unsigned >) */

loc_0016AF2D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x16AF68); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0016AF34u) goto loc_0016AF34;
    if (_jt == 0x0016AF3Bu) goto loc_0016AF3B;
    if (_jt == 0x0016AF42u) goto loc_0016AF42;
    if (_jt == 0x0016AF49u) goto loc_0016AF49;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016AF34: ;
    PUSH32(esp, 0x66414BB6);
    goto loc_0016AF4E;

loc_0016AF3B: ;
    PUSH32(esp, 0x86DC8997u);
    goto loc_0016AF4E;

loc_0016AF42: ;
    PUSH32(esp, 0x6169BEFD);
    goto loc_0016AF4E;

loc_0016AF49: ;
    PUSH32(esp, 0x3BCA43D5);

loc_0016AF4E: ;
    PUSH32(esp, 0x0016AF53u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0016AF53: ;
    ecx = MEM32(esi + 0x90);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016AF62u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016AF62: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AF80
 * Original: 0x0016AF80 - 0x0016B03C (188 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AF80: ;
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
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x320AB4);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016AFA1u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016AFA1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016AFB8; /* je: equal / zero */

loc_0016AFA8: ;
    PUSH32(esp, 0x8A6ADBB8u);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016AFB4u); RECOMP_ABI_CALL(0x00157F80u, sub_00157F80); /* call 0x00157F80 */

loc_0016AFB4: ;
    edi = eax;
    goto loc_0016AFBA;

loc_0016AFB8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016AFBA: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016AFC9u); RECOMP_ABI_CALL(0x00158170u, sub_00158170); /* call 0x00158170 */

loc_0016AFC9: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016AFDAu); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_0016AFDA: ;
    edx = MEM32(edi + 0x54);
    eax = MEM32(esi + 0x54);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x102);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016AFF7u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016AFF7: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x90) = edi;
    ecx = MEM32(eax);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x18);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x66414BB6);
    MEM32(esi + 0x5C) = ecx;
    MEM8(esi + 0x73) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B025u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0016B025: ;
    ecx = MEM32(esi + 0x90);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B034u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016B034: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0016B040
 * Original: 0x0016B040 - 0x0016B0B6 (118 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B040: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_0016B0A1; /* je: equal / zero */

loc_0016B055: ;
    SET_LO8(eax, MEM8(esi + 0x73));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B0A1; /* je: equal / zero */

loc_0016B05C: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016B0A1; /* je: equal / zero */

loc_0016B06A: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0016B074u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B06Eu); } /* indirect call */
    }

loc_0016B074: ;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B07Fu); RECOMP_ABI_CALL(0x00083ED0u, sub_00083ED0); /* call 0x00083ED0 */

loc_0016B07F: ;
    ecx = MEM32(eax);
    eax = MEM32(esi + 0x90);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = 1;

loc_0016B0A1: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016B0AEu); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016B0AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B0C0
 * Original: 0x0016B0C0 - 0x0016B0DF (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B0C0: ;
    eax = MEM32(0x389414);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016B0DE; /* ja: above (unsigned >) */

loc_0016B0CB: ;
    eax = ZX8(MEM8(eax + 0x16B0E8));
    { uint32_t _jt = MEM32(eax * 4 + 0x16B0E0); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0016B0D9u) goto loc_0016B0D9;
    if (_jt == 0x0016B0DEu) goto loc_0016B0DE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016B0D9: ;
    g_seh_ebp = ebp; sub_0015AD50(); return; /* tail jmp 0x0015AD50 */

loc_0016B0DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B0D9
 * Original: 0x0016B0D9 - 0x0016B0DF (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B0D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B0D9: ;
    g_seh_ebp = ebp; sub_0015AD50(); return; /* tail jmp 0x0015AD50 */

    esp += 4; return; /* ret */

}

/**
 * sub_0016B0DE
 * Original: 0x0016B0DE - 0x0016B0DF (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B0DE(void)
{

loc_0016B0DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B100
 * Original: 0x0016B100 - 0x0016B130 (48 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B100: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x320A8C;
    PUSH32(esp, 0x0016B10Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016B10E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016B11E; /* je: equal / zero */

loc_0016B115: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016B11Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016B11B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B11E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B130
 * Original: 0x0016B130 - 0x0016B149 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B130(void)
{

loc_0016B130: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016B13Du); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016B13D: ;
    MEM32(esi) = 0x320AF8;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B150
 * Original: 0x0016B150 - 0x0016B15B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B150: ;
    MEM32(ecx) = 0x320AF8;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_0016B160
 * Original: 0x0016B160 - 0x0016B177 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B160: ;
    SET_LO8(eax, MEM8(ecx + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B176; /* je: equal / zero */

loc_0016B167: ;
    eax = MEM32(ecx + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B176; /* je: equal / zero */

loc_0016B171: ;
    g_seh_ebp = ebp; sub_0015AD50(); return; /* tail jmp 0x0015AD50 */

loc_0016B176: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B180
 * Original: 0x0016B180 - 0x0016B19F (31 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B180(void)
{

loc_0016B180: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x98) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B1A0
 * Original: 0x0016B1A0 - 0x0016B236 (150 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B1A0(void)
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

loc_0016B1A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016B1B3u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016B1B3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B231; /* je: equal / zero */

loc_0016B1B7: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0016B1BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B1BBu); } /* indirect call */
    }

loc_0016B1BE: ;
    ecx = eax;
    PUSH32(esp, 0x0016B1C5u); RECOMP_ABI_CALL(0x001142F0u, sub_001142F0); /* call 0x001142F0 */

loc_0016B1C5: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x94); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x94); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0016B21F; /* jnp: not parity */

loc_0016B1FF: ;
    esi = MEM32(esi + 0x90);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x320AF0); /* mulss */
    POP32(esp, edi);
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x73) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0016B21F: ;
    esi = MEM32(esi + 0x90);
    xmm0 = xmm2; /* movaps */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x73) = 1;

loc_0016B231: ;
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
 * sub_0016B240
 * Original: 0x0016B240 - 0x0016B261 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B240: ;
    eax = MEM32(ecx + 0x90);
    edx = MEM32(eax + 0x54);
    eax = MEM32(ecx + 0x54);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016B260u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016B260: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B270
 * Original: 0x0016B270 - 0x0016B2B0 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B270: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x72)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x72), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B2A1; /* je: equal / zero */

loc_0016B27D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B2A1; /* je: equal / zero */

loc_0016B281: ;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(eax + 0x54);
    edx = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016B2A1u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016B2A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0016B2ABu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016B2AB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B2B0
 * Original: 0x0016B2B0 - 0x0016B3DC (300 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B2B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x320AF4); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320B28);
    esi = ecx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B2E3u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016B2E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B2F8; /* je: equal / zero */

loc_0016B2EA: ;
    PUSH32(esp, 0xD0D0A5F3u);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B2F6u); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_0016B2F6: ;
    goto loc_0016B2FA;

loc_0016B2F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016B2FA: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    MEM32(esi + 0x90) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B31Bu); RECOMP_ABI_CALL(0x0016CAA0u, sub_0016CAA0); /* call 0x0016CAA0 */

loc_0016B31B: ;
    edx = MEM32(eax);
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
    ecx = MEM32(esi + 0x90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B349u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0016B349: ;
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B352u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016B352: ;
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B361u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016B361: ;
    eax = MEM32(esi + 0x90);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0016B390u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B38Du); } /* indirect call */
    }

loc_0016B390: ;
    eax = MEM32(esi + 0x90);
    MEM32(eax + 0x5C) = 0x42;
    MEM8(eax + 0x73) = 1;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B3B5u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_0016B3B5: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(ecx + 0x54);
    eax = MEM32(esi + 0x54);
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
    PUSH32(esp, 0x0016B3D5u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016B3D5: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B3E0
 * Original: 0x0016B3E0 - 0x0016B404 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B3E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x320AF8;
    PUSH32(esp, 0x0016B3EEu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016B3EE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016B3FE; /* je: equal / zero */

loc_0016B3F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016B3FBu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016B3FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B3FE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B410
 * Original: 0x0016B410 - 0x0016B835 (1061 bytes, 333 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B410: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF5F48854u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF5F48854u (32-bit) */
    PUSH32(esp, edi);
    ebx = esi;
    if (CMP_G(_fas, _fbs)) goto loc_0016B4C1; /* jg: greater (signed >) */

loc_0016B426: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B4BA; /* je: equal / zero */

loc_0016B42C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA237DB7Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA237DB7Cu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B489; /* jg: greater (signed >) */

loc_0016B434: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B47F; /* je: equal / zero */

loc_0016B436: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9CCC17A1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9CCC17A1u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B469; /* jg: greater (signed >) */

loc_0016B43E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B45F; /* je: equal / zero */

loc_0016B440: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B578C85u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B578C85u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B455; /* je: equal / zero */

loc_0016B448: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D4ECC9Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D4ECC9Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B475; /* je: equal / zero */

loc_0016B450: ;
    goto loc_0016B52A;

loc_0016B455: ;
    ebx = 0xCD571F99u;
    goto loc_0016B52A;

loc_0016B45F: ;
    ebx = 0xDDD8CA68u;
    goto loc_0016B52A;

loc_0016B469: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA15A488Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA15A488Fu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B52A; /* jne: not equal / not zero */

loc_0016B475: ;
    ebx = 0x5991F5AE;
    goto loc_0016B52A;

loc_0016B47F: ;
    ebx = 0xB9005A02u;
    goto loc_0016B52A;

loc_0016B489: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB608CAAAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB608CAAAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B4B3; /* je: equal / zero */

loc_0016B491: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB8B06400u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB8B06400u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B4AC; /* je: equal / zero */

loc_0016B499: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC45986B1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC45986B1u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B52A; /* jne: not equal / not zero */

loc_0016B4A5: ;
    ebx = 0x810464ADu;
    goto loc_0016B52A;

loc_0016B4AC: ;
    ebx = 0xF7FC9DF1u;
    goto loc_0016B52A;

loc_0016B4B3: ;
    ebx = 0x98CF0D72u;
    goto loc_0016B52A;

loc_0016B4BA: ;
    ebx = 0xB414F855u;
    goto loc_0016B52A;

loc_0016B4C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3EAD78D7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3EAD78D7 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B4FF; /* jg: greater (signed >) */

loc_0016B4C9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B4F8; /* je: equal / zero */

loc_0016B4CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5671CAB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5671CAB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B4F1; /* je: equal / zero */

loc_0016B4D3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x925F3EE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x925F3EE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B4EA; /* je: equal / zero */

loc_0016B4DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x282ED675) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x282ED675 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B52A; /* jne: not equal / not zero */

loc_0016B4E3: ;
    ebx = 0x63BF2A8;
    goto loc_0016B52A;

loc_0016B4EA: ;
    ebx = 0x7B826E7E;
    goto loc_0016B52A;

loc_0016B4F1: ;
    ebx = 0x557D2D67;
    goto loc_0016B52A;

loc_0016B4F8: ;
    ebx = 0xF6948CB0u;
    goto loc_0016B52A;

loc_0016B4FF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x406089A4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x406089A4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B525; /* je: equal / zero */

loc_0016B507: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42078790) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x42078790 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B51E; /* je: equal / zero */

loc_0016B50F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53FD645B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x53FD645B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B52A; /* jne: not equal / not zero */

loc_0016B517: ;
    ebx = 0x80C3BED0u;
    goto loc_0016B52A;

loc_0016B51E: ;
    ebx = 0x55934314;
    goto loc_0016B52A;

loc_0016B525: ;
    ebx = 0x312EF33A;

loc_0016B52A: ;
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0016B536u); RECOMP_ABI_CALL(0x000C6620u, sub_000C6620); /* call 0x000C6620 */

loc_0016B536: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0016B540u); RECOMP_ABI_CALL(0x000C62E0u, sub_000C62E0); /* call 0x000C62E0 */

loc_0016B540: ;
    edi = SX16(LO16(eax));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B693; /* je: equal / zero */

loc_0016B54C: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0016B554u); RECOMP_ABI_CALL(0x000C6330u, sub_000C6330); /* call 0x000C6330 */

loc_0016B554: ;
    esi = eax;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0016B55Eu); RECOMP_ABI_CALL(0x000C63E0u, sub_000C63E0); /* call 0x000C63E0 */

loc_0016B55E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B56E; /* jne: not equal / not zero */

loc_0016B562: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0016B56Au); RECOMP_ABI_CALL(0x000C6370u, sub_000C6370); /* call 0x000C6370 */

loc_0016B56A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5E1; /* je: equal / zero */

loc_0016B56E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x13 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B59D; /* jg: greater (signed >) */

loc_0016B573: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B707; /* je: equal / zero */

loc_0016B579: ;
    eax = edi + -6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016B689; /* ja: above (unsigned >) */

loc_0016B585: ;
    eax = ZX8(MEM8(eax + 0x16B84C));
    { uint32_t _jt = MEM32(eax * 4 + 0x16B838); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0016B593u) goto loc_0016B593;
    if (_jt == 0x0016B5B9u) goto loc_0016B5B9;
    if (_jt == 0x0016B689u) goto loc_0016B689;
    if (_jt == 0x0016B74Du) goto loc_0016B74D;
    if (_jt == 0x0016B76Fu) goto loc_0016B76F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016B593: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x8DC62922u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B59D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B67D; /* jg: greater (signed >) */

loc_0016B5A9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5CD; /* je: equal / zero */

loc_0016B5AB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5C3; /* je: equal / zero */

loc_0016B5B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B689; /* jne: not equal / not zero */

loc_0016B5B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x7FEA1B8C;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B5C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xF1651C6Fu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B5CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3DCF1CF1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B5D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x59CD8512;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B5E1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B62D; /* jg: greater (signed >) */

loc_0016B5E9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B623; /* je: equal / zero */

loc_0016B5EB: ;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016B689; /* ja: above (unsigned >) */

loc_0016B5F7: ;
    ecx = ZX8(MEM8(eax + 0x16B878));
    { uint32_t _jt = MEM32(ecx * 4 + 0x16B85C); /* switch: 7 entries, 6 targets */
    if (_jt == 0x0016B5C3u) goto loc_0016B5C3;
    if (_jt == 0x0016B605u) goto loc_0016B605;
    if (_jt == 0x0016B60Fu) goto loc_0016B60F;
    if (_jt == 0x0016B619u) goto loc_0016B619;
    if (_jt == 0x0016B689u) goto loc_0016B689;
    if (_jt == 0x0016B80Du) goto loc_0016B80D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016B605: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x855D2461u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B60F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x20534658;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B619: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x9567858Cu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B623: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x1BE8826F;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B62D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x800 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B671; /* jg: greater (signed >) */

loc_0016B635: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B667; /* je: equal / zero */

loc_0016B637: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B65D; /* je: equal / zero */

loc_0016B63F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x200 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B7B1; /* je: equal / zero */

loc_0016B64B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x400 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B689; /* jne: not equal / not zero */

loc_0016B653: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x586AC0B8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B65D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xA34BCAE5u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B667: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xB09C5803u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B671: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5CD; /* je: equal / zero */

loc_0016B67D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5D7; /* je: equal / zero */

loc_0016B689: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xD8F9521Cu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B693: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFBC50CD3u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFBC50CD3u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B779; /* jg: greater (signed >) */

loc_0016B69F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B689; /* je: equal / zero */

loc_0016B6A1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xABE0EC5Bu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xABE0EC5Bu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B71B; /* jg: greater (signed >) */

loc_0016B6A9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B711; /* je: equal / zero */

loc_0016B6AB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA15A488Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA15A488Fu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B6E3; /* jg: greater (signed >) */

loc_0016B6B3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B76F; /* je: equal / zero */

loc_0016B6B9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B578C85u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B578C85u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B653; /* je: equal / zero */

loc_0016B6C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D4ECC9Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D4ECC9Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B76F; /* je: equal / zero */

loc_0016B6CD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9027DFDFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9027DFDFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B82B; /* jne: not equal / not zero */

loc_0016B6D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x65C91D69;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B6E3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA237DB7Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA237DB7Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B65D; /* je: equal / zero */

loc_0016B6EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA514CB63u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA514CB63u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5C3; /* je: equal / zero */

loc_0016B6FB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAB5C91BFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xAB5C91BFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B82B; /* jne: not equal / not zero */

loc_0016B707: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x65C91D69;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B711: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xF8B7AD68u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B71B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF5F48854u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF5F48854u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B757; /* jg: greater (signed >) */

loc_0016B723: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5D7; /* je: equal / zero */

loc_0016B729: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB185D3BAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB185D3BAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5B9; /* je: equal / zero */

loc_0016B735: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB8B06400u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB8B06400u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B605; /* je: equal / zero */

loc_0016B741: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC45986B1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC45986B1u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B82B; /* jne: not equal / not zero */

loc_0016B74D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xA36CD55Cu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B757: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF82137E7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF82137E7u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B80D; /* je: equal / zero */

loc_0016B763: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF8C1CB01u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF8C1CB01u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B82B; /* jne: not equal / not zero */

loc_0016B76F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xAF904BE;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B779: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x282ED675) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x282ED675 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B7E3; /* jg: greater (signed >) */

loc_0016B781: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B619; /* je: equal / zero */

loc_0016B787: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x165BBDE9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x165BBDE9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B7C5; /* jg: greater (signed >) */

loc_0016B78F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B7BB; /* je: equal / zero */

loc_0016B791: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5671CAB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5671CAB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B653; /* je: equal / zero */

loc_0016B79D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x925F3EE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x925F3EE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B623; /* je: equal / zero */

loc_0016B7A9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE2654A5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE2654A5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B82B; /* jne: not equal / not zero */

loc_0016B7B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xF3009690u;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B7BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3F23584A;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B7C5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1719D64A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1719D64A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5B9; /* je: equal / zero */

loc_0016B7D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18C9AC49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18C9AC49 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B82B; /* jne: not equal / not zero */

loc_0016B7D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xAF904BE;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B7E3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49E25C76) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x49E25C76 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016B817; /* jg: greater (signed >) */

loc_0016B7EB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B605; /* je: equal / zero */

loc_0016B7F1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3EAD78D7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3EAD78D7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B60F; /* je: equal / zero */

loc_0016B7FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x406089A4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x406089A4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B82B; /* je: equal / zero */

loc_0016B805: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42078790) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x42078790 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B82B; /* jne: not equal / not zero */

loc_0016B80D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xD78C27DDu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B817: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53FD645B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x53FD645B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B80D; /* je: equal / zero */

loc_0016B81F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DEC57A3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5DEC57A3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5B9; /* je: equal / zero */

loc_0016B82B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xC69700EEu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B8A0
 * Original: 0x0016B8A0 - 0x0016B8C0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B8A0(void)
{

loc_0016B8A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016B8ADu); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016B8AD: ;
    MEM32(esi) = 0x320B6C;
    MEM8(esi + 0x2C8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B8D0
 * Original: 0x0016B8D0 - 0x0016B8D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B8D0: ;
    g_seh_ebp = ebp; sub_0015A960(); return; /* tail jmp 0x0015A960 */

}

/**
 * sub_0016B8E0
 * Original: 0x0016B8E0 - 0x0016B8E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B8E0: ;
    g_seh_ebp = ebp; sub_0015AD50(); return; /* tail jmp 0x0015AD50 */

}

/**
 * sub_0016B8F0
 * Original: 0x0016B8F0 - 0x0016B930 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B8F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0016B8FDu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016B8FD: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0xE;
    goto loc_0016B910;

    /* nop */

loc_0016B910: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x0016B91Cu); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_0016B91C: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016B927u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016B927: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016B910; /* jne: not equal / not zero */

loc_0016B92D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B930
 * Original: 0x0016B930 - 0x0016B971 (65 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B930: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016B94Bu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0016B94B: ;
    ecx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + ebx) = 0;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0016B962u); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_0016B962: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016B96Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B96Au); } /* indirect call */
    }

loc_0016B96D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B980
 * Original: 0x0016B980 - 0x0016BD5E (990 bytes, 304 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0016B980: ;
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
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2C8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0016BB13; /* jne: not equal / not zero */

loc_0016B99F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x2C8) = 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0016B9B0: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320BA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B9C4u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016B9C4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B9DB; /* je: equal / zero */

loc_0016B9CB: ;
    ecx = edi + 0x6DBEE49C;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B9D9u); RECOMP_ABI_CALL(0x0015D830u, sub_0015D830); /* call 0x0015D830 */

loc_0016B9D9: ;
    goto loc_0016B9DD;

loc_0016B9DB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016B9DD: ;
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esi + edi * 4 + 0x90) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFD0B0FE4u);
    MEM32(esp + 0x28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016B9FFu); RECOMP_ABI_CALL(0x00157730u, sub_00157730); /* call 0x00157730 */

loc_0016B9FF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BA06u); RECOMP_ABI_CALL(0x001579A0u, sub_001579A0); /* call 0x001579A0 */

loc_0016BA06: ;
    ecx = MEM32(esi + edi * 4 + 0x90);
    xmm0 = XMM_SCALAR(MEMF(0x30BF30)); /* movss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esi + edi * 4 + 0x90);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BA2Eu); RECOMP_ABI_CALL(0x0015DA00u, sub_0015DA00); /* call 0x0015DA00 */

loc_0016BA2E: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(esi + edi * 4 + 0x90);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x18) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = 1;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + edi * 4 + 0x90);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BA60u); RECOMP_ABI_CALL(0x0015DA50u, sub_0015DA50); /* call 0x0015DA50 */

loc_0016BA60: ;
    ecx = MEM32(esi + edi * 4 + 0x90);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BA6Eu); RECOMP_ABI_CALL(0x0015D960u, sub_0015D960); /* call 0x0015D960 */

loc_0016BA6E: ;
    ecx = MEM32(esi + edi * 4 + 0x90);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BA7Cu); RECOMP_ABI_CALL(0x0015D900u, sub_0015D900); /* call 0x0015D900 */

loc_0016BA7C: ;
    ecx = MEM32(esi + edi * 4 + 0x90);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BA93u); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_0016BA93: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = MEM32(esi + edi * 4 + 0x90);
    ecx = MEM32(eax + 0x54);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0016BAC7; /* jne: not equal / not zero */

loc_0016BAA5: ;
    eax = MEM32(esi + 0x90);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x48);
    MEM8(eax + 0x73) = 1;
    edx = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_0016BAF2;

loc_0016BAC7: ;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x73) = 1;
    eax = MEM32(esi + edi * 4 + 0x90);
    ecx = MEM32(eax + 0x54);
    edx = MEM32(esi + edi * 4 + 0x8C);
    eax = MEM32(edx + 0x54);
    PUSH32(esp, 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);

loc_0016BAF2: ;
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BB00u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016BB00: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B9B0; /* jl: less (signed <) */

loc_0016BB0A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016BB13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016BB10u); } /* indirect call */
    }

loc_0016BB13: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BB1Au); RECOMP_ABI_CALL(0x0016B8F0u, sub_0016B8F0); /* call 0x0016B8F0 */

loc_0016BB1A: ;
    edi = MEM32(esi + 0x90);
    eax = esi + 0xC8;
    MEM8(esp + 0x20) = 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    ecx = esi + 0x90;
    MEM32(esp + 0x10) = eax;
    ebx = eax;
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016BD57; /* je: equal / zero */

loc_0016BB44: ;
    MEM32(esp + 0x14) = ecx;
    goto loc_0016BB50;

loc_0016BB4A: ;
    eax = MEM32(esp + 0x10);
    edi = edi;

loc_0016BB50: ;
    PUSH32(esp, 0x31AC28);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BB5Bu); RECOMP_ABI_CALL(0x002BE150u, sub_002BE150); /* call 0x002BE150 */

loc_0016BB5B: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x320B98);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BB6Eu); RECOMP_ABI_CALL(0x002BE150u, sub_002BE150); /* call 0x002BE150 */

loc_0016BB6E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016BC33; /* je: equal / zero */

loc_0016BB7D: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016BB8D; /* jb: below (unsigned <) */

loc_0016BB85: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016BC41; /* jne: not equal / not zero */

loc_0016BB8D: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BB9Fu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0016BB9F: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + edx + 0x24) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BBB7u); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_0016BBB7: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016BBC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016BBBFu); } /* indirect call */
    }

loc_0016BBC2: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x4C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016BBD3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edi + 0x4C)) */

loc_0016BBCD: ;
    ebx = MEM32(esp + 0x10);
    goto loc_0016BC10;

loc_0016BBD3: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BBE9u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0016BBE9: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    MEM8(esp + ecx + 0x20) = 0;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BC01u); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_0016BC01: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0016BC0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016BC09u); } /* indirect call */
    }

loc_0016BC0C: ;
    ebx = MEM32(esp + 0x18);

loc_0016BC10: ;
    PUSH32(esp, 1);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(esp + 0x18) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BC20u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016BC20: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    goto loc_0016BD4A;

loc_0016BC33: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BCEE; /* je: equal / zero */

loc_0016BC3F: ;
    ecx = eax;

loc_0016BC41: ;
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BC55u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0016BC55: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + edx + 0x24) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BC6Du); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_0016BC6D: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016BC78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016BC75u); } /* indirect call */
    }

loc_0016BC78: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x4C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016BC91; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edi + 0x4C)) */

loc_0016BC83: ;
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x18) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0016BD46;

loc_0016BC91: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BCA7u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0016BCA7: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    MEM8(esp + ecx + 0x20) = 0;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BCBFu); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_0016BCBF: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0016BCCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016BCC7u); } /* indirect call */
    }

loc_0016BCCA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BCD5u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016BCD5: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ebx;
    goto loc_0016BD4A;

loc_0016BCEE: ;
    eax = ebx;
    edx = eax + 1;

loc_0016BCF3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016BCF3; /* jne: not equal / not zero */

loc_0016BCFA: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BD14u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0016BD14: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + edx + 0x24) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BD2Cu); RECOMP_ABI_CALL(0x0015E1C0u, sub_0015E1C0); /* call 0x0015E1C0 */

loc_0016BD2C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016BD37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016BD34u); } /* indirect call */
    }

loc_0016BD37: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016BD42u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016BD42: ;
    eax = MEM32(esp + 0x10);

loc_0016BD46: ;
    MEM32(esp + 0x10) = eax;

loc_0016BD4A: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016BB4A; /* jne: not equal / not zero */

loc_0016BD57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016BD60
 * Original: 0x0016BD60 - 0x0016BDC7 (103 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016BD60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016BDC3; /* je: equal / zero */

loc_0016BD6B: ;
    ecx = eax;
    PUSH32(esp, edi);
    edi = ecx + 1;

loc_0016BD71: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016BD71; /* jne: not equal / not zero */

loc_0016BD78: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0016BDAA; /* jl: less (signed <) */

loc_0016BD83: ;
    PUSH32(esp, 0x1FF);
    PUSH32(esp, eax);
    eax = esi + 0xC8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016BD95u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0016BD95: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM8(esi + 0x2C7) = 0;
    PUSH32(esp, 0x0016BDA6u); RECOMP_ABI_CALL(0x0016B980u, sub_0016B980); /* call 0x0016B980 */

loc_0016BDA6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0016BDAA: ;
    edx = esi + 0xC8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0016BDB2: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016BDB2; /* jne: not equal / not zero */

loc_0016BDBC: ;
    ecx = esi;
    PUSH32(esp, 0x0016BDC3u); RECOMP_ABI_CALL(0x0016B980u, sub_0016B980); /* call 0x0016B980 */

loc_0016BDC3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016BDD0
 * Original: 0x0016BDD0 - 0x0016BDF4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016BDD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x320B6C;
    PUSH32(esp, 0x0016BDDEu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016BDDE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016BDEE; /* je: equal / zero */

loc_0016BDE5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016BDEBu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016BDEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016BDEE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016BE00
 * Original: 0x0016BE00 - 0x0016BE0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016BE00: ;
    MEM32(ecx) = 0x320BF4;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_0016BE10
 * Original: 0x0016BE10 - 0x0016BE7B (107 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BE10(void)
{

loc_0016BE10: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x314); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x310); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + 0x314); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x310); /* mulss */
    ecx = MEM32(ecx + 0x98);
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm4.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016BE78u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016BE78: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016BE80
 * Original: 0x0016BE80 - 0x0016BEC7 (71 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BE80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016BE80: ;
    eax = MEM32(ecx + 0x9C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x98);
    ecx = MEM32(eax + ecx + 0xAC);
    eax = ecx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016BEC2; /* ja: above (unsigned >) */

loc_0016BE9B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x16BEC8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0016BEA2u) goto loc_0016BEA2;
    if (_jt == 0x0016BEAAu) goto loc_0016BEAA;
    if (_jt == 0x0016BEB2u) goto loc_0016BEB2;
    if (_jt == 0x0016BEBAu) goto loc_0016BEBA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016BEA2: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_0016BEAA: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0016BEB2: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_0016BEBA: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

loc_0016BEC2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016BEE0
 * Original: 0x0016BEE0 - 0x0016BEE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016BEE0: ;
    g_seh_ebp = ebp; sub_0015AD50(); return; /* tail jmp 0x0015AD50 */

}

/**
 * sub_0016BEF0
 * Original: 0x0016BEF0 - 0x0016BF96 (166 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BEF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016BEF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016BEFDu); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016BEFD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x320BF4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x138) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x13C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1D0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x268) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x26C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x308) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x304) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x300) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    MEM32(esi + 0x350) = eax;
    MEMF(esi + 0x310) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x314) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016BFA0
 * Original: 0x0016BFA0 - 0x0016C088 (232 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016BFA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x320C20);
    edi = ecx;
    PUSH32(esp, 0x0016BFB8u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016BFB8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BFCD; /* je: equal / zero */

loc_0016BFBF: ;
    PUSH32(esp, 0x554D8BCA);
    ecx = eax;
    PUSH32(esp, 0x0016BFCBu); RECOMP_ABI_CALL(0x00157F80u, sub_00157F80); /* call 0x00157F80 */

loc_0016BFCB: ;
    goto loc_0016BFCF;

loc_0016BFCD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016BFCF: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(edi + 0x90) = eax;
    PUSH32(esp, 0x0016BFE6u); RECOMP_ABI_CALL(0x00158170u, sub_00158170); /* call 0x00158170 */

loc_0016BFE6: ;
    eax = MEM32(0x51D65C);
    esi = eax + 8;
    PUSH32(esp, 0xE3163676u);
    ecx = esi;
    PUSH32(esp, 0x0016BFFAu); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016BFFA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0016C001u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016BFFEu); } /* indirect call */
    }

loc_0016C001: ;
    PUSH32(esp, 0xF792D001u);
    ecx = esi;
    MEM32(edi + 0x94) = eax;
    PUSH32(esp, 0x0016C013u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016C013: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C05A; /* je: equal / zero */

loc_0016C017: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0016C01Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C01Bu); } /* indirect call */
    }

loc_0016C01E: ;
    PUSH32(esp, 0x7627D29D);
    ecx = esi;
    MEM32(edi + 0x98) = eax;
    PUSH32(esp, 0x0016C030u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016C030: ;
    PUSH32(esp, 0xECB9B42Au);
    ecx = esi;
    MEM32(edi + 0x318) = eax;
    PUSH32(esp, 0x0016C042u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016C042: ;
    PUSH32(esp, 0x83316C75u);
    ecx = esi;
    MEM32(edi + 0x31C) = eax;
    PUSH32(esp, 0x0016C054u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016C054: ;
    MEM32(edi + 0x320) = eax;

loc_0016C05A: ;
    eax = MEM32(edi + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016C06Au); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_0016C06A: ;
    ecx = MEM32(edi + 0x90);
    edx = MEM32(ecx + 0x54);
    eax = MEM32(edi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016C083u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016C083: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016C090
 * Original: 0x0016C090 - 0x0016C113 (131 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ecx + 0x98);
    MEM32(eax + 0x58) = 0;
    SET_LO8(edx, 1);
    MEM8(eax + 0x73) = LO8(edx);
    eax = MEM32(ecx + 0x98);
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x30) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(edx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016C120
 * Original: 0x0016C120 - 0x0016C60F (1263 bytes, 303 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0016C120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF020); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x9C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x98);
    _fca = xmm2.f[0]; _fcb = MEMF(eax + esi + 0xA0); /* comiss */
    PUSH32(esp, edi);
    edi = eax + esi + 0xA0;
    MEMF(ebp + 8) = xmm1.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_0016C606; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs MEMF(eax + esi + 0xA0)) */

loc_0016C164: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C243; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0016C179: ;
    eax = MEM32(esi + 0x9C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x90);
    MEM32(esi + 0x9C) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x98);
    xmm0 = XMM_SCALAR(MEMF(eax + esi + 0xA0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    edi = eax + esi + 0xA0;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C1E4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0016C1B2: ;
    edx = edi + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C1BBu); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016C1BB: ;
    ecx = MEM32(esi + 0x94);
    eax = edi + 0x50;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C1CAu); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016C1CA: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C1D5u); RECOMP_ABI_CALL(0x0016BE80u, sub_0016BE80); /* call 0x0016BE80 */

loc_0016C1D5: ;
    MEM32(esi + 0x350) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0016C1E4: ;
    PUSH32(esp, 0x3021CE);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C1EEu); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016C1EE: ;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, 0x3021CE);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C1FEu); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016C1FE: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C606; /* je: equal / zero */

loc_0016C20C: ;
    edx = MEM32(esi + 0x300);
    MEM32(eax + 0x30) = edx;
    ecx = MEM32(esi + 0x304);
    MEM32(eax + 0x34) = ecx;
    edx = MEM32(esi + 0x308);
    MEM32(eax + 0x38) = edx;
    PUSH32(esp, 0);
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C23Au); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016C23A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0016C243: ;
    eax = MEM32(edi + 0x90);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C5E6; /* je: equal / zero */

loc_0016C253: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C5E6; /* je: equal / zero */

loc_0016C261: ;
    _fa = (uint32_t)(MEM32(esi + 0x318)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x318), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C5E6; /* je: equal / zero */

loc_0016C26D: ;
    _fa = (uint32_t)(MEM32(esi + 0x31C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x31C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C5E6; /* je: equal / zero */

loc_0016C279: ;
    _fa = (uint32_t)(MEM32(esi + 0x320)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x320), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C5E6; /* je: equal / zero */

loc_0016C285: ;
    eax = MEM32(esi + 0x9C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C291u); RECOMP_ABI_CALL(0x0015E910u, sub_0015E910); /* call 0x0015E910 */

loc_0016C291: ;
    eax = MEM32(esi + 0x350);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM8(esp + 0x18) = LO8(ebx);
    if (CMP_A(_fa, _fb)) goto loc_0016C5D4; /* ja: above (unsigned >) */

loc_0016C2A4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x16C610); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0016C2ABu) goto loc_0016C2AB;
    if (_jt == 0x0016C2F1u) goto loc_0016C2F1;
    if (_jt == 0x0016C36Bu) goto loc_0016C36B;
    if (_jt == 0x0016C412u) goto loc_0016C412;
    if (_jt == 0x0016C488u) goto loc_0016C488;
    if (_jt == 0x0016C4FEu) goto loc_0016C4FE;
    if (_jt == 0x0016C567u) goto loc_0016C567;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0016C2AB: ;
    eax = MEM32(esi + 0x98);
    MEM32(eax + 0x58) = ebx;
    ecx = esi + 0x300;
    SET_LO8(ebx, 1);
    MEM8(eax + 0x73) = LO8(ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x98);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C2CBu); RECOMP_ABI_CALL(0x000CF470u, sub_000CF470); /* call 0x000CF470 */

loc_0016C2CB: ;
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x314), g_mxcsr, 1); /* cvttss2si */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x310), g_mxcsr, 1); /* cvttss2si */
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C2E8u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016C2E8: ;
    MEM8(esp + 0x18) = LO8(ebx);
    goto loc_0016C5D4;

loc_0016C2F1: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x320BE8); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C5D4; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edi)) */

loc_0016C307: ;
    eax = MEM32(esi + 0x31C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x350) = 6;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, edx);
    ecx = esi + 0x330;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C34Fu); RECOMP_ABI_CALL(0x000156B0u, sub_000156B0); /* call 0x000156B0 */

loc_0016C34F: ;
    eax = esi + 0x300;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esi + 0x340;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C366u); RECOMP_ABI_CALL(0x000156B0u, sub_000156B0); /* call 0x000156B0 */

loc_0016C366: ;
    goto loc_0016C5D4;

loc_0016C36B: ;
    xmm0 = XMM_SCALAR(MEMF(0x320BE8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C5CF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edi)) */

loc_0016C37C: ;
    edx = esi + 0x300;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esi + 0x330;
    MEM32(esi + 0x350) = 5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C39Du); RECOMP_ABI_CALL(0x000156B0u, sub_000156B0); /* call 0x000156B0 */

loc_0016C39D: ;
    eax = MEM32(edi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C3CE; /* je: equal / zero */

loc_0016C3A7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    PUSH32(esp, edx);
    goto loc_0016C3FC;

loc_0016C3CE: ;
    eax = MEM32(esi + 0x318);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);

loc_0016C3FC: ;
    ecx = esi + 0x340;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C40Du); RECOMP_ABI_CALL(0x000156B0u, sub_000156B0); /* call 0x000156B0 */

loc_0016C40D: ;
    goto loc_0016C5CF;

loc_0016C412: ;
    xmm0 = XMM_SCALAR(MEMF(0x320BE8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C5CF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edi)) */

loc_0016C423: ;
    edx = esi + 0x300;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esi + 0x330;
    MEM32(esi + 0x350) = 5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C444u); RECOMP_ABI_CALL(0x000156B0u, sub_000156B0); /* call 0x000156B0 */

loc_0016C444: ;
    eax = MEM32(esi + 0x31C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, edx);
    ecx = esi + 0x340;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C483u); RECOMP_ABI_CALL(0x000156B0u, sub_000156B0); /* call 0x000156B0 */

loc_0016C483: ;
    goto loc_0016C5CF;

loc_0016C488: ;
    xmm0 = XMM_SCALAR(MEMF(0x320BE8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C5CF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edi)) */

loc_0016C499: ;
    eax = esi + 0x300;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esi + 0x330;
    MEM32(esi + 0x350) = 5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C4BAu); RECOMP_ABI_CALL(0x000156B0u, sub_000156B0); /* call 0x000156B0 */

loc_0016C4BA: ;
    eax = MEM32(esi + 0x320);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esi + 0x340;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C4F9u); RECOMP_ABI_CALL(0x000156B0u, sub_000156B0); /* call 0x000156B0 */

loc_0016C4F9: ;
    goto loc_0016C5CF;

loc_0016C4FE: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x320BE8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x319278); /* mulss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x320BEC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C540; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016C534: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x350) = ebx;

loc_0016C540: ;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3E99999A);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C556u); RECOMP_ABI_CALL(0x0016BE10u, sub_0016BE10); /* call 0x0016BE10 */

loc_0016C556: ;
    PUSH32(esp, edi);
    ecx = esi + 0x340;
    PUSH32(esp, ecx);
    edx = esi + 0x330;
    PUSH32(esp, edx);
    goto loc_0016C5C8;

loc_0016C567: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x320BE8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x319278); /* mulss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x320BEC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C5A3; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016C59D: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0016C5A3: ;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C5B9u); RECOMP_ABI_CALL(0x0016BE10u, sub_0016BE10); /* call 0x0016BE10 */

loc_0016C5B9: ;
    PUSH32(esp, edi);
    eax = esi + 0x340;
    PUSH32(esp, eax);
    ecx = esi + 0x330;
    PUSH32(esp, ecx);

loc_0016C5C8: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C5CFu); RECOMP_ABI_CALL(0x0016C090u, sub_0016C090); /* call 0x0016C090 */

loc_0016C5CF: ;
    MEM8(esp + 0x18) = 1;

loc_0016C5D4: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C5E6u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016C5E6: ;
    edi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C5F5u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016C5F5: ;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C606; /* je: equal / zero */

loc_0016C5FF: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0016C606u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C603u); } /* indirect call */
    }

loc_0016C606: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016C610
 * Original: 0x0016C610 - 0x0016C630 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C610: ;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    esp += 26; return; /* ret 22 */

}

/**
 * sub_0016C630
 * Original: 0x0016C630 - 0x0016CA6A (1082 bytes, 281 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C630(void)
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

loc_0016C630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FEC54); /* ucomiss */
    PUSH32(esp, ebx);
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016C69C; /* jp: parity */

loc_0016C650: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x138) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x13C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1D0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x268) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x26C) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

loc_0016C69C: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C79E; /* je: equal / zero */

loc_0016C6AA: ;
    fp_push(MEMF(esi + 0x304)); /* fld float */
    fp_push(MEMF(esi + 0x300)); /* fld float */
    fp_push(MEMF(esi + 0x308)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2FF028)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0016C70E; /* ja: above (unsigned >) */

loc_0016C6E0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    ecx = esp + 0x10;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C70Au); RECOMP_ABI_CALL(0x000157B0u, sub_000157B0); /* call 0x000157B0 */

loc_0016C70A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C75C; /* je: equal / zero */

loc_0016C70E: ;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0016C71Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C71Au); } /* indirect call */
    }

loc_0016C71D: ;
    ecx = MEM32(esi + 0x98);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016C72Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C729u); } /* indirect call */
    }

loc_0016C72C: ;
    eax = MEM32(esi + 0x98);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x300) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x304) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x308) = xmm2.f[0]; /* movss */

loc_0016C75C: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x310)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016C79E; /* jp: parity */

loc_0016C775: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x314)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016C79E; /* jp: parity */

loc_0016C786: ;
    eax = MEM32(esi + 0x98);
    ecx = MEM32(eax + 0x4C);
    MEM32(esi + 0x310) = ecx;
    edx = MEM32(eax + 0x50);
    MEM32(esi + 0x314) = edx;

loc_0016C79E: ;
    fp_push(MEMD(0x30FE50)); /* fld double */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    fp_push(MEMF(esi + 0xA0)); /* fld float */
    MEM8(esp + 0xF) = LO8(edx);
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0016C7BB; /* jbe: below or equal (unsigned <=) */

loc_0016C7B6: ;
    MEM8(esp + 0xF) = 1;

loc_0016C7BB: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x320BEC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C7E2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016C7D0: ;
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    SET_LO8(edx, 1);

loc_0016C7E2: ;
    fp_push(MEMD(0x30FE50)); /* fld double */
    fp_push(MEMF(esi + 0x138)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0016C7F9; /* jbe: below or equal (unsigned <=) */

loc_0016C7F4: ;
    MEM8(esp + 0xF) = 1;

loc_0016C7F9: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x138)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C818; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016C806: ;
    MEMF(esi + 0x138) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x13C) = xmm0.f[0]; /* movss */
    SET_LO8(edx, 1);

loc_0016C818: ;
    fp_push(MEMD(0x30FE50)); /* fld double */
    fp_push(MEMF(esi + 0x1D0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0016C82F; /* jbe: below or equal (unsigned <=) */

loc_0016C82A: ;
    MEM8(esp + 0xF) = 1;

loc_0016C82F: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1D0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C84E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016C83C: ;
    MEMF(esi + 0x1D0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */
    SET_LO8(edx, 1);

loc_0016C84E: ;
    fp_push(MEMD(0x30FE50)); /* fld double */
    fp_push(MEMF(esi + 0x268)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0016C865; /* jbe: below or equal (unsigned <=) */

loc_0016C860: ;
    MEM8(esp + 0xF) = 1;

loc_0016C865: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x268)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016C884; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016C872: ;
    MEMF(esi + 0x268) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x26C) = xmm0.f[0]; /* movss */
    SET_LO8(edx, 1);

loc_0016C884: ;
    ecx = MEM32(esi + 0x9C);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    /* nop */

loc_0016C890: ;
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x98);
    _fca = xmm2.f[0]; _fcb = MEMF(edi + esi + 0xA0); /* comiss */
    if ((_fca >= _fcb)) goto loc_0016C8B4; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs MEMF(edi + esi + 0xA0)) */

loc_0016C8A2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016C890; /* jne: not equal / not zero */

loc_0016C8B2: ;
    goto loc_0016C8BB;

loc_0016C8B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0016C8D5; /* jne: not equal / not zero */

loc_0016C8BB: ;
    ebx = MEM32(esi + 0x9C);
    eax = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x9C) = eax;

loc_0016C8D5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    xmm1 = xmm0; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_0016C8E1; /* jne: not equal / not zero */

loc_0016C8DC: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */

loc_0016C8E1: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x98);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    edi = eax + esi;
    MEMF(edi + 0xA0) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0016C8FD; /* jne: not equal / not zero */

loc_0016C8F8: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */

loc_0016C8FD: ;
    ecx = MEM32(ebp + 0x18);
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(edi + 0xA4) = xmm0.f[0]; /* movss */
    MEM32(edi + 0xAC) = ecx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0016CA61; /* jnp: not parity */

loc_0016C91B: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x3F);
    eax = edi + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C92Du); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0016C92D: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x3F);
    PUSH32(esp, eax);
    ecx = edi + 0xF0;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C93Fu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0016C93F: ;
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x10);
    edx = ebx + 2;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x98);
    MEM32(edi + 0x134) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x27));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(edi + 0xEF) = 0;
    MEM8(edi + 0x12F) = 0;
    MEM32(edx + esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0016C9F5; /* jne: not equal / not zero */

loc_0016C974: ;
    ecx = MEM32(esi + 0x90);
    eax = edi + 0xB0;
    PUSH32(esp, eax);
    MEM32(esi + 0x9C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C98Cu); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016C98C: ;
    edx = MEM32(esi + 0x9C);
    ecx = MEM32(esi + 0x94);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x98);
    eax = edx + esi + 0xF0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C9ABu); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016C9AB: ;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016C9B6u); RECOMP_ABI_CALL(0x0016BE80u, sub_0016BE80); /* call 0x0016BE80 */

loc_0016C9B6: ;
    MEM32(esi + 0x350) = eax;
    eax = MEM32(esi + 0x98);
    MEM32(eax + 0x58) = 0;
    MEM8(eax + 0x73) = 1;
    eax = MEM32(esi + 0x98);
    edx = MEM32(esi + 0x300);
    MEM32(eax + 0x30) = edx;
    ecx = MEM32(esi + 0x304);
    MEM32(eax + 0x34) = ecx;
    edx = MEM32(esi + 0x308);
    MEM32(eax + 0x38) = edx;
    MEM8(eax + 0x73) = 1;
    eax = MEM32(ebp + 0x10);

loc_0016C9F5: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CA61; /* je: equal / zero */

loc_0016C9FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CA61; /* je: equal / zero */

loc_0016CA03: ;
    xmm0 = XMM_SCALAR(MEMF(0x320BE8)); /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(edi + 0xA8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016CA1Eu); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0016CA1E: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CA58; /* je: equal / zero */

loc_0016CA29: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = eax;
    ecx = MEM32(esi + 0x98);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016CA58u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0016CA58: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016CA61u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016CA61: ;
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
 * sub_0016CA70
 * Original: 0x0016CA70 - 0x0016CA94 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CA70: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x320BF4;
    PUSH32(esp, 0x0016CA7Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016CA7E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016CA8E; /* je: equal / zero */

loc_0016CA85: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016CA8Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016CA8B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016CA8E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016CAA0
 * Original: 0x0016CAA0 - 0x0016CAD7 (55 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CAA0(void)
{

loc_0016CAA0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(eax) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0016CAE0
 * Original: 0x0016CAE0 - 0x0016CAE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CAE0(void)
{

loc_0016CAE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016CAF0
 * Original: 0x0016CAF0 - 0x0016CB43 (83 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CAF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016CAFDu); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016CAFD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, 1);
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM8(esi + 0x9D) = LO8(eax);
    MEM8(esi + 0x9E) = LO8(eax);
    MEM8(esi + 0x9F) = LO8(eax);
    MEM32(esi + 0xA4) = eax;
    MEM32(esi) = 0x320C68;
    MEM8(esi + 0xA0) = LO8(ecx);
    MEM8(esi + 0xA8) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016CB50
 * Original: 0x0016CB50 - 0x0016CB5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CB50: ;
    MEM32(ecx) = 0x320C68;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_0016CB60
 * Original: 0x0016CB60 - 0x0016CBC3 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CB60: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x90);
    edx = MEM32(eax + 0x48);
    MEM8(eax + 0x48) = LO8(edx);
    MEM8(eax + 0x49) = HI8(edx);
    MEM8(eax + 0x4B) = 0;
    MEM32(esp) = edx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(edx);
    MEM8(eax + 0x73) = 1;
    eax = MEM32(ecx + 0x94);
    edx = MEM32(eax + 0x48);
    MEM8(eax + 0x48) = LO8(edx);
    MEM8(eax + 0x49) = HI8(edx);
    MEM8(eax + 0x4B) = 0;
    MEM32(esp) = edx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(edx);
    MEM8(eax + 0x73) = 1;
    eax = MEM32(ecx + 0x98);
    ecx = MEM32(eax + 0x48);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = 0;
    MEM8(eax + 0x73) = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016CBD0
 * Original: 0x0016CBD0 - 0x0016CE74 (676 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CBD0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320D20);
    esi = ecx;
    PUSH32(esp, 0x0016CBECu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016CBEC: ;
    ebx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CC03; /* je: equal / zero */

loc_0016CBF7: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0016CBFFu); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_0016CBFF: ;
    edi = eax;
    goto loc_0016CC05;

loc_0016CC03: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016CC05: ;
    eax = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016CC10u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0016CC10: ;
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
    PUSH32(esp, 0x0016CC3Du); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0016CC3D: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0016CC46u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016CC46: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x50), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x4C), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0016CC59u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016CC59: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016CC67u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_0016CC67: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x110);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016CC84u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016CC84: ;
    ecx = edi;
    MEM32(esi + 0x90) = edi;
    PUSH32(esp, 0x0016CC91u); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_0016CC91: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    ecx = edi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016CCABu); RECOMP_ABI_CALL(0x0015E8D0u, sub_0015E8D0); /* call 0x0015E8D0 */

loc_0016CCAB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    PUSH32(esp, 0x400);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0x100);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, 0x320CD8);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016CCD2u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016CCD2: ;
    ebx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CCE9; /* je: equal / zero */

loc_0016CCDD: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0016CCE5u); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_0016CCE5: ;
    edi = eax;
    goto loc_0016CCEB;

loc_0016CCE9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016CCEB: ;
    edx = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016CCF6u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0016CCF6: ;
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
    PUSH32(esp, 0x0016CD23u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0016CD23: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0016CD2Cu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016CD2C: ;
    ecx = edi;
    PUSH32(esp, 0x0016CD33u); RECOMP_ABI_CALL(0x0015E8D0u, sub_0015E8D0); /* call 0x0015E8D0 */

loc_0016CD33: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0016CD49u); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_0016CD49: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0016CD5Fu); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016CD5F: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016CD6Du); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_0016CD6D: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x110);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016CD8Au); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016CD8A: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320C90);
    MEM32(esi + 0x94) = edi;
    PUSH32(esp, 0x0016CDA4u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016CDA4: ;
    ebx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CDBB; /* je: equal / zero */

loc_0016CDAF: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0016CDB7u); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_0016CDB7: ;
    edi = eax;
    goto loc_0016CDBD;

loc_0016CDBB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016CDBD: ;
    edx = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016CDC8u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0016CDC8: ;
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
    PUSH32(esp, 0x0016CDF5u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0016CDF5: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0016CDFEu); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016CDFE: ;
    ecx = edi;
    PUSH32(esp, 0x0016CE05u); RECOMP_ABI_CALL(0x0015E8D0u, sub_0015E8D0); /* call 0x0015E8D0 */

loc_0016CE05: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0016CE1Bu); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_0016CE1B: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0016CE31u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016CE31: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016CE3Fu); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_0016CE3F: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x110);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016CE5Cu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016CE5C: ;
    ecx = esi;
    MEM32(esi + 0x98) = edi;
    PUSH32(esp, 0x0016CE69u); RECOMP_ABI_CALL(0x0016CB60u, sub_0016CB60); /* call 0x0016CB60 */

loc_0016CE69: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016CE80
 * Original: 0x0016CE80 - 0x0016D099 (537 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CE80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX8(MEM8(esi + 0x9C));
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esi + 0x90);
    eax = MEM32(ecx + 0x48);
    ebx = edx;
    ebx = ebx >> 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(esi + 0x9D));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0016CF01; /* je: equal / zero */

loc_0016CEB4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016CEBDu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016CEBD: ;
    ecx = MEM32(0x51D65C);
    edi = MEM32(ecx + 0x35BC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CEDA; /* je: equal / zero */

loc_0016CECD: ;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x0016CED6u); RECOMP_ABI_CALL(0x0015AF60u, sub_0015AF60); /* call 0x0015AF60 */

loc_0016CED6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CEF2; /* je: equal / zero */

loc_0016CEDA: ;
    ecx = ZX8(MEM8(esp + 0x13));
    eax = ZX8(LO8(ebx));
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016CEFD; /* jle: less or equal (signed <=) */

loc_0016CEEA: ;
    SET_LO8(eax, MEM8(esi + 0x9C));
    goto loc_0016CF1E;

loc_0016CEF2: ;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x0016CEFBu); RECOMP_ABI_CALL(0x0015AF30u, sub_0015AF30); /* call 0x0015AF30 */

loc_0016CEFB: ;
    goto loc_0016CF1E;

loc_0016CEFD: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0016CF1E;

loc_0016CF01: ;
    SET_LO16(eax, MEM16(esp + 0x12));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(ebx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016CF1A; /* ja: above (unsigned >) */

loc_0016CF0A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(esp + 0x17) = 0;
    PUSH32(esp, 0x0016CF18u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016CF18: ;
    goto loc_0016CF22;

loc_0016CF1A: ;
    SET_LO8(eax, HI8(eax));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_0016CF1E: ;
    MEM8(esp + 0xF) = LO8(eax);

loc_0016CF22: ;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(esp + 0x10);
    SET_LO8(edx, MEM8(esp + 0xF));
    MEM8(eax + 0x48) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x12));
    MEM8(eax + 0x49) = HI8(ecx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = LO8(edx);
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(ecx + 0x48);
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esi + 0x9E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CFA8; /* je: equal / zero */

loc_0016CF5B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016CF64u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016CF64: ;
    ecx = MEM32(0x51D65C);
    edi = MEM32(ecx + 0x35BC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CF81; /* je: equal / zero */

loc_0016CF74: ;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x0016CF7Du); RECOMP_ABI_CALL(0x0015AF60u, sub_0015AF60); /* call 0x0015AF60 */

loc_0016CF7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CF99; /* je: equal / zero */

loc_0016CF81: ;
    ecx = ZX8(MEM8(esp + 0x13));
    eax = ZX8(LO8(ebx));
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016CFA4; /* jle: less or equal (signed <=) */

loc_0016CF91: ;
    SET_LO8(eax, MEM8(esi + 0x9C));
    goto loc_0016CFC5;

loc_0016CF99: ;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x0016CFA2u); RECOMP_ABI_CALL(0x0015AF30u, sub_0015AF30); /* call 0x0015AF30 */

loc_0016CFA2: ;
    goto loc_0016CFC5;

loc_0016CFA4: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0016CFC5;

loc_0016CFA8: ;
    SET_LO16(eax, MEM16(esp + 0x12));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(ebx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016CFC1; /* ja: above (unsigned >) */

loc_0016CFB1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(esp + 0x17) = 0;
    PUSH32(esp, 0x0016CFBFu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016CFBF: ;
    goto loc_0016CFC9;

loc_0016CFC1: ;
    SET_LO8(eax, HI8(eax));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_0016CFC5: ;
    MEM8(esp + 0xF) = LO8(eax);

loc_0016CFC9: ;
    eax = MEM32(esi + 0x94);
    ecx = MEM32(esp + 0x10);
    SET_LO8(edx, MEM8(esp + 0xF));
    MEM8(eax + 0x48) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x12));
    MEM8(eax + 0x49) = HI8(ecx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = LO8(edx);
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(esi + 0x98);
    eax = MEM32(ecx + 0x48);
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esi + 0x9F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D04F; /* je: equal / zero */

loc_0016D002: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016D00Bu); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016D00B: ;
    ecx = MEM32(0x51D65C);
    edi = MEM32(ecx + 0x35BC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D033; /* je: equal / zero */

loc_0016D01B: ;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x0016D024u); RECOMP_ABI_CALL(0x0015AF60u, sub_0015AF60); /* call 0x0015AF60 */

loc_0016D024: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016D033; /* jne: not equal / not zero */

loc_0016D028: ;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x0016D031u); RECOMP_ABI_CALL(0x0015AF30u, sub_0015AF30); /* call 0x0015AF30 */

loc_0016D031: ;
    goto loc_0016D06C;

loc_0016D033: ;
    ecx = ZX8(MEM8(esp + 0x13));
    eax = ZX8(LO8(ebx));
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016D04B; /* jle: less or equal (signed <=) */

loc_0016D043: ;
    SET_LO8(eax, MEM8(esi + 0x9C));
    goto loc_0016D06C;

loc_0016D04B: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0016D06C;

loc_0016D04F: ;
    SET_LO16(eax, MEM16(esp + 0x12));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(ebx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016D068; /* ja: above (unsigned >) */

loc_0016D058: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(esp + 0x17) = 0;
    PUSH32(esp, 0x0016D066u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016D066: ;
    goto loc_0016D070;

loc_0016D068: ;
    SET_LO8(eax, HI8(eax));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_0016D06C: ;
    MEM8(esp + 0xF) = LO8(eax);

loc_0016D070: ;
    esi = MEM32(esi + 0x98);
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esp + 0x12));
    SET_LO8(edx, MEM8(esp + 0xF));
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM8(esi + 0x4A) = LO8(ecx);
    MEM8(esi + 0x4B) = LO8(edx);
    POP32(esp, edi);
    MEM8(esi + 0x73) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016D0A0
 * Original: 0x0016D0A0 - 0x0016D2A4 (516 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D0A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xA0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D288; /* je: equal / zero */

loc_0016D0B9: ;
    eax = MEM32(0x3888C0);
    SET_LO8(eax, MEM8(eax + 0x1ED4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO8(ebx, 1);
    if (TEST_Z(_fa, _fb)) goto loc_0016D206; /* je: equal / zero */

loc_0016D0D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016D171; /* je: equal / zero */

loc_0016D0D8: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0016D0E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016D0DDu); } /* indirect call */
    }

loc_0016D0E3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xA4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D206; /* je: equal / zero */

loc_0016D0F1: ;
    eax = esp + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D0FCu); RECOMP_ABI_CALL(0x00083ED0u, sub_00083ED0); /* call 0x00083ED0 */

loc_0016D0FC: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esi + 0x90);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x18) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esi + 0x94);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x18) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esi + 0x98);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x18) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = LO8(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0xA4) = edi;
    PUSH32(esp, 0x0016D16Cu); RECOMP_ABI_CALL(0x0016CB60u, sub_0016CB60); /* call 0x0016CB60 */

loc_0016D16C: ;
    goto loc_0016D206;

loc_0016D171: ;
    SET_LO8(eax, MEM8(esi + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D206; /* je: equal / zero */

loc_0016D17F: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0016D18Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016D184u); } /* indirect call */
    }

loc_0016D18A: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D195u); RECOMP_ABI_CALL(0x00083EF0u, sub_00083EF0); /* call 0x00083EF0 */

loc_0016D195: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esi + 0x90);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x18) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esi + 0x94);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x18) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = LO8(ebx);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esi + 0x98);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x18) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM8(eax + 0x73) = LO8(ebx);
    PUSH32(esp, 0x0016D1FFu); RECOMP_ABI_CALL(0x0016CB60u, sub_0016CB60); /* call 0x0016CB60 */

loc_0016D1FF: ;
    MEM8(esi + 0xA8) = 0;

loc_0016D206: ;
    ecx = ebp;
    PUSH32(esp, 0x0016D20Du); RECOMP_ABI_CALL(0x00114100u, sub_00114100); /* call 0x00114100 */

loc_0016D20D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D220; /* je: equal / zero */

loc_0016D211: ;
    MEM8(esi + 0x9D) = 0;
    MEM8(esi + 0x9E) = LO8(ebx);
    goto loc_0016D263;

loc_0016D220: ;
    ecx = ebp;
    PUSH32(esp, 0x0016D227u); RECOMP_ABI_CALL(0x00114110u, sub_00114110); /* call 0x00114110 */

loc_0016D227: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x9E) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0016D25D; /* je: equal / zero */

loc_0016D232: ;
    ecx = esi;
    MEM8(esi + 0x9D) = 0;
    MEM8(esi + 0x9F) = LO8(ebx);
    PUSH32(esp, 0x0016D246u); RECOMP_ABI_CALL(0x0016CE80u, sub_0016CE80); /* call 0x0016CE80 */

loc_0016D246: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016D255u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016D255: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0016D25D: ;
    MEM8(esi + 0x9D) = LO8(ebx);

loc_0016D263: ;
    ecx = esi;
    MEM8(esi + 0x9F) = 0;
    PUSH32(esp, 0x0016D271u); RECOMP_ABI_CALL(0x0016CE80u, sub_0016CE80); /* call 0x0016CE80 */

loc_0016D271: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016D280u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016D280: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0016D288: ;
    ecx = esi;
    PUSH32(esp, 0x0016D28Fu); RECOMP_ABI_CALL(0x0016CB60u, sub_0016CB60); /* call 0x0016CB60 */

loc_0016D28F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016D29Cu); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016D29C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016D2B0
 * Original: 0x0016D2B0 - 0x0016D2D4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D2B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x320C68;
    PUSH32(esp, 0x0016D2BEu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016D2BE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016D2CE; /* je: equal / zero */

loc_0016D2C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016D2CBu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016D2CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016D2CE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D2E0
 * Original: 0x0016D2E0 - 0x0016D2EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D2E0: ;
    MEM32(ecx) = 0x320D74;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_0016D2F0
 * Original: 0x0016D2F0 - 0x0016D30B (27 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D2F0(void)
{

loc_0016D2F0: ;
    SET_LO8(eax, MEM8(esp + 8));
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xC4) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0xD0) = LO8(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016D310
 * Original: 0x0016D310 - 0x0016D339 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D310(void)
{

loc_0016D310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016D326u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016D326: ;
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016D334u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016D334: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D340
 * Original: 0x0016D340 - 0x0016D3B8 (120 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D340: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016D34Du); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016D34D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x307660)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM8(esi + 0xD0) = LO8(eax);
    MEM8(esi + 0xD1) = LO8(eax);
    MEM8(esi + 0xD2) = LO8(eax);
    SET_LO8(eax, 1);
    MEM8(esi + 0xD3) = LO8(eax);
    MEM8(esi + 0xD4) = LO8(eax);
    MEM32(esi) = 0x320D74;
    MEMF(esi + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D3C0
 * Original: 0x0016D3C0 - 0x0016D58B (459 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D3C0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320DE8);
    edi = ecx;
    PUSH32(esp, 0x0016D3DCu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016D3DC: ;
    ebx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D3F3; /* je: equal / zero */

loc_0016D3E7: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0016D3EFu); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_0016D3EF: ;
    esi = eax;
    goto loc_0016D3F5;

loc_0016D3F3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016D3F5: ;
    eax = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D400u); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0016D400: ;
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
    ecx = esi;
    PUSH32(esp, 0x0016D42Du); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0016D42D: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0016D436u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016D436: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(edi + 0x50), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(edi + 0x4C), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016D449u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016D449: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016D457u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_0016D457: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(edi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016D471u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016D471: ;
    ecx = esi;
    MEM32(edi + 0x94) = esi;
    PUSH32(esp, 0x0016D47Eu); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_0016D47E: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x4C)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FFE28); /* mulss */
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016D4A0u); RECOMP_ABI_CALL(0x0015E8D0u, sub_0015E8D0); /* call 0x0015E8D0 */

loc_0016D4A0: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    PUSH32(esp, 0x400);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0x100);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, 0x320DA0);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016D4C7u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016D4C7: ;
    ebx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D4DE; /* je: equal / zero */

loc_0016D4D2: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0016D4DAu); RECOMP_ABI_CALL(0x0015E380u, sub_0015E380); /* call 0x0015E380 */

loc_0016D4DA: ;
    esi = eax;
    goto loc_0016D4E0;

loc_0016D4DE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016D4E0: ;
    edx = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016D4EBu); RECOMP_ABI_CALL(0x00159360u, sub_00159360); /* call 0x00159360 */

loc_0016D4EB: ;
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
    ecx = esi;
    PUSH32(esp, 0x0016D518u); RECOMP_ABI_CALL(0x0015E330u, sub_0015E330); /* call 0x0015E330 */

loc_0016D518: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0016D521u); RECOMP_ABI_CALL(0x0016CAE0u, sub_0016CAE0); /* call 0x0016CAE0 */

loc_0016D521: ;
    ecx = esi;
    PUSH32(esp, 0x0016D528u); RECOMP_ABI_CALL(0x0015E8D0u, sub_0015E8D0); /* call 0x0015E8D0 */

loc_0016D528: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016D53Eu); RECOMP_ABI_CALL(0x0015E890u, sub_0015E890); /* call 0x0015E890 */

loc_0016D53E: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016D554u); RECOMP_ABI_CALL(0x0015A8A0u, sub_0015A8A0); /* call 0x0015A8A0 */

loc_0016D554: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016D562u); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_0016D562: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(edi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016D57Cu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016D57C: ;
    MEM32(edi + 0x98) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016D590
 * Original: 0x0016D590 - 0x0016D5E0 (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D590: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 1);
    MEM32(edi + 0x90) = esi;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    MEM8(esi + 0x110) = 1;
    PUSH32(esp, 0x0016D5B3u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_0016D5B3: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016D5C1u); RECOMP_ABI_CALL(0x00158460u, sub_00158460); /* call 0x00158460 */

loc_0016D5C1: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(edi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016D5DBu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016D5DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D5E0
 * Original: 0x0016D5E0 - 0x0016D6BF (223 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0016D5E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016D601; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016D5F9: ;
    xmm0 = XMM_SCALAR(MEMF(0x307660)); /* movss */

loc_0016D601: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FF024)); /* movss */
    eax = MEM32(ebp + 8);
    MEM8(esi + 0xD2) = 0;
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x320D68)); /* movss */
    MEMF(esi + 0xC8) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    MEM32(esi + 0xA0) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0xA4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0xA8) = eax;
    MEMF(esi + 0xC0) = xmm1.f[0]; /* movss */
    MEM8(esi + 0xD0) = 0;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0x4BCB2BEE);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016D66Bu); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_0016D66B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D6B8; /* je: equal / zero */

loc_0016D66F: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x320D68); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x38DC58); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xB8) = xmm3.f[0]; /* movss */

loc_0016D6B8: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016D6C0
 * Original: 0x0016D6C0 - 0x0016D7BA (250 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0016D6C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FF024)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x37889C);
    PUSH32(esp, esi);
    esi = ecx;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xC4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x98);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF084); /* mulss */
    MEM32(esp + 0xC) = ebx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016D70Cu); RECOMP_ABI_CALL(0x0015A8C0u, sub_0015A8C0); /* call 0x0015A8C0 */

loc_0016D70C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x304858); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x90);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0016D739u); RECOMP_ABI_CALL(0x00168C30u, sub_00168C30); /* call 0x00168C30 */

loc_0016D739: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    eax = MEM32(esi + 0x90);
    PUSH32(esp, 0);
    MEM8(eax + 0x49) = HI8(ebx);
    MEM8(eax + 0x48) = LO8(ebx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016D789; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0016D758: ;
    SET_LO8(ecx, MEM8(esp + 0xE));
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = 0x80;
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016D774u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016D774: ;
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0016D783u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016D783: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0016D789: ;
    SET_LO8(edx, MEM8(esp + 0xE));
    MEM8(eax + 0x4A) = LO8(edx);
    MEM8(eax + 0x4B) = 0;
    MEM8(eax + 0x73) = 1;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016D7A5u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016D7A5: ;
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016D7B4u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016D7B4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016D7C0
 * Original: 0x0016D7C0 - 0x0016D84E (142 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D7C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D7C0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 8;
    MEM8(esp + 0xC) = LO8(ebx);
    MEM32(esp + 8) = 0x302BAC;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016D7F7u); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_0016D7F7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x48);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = esp + 4;
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x18) = 0x2FF9EC;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x40) = LO8(ebx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0016D847u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_0016D847: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D850
 * Original: 0x0016D850 - 0x0016D867 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D850: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D85F; /* je: equal / zero */

loc_0016D85A: ;
    PUSH32(esp, 0x0016D85Fu); RECOMP_ABI_CALL(0x0016D6C0u, sub_0016D6C0); /* call 0x0016D6C0 */

loc_0016D85F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0015AD50(); return; /* tail jmp 0x0015AD50 */

}

/**
 * sub_0016D870
 * Original: 0x0016D870 - 0x0016D92C (188 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0016D870: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xD2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0016D928; /* jne: not equal / not zero */

loc_0016D881: ;
    SET_LO8(eax, MEM8(esi + 0xD4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D928; /* je: equal / zero */

loc_0016D88F: ;
    SET_LO8(eax, MEM8(esi + 0xD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D928; /* je: equal / zero */

loc_0016D89D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF020); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xCC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016D928; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016D8C7: ;
    xmm0 = XMM_SCALAR(MEMF(0x320D6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xC4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016D8ED; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0xC4)) */

loc_0016D8D8: ;
    PUSH32(esp, 0xD435BE9Cu);
    MEM8(esi + 0xD2) = 1;
    PUSH32(esp, 0x0016D8E9u); RECOMP_ABI_CALL(0x0016D7C0u, sub_0016D7C0); /* call 0x0016D7C0 */

loc_0016D8E9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0016D8ED: ;
    SET_LO8(eax, MEM8(esi + 0xD1));
    xmm0 = XMM_SCALAR(MEMF(0x320D68)); /* movss */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7B8ACCC1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x356F236) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x356F236)) >> 32) & 1);
    eax = eax + 0x356F236;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D917u); RECOMP_ABI_CALL(0x0016D7C0u, sub_0016D7C0); /* call 0x0016D7C0 */

loc_0016D917: ;
    SET_LO8(eax, MEM8(esi + 0xD1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0xD1) = LO8(eax);

loc_0016D928: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D930
 * Original: 0x0016D930 - 0x0016D9A4 (116 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D930(void)
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

loc_0016D930: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016D9A1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0016D941: ;
    SET_LO8(eax, MEM8(ecx + 0xD3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D99C; /* je: equal / zero */

loc_0016D94B: ;
    SET_LO8(eax, MEM8(ecx + 0xD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D99C; /* je: equal / zero */

loc_0016D955: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0xC0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016D99C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0xC0)) */

loc_0016D966: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x320D70); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xC0); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0xC0) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0016D994; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016D991: ;
    xmm0 = xmm1; /* movaps */

loc_0016D994: ;
    MEMF(ecx + 0xC0) = xmm0.f[0]; /* movss */

loc_0016D99C: ;
    g_seh_ebp = ebp; sub_0016D870(); return; /* tail jmp 0x0016D870 */

loc_0016D9A1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D9B0
 * Original: 0x0016D9B0 - 0x0016DB32 (386 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0016D9B0: ;
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
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016D9CBu); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016D9CB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016DA3E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0016D9DC: ;
    SET_LO8(eax, MEM8(esi + 0xD3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016DA36; /* je: equal / zero */

loc_0016D9E6: ;
    SET_LO8(eax, MEM8(esi + 0xD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016DA36; /* je: equal / zero */

loc_0016D9F0: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0xC0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016DA36; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0xC0)) */

loc_0016DA01: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x320D70); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xC0); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0xC0) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0016DA2E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0016DA2B: ;
    xmm0 = xmm1; /* movaps */

loc_0016DA2E: ;
    MEMF(esi + 0xC0) = xmm0.f[0]; /* movss */

loc_0016DA36: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DA3Eu); RECOMP_ABI_CALL(0x0016D870u, sub_0016D870); /* call 0x0016D870 */

loc_0016DA3E: ;
    ecx = MEM32(esi + 0x90);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0016DA4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016DA48u); } /* indirect call */
    }

loc_0016DA4B: ;
    SET_LO8(eax, MEM8(esi + 0xD3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016DB29; /* je: equal / zero */

loc_0016DA59: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0xC0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xB8)); /* movss */
    eax = MEM32(esi + 0x90);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax + 0x38) = xmm2.f[0]; /* movss */
    SET_LO8(ecx, 1);
    MEM8(eax + 0x73) = LO8(ecx);
    eax = MEM32(esi + 0x94);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm2.f[0]; /* movss */
    MEM8(eax + 0x73) = LO8(ecx);
    esi = MEM32(esi + 0x98);
    xmm7 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm5.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 0x30) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm7.f[0]; /* movss */
    MEM8(esi + 0x73) = LO8(ecx);

loc_0016DB29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016DB40
 * Original: 0x0016DB40 - 0x0016DB64 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x320D74;
    PUSH32(esp, 0x0016DB4Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016DB4E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016DB5E; /* je: equal / zero */

loc_0016DB55: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016DB5Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016DB5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016DB5E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016DB70
 * Original: 0x0016DB70 - 0x0016DBA3 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DB70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016DB7Du); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016DB7D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x320E2C;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016DBB0
 * Original: 0x0016DBB0 - 0x0016DBBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DBB0: ;
    MEM32(ecx) = 0x320E2C;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_0016DBC0
 * Original: 0x0016DBC0 - 0x0016DBC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DBC0: ;
    g_seh_ebp = ebp; sub_0015AD50(); return; /* tail jmp 0x0015AD50 */

}

/**
 * sub_0016DBD0
 * Original: 0x0016DBD0 - 0x0016DBDA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DBD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DBD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016DBD6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0016DBD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016DBE0
 * Original: 0x0016DBE0 - 0x0016DCF9 (281 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DBE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax);
    MEM32(ebx + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 0x24) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    MEM32(ebx + 0x28) = eax;
    ecx = ebx + 0x90;
    PUSH32(esp, edi);
    MEM32(ebx + 0x5C) = 0x21;
    MEM8(ebx + 0x73) = 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = ecx;
    /* nop */

loc_0016DC20: ;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, 0x320E98);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DC30u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0016DC30: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x320E58);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DC44u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016DC44: ;
    esi = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016DC66; /* je: equal / zero */

loc_0016DC4D: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DC57u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0016DC57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DC62u); RECOMP_ABI_CALL(0x00157F80u, sub_00157F80); /* call 0x00157F80 */

loc_0016DC62: ;
    esi = eax;
    goto loc_0016DC68;

loc_0016DC66: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016DC68: ;
    PUSH32(esp, 0x3021CE);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DC74u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016DC74: ;
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x307EE4); /* mulss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esi + 0x73) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DCA5u); RECOMP_ABI_CALL(0x00158170u, sub_00158170); /* call 0x00158170 */

loc_0016DCA5: ;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DCB6u); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_0016DCB6: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(ebx + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DCD0u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016DCD0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0016DCD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016DCD6u); } /* indirect call */
    }

loc_0016DCD9: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0016DC20; /* jl: less (signed <) */

loc_0016DCF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016DD00
 * Original: 0x0016DD00 - 0x0016DDB2 (178 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DD00: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    ebp = 1;
    edi = ecx + 0x90;
    MEM32(esp + 0x10) = 3;

loc_0016DD22: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016DD38; /* je: equal / zero */

loc_0016DD26: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0016DD30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016DD2Au); } /* indirect call */
    }

loc_0016DD30: ;
    ecx = eax + 0x444;
    goto loc_0016DD41;

loc_0016DD38: ;
    ecx = MEM32(0x51D660);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016DD41: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0016DD47u); RECOMP_ABI_CALL(0x0015F6B0u, sub_0015F6B0); /* call 0x0015F6B0 */

loc_0016DD47: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016DD8A; /* je: equal / zero */

loc_0016DD4D: ;
    SET_LO8(eax, MEM8(esi + 0x100));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0016DD80; /* je: equal / zero */

loc_0016DD59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016DD5Fu); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016DD5F: ;
    ecx = MEM32(esi + 0x108);
    eax = MEM32(edi);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0x18) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = 1;
    goto loc_0016DD8A;

loc_0016DD80: ;
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x0016DD8Au); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016DD8A: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0016DD22; /* jne: not equal / not zero */

loc_0016DD99: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x0016DDA8u); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016DDA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016DDC0
 * Original: 0x0016DDC0 - 0x0016DDE4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DDC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x320E2C;
    PUSH32(esp, 0x0016DDCEu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016DDCE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016DDDE; /* je: equal / zero */

loc_0016DDD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016DDDBu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016DDDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016DDDE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016DDF0
 * Original: 0x0016DDF0 - 0x0016DE2A (58 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DDF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DDF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016DDFDu); RECOMP_ABI_CALL(0x0015ADF0u, sub_0015ADF0); /* call 0x0015ADF0 */

loc_0016DDFD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi) = 0x320EA0;
    MEM8(esi + 0xA4) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016DE30
 * Original: 0x0016DE30 - 0x0016DE3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016DE30: ;
    MEM32(ecx) = 0x320EA0;
    g_seh_ebp = ebp; sub_0015AED0(); return; /* tail jmp 0x0015AED0 */

}

/**
 * sub_0016DE40
 * Original: 0x0016DE40 - 0x0016DF44 (260 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DE40(void)
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

loc_0016DE40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016DE50; /* je: equal / zero */

loc_0016DE4C: ;
    eax = edi;
    goto loc_0016DE5B;

loc_0016DE50: ;
    ecx = MEM32(0x3E8D08);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0016DE5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016DE58u); } /* indirect call */
    }

loc_0016DE5B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0016DE65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016DE5Fu); } /* indirect call */
    }

loc_0016DE65: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016DED4; /* jne: not equal / not zero */

loc_0016DE77: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0016DE8C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0016DE85: ;
    MEM8(esi + 0xA4) = 1;

loc_0016DE8C: ;
    SET_LO8(eax, MEM8(esi + 0xA4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016DF32; /* je: equal / zero */

loc_0016DE9A: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016DEAA; /* jp: parity */

loc_0016DEA3: ;
    MEM8(esi + 0xA4) = 0;

loc_0016DEAA: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(0x51D65C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x3580);
    PUSH32(esp, 0x0016DEC2u); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0016DEC2: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016DECFu); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016DECF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0016DED4: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x10), g_mxcsr, 1); /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = edx;
    if (CMP_A(_fa, _fb)) goto loc_0016DF0C; /* ja: above (unsigned >) */

loc_0016DEF2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016DF0C; /* ja: above (unsigned >) */

loc_0016DEF6: ;
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, 0x3021CE);
    PUSH32(esp, 0x0016DF06u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016DF06: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    goto loc_0016DF2B;

loc_0016DF0C: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x320EC8);
    PUSH32(esp, 0x0016DF18u); RECOMP_ABI_CALL(0x00154820u, sub_00154820); /* call 0x00154820 */

loc_0016DF18: ;
    ecx = MEM32(esi + 0x90);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016DF27u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016DF27: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);

loc_0016DF2B: ;
    ecx = esi;
    PUSH32(esp, 0x0016DF32u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_0016DF32: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016DF3Fu); RECOMP_ABI_CALL(0x0015A960u, sub_0015A960); /* call 0x0015A960 */

loc_0016DF3F: ;
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
 * sub_0016DF50
 * Original: 0x0016DF50 - 0x0016DFFB (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016DF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016DF50: ;
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
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x320ED4);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DF71u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0016DF71: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016DF88; /* je: equal / zero */

loc_0016DF78: ;
    PUSH32(esp, 0xE7EBFFA0u);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DF84u); RECOMP_ABI_CALL(0x00157F80u, sub_00157F80); /* call 0x00157F80 */

loc_0016DF84: ;
    esi = eax;
    goto loc_0016DF8A;

loc_0016DF88: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016DF8A: ;
    PUSH32(esp, 0x3021CE);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DF96u); RECOMP_ABI_CALL(0x001581B0u, sub_001581B0); /* call 0x001581B0 */

loc_0016DF96: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DFA5u); RECOMP_ABI_CALL(0x00158170u, sub_00158170); /* call 0x00158170 */

loc_0016DFA5: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax);
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x28) = edx;
    MEM8(esi + 0x73) = 1;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DFCEu); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_0016DFCE: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(edi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x51D65C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016DFEBu); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016DFEB: ;
    MEM32(edi + 0x90) = esi;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016E000
 * Original: 0x0016E000 - 0x0016E04E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = ecx;
    ecx = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016E019u); RECOMP_ABI_CALL(0x0015A760u, sub_0015A760); /* call 0x0015A760 */

loc_0016E019: ;
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
    PUSH32(esp, 0x0016E033u); RECOMP_ABI_CALL(0x0015A4A0u, sub_0015A4A0); /* call 0x0015A4A0 */

loc_0016E033: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0016E049u); RECOMP_ABI_CALL(0x0016DF50u, sub_0016DF50); /* call 0x0016DF50 */

loc_0016E049: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0016E050
 * Original: 0x0016E050 - 0x0016E055 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E050: ;
    g_seh_ebp = ebp; sub_0015AD50(); return; /* tail jmp 0x0015AD50 */

}

/**
 * sub_0016E060
 * Original: 0x0016E060 - 0x0016E084 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E060: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x320EA0;
    PUSH32(esp, 0x0016E06Eu); RECOMP_ABI_CALL(0x0015AED0u, sub_0015AED0); /* call 0x0015AED0 */

loc_0016E06E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016E07E; /* je: equal / zero */

loc_0016E075: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016E07Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0016E07B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016E07E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016E090
 * Original: 0x0016E090 - 0x0016E0A7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E090: ;
    eax = MEM32(0x51FAB8);
    eax = eax | MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0xC) = eax;
    g_seh_ebp = ebp; sub_00155010(); return; /* tail jmp 0x00155010 */

}

/**
 * sub_0016E0B0
 * Original: 0x0016E0B0 - 0x0016E0B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E0B0: ;
    g_seh_ebp = ebp; sub_001551E0(); return; /* tail jmp 0x001551E0 */

}

/**
 * sub_0016E0C0
 * Original: 0x0016E0C0 - 0x0016E0C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E0C0(void)
{

loc_0016E0C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E0D0
 * Original: 0x0016E0D0 - 0x0016E0D6 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E0D0: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x53441C)); return; /* indirect tail jmp */

}

/**
 * sub_0016E0E0
 * Original: 0x0016E0E0 - 0x0016E0E2 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E0E0(void)
{

loc_0016E0E0: ;
    goto loc_0016E0E0;

}

/**
 * sub_0016E0F0
 * Original: 0x0016E0F0 - 0x0016E0F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E0F0(void)
{

loc_0016E0F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E100
 * Original: 0x0016E100 - 0x0016E101 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E100(void)
{

loc_0016E100: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E110
 * Original: 0x0016E110 - 0x0016E111 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E110(void)
{

loc_0016E110: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E120
 * Original: 0x0016E120 - 0x0016E121 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E120(void)
{

loc_0016E120: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E130
 * Original: 0x0016E130 - 0x0016E1E5 (181 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E130: ;
    edx = esp + -256;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0016E140: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E140; /* jne: not equal / not zero */

loc_0016E14A: ;
    PUSH32(esp, edi);
    edi = esp + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016E150: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E150; /* jne: not equal / not zero */

loc_0016E158: ;
    eax = MEM32(0x320F18);
    SET_LO8(ecx, MEM8(0x320F1C));
    MEM32(edi) = eax;
    eax = MEM32(esi + 4);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM8(edi + 4) = LO8(ecx);
    PUSH32(esp, 0x0016E176u); RECOMP_ABI_CALL(0x001B8C49u, sub_001B8C49); /* call 0x001B8C49 */

loc_0016E176: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x98) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016E1DD; /* je: equal / zero */

loc_0016E183: ;
    PUSH32(esp, eax);
    ecx = esi + 0x9C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016E190u); RECOMP_ABI_CALL(0x00195712u, sub_00195712); /* call 0x00195712 */

loc_0016E190: ;
    PUSH32(esp, 0x51DE9C);
    PUSH32(esp, 0x0016E19Au); RECOMP_ABI_CALL(0x0019566Eu, sub_0019566E); /* call 0x0019566E */

loc_0016E19A: ;
    edi = esp + 0x10;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016E1A2: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E1A2; /* jne: not equal / not zero */

loc_0016E1AA: ;
    edx = MEM32(0x320F10);
    SET_LO8(eax, MEM8(0x320F14));
    MEM32(edi) = edx;
    edx = MEM32(esi + 4);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(edi + 4) = LO8(eax);
    PUSH32(esp, 0x0016E1C8u); RECOMP_ABI_CALL(0x001B8C29u, sub_001B8C29); /* call 0x001B8C29 */

loc_0016E1C8: ;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = ecx;
    MEM32(esi + 0xA4) = eax;

loc_0016E1DD: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E1F0
 * Original: 0x0016E1F0 - 0x0016E1F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E1F0(void)
{

loc_0016E1F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E200
 * Original: 0x0016E200 - 0x0016E201 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E200(void)
{

loc_0016E200: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E210
 * Original: 0x0016E210 - 0x0016E249 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E210: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x51DD98);
    ecx = esp + 8;
    PUSH32(esp, 0x31C524);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016E22Bu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0016E22B: ;
    edx = MEM32(esp + 0x114);
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016E242u); RECOMP_ABI_CALL(0x001B8281u, sub_001B8281); /* call 0x001B8281 */

loc_0016E242: ;
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E250
 * Original: 0x0016E250 - 0x0016E26A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E250: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xEF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xEF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E267; /* jne: not equal / not zero */

loc_0016E255: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0xBB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0xBB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E267; /* jne: not equal / not zero */

loc_0016E25B: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0xBF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0xBF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E267; /* jne: not equal / not zero */

loc_0016E261: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0016E267: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E270
 * Original: 0x0016E270 - 0x0016E27B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E270: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFEFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0xFEFF (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E280
 * Original: 0x0016E280 - 0x0016E2B2 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E280: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016E2B1; /* jle: less or equal (signed <=) */

loc_0016E288: ;
    goto loc_0016E290;

    /* nop */

loc_0016E290: ;
    SET_LO16(ecx, MEM16(esi + edx * 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7F (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016E29D; /* ja: above (unsigned >) */

loc_0016E29A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0016E2AC;

loc_0016E29D: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7FF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7FF (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016E2A9; /* ja: above (unsigned >) */

loc_0016E2A4: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016E2AC;

loc_0016E2A9: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016E2AC: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016E290; /* jl: less (signed <) */

loc_0016E2B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E2C0
 * Original: 0x0016E2C0 - 0x0016E33D (125 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E2C0: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E2DC; /* jne: not equal / not zero */

loc_0016E2C8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(edi) (16-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0016E2DB; /* je: equal / zero */

loc_0016E2D1: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E2D1; /* jne: not equal / not zero */

loc_0016E2DB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0016E2DC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016E33B; /* jle: less or equal (signed <=) */

loc_0016E2E2: ;
    SET_LO16(edx, MEM16(esi + ecx * 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x7F (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016E2EE; /* ja: above (unsigned >) */

loc_0016E2EC: ;
    goto loc_0016E333;

loc_0016E2EE: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x7FF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x7FF (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016E306; /* ja: above (unsigned >) */

loc_0016E2F5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + ecx * 2));
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 0x1F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | 0xC0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0016E327;

loc_0016E306: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + ecx * 2));
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | 0xE0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + ecx * 2));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 0x3F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | 0x80);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0016E327: ;
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(esi + ecx * 2));
    SET_LO8(edx, LO8(edx) & 0x3F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(edx) | 0x80);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0016E333: ;
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016E2E2; /* jl: less (signed <) */

loc_0016E33B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E340
 * Original: 0x0016E340 - 0x0016E3F7 (183 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E340: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E3ED; /* jne: not equal / not zero */

loc_0016E355: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10C);
    eax = esi;
    edx = eax + 1;

loc_0016E362: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E362; /* jne: not equal / not zero */

loc_0016E369: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016E384; /* jb: below (unsigned <) */

loc_0016E373: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E3D6; /* je: equal / zero */

loc_0016E37A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E3D6; /* je: equal / zero */

loc_0016E37F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0016E373; /* jae: above or equal (unsigned >=) */

loc_0016E384: ;
    edx = esp + 8;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0016E390: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E390; /* jne: not equal / not zero */

loc_0016E39A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x51DD98);
    eax = esp + 0x10;
    PUSH32(esp, 0x320F20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016E3AFu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0016E3AF: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016E3B9u); RECOMP_ABI_CALL(0x001B7FEBu, sub_001B7FEB); /* call 0x001B7FEB */

loc_0016E3B9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0016E3ED; /* je: equal / zero */

loc_0016E3C1: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016E3CBu); RECOMP_ABI_CALL(0x001B803Fu, sub_001B803F); /* call 0x001B803F */

loc_0016E3CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0016E3D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0016E384; /* jb: below (unsigned <) */

loc_0016E3DA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0016E3E1: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E3E1; /* jne: not equal / not zero */

loc_0016E3EB: ;
    goto loc_0016E39A;

loc_0016E3ED: ;
    eax = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E400
 * Original: 0x0016E400 - 0x0016E429 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E400: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0016E41C; /* je: equal / zero */

loc_0016E409: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0016E40F; /* je: equal / zero */

loc_0016E40C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0016E40F: ;
    MEM32(esp + 8) = 1;
    g_seh_ebp = ebp; sub_0016E340(); return; /* tail jmp 0x0016E340 */

loc_0016E41C: ;
    MEM32(esp + 8) = 0;
    g_seh_ebp = ebp; sub_0016E340(); return; /* tail jmp 0x0016E340 */

}

/**
 * sub_0016E430
 * Original: 0x0016E430 - 0x0016E431 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E430(void)
{

loc_0016E430: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E440
 * Original: 0x0016E440 - 0x0016E44F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E440: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x0016E448u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0016E442u); } /* indirect call */
    }

loc_0016E448: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E450
 * Original: 0x0016E450 - 0x0016E580 (304 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E450: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x51DD98);
    ecx = esp + 0x10;
    PUSH32(esp, 0x31C524);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016E470u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0016E470: ;
    PUSH32(esp, 0x400);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016E484u); RECOMP_ABI_CALL(0x001B8281u, sub_001B8281); /* call 0x001B8281 */

loc_0016E484: ;
    ebp = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E4A3; /* jne: not equal / not zero */

loc_0016E48D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x0016E495u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0016E48Fu); } /* indirect call */
    }

loc_0016E495: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0016E4A3: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0xEF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0xEF (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0016E4F0; /* jne: not equal / not zero */

loc_0016E4AC: ;
    _fa = (uint32_t)(MEM8(ebp + 1)) & 0xFFu; _fb = (uint32_t)(0xBB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 1), 0xBB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E4F0; /* jne: not equal / not zero */

loc_0016E4B2: ;
    _fa = (uint32_t)(MEM8(ebp + 2)) & 0xFFu; _fb = (uint32_t)(0xBF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 2), 0xBF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E4F0; /* jne: not equal / not zero */

loc_0016E4B8: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x0016E4C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016E4C0u); } /* indirect call */
    }

loc_0016E4C6: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFDu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    ebx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebp + 3;
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
    ecx = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(esp + 0x10);
    MEM8(ebx + eax + -3) = 0;
    goto loc_0016E569;

loc_0016E4F0: ;
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(0xFEFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp), 0xFEFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E53A; /* jne: not equal / not zero */

loc_0016E4F8: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    esi = ebp + 2;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x0016E50Eu); RECOMP_ABI_CALL(0x0016E280u, sub_0016E280); /* call 0x0016E280 */

loc_0016E50E: ;
    edi = eax;
    ecx = edi + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x0016E51Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016E514u); } /* indirect call */
    }

loc_0016E51A: ;
    ebx = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = ebx;
    PUSH32(esp, 0x0016E534u); RECOMP_ABI_CALL(0x0016E2C0u, sub_0016E2C0); /* call 0x0016E2C0 */

loc_0016E534: ;
    MEM8(edi + ebx) = 0;
    goto loc_0016E569;

loc_0016E53A: ;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x0016E546u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016E540u); } /* indirect call */
    }

loc_0016E546: ;
    ecx = MEM32(esp + 0x14);
    ebx = eax;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebp;
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
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = MEM32(esp + 0x10);
    MEM8(ebx + ecx) = 0;

loc_0016E569: ;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x534414); PUSH32(esp, 0x0016E570u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0016E56Au); } /* indirect call */
    }

loc_0016E570: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E580
 * Original: 0x0016E580 - 0x0016E5F9 (121 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E580: ;
    eax = 0x1000;
    PUSH32(esp, 0x0016E58Au); RECOMP_ABI_CALL(0x002BE550u, sub_002BE550); /* call 0x002BE550 */

loc_0016E58A: ;
    eax = MEM32(esp + 0x1004);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
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
    if ((_flags == 0)) goto loc_0016E5AE; /* jne: not equal / not zero */

loc_0016E5A5: ;
    MEM16(esp + 8) = 0x31;
    goto loc_0016E5C1;

loc_0016E5AE: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, 0x320F2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016E5BEu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0016E5BE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016E5C1: ;
    eax = esp + 8;
    edx = eax + 1;

loc_0016E5C8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E5C8; /* jne: not equal / not zero */

loc_0016E5CF: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x534410); PUSH32(esp, 0x0016E5D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016E5D3u); } /* indirect call */
    }

loc_0016E5D9: ;
    ecx = esp + 0xC;
    esi = eax;
    edx = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0016E5E6: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E5E6; /* jne: not equal / not zero */

loc_0016E5F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1000;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E600
 * Original: 0x0016E600 - 0x0016E654 (84 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E600: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0xA0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016E62D; /* jle: less or equal (signed <=) */

loc_0016E611: ;
    ecx = MEM32(esi + 0xA4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0016E620: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E62C; /* je: equal / zero */

loc_0016E624: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016E620; /* jl: less (signed <) */

loc_0016E62C: ;
    POP32(esp, edi);

loc_0016E62D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016E635; /* jne: not equal / not zero */

loc_0016E631: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0016E635: ;
    edx = MEM32(esi + 0x9C);
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0xA4);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + eax) = edx;
    eax = MEM32(esi + 0xA4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E660
 * Original: 0x0016E660 - 0x0016E661 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E660(void)
{

loc_0016E660: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E670
 * Original: 0x0016E670 - 0x0016E692 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E670: ;
    PUSH32(esp, 0x0016E675u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_0016E675: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    PUSH32(esp, 0x51DE9C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016E68Au); RECOMP_ABI_CALL(0x001957AEu, sub_001957AE); /* call 0x001957AE */

loc_0016E68A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001950F1(); return; /* tail jmp 0x001950F1 */

}

/**
 * sub_0016E6A0
 * Original: 0x0016E6A0 - 0x0016E6FA (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016E6A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0xA0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016E6CD; /* jle: less or equal (signed <=) */

loc_0016E6B2: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edi + 0xA4);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016E6C1: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E6CD; /* je: equal / zero */

loc_0016E6C5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016E6C1; /* jl: less (signed <) */

loc_0016E6CD: ;
    PUSH32(esp, 0x0016E6D2u); RECOMP_ABI_CALL(0x001950E3u, sub_001950E3); /* call 0x001950E3 */

loc_0016E6D2: ;
    ecx = MEM32(edi + 0xA4);
    eax = esi + esi * 2;
    edx = MEM32(ecx + eax * 4 + 8);
    eax = ecx + eax * 4;
    eax = MEM32(eax);
    PUSH32(esp, 0x51DE9C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016E6F0u); RECOMP_ABI_CALL(0x001957AEu, sub_001957AE); /* call 0x001957AE */

loc_0016E6F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001950F1(); return; /* tail jmp 0x001950F1 */

}

/**
 * sub_0016E700
 * Original: 0x0016E700 - 0x0016E7BD (189 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E700: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x10;
    edi = 0x51DEF8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(0x51DEF8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(0x51DEFC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(0x51DF08) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(0x51DF0C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(0x51DF20) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(0x51DF28) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    ecx = 0x10;
    esi = 0x51DEF8;
    edi = 0x51DEB8;
    eax = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    MEMF(0x51DF2C) = xmm2.f[0]; /* movss */
    MEMF(0x51DF30) = xmm0.f[0]; /* movss */
    MEMF(0x51DF34) = xmm0.f[0]; /* movss */
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
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(0x51DEE8) = xmm1.f[0]; /* movss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm2.f[0], g_mxcsr, 1); /* cvttss2si */
    POP32(esp, edi);
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(0x51DEEC) = xmm1.f[0]; /* movss */
    MEMF(0x51DEF0) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E7C0
 * Original: 0x0016E7C0 - 0x0016E818 (88 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E7C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E7C0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    ecx = esp + 4;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x51DEF8);
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0016E7F8u); RECOMP_ABI_CALL(0x001B2EC0u, sub_001B2EC0); /* call 0x001B2EC0 */

loc_0016E7F8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E820
 * Original: 0x0016E820 - 0x0016E86F (79 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E820: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(0x51DF48) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x51DF4C) = edx;
    edx = MEM32(ecx + 8);
    MEM32(0x51DF50) = edx;
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51DF54) = ecx;
    edx = MEM32(eax);
    MEM32(0x51DF38) = edx;
    ecx = MEM32(eax + 4);
    MEM32(0x51DF3C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x51DF40) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(0x51DF44) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E870
 * Original: 0x0016E870 - 0x0016E966 (246 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E870(void)
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

loc_0016E870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0016E892; /* jge: greater or equal (signed >=) */

loc_0016E88C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_0016E892: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x51DF4C)); /* fmul dword ptr [0x51df4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x51DF3C)); /* fadd dword ptr [0x51df3c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEC4C)); /* fmul dword ptr [0x2fec4c] */
    PUSH32(esp, 0x0016E8AFu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016E8AF: ;
    ecx = esi;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    edi = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0016E8C8; /* jge: greater or equal (signed >=) */

loc_0016E8C2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_0016E8C8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF460)); /* fmul dword ptr [0x2ff460] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x51DF48)); /* fmul dword ptr [0x51df48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x51DF38)); /* fadd dword ptr [0x51df38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3011DC)); /* fmul dword ptr [0x3011dc] */
    PUSH32(esp, 0x0016E8E5u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016E8E5: ;
    edx = esi;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016E90A; /* jge: greater or equal (signed >=) */

loc_0016E904: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_0016E90A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x51DF50)); /* fmul dword ptr [0x51df50] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x51DF40)); /* fadd dword ptr [0x51df40] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEC4C)); /* fmul dword ptr [0x2fec4c] */
    PUSH32(esp, 0x0016E927u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016E927: ;
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0016E944; /* jge: greater or equal (signed >=) */

loc_0016E93E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_0016E944: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x51DF54)); /* fmul dword ptr [0x51df54] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x51DF44)); /* fadd dword ptr [0x51df44] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEC4C)); /* fmul dword ptr [0x2fec4c] */
    PUSH32(esp, 0x0016E961u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_0016E961: ;
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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
 * sub_0016E970
 * Original: 0x0016E970 - 0x0016E971 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E970(void)
{

loc_0016E970: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E980
 * Original: 0x0016E980 - 0x0016E981 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E980(void)
{

loc_0016E980: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016E990
 * Original: 0x0016E990 - 0x0016E993 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E990: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016E9A0
 * Original: 0x0016E9A0 - 0x0016E9AA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E9A0(void)
{

loc_0016E9A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x51DD94) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0016E9B0
 * Original: 0x0016E9B0 - 0x0016EA16 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016E9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016E9B0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016E9C6; /* je: equal / zero */

loc_0016E9BB: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016E9C4u); RECOMP_ABI_CALL(0x001EEFA2u, sub_001EEFA2); /* call 0x001EEFA2 */

loc_0016E9C4: ;
    goto loc_0016E9CF;

loc_0016E9C6: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016E9CFu); RECOMP_ABI_CALL(0x001EEA9Au, sub_001EEA9A); /* call 0x001EEA9A */

loc_0016E9CF: ;
    eax = MEM32(esp + 0x14);
    ecx = ZX16(MEM16(esp + 0xA));
    edx = ZX16(MEM16(esp + 0xC));
    MEM32(eax + 4) = ecx;
    ecx = ZX16(MEM16(esp + 6));
    MEM32(eax) = edx;
    edx = ZX16(MEM16(esp + 8));
    MEM32(eax + 0x10) = ecx;
    ecx = ZX16(MEM16(esp + 2));
    MEM32(eax + 8) = edx;
    edx = ZX16(MEM16(esp + 4));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = edx;
    edx = ZX16(MEM16(esp));
    MEM32(eax + 0x14) = ecx;
    ecx = ZX16(MEM16(esp + 0xE));
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016EA20
 * Original: 0x0016EA20 - 0x0016EA23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EA20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016EA20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016EA30
 * Original: 0x0016EA30 - 0x0016EA38 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016EA30(void)
{

loc_0016EA30: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}
