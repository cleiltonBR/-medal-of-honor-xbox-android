/**
 * Medal of Honor European Assault - Recompiled code chunk 53
 * Functions: 250 (0x001CC430 - 0x001D4C80)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001CC430
 * Original: 0x001CC430 - 0x001CC458 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC430: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 7;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x336F50);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CC450u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CC44Au); } /* indirect call */
    }

loc_001CC450: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC460
 * Original: 0x001CC460 - 0x001CC473 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC460: ;
    eax = ZX16(MEM16(ecx));
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CC480
 * Original: 0x001CC480 - 0x001CC4A2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC480: ;
    ecx = MEM32(esp + 4);
    eax = ZX16(MEM16(ecx));
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CC49Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CC498u); } /* indirect call */
    }

loc_001CC49E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CC4B0
 * Original: 0x001CC4B0 - 0x001CC4B5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC4B0(void)
{

loc_001CC4B0: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC4C0
 * Original: 0x001CC4C0 - 0x001CC4C5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC4C0(void)
{

loc_001CC4C0: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC4D0
 * Original: 0x001CC4D0 - 0x001CC4E2 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC4D0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CC4DE; /* je: equal / zero */

loc_001CC4D8: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001CC4DE: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC4F0
 * Original: 0x001CC4F0 - 0x001CC502 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC4F0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CC4FE; /* je: equal / zero */

loc_001CC4F8: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001CC4FE: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC510
 * Original: 0x001CC510 - 0x001CC517 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC510: ;
    eax = MEM32(ecx + eax * 8 + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CC520
 * Original: 0x001CC520 - 0x001CC71C (508 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC520: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CC53B; /* jge: greater or equal (signed >=) */

loc_001CC525: ;
    ecx = MEM32(esi * 4 + 0x311F48);
    edx = edi;
    PUSH32(esp, 0x001CC533u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CC533: ;
    MEM32(esi * 4 + 0x2E92B0) = edi;
    esp += 4; return; /* ret */

loc_001CC53B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CC560; /* jge: greater or equal (signed >=) */

loc_001CC543: ;
    ecx = MEM32(0x2E90A8);
    eax = MEM32(esi * 4 + 0x311D28);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = ecx;
    MEM32(esi * 4 + 0x2E92B0) = edi;
    esp += 4; return; /* ret */

loc_001CC560: ;
    if (CMP_NE(_fa, _fb)) goto loc_001CC569; /* jne: not equal / not zero */

loc_001CC562: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC568u); RECOMP_ABI_CALL(0x002D9D90u, sub_002D9D90); /* call 0x002D9D90 */

loc_001CC568: ;
    esp += 4; return; /* ret */

loc_001CC569: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC578; /* jne: not equal / not zero */

loc_001CC571: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC577u); RECOMP_ABI_CALL(0x002DA5E0u, sub_002DA5E0); /* call 0x002DA5E0 */

loc_001CC577: ;
    esp += 4; return; /* ret */

loc_001CC578: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC587; /* jne: not equal / not zero */

loc_001CC580: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC586u); RECOMP_ABI_CALL(0x002DA140u, sub_002DA140); /* call 0x002DA140 */

loc_001CC586: ;
    esp += 4; return; /* ret */

loc_001CC587: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC596; /* jne: not equal / not zero */

loc_001CC58F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC595u); RECOMP_ABI_CALL(0x002DA4B0u, sub_002DA4B0); /* call 0x002DA4B0 */

loc_001CC595: ;
    esp += 4; return; /* ret */

loc_001CC596: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC5A5; /* jne: not equal / not zero */

loc_001CC59E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC5A4u); RECOMP_ABI_CALL(0x002DA500u, sub_002DA500); /* call 0x002DA500 */

loc_001CC5A4: ;
    esp += 4; return; /* ret */

loc_001CC5A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC5B4; /* jne: not equal / not zero */

loc_001CC5AD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC5B3u); RECOMP_ABI_CALL(0x002DA560u, sub_002DA560); /* call 0x002DA560 */

loc_001CC5B3: ;
    esp += 4; return; /* ret */

loc_001CC5B4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC5C3; /* jne: not equal / not zero */

loc_001CC5BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC5C2u); RECOMP_ABI_CALL(0x002DA240u, sub_002DA240); /* call 0x002DA240 */

loc_001CC5C2: ;
    esp += 4; return; /* ret */

loc_001CC5C3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC5D2; /* jne: not equal / not zero */

loc_001CC5CB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC5D1u); RECOMP_ABI_CALL(0x002DB010u, sub_002DB010); /* call 0x002DB010 */

loc_001CC5D1: ;
    esp += 4; return; /* ret */

loc_001CC5D2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC5E1; /* jne: not equal / not zero */

loc_001CC5DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC5E0u); RECOMP_ABI_CALL(0x002DB0A0u, sub_002DB0A0); /* call 0x002DB0A0 */

loc_001CC5E0: ;
    esp += 4; return; /* ret */

loc_001CC5E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC5F0; /* jne: not equal / not zero */

loc_001CC5E9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC5EFu); RECOMP_ABI_CALL(0x002DB140u, sub_002DB140); /* call 0x002DB140 */

loc_001CC5EF: ;
    esp += 4; return; /* ret */

loc_001CC5F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC5FF; /* jne: not equal / not zero */

loc_001CC5F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC5FEu); RECOMP_ABI_CALL(0x002DA190u, sub_002DA190); /* call 0x002DA190 */

loc_001CC5FE: ;
    esp += 4; return; /* ret */

loc_001CC5FF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC60E; /* jne: not equal / not zero */

loc_001CC607: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC60Du); RECOMP_ABI_CALL(0x002DA200u, sub_002DA200); /* call 0x002DA200 */

loc_001CC60D: ;
    esp += 4; return; /* ret */

loc_001CC60E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC61D; /* jne: not equal / not zero */

loc_001CC616: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC61Cu); RECOMP_ABI_CALL(0x002DA280u, sub_002DA280); /* call 0x002DA280 */

loc_001CC61C: ;
    esp += 4; return; /* ret */

loc_001CC61D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC62C; /* jne: not equal / not zero */

loc_001CC625: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC62Bu); RECOMP_ABI_CALL(0x002DA3D0u, sub_002DA3D0); /* call 0x002DA3D0 */

loc_001CC62B: ;
    esp += 4; return; /* ret */

loc_001CC62C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC63B; /* jne: not equal / not zero */

loc_001CC634: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC63Au); RECOMP_ABI_CALL(0x002DA450u, sub_002DA450); /* call 0x002DA450 */

loc_001CC63A: ;
    esp += 4; return; /* ret */

loc_001CC63B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC64A; /* jne: not equal / not zero */

loc_001CC643: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC649u); RECOMP_ABI_CALL(0x002DA0C0u, sub_002DA0C0); /* call 0x002DA0C0 */

loc_001CC649: ;
    esp += 4; return; /* ret */

loc_001CC64A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC659; /* jne: not equal / not zero */

loc_001CC652: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC658u); RECOMP_ABI_CALL(0x002DB380u, sub_002DB380); /* call 0x002DB380 */

loc_001CC658: ;
    esp += 4; return; /* ret */

loc_001CC659: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC668; /* jne: not equal / not zero */

loc_001CC661: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC667u); RECOMP_ABI_CALL(0x002DB400u, sub_002DB400); /* call 0x002DB400 */

loc_001CC667: ;
    esp += 4; return; /* ret */

loc_001CC668: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC677; /* jne: not equal / not zero */

loc_001CC670: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC676u); RECOMP_ABI_CALL(0x002DB320u, sub_002DB320); /* call 0x002DB320 */

loc_001CC676: ;
    esp += 4; return; /* ret */

loc_001CC677: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC686; /* jne: not equal / not zero */

loc_001CC67F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC685u); RECOMP_ABI_CALL(0x002DB350u, sub_002DB350); /* call 0x002DB350 */

loc_001CC685: ;
    esp += 4; return; /* ret */

loc_001CC686: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC695; /* jne: not equal / not zero */

loc_001CC68E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC694u); RECOMP_ABI_CALL(0x002DA100u, sub_002DA100); /* call 0x002DA100 */

loc_001CC694: ;
    esp += 4; return; /* ret */

loc_001CC695: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC6A4; /* jne: not equal / not zero */

loc_001CC69D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC6A3u); RECOMP_ABI_CALL(0x002DA2E0u, sub_002DA2E0); /* call 0x002DA2E0 */

loc_001CC6A3: ;
    esp += 4; return; /* ret */

loc_001CC6A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC6B3; /* jne: not equal / not zero */

loc_001CC6AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC6B2u); RECOMP_ABI_CALL(0x002DB450u, sub_002DB450); /* call 0x002DB450 */

loc_001CC6B2: ;
    esp += 4; return; /* ret */

loc_001CC6B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC6C2; /* jne: not equal / not zero */

loc_001CC6BB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC6C1u); RECOMP_ABI_CALL(0x002DA350u, sub_002DA350); /* call 0x002DA350 */

loc_001CC6C1: ;
    esp += 4; return; /* ret */

loc_001CC6C2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC6D1; /* jne: not equal / not zero */

loc_001CC6CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC6D0u); RECOMP_ABI_CALL(0x002DB1B0u, sub_002DB1B0); /* call 0x002DB1B0 */

loc_001CC6D0: ;
    esp += 4; return; /* ret */

loc_001CC6D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC6E0; /* jne: not equal / not zero */

loc_001CC6D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC6DFu); RECOMP_ABI_CALL(0x002DB1E0u, sub_002DB1E0); /* call 0x002DB1E0 */

loc_001CC6DF: ;
    esp += 4; return; /* ret */

loc_001CC6E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC6EF; /* jne: not equal / not zero */

loc_001CC6E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC6EEu); RECOMP_ABI_CALL(0x002DB250u, sub_002DB250); /* call 0x002DB250 */

loc_001CC6EE: ;
    esp += 4; return; /* ret */

loc_001CC6EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC6FE; /* jne: not equal / not zero */

loc_001CC6F7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC6FDu); RECOMP_ABI_CALL(0x002DB2C0u, sub_002DB2C0); /* call 0x002DB2C0 */

loc_001CC6FD: ;
    esp += 4; return; /* ret */

loc_001CC6FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC70D; /* jne: not equal / not zero */

loc_001CC706: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC70Cu); RECOMP_ABI_CALL(0x002DB2E0u, sub_002DB2E0); /* call 0x002DB2E0 */

loc_001CC70C: ;
    esp += 4; return; /* ret */

loc_001CC70D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC71B; /* jne: not equal / not zero */

loc_001CC715: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CC71Bu); RECOMP_ABI_CALL(0x002DB300u, sub_002DB300); /* call 0x002DB300 */

loc_001CC71B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC720
 * Original: 0x001CC720 - 0x001CC796 (118 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC720: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_001CC74B; /* jge: greater or equal (signed >=) */

loc_001CC727: ;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001CC72E: ;
    edi = MEM32(0x2E90A8);
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x2E90A8) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx * 4 + 0x2E90B0) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CC74B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CC759; /* jge: greater or equal (signed >=) */

loc_001CC750: ;
    esi = MEM32(eax * 4 + 0x311E40);
    goto loc_001CC72E;

loc_001CC759: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC768; /* jne: not equal / not zero */

loc_001CC75E: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CC765u); RECOMP_ABI_CALL(0x002DA630u, sub_002DA630); /* call 0x002DA630 */

loc_001CC765: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CC768: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC777; /* jne: not equal / not zero */

loc_001CC76D: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CC774u); RECOMP_ABI_CALL(0x002DA7B0u, sub_002DA7B0); /* call 0x002DA7B0 */

loc_001CC774: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CC777: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC786; /* jne: not equal / not zero */

loc_001CC77C: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CC783u); RECOMP_ABI_CALL(0x002DA7F0u, sub_002DA7F0); /* call 0x002DA7F0 */

loc_001CC783: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CC786: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001CC793; /* jg: greater (signed >) */

loc_001CC78B: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CC793u); RECOMP_ABI_CALL(0x002DA740u, sub_002DA740); /* call 0x002DA740 */

loc_001CC793: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC7A0
 * Original: 0x001CC7A0 - 0x001CC88E (238 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC7A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CC88C; /* je: equal / zero */

loc_001CC7AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CC7B5u); RECOMP_ABI_CALL(0x002C9380u, sub_002C9380); /* call 0x002C9380 */

loc_001CC7B5: ;
    ecx = eax;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    eax = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_001CC828; /* je: equal / zero */

loc_001CC7C4: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFA0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFA0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001CC87B; /* ja: above (unsigned >) */

loc_001CC7D5: ;
    eax = ZX8(MEM8(eax + 0x1CC8C0));
    { uint32_t _jt = MEM32(eax * 4 + 0x1CC890); /* switch: 12 entries, 12 targets */
    if (_jt == 0x001CC7E3u) goto loc_001CC7E3;
    if (_jt == 0x001CC7EDu) goto loc_001CC7ED;
    if (_jt == 0x001CC7F7u) goto loc_001CC7F7;
    if (_jt == 0x001CC7FEu) goto loc_001CC7FE;
    if (_jt == 0x001CC805u) goto loc_001CC805;
    if (_jt == 0x001CC80Cu) goto loc_001CC80C;
    if (_jt == 0x001CC813u) goto loc_001CC813;
    if (_jt == 0x001CC81Au) goto loc_001CC81A;
    if (_jt == 0x001CC821u) goto loc_001CC821;
    if (_jt == 0x001CC843u) goto loc_001CC843;
    if (_jt == 0x001CC874u) goto loc_001CC874;
    if (_jt == 0x001CC87Bu) goto loc_001CC87B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CC7E3: ;
    eax = 0xC;
    goto loc_001CC87D;

loc_001CC7ED: ;
    eax = 0xF;
    goto loc_001CC87D;

loc_001CC7F7: ;
    eax = 0x19;
    goto loc_001CC87D;

loc_001CC7FE: ;
    eax = 0x1A;
    goto loc_001CC87D;

loc_001CC805: ;
    eax = 4;
    goto loc_001CC87D;

loc_001CC80C: ;
    eax = 5;
    goto loc_001CC87D;

loc_001CC813: ;
    eax = 0xB;
    goto loc_001CC87D;

loc_001CC81A: ;
    eax = 6;
    goto loc_001CC87D;

loc_001CC821: ;
    eax = 2;
    goto loc_001CC87D;

loc_001CC828: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFA0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFA0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001CC87B; /* ja: above (unsigned >) */

loc_001CC835: ;
    edx = ZX8(MEM8(eax + 0x1CC910));
    { uint32_t _jt = MEM32(edx * 4 + 0x1CC8E0); /* switch: 12 entries, 12 targets */
    if (_jt == 0x001CC7E3u) goto loc_001CC7E3;
    if (_jt == 0x001CC7EDu) goto loc_001CC7ED;
    if (_jt == 0x001CC813u) goto loc_001CC813;
    if (_jt == 0x001CC843u) goto loc_001CC843;
    if (_jt == 0x001CC84Au) goto loc_001CC84A;
    if (_jt == 0x001CC851u) goto loc_001CC851;
    if (_jt == 0x001CC858u) goto loc_001CC858;
    if (_jt == 0x001CC85Fu) goto loc_001CC85F;
    if (_jt == 0x001CC866u) goto loc_001CC866;
    if (_jt == 0x001CC86Du) goto loc_001CC86D;
    if (_jt == 0x001CC874u) goto loc_001CC874;
    if (_jt == 0x001CC87Bu) goto loc_001CC87B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CC843: ;
    eax = 0xE;
    goto loc_001CC87D;

loc_001CC84A: ;
    eax = 0x1F;
    goto loc_001CC87D;

loc_001CC851: ;
    eax = 0x20;
    goto loc_001CC87D;

loc_001CC858: ;
    eax = 0x1D;
    goto loc_001CC87D;

loc_001CC85F: ;
    eax = 0x11;
    goto loc_001CC87D;

loc_001CC866: ;
    eax = 0x12;
    goto loc_001CC87D;

loc_001CC86D: ;
    eax = 0x10;
    goto loc_001CC87D;

loc_001CC874: ;
    eax = 0x24;
    goto loc_001CC87D;

loc_001CC87B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CC87D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CC88C; /* je: equal / zero */

loc_001CC882: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC88C; /* jne: not equal / not zero */

loc_001CC887: ;
    eax = 0x28;

loc_001CC88C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC930
 * Original: 0x001CC930 - 0x001CC94D (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC930: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CC94A; /* je: equal / zero */

loc_001CC938: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CC94C; /* je: equal / zero */

loc_001CC93F: ;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CC94A; /* je: equal / zero */

loc_001CC946: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_001CC938; /* jne: not equal / not zero */

loc_001CC94A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CC94C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC950
 * Original: 0x001CC950 - 0x001CC957 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC950(void)
{

loc_001CC950: ;
    eax = MEM32(ecx + 0x40);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC960
 * Original: 0x001CC960 - 0x001CC968 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC960(void)
{

loc_001CC960: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CC967u); RECOMP_ABI_CALL(0x002DE7D0u, sub_002DE7D0); /* call 0x002DE7D0 */

loc_001CC967: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC970
 * Original: 0x001CC970 - 0x001CC975 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC970(void)
{

loc_001CC970: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CC980
 * Original: 0x001CC980 - 0x001CC98B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC980: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CC988u); RECOMP_ABI_CALL(0x002DC2F0u, sub_002DC2F0); /* call 0x002DC2F0 */

loc_001CC988: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CC990
 * Original: 0x001CC990 - 0x001CC9D0 (64 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC990: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    edx = MEM32(edi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = edi + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_001CC9C7; /* je: equal / zero */

loc_001CC99F: ;
    PUSH32(esp, esi);
    esi = eax;

loc_001CC9A2: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CC9B3; /* je: equal / zero */

loc_001CC9A8: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CC9B3; /* je: equal / zero */

loc_001CC9AF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_001CC9A2; /* jne: not equal / not zero */

loc_001CC9B3: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC9A2; /* jne: not equal / not zero */

loc_001CC9BD: ;
    eax = MEM32(ecx);
    POP32(esp, esi);
    MEM32(eax + 0x44) = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001CC9C7: ;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x44) = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC9E0
 * Original: 0x001CC9E0 - 0x001CCDA1 (961 bytes, 264 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001CC9E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    SET_LO8(eax, MEM8(eax + 0x2C));
    _fa = (uint32_t)(MEM8(0x528988)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x528988), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CC9FF; /* je: equal / zero */

loc_001CC9F1: ;
    ecx = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    MEM8(0x528988) = LO8(eax);
    PUSH32(esp, 0x001CC9FFu); RECOMP_ABI_CALL(0x002DB1B0u, sub_002DB1B0); /* call 0x002DB1B0 */

loc_001CC9FF: ;
    edx = MEM32(esi + 0x40);
    eax = MEM32(esi);
    ecx = MEM32(edx + 0x30);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x37E9B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x37E9B8), ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001CCA3F; /* je: equal / zero */

loc_001CCA11: ;
    edi = MEM32(0x2E90A8);
    MEM32(eax * 4 + 0x37E9B8) = ecx;
    ecx = MEM32(esi);
    eax = MEM32(ecx * 4 + 0x37E9B8);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x2E90A8) = edi;
    MEM32(ecx + 0x2E90D8) = eax;

loc_001CCA3F: ;
    SET_LO8(eax, MEM8(0x37EA28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCA72; /* je: equal / zero */

loc_001CCA48: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x40);
    edx = MEM32(eax * 4 + 0x528928);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCA72; /* je: equal / zero */

loc_001CCA59: ;
    edx = MEM32(ecx + 0x24);
    MEM32(eax * 4 + 0x528928) = edx;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CCA72u); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001CCA72: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCA97; /* je: equal / zero */

loc_001CCA79: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x528948)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x528948), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCA97; /* je: equal / zero */

loc_001CCA84: ;
    MEM32(eax * 4 + 0x528948) = ecx;
    edx = MEM32(esi + 0x38);
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CCA97u); RECOMP_ABI_CALL(0x002D9200u, sub_002D9200); /* call 0x002D9200 */

loc_001CCA97: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x37E8F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x37E8F8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCACF; /* je: equal / zero */

loc_001CCAA5: ;
    edi = MEM32(0x2E90A8);
    MEM32(eax * 4 + 0x37E8F8) = ecx;
    ecx = MEM32(esi);
    eax = MEM32(esi + 8);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x2E90A8) = edi;
    MEM32(ecx + 0x2E90B0) = eax;

loc_001CCACF: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x37E918)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x37E918), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCB07; /* je: equal / zero */

loc_001CCADD: ;
    edi = MEM32(0x2E90A8);
    MEM32(eax * 4 + 0x37E918) = ecx;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0xC);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x2E90A8) = edi;
    MEM32(ecx + 0x2E90B4) = eax;

loc_001CCB07: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x37E938)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x37E938), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCB3F; /* je: equal / zero */

loc_001CCB15: ;
    edi = MEM32(0x2E90A8);
    MEM32(eax * 4 + 0x37E938) = ecx;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0x10);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x2E90A8) = edi;
    MEM32(ecx + 0x2E90B8) = eax;

loc_001CCB3F: ;
    eax = MEM32(0x37DB88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CCB8A; /* jne: not equal / not zero */

loc_001CCB49: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x37E958)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x37E958), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCBDC; /* je: equal / zero */

loc_001CCB5B: ;
    edi = MEM32(0x2E90A8);
    MEM32(eax * 4 + 0x37E958) = ecx;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0x14);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x2E90A8) = edi;
    MEM32(ecx + 0x2E90BC) = eax;
    eax = MEM32(esi + 0x14);
    goto loc_001CCBBC;

loc_001CCB8A: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x37E958)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx * 4 + 0x37E958), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCBDC; /* je: equal / zero */

loc_001CCB95: ;
    edi = MEM32(0x2E90A8);
    MEM32(ecx * 4 + 0x37E958) = eax;
    ecx = MEM32(esi);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x2E90A8) = edi;
    MEM32(ecx + 0x2E90BC) = eax;

loc_001CCBBC: ;
    ecx = MEM32(esi);
    edi = MEM32(0x2E90A8);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x2E90A8) = edi;
    MEM32(ecx + 0x2E90C0) = eax;

loc_001CCBDC: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x37E998)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x37E998), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCC14; /* je: equal / zero */

loc_001CCBEA: ;
    edi = MEM32(0x2E90A8);
    MEM32(eax * 4 + 0x37E998) = ecx;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0x24);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x2E90A8) = edi;
    MEM32(ecx + 0x2E90D0) = eax;

loc_001CCC14: ;
    ecx = MEM32(esi);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x528990)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x28); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CCC61; /* jp: parity */

loc_001CCC2B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x528994)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x2C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CCC61; /* jp: parity */

loc_001CCC3D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x528998)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x30); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CCC61; /* jp: parity */

loc_001CCC4F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x52899C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x34); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CCCCC; /* jnp: not parity */

loc_001CCC61: ;
    eax = MEM32(esi + 0x28);
    MEM32(ecx + 0x528990) = eax;
    ecx = MEM32(esi);
    edx = MEM32(esi + 0x2C);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x528994) = edx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x30);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x528998) = ecx;
    edx = MEM32(esi);
    eax = MEM32(esi + 0x34);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0x52899C) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CCCA2u); RECOMP_ABI_CALL(0x002DA740u, sub_002DA740); /* call 0x002DA740 */

loc_001CCCA2: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x17);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CCCB0u); RECOMP_ABI_CALL(0x002DA740u, sub_002DA740); /* call 0x002DA740 */

loc_001CCCB0: ;
    edx = MEM32(esi + 0x30);
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x19);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CCCBEu); RECOMP_ABI_CALL(0x002DA740u, sub_002DA740); /* call 0x002DA740 */

loc_001CCCBE: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CCCCCu); RECOMP_ABI_CALL(0x002DA740u, sub_002DA740); /* call 0x002DA740 */

loc_001CCCCC: ;
    xmm0 = XMM_SCALAR(MEMF(0x528684)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    ecx = MEM32(esi);
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CCD26; /* jnp: not parity */

loc_001CCCE3: ;
    xmm1 = XMM_SCALAR(MEMF(ecx * 4 + 0x528968)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CCD66; /* jnp: not parity */

loc_001CCCF5: ;
    edx = MEM32(0x2E90A8);
    MEMF(ecx * 4 + 0x528968) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = edx;
    edx = MEM32(0x528684);
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x2E90C8) = edx;
    goto loc_001CCD66;

loc_001CCD26: ;
    xmm0 = XMM_SCALAR(MEMF(ecx * 4 + 0x528968)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x18); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CCD66; /* jnp: not parity */

loc_001CCD39: ;
    eax = MEM32(esi + 0x18);
    edi = MEM32(0x2E90A8);
    MEM32(ecx * 4 + 0x528968) = eax;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0x18);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x2E90A8) = edi;
    MEM32(ecx + 0x2E90C8) = eax;

loc_001CCD66: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x37E978)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x37E978), ecx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001CCD9F; /* je: equal / zero */

loc_001CCD75: ;
    MEM32(eax * 4 + 0x37E978) = ecx;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0x1C);
    esi = MEM32(0x2E90A8);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x2E90A8) = esi;
    MEM32(ecx + 0x2E90C4) = eax;

loc_001CCD9F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CCDB0
 * Original: 0x001CCDB0 - 0x001CCDB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCDB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCDB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CCDC0
 * Original: 0x001CCDC0 - 0x001CCDC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCDC0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CCDD0
 * Original: 0x001CCDD0 - 0x001CCDD7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCDD0(void)
{

loc_001CCDD0: ;
    eax = MEM32(ecx + 0x40);
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_001CCDE0
 * Original: 0x001CCDE0 - 0x001CCE3A (90 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCDE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    eax = ecx;
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    ecx = 2;
    MEM32(eax) = edx;
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x20) = LO8(edx);
    MEM32(eax + 0x24) = 4;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = edx;
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001CCE40
 * Original: 0x001CCE40 - 0x001CCE8B (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCE89; /* je: equal / zero */

loc_001CCE4A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x528948)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x528948), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CCE6A; /* jne: not equal / not zero */

loc_001CCE55: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CCE5Du); RECOMP_ABI_CALL(0x002D9200u, sub_002D9200); /* call 0x002D9200 */

loc_001CCE5D: ;
    eax = MEM32(esi);
    MEM32(eax * 4 + 0x528948) = 0;

loc_001CCE6A: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CCE73u); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001CCE73: ;
    edx = MEM32(esi + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CCE7Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CCE79u); } /* indirect call */
    }

loc_001CCE7F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = 0;

loc_001CCE89: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CCE90
 * Original: 0x001CCE90 - 0x001CCEC8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCE90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCE90: ;
    eax = ecx;
    edx = MEM32(eax + 0x10);
    edx = edx & 0xFF7FFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x10) = edx;
    edx = MEM32(eax + 0x28);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM8(eax + 0x2C) = LO8(ecx);
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCED0
 * Original: 0x001CCED0 - 0x001CCED1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCED0(void)
{

loc_001CCED0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCEE0
 * Original: 0x001CCEE0 - 0x001CCEE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCEE0(void)
{

loc_001CCEE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCEF0
 * Original: 0x001CCEF0 - 0x001CD26A (890 bytes, 325 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CCEF0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x001CCF13u); RECOMP_ABI_CALL(0x002F5587u, sub_002F5587); /* call 0x002F5587 */

loc_001CCF13: ;
    edi = MEM32(esi + 0x40);
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    edx = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CCF33; /* je: equal / zero */

loc_001CCF24: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCF33; /* je: equal / zero */

loc_001CCF29: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCF33; /* je: equal / zero */

loc_001CCF2E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CCF71; /* jne: not equal / not zero */

loc_001CCF33: ;
    eax = ecx + -12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001CCF68; /* ja: above (unsigned >) */

loc_001CCF3B: ;
    eax = ZX8(MEM8(eax + 0x1CD27C));
    { uint32_t _jt = MEM32(eax * 4 + 0x1CD26C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001CCF49u) goto loc_001CCF49;
    if (_jt == 0x001CCF53u) goto loc_001CCF53;
    if (_jt == 0x001CCF5Du) goto loc_001CCF5D;
    if (_jt == 0x001CCF68u) goto loc_001CCF68;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CCF49: ;
    MEM32(esp + 0x10) = 8;
    goto loc_001CCF68;

loc_001CCF53: ;
    MEM32(esp + 0x10) = 0x10;
    goto loc_001CCF68;

loc_001CCF5D: ;
    eax = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;

loc_001CCF68: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CCF71; /* jne: not equal / not zero */

loc_001CCF6D: ;
    MEM8(edi + 0x2C) = 1;

loc_001CCF71: ;
    ecx = MEM32(esi + 0x40);
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CCF93; /* jne: not equal / not zero */

loc_001CCF7B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3372A0);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CCF88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CCF82u); } /* indirect call */
    }

loc_001CCF88: ;
    edx = MEM32(esi + 0x40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x24) = eax;
    goto loc_001CCFBA;

loc_001CCF93: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x528928)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x528928), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CCFAE; /* jne: not equal / not zero */

loc_001CCF9E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CCFA5u); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001CCFA5: ;
    eax = MEM32(esi);
    MEM32(eax * 4 + 0x528928) = ebx;

loc_001CCFAE: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CCFBAu); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001CCFBA: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CCFC6u); RECOMP_ABI_CALL(0x002C9380u, sub_002C9380); /* call 0x002C9380 */

loc_001CCFC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CCFD7; /* je: equal / zero */

loc_001CCFCD: ;
    edx = MEM32(esi + 0x40);
    MEM32(edx + 0x30) = 0xE0000000u;

loc_001CCFD7: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM8(ecx + 0x13)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x13), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CD00D; /* jne: not equal / not zero */

loc_001CCFE0: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD00D; /* je: equal / zero */

loc_001CCFE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD00D; /* je: equal / zero */

loc_001CCFED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD00D; /* je: equal / zero */

loc_001CCFF2: ;
    ebx = 3;
    MEM32(esp + 0x18) = 1;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    goto loc_001CD012;

loc_001CD00D: ;
    ebx = 3;

loc_001CD012: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    ebp = MEM32(ecx + 0xC);
    edi = MEM32(ecx + 8);
    MEM32(esp + 0x24) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_001CD02E; /* je: equal / zero */

loc_001CD024: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD02E; /* je: equal / zero */

loc_001CD029: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CD046; /* jne: not equal / not zero */

loc_001CD02E: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = eax;

loc_001CD046: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD07C; /* je: equal / zero */

loc_001CD04E: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x10));
    eax = edi;
    eax = eax & 0x8000003Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001CD061; /* jns: not sign (positive) */

loc_001CD05C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CD061: ;
    MEM32(esp + 0x14) = eax;
    if ((eax == 0)) goto loc_001CD074; /* je: equal / zero */

loc_001CD067: ;
    edx = 0x40;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    eax = edx;

loc_001CD074: ;
    ebx = edi + eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ebp);
    goto loc_001CD0B1;

loc_001CD07C: ;
    eax = MEM32(ecx + 0x10);
    eax = eax << 0x1A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1A) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x20) = eax;
    goto loc_001CD090;

    /* nop */

loc_001CD090: ;
    edx = MEM32(esp + 0x20);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x1C);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001CD090; /* jl: less (signed <) */

loc_001CD0B1: ;
    eax = ecx + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001CD101; /* jb: below (unsigned <) */

loc_001CD0BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8FFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8FFFFFFFu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001CD101; /* ja: above (unsigned >) */

loc_001CD0C2: ;
    eax = MEM32(ecx + 8);
    edi = MEM32(esp + 0x14);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x10));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    ecx = ecx << 0x1A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x1A) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CD0F6u); RECOMP_ABI_CALL(0x002F6369u, sub_002F6369); /* call 0x002F6369 */

loc_001CD0F6: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x1C);
    goto loc_001CD22B;

loc_001CD101: ;
    ecx = MEM32(ecx + 0x20);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD11F; /* je: equal / zero */

loc_001CD10A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CD110u); RECOMP_ABI_CALL(0x001EE991u, sub_001EE991); /* call 0x001EE991 */

loc_001CD110: ;
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x20) = ebp;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + 0x24);
    MEM32(edx + 4) = ebp;

loc_001CD11F: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CD12Eu); RECOMP_ABI_CALL(0x001EE91Bu, sub_001EE91B); /* call 0x001EE91B */

loc_001CD12E: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 0x20) = eax;
    edx = MEM32(esi + 0x40);
    edi = MEM32(edx + 0x20);
    ecx = ebx;
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
    eax = MEM32(esi + 0x40);
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CD160; /* jne: not equal / not zero */

loc_001CD156: ;
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

loc_001CD160: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = MEM32(eax + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_001CD1DF; /* je: equal / zero */

loc_001CD16B: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001CD1ED; /* jle: less or equal (signed <=) */

loc_001CD17A: ;
    /* nop */

loc_001CD180: ;
    ecx = MEM32(esi + 0x40);
    ecx = MEM32(ecx + 8);
    edi = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CD1A8; /* jle: less or equal (signed <=) */

loc_001CD193: ;
    SET_LO8(ecx, MEM8(ebp));
    MEM8(edx) = LO8(ecx);
    ecx = MEM32(esi + 0x40);
    ecx = MEM32(ecx + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CD193; /* jl: less (signed <) */

loc_001CD1A8: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CD1CA; /* jle: less or equal (signed <=) */

loc_001CD1B0: ;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x10);
    eax = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CD1CA: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x40);
    ebx = MEM32(ecx + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001CD180; /* jl: less (signed <) */

loc_001CD1DD: ;
    goto loc_001CD1F1;

loc_001CD1DF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CD1ED; /* jle: less or equal (signed <=) */

loc_001CD1E3: ;
    SET_LO8(eax, MEM8(ebp));
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CD1E3; /* jne: not equal / not zero */

loc_001CD1ED: ;
    edi = MEM32(esp + 0x10);

loc_001CD1F1: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 8);
    ebx = MEM32(esp + 0x14);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    edx = edx << 0x1A;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1A) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CD225u); RECOMP_ABI_CALL(0x002F6369u, sub_002F6369); /* call 0x002F6369 */

loc_001CD225: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x20);

loc_001CD22B: ;
    edx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CD235u); RECOMP_ABI_CALL(0x002DE7D0u, sub_002DE7D0); /* call 0x002DE7D0 */

loc_001CD235: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CD241u); RECOMP_ABI_CALL(0x002C9380u, sub_002C9380); /* call 0x002C9380 */

loc_001CD241: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD252; /* je: equal / zero */

loc_001CD248: ;
    edx = MEM32(esi + 0x40);
    eax = MEM32(edx + 0x24);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 4;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001CD252: ;
    POP32(esp, edi);
    MEM8(0x529068) = 1;
    MEM8(esi + 0x20) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CD2A0
 * Original: 0x001CD2A0 - 0x001CD2AB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD2A0(void)
{

loc_001CD2A0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD2B0
 * Original: 0x001CD2B0 - 0x001CD2B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD2B0(void)
{

loc_001CD2B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD2C0
 * Original: 0x001CD2C0 - 0x001CD2CD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD2C0(void)
{

loc_001CD2C0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD2D0
 * Original: 0x001CD2D0 - 0x001CD2DF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD2D0(void)
{

loc_001CD2D0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD2E0
 * Original: 0x001CD2E0 - 0x001CD2EE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD2E0(void)
{

loc_001CD2E0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x24) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD2F0
 * Original: 0x001CD2F0 - 0x001CD300 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD2F0(void)
{

loc_001CD2F0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD300
 * Original: 0x001CD300 - 0x001CD325 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD300: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001CD330
 * Original: 0x001CD330 - 0x001CD354 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD330: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD360
 * Original: 0x001CD360 - 0x001CD365 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD360(void)
{

loc_001CD360: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD370
 * Original: 0x001CD370 - 0x001CD373 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD370(void)
{

loc_001CD370: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001CD380
 * Original: 0x001CD380 - 0x001CD387 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD380(void)
{

loc_001CD380: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CD386u); RECOMP_ABI_CALL(0x002DE660u, sub_002DE660); /* call 0x002DE660 */

loc_001CD386: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD390
 * Original: 0x001CD390 - 0x001CD400 (112 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD390: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CD39Au); RECOMP_ABI_CALL(0x002C93B0u, sub_002C93B0); /* call 0x002C93B0 */

loc_001CD39A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD3FD; /* je: equal / zero */

loc_001CD3A3: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x55) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x55 (8-bit) */
    SET_LO8(edx, 0x44);
    if (CMP_NE(_fa, _fb)) goto loc_001CD3BB; /* jne: not equal / not zero */

loc_001CD3AA: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x53) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x53 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CD3BB; /* jne: not equal / not zero */

loc_001CD3B0: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0x45 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CD3BB; /* jne: not equal / not zero */

loc_001CD3B6: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD3FF; /* je: equal / zero */

loc_001CD3BB: ;
    MEM8(eax + 3) = LO8(edx);
    edx = MEM32(eax + 0x10);
    edx = edx & 0xFF7FFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x10) = edx;
    edx = MEM32(eax + 0x28);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax) = 0x55;
    MEM8(eax + 1) = 0x53;
    MEM8(eax + 2) = 0x45;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM8(eax + 0x2C) = LO8(ecx);
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

loc_001CD3FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CD3FF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD400
 * Original: 0x001CD400 - 0x001CD4B1 (177 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD400: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CD411; /* jne: not equal / not zero */

loc_001CD40B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001CD411: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD428; /* je: equal / zero */

loc_001CD417: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD422; /* je: equal / zero */

loc_001CD41E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_001CD411; /* jne: not equal / not zero */

loc_001CD422: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001CD428: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001CD438; /* je: equal / zero */

loc_001CD431: ;
    edi = MEM32(ecx + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CD43B;

loc_001CD438: ;
    edi = ecx + 0x10;

loc_001CD43B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx + 0x3C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001CD449; /* jne: not equal / not zero */

loc_001CD442: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001CD449: ;
    eax = MEM32(ebx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD442; /* je: equal / zero */

loc_001CD450: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CD453: ;
    eax = MEM32(esi * 4 + 0x528948);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CD467; /* jne: not equal / not zero */

loc_001CD45F: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CD467u); RECOMP_ABI_CALL(0x002D9200u, sub_002D9200); /* call 0x002D9200 */

loc_001CD467: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CD453; /* jl: less (signed <) */

loc_001CD46D: ;
    ecx = MEM32(ebx + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CD476u); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001CD476: ;
    edx = MEM32(ebx + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CD483u); RECOMP_ABI_CALL(0x002F63ABu, sub_002F63AB); /* call 0x002F63AB */

loc_001CD483: ;
    eax = MEM32(ebx + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CD48Du); RECOMP_ABI_CALL(0x002DE7D0u, sub_002DE7D0); /* call 0x002DE7D0 */

loc_001CD48D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001CD490: ;
    eax = MEM32(ebx + 0x38);
    _fa = (uint32_t)(MEM32(esi * 4 + 0x528948)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 4 + 0x528948), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CD4A3; /* jne: not equal / not zero */

loc_001CD49C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CD4A3u); RECOMP_ABI_CALL(0x002D9200u, sub_002D9200); /* call 0x002D9200 */

loc_001CD4A3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CD490; /* jl: less (signed <) */

loc_001CD4A9: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD4C0
 * Original: 0x001CD4C0 - 0x001CD5B9 (249 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD4C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    eax = 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi) = ebx;
    MEM32(esi + 0x14) = eax;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x20) = LO8(ebx);
    MEM32(esi + 0x24) = 4;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x34);
    MEM32(esi + 0x48) = esi;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CD527u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CD521u); } /* indirect call */
    }

loc_001CD527: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = 0xFFFFFFFEu;
    if (CMP_EQ(_fa, _fb)) goto loc_001CD567; /* je: equal / zero */

loc_001CD533: ;
    edx = MEM32(eax + 0x10);
    edx = edx & 0xFF7FFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x10) = edx;
    edx = MEM32(eax + 0x28);
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x24) = ebx;
    MEM32(eax + 0x28) = edx;
    MEM8(eax + 0x2C) = LO8(ebx);
    MEM32(eax + 0x30) = ebx;
    goto loc_001CD569;

loc_001CD567: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CD569: ;
    MEM32(esi + 0x40) = eax;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) | 0x800000;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) & ecx;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x40);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x18) = ebx;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 8) = ebx;
    edx = MEM32(esi + 0x40);
    MEM32(edx + 0xC) = ebx;
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0xFFFFFFC0u;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0xFFFFC03Fu;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x40);
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(eax + 0x1C) = ebx;
    ecx = MEM32(esi + 0x40);
    eax = esi;
    POP32(esp, esi);
    MEM32(ecx + 0x24) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CD5C0
 * Original: 0x001CD5C0 - 0x001CD845 (645 bytes, 229 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD5C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001CD5CFu); RECOMP_ABI_CALL(0x001CD390u, sub_001CD390); /* call 0x001CD390 */

loc_001CD5CF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x40) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001CD5F3; /* jne: not equal / not zero */

loc_001CD5DB: ;
    edi = MEM32(0x37DD4C);
    edi = edi + 0x37DD38;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CD5EDu); RECOMP_ABI_CALL(0x001CD390u, sub_001CD390); /* call 0x001CD390 */

loc_001CD5ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = eax;

loc_001CD5F3: ;
    eax = MEM32(esi + 0x40);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CD753; /* jne: not equal / not zero */

loc_001CD606: ;
    MEM32(eax + 0x18) = edi;
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 8) = eax;
    edx = (uint32_t)(int32_t)SMEM16(edi + 6);
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(esi + 0x40);
    edx = MEM32(eax + 0x10);
    ecx = ecx >> 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    eax = MEM32(esi + 0x40);
    edx = MEM32(edi + 0xC);
    ecx = MEM32(eax + 0x10);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x1000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(eax + 0x10) = ecx;
    PUSH32(esp, 0x001CD653u); RECOMP_ABI_CALL(0x001B36F0u, sub_001B36F0); /* call 0x001B36F0 */

loc_001CD653: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + 0x10);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3FC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ecx + 0x10) = edx;
    PUSH32(esp, 0x001CD66Eu); RECOMP_ABI_CALL(0x001CC7A0u, sub_001CC7A0); /* call 0x001CC7A0 */

loc_001CD66E: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 0x14) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = ebx;
    ecx = edi;
    /* nop */

loc_001CD680: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD6AD; /* je: equal / zero */

loc_001CD686: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD691; /* je: equal / zero */

loc_001CD68D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_001CD680; /* jne: not equal / not zero */

loc_001CD691: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CD693: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x3C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CD71D; /* je: equal / zero */

loc_001CD69E: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD6B1; /* je: equal / zero */

loc_001CD6A6: ;
    ecx = MEM32(eax + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CD6B4;

loc_001CD6AD: ;
    eax = ecx;
    goto loc_001CD693;

loc_001CD6B1: ;
    ecx = eax + 0x10;

loc_001CD6B4: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), ebx (32-bit) */
    MEM32(esi + 0x3C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CD6F2; /* je: equal / zero */

loc_001CD6BC: ;
    /* nop */

loc_001CD6C0: ;
    edx = MEM32(ebx * 4 + 0x528948);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CD6DF; /* jne: not equal / not zero */

loc_001CD6CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CD6D4u); RECOMP_ABI_CALL(0x002D9200u, sub_002D9200); /* call 0x002D9200 */

loc_001CD6D4: ;
    MEM32(ebx * 4 + 0x528948) = 0;

loc_001CD6DF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CD6C0; /* jl: less (signed <) */

loc_001CD6E5: ;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CD6EEu); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001CD6EE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001CD705;

loc_001CD6F2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x33727C);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CD6FFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CD6F9u); } /* indirect call */
    }

loc_001CD6FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = eax;

loc_001CD705: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CD710u); RECOMP_ABI_CALL(0x002F63ABu, sub_002F63AB); /* call 0x002F63AB */

loc_001CD710: ;
    edx = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CD71Du); RECOMP_ABI_CALL(0x002DE7D0u, sub_002DE7D0); /* call 0x002DE7D0 */

loc_001CD71D: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD73D; /* je: equal / zero */

loc_001CD725: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esi + 0x40);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x1C) = eax;
    ecx = esi;
    PUSH32(esp, 0x001CD737u); RECOMP_ABI_CALL(0x001CCEF0u, sub_001CCEF0); /* call 0x001CCEF0 */

loc_001CD737: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001CD73D: ;
    ecx = MEM32(esi + 0x40);
    eax = edi + 0x10;
    MEM32(ecx + 0x1C) = eax;
    ecx = esi;
    PUSH32(esp, 0x001CD74Du); RECOMP_ABI_CALL(0x001CCEF0u, sub_001CCEF0); /* call 0x001CCEF0 */

loc_001CD74D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001CD753: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x3C) = ebx;
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001CD771; /* je: equal / zero */

loc_001CD75C: ;
    /* nop */

loc_001CD760: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD78D; /* je: equal / zero */

loc_001CD766: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD771; /* je: equal / zero */

loc_001CD76D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_001CD760; /* jne: not equal / not zero */

loc_001CD771: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CD773: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x3C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CD7F6; /* je: equal / zero */

loc_001CD77E: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD791; /* je: equal / zero */

loc_001CD786: ;
    ecx = MEM32(eax + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CD794;

loc_001CD78D: ;
    eax = ecx;
    goto loc_001CD773;

loc_001CD791: ;
    ecx = eax + 0x10;

loc_001CD794: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), ebx (32-bit) */
    MEM32(esi + 0x3C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CD7CB; /* je: equal / zero */

loc_001CD79C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001CD7A0: ;
    edx = MEM32(edi * 4 + 0x528948);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CD7BA; /* jne: not equal / not zero */

loc_001CD7AC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CD7B3u); RECOMP_ABI_CALL(0x002D9200u, sub_002D9200); /* call 0x002D9200 */

loc_001CD7B3: ;
    MEM32(edi * 4 + 0x528948) = ebx;

loc_001CD7BA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CD7A0; /* jl: less (signed <) */

loc_001CD7C0: ;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CD7C9u); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001CD7C9: ;
    goto loc_001CD7DE;

loc_001CD7CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x337288);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CD7D8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CD7D2u); } /* indirect call */
    }

loc_001CD7D8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = eax;

loc_001CD7DE: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CD7E9u); RECOMP_ABI_CALL(0x002F63ABu, sub_002F63AB); /* call 0x002F63AB */

loc_001CD7E9: ;
    edx = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CD7F6u); RECOMP_ABI_CALL(0x002DE7D0u, sub_002DE7D0); /* call 0x002DE7D0 */

loc_001CD7F6: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CD802u); RECOMP_ABI_CALL(0x002C9380u, sub_002C9380); /* call 0x002C9380 */

loc_001CD802: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD813; /* je: equal / zero */

loc_001CD809: ;
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x30) = 0xE0000000u;

loc_001CD813: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM8(eax + 0x13)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x13), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CD83F; /* jne: not equal / not zero */

loc_001CD81C: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD83F; /* je: equal / zero */

loc_001CD824: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD83F; /* je: equal / zero */

loc_001CD829: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD83F; /* je: equal / zero */

loc_001CD82E: ;
    eax = 3;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;

loc_001CD83F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD850
 * Original: 0x001CD850 - 0x001CD8FC (172 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CD850: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    PUSH32(esp, ebx);
    eax = 1;
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 0x10) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(ebp + 0x40) = ebx;
    MEM32(ebp) = ebx;
    eax = 2;
    MEM32(ebp + 0x14) = eax;
    MEM32(ebp + 0x1C) = eax;
    MEMF(ebp + 0x18) = xmm0.f[0]; /* movss */
    MEM8(ebp + 0x20) = LO8(ebx);
    MEM32(ebp + 0x24) = 4;
    MEM32(ebp + 0x38) = ebx;
    MEM32(ebp + 0x3C) = ebx;
    MEMF(ebp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(ebp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x34) = xmm1.f[0]; /* movss */
    MEM32(ebp + 0x48) = ebp;
    PUSH32(esp, edi);
    ecx = 0x12;
    esi = edx;
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
    eax = MEM32(ebp + 0x40);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x38), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD8F3; /* je: equal / zero */

loc_001CD8CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x337294);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CD8D8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CD8D2u); } /* indirect call */
    }

loc_001CD8D8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x001CD8E6u); RECOMP_ABI_CALL(0x002F63ABu, sub_002F63AB); /* call 0x002F63AB */

loc_001CD8E6: ;
    eax = MEM32(ebp + 0x3C);
    ecx = MEM32(ebp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CD8F3u); RECOMP_ABI_CALL(0x002DE7D0u, sub_002DE7D0); /* call 0x002DE7D0 */

loc_001CD8F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD900
 * Original: 0x001CD900 - 0x001CD9A1 (161 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD900: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CD90Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CD909u); } /* indirect call */
    }

loc_001CD90F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD921; /* je: equal / zero */

loc_001CD916: ;
    ecx = eax;
    PUSH32(esp, 0x001CD91Du); RECOMP_ABI_CALL(0x001CD4C0u, sub_001CD4C0); /* call 0x001CD4C0 */

loc_001CD91D: ;
    esi = eax;
    goto loc_001CD923;

loc_001CD921: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CD923: ;
    edi = MEM32(esp + 0x28);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CD934u); RECOMP_ABI_CALL(0x002DC2F0u, sub_002DC2F0); /* call 0x002DC2F0 */

loc_001CD934: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 0x18) = 0;
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0x3C) = 0;
    MEM32(esi + 0x38) = 0;
    eax = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0xFFFFFFC0u;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0xFEFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0xFFFFC03Fu;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0x40);
    eax = 3;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(edx + 0x24) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CD9B0
 * Original: 0x001CD9B0 - 0x001CDA29 (121 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD9B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM8(esi) = 0x44;
    MEM8(esi + 1) = 0x47;
    MEM8(esi + 2) = 0x4B;
    MEM8(esi + 3) = 0x21;
    MEM32(esi + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001CDA26; /* je: equal / zero */

loc_001CD9CF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD9E3; /* je: equal / zero */

loc_001CD9D7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CD9DDu); RECOMP_ABI_CALL(0x002DE660u, sub_002DE660); /* call 0x002DE660 */

loc_001CD9DD: ;
    MEM32(esi + 0x24) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CD9E3: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD9F3; /* je: equal / zero */

loc_001CD9EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CD9F0u); RECOMP_ABI_CALL(0x001EE991u, sub_001EE991); /* call 0x001EE991 */

loc_001CD9F0: ;
    MEM32(esi + 0x20) = edi;

loc_001CD9F3: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDA26; /* je: equal / zero */

loc_001CD9FA: ;
    MEM32(eax) = edi;
    eax = MEM32(esi + 0x24);
    MEM32(eax + 4) = edi;
    ecx = MEM32(esi + 0x24);
    MEM32(ecx + 8) = edi;
    edx = MEM32(esi + 0x24);
    MEM32(edx + 0xC) = edi;
    eax = MEM32(esi + 0x24);
    MEM32(eax + 0x10) = edi;
    ecx = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CDA20u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CDA1Au); } /* indirect call */
    }

loc_001CDA20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = edi;

loc_001CDA26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CDA30
 * Original: 0x001CDA30 - 0x001CDBAE (382 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CDA30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4C);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CDA3Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CDA38u); } /* indirect call */
    }

loc_001CDA3E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDA50; /* je: equal / zero */

loc_001CDA45: ;
    ecx = eax;
    PUSH32(esp, 0x001CDA4Cu); RECOMP_ABI_CALL(0x001CD4C0u, sub_001CD4C0); /* call 0x001CD4C0 */

loc_001CDA4C: ;
    esi = eax;
    goto loc_001CDA52;

loc_001CDA50: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CDA52: ;
    eax = MEM32(esi + 0x40);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x18) = ebx;
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esi + 0x40);
    edx = MEM32(eax + 0x10);
    edx = edx & 0xFFFFFFC1u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x10) = edx;
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) | 0x1000000;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x40);
    ebp = MEM32(esp + 0x18);
    edx = MEM32(eax + 0x10);
    ecx = ebp;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x3FC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDACA; /* jne: not equal / not zero */

loc_001CDAAF: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) & 0xFEFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 3;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;

loc_001CDACA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDAF1; /* je: equal / zero */

loc_001CDACF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDB0C; /* jne: not equal / not zero */

loc_001CDAD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDAE5; /* jne: not equal / not zero */

loc_001CDAD9: ;
    edx = MEM32(esi + 0x40);
    MEM32(edx + 0x14) = 6;
    goto loc_001CDB0C;

loc_001CDAE5: ;
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x14) = 0x12;
    goto loc_001CDB0C;

loc_001CDAF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDB02; /* jne: not equal / not zero */

loc_001CDAF6: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 0x14) = 5;
    goto loc_001CDB0C;

loc_001CDB02: ;
    edx = MEM32(esi + 0x40);
    MEM32(edx + 0x14) = 0x11;

loc_001CDB0C: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    eax = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0xC);
    edx = MEM32(edi + 8);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CDB29u); RECOMP_ABI_CALL(0x002DC240u, sub_002DC240); /* call 0x002DC240 */

loc_001CDB29: ;
    MEM32(edi + 0x24) = eax;
    eax = MEM32(esi + 0x40);
    MEM8(esi + 0x20) = LO8(ebx);
    ecx = MEM32(eax + 0x28);
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3372AC);
    PUSH32(esp, 0x14);
    MEM32(eax + 0x28) = ecx;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CDB48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDB42u); } /* indirect call */
    }

loc_001CDB48: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001CDB6D; /* je: equal / zero */

loc_001CDB63: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDB70; /* jne: not equal / not zero */

loc_001CDB68: ;
    MEM8(eax) = 0x7D;
    goto loc_001CDB70;

loc_001CDB6D: ;
    MEM8(eax) = 0x78;

loc_001CDB70: ;
    ebx = MEM32(eax + 0xC);
    SET_LO16(ecx, MEM16(esp + 0x10));
    SET_LO16(edx, MEM16(esp + 0x14));
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = LO16(edx);
    ebx = ebx | 0x1000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ebx;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x40);
    MEM32(edx + 0x18) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CDBB0
 * Original: 0x001CDBB0 - 0x001CDCF4 (324 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CDBB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4C);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CDBBEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CDBB8u); } /* indirect call */
    }

loc_001CDBBE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDBD0; /* je: equal / zero */

loc_001CDBC5: ;
    ecx = eax;
    PUSH32(esp, 0x001CDBCCu); RECOMP_ABI_CALL(0x001CD4C0u, sub_001CD4C0); /* call 0x001CD4C0 */

loc_001CDBCC: ;
    esi = eax;
    goto loc_001CDBD2;

loc_001CDBD0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CDBD2: ;
    eax = MEM32(esi + 0x40);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x18) = ebx;
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esi + 0x40);
    edx = MEM32(eax + 0x10);
    edx = edx & 0xFFFFFFC1u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x10) = edx;
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0xFEFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x40);
    edx = MEM32(eax + 0x10);
    ecx = ebp;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x3FC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    MEM32(eax + 0x10) = edx;
    eax = 3;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CDC4E; /* je: equal / zero */

loc_001CDC3D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDC58; /* jne: not equal / not zero */

loc_001CDC42: ;
    edx = MEM32(esi + 0x40);
    MEM32(edx + 0x14) = 0x2E;
    goto loc_001CDC58;

loc_001CDC4E: ;
    eax = MEM32(esi + 0x40);
    MEM32(eax + 0x14) = 0x30;

loc_001CDC58: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    eax = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0xC);
    edx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CDC6Fu); RECOMP_ABI_CALL(0x002DE910u, sub_002DE910); /* call 0x002DE910 */

loc_001CDC6F: ;
    MEM32(edi + 0x24) = eax;
    eax = MEM32(esi + 0x40);
    MEM8(esi + 0x20) = LO8(ebx);
    ecx = MEM32(eax + 0x28);
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3372B8);
    PUSH32(esp, 0x14);
    MEM32(eax + 0x28) = ecx;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CDC8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDC88u); } /* indirect call */
    }

loc_001CDC8E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001CDCB3; /* je: equal / zero */

loc_001CDCA9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDCB6; /* jne: not equal / not zero */

loc_001CDCAE: ;
    MEM8(eax) = 0x7D;
    goto loc_001CDCB6;

loc_001CDCB3: ;
    MEM8(eax) = 0x78;

loc_001CDCB6: ;
    ebx = MEM32(eax + 0xC);
    SET_LO16(ecx, MEM16(esp + 0x10));
    SET_LO16(edx, MEM16(esp + 0x14));
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = LO16(edx);
    ebx = ebx | 0x1000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ebx;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x40);
    MEM32(edx + 0x18) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CDD00
 * Original: 0x001CDD00 - 0x001CDD6F (111 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDD00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CDD00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    eax = 1;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    eax = 2;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esp + 8);
    MEM32(esi) = ecx;
    MEM8(esi + 0x20) = LO8(ecx);
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x40) = ecx;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x24) = 4;
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x48) = esi;
    PUSH32(esp, 0x001CDD69u); RECOMP_ABI_CALL(0x001CD5C0u, sub_001CD5C0); /* call 0x001CD5C0 */

loc_001CDD69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CDD70
 * Original: 0x001CDD70 - 0x001CDE83 (275 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CDD70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001CDD8B; /* jne: not equal / not zero */

loc_001CDD7F: ;
    ebp = MEM32(0x37DD4C);
    ebp = ebp + 0x37DD38;

loc_001CDD8B: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x40);
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x40);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDE06; /* jne: not equal / not zero */

loc_001CDD9D: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CDDA0: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(edi * 4 + 0x528928);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDDBF; /* jne: not equal / not zero */

loc_001CDDB1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CDDB8u); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001CDDB8: ;
    MEM32(edi * 4 + 0x528928) = ebx;

loc_001CDDBF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CDDA0; /* jl: less (signed <) */

loc_001CDDC5: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDDD7; /* je: equal / zero */

loc_001CDDD1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CDDD7u); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001CDDD7: ;
    edx = MEM32(esi);
    edi = MEM32(edx + 0x40);
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x10), 0x800000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CDDFE; /* je: equal / zero */

loc_001CDDE5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDE05; /* je: equal / zero */

loc_001CDDE9: ;
    ecx = edi;
    PUSH32(esp, 0x001CDDF0u); RECOMP_ABI_CALL(0x001CD9B0u, sub_001CD9B0); /* call 0x001CD9B0 */

loc_001CDDF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CDDF9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CDDF3u); } /* indirect call */
    }

loc_001CDDF9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CDE05;

loc_001CDDFE: ;
    ecx = edi;
    PUSH32(esp, 0x001CDE05u); RECOMP_ABI_CALL(0x001CD9B0u, sub_001CD9B0); /* call 0x001CD9B0 */

loc_001CDE05: ;
    POP32(esp, edi);

loc_001CDE06: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001CDE0Cu); RECOMP_ABI_CALL(0x001CD390u, sub_001CD390); /* call 0x001CD390 */

loc_001CDE0C: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x40) = eax;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDE75; /* jne: not equal / not zero */

loc_001CDE1D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x34);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CDE26u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CDE20u); } /* indirect call */
    }

loc_001CDE26: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDE62; /* je: equal / zero */

loc_001CDE2D: ;
    ecx = MEM32(eax + 0x10);
    ecx = ecx & 0xFF7FFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(eax + 0x28);
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x24) = ebx;
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x2C) = LO8(ebx);
    MEM32(eax + 0x30) = ebx;
    goto loc_001CDE64;

loc_001CDE62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CDE64: ;
    edx = MEM32(esi);
    MEM32(edx + 0x40) = eax;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x40);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) | 0x800000;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001CDE75: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001CDE7Du); RECOMP_ABI_CALL(0x001CD5C0u, sub_001CD5C0); /* call 0x001CD5C0 */

loc_001CDE7D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CDE90
 * Original: 0x001CDE90 - 0x001CDF77 (231 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CDE90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x40);
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x40);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDF51; /* jne: not equal / not zero */

loc_001CDEAB: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001CDEB0: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(edi * 4 + 0x528928);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDED4; /* jne: not equal / not zero */

loc_001CDEC1: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CDEC9u); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001CDEC9: ;
    MEM32(edi * 4 + 0x528928) = 0;

loc_001CDED4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CDEB0; /* jl: less (signed <) */

loc_001CDEDA: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x40);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDEEC; /* je: equal / zero */

loc_001CDEE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CDEECu); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001CDEEC: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDF22; /* je: equal / zero */

loc_001CDEF5: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x528948)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x528948), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDF17; /* jne: not equal / not zero */

loc_001CDF00: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CDF08u); RECOMP_ABI_CALL(0x002D9200u, sub_002D9200); /* call 0x002D9200 */

loc_001CDF08: ;
    edx = MEM32(esi);
    eax = MEM32(edx);
    MEM32(eax * 4 + 0x528948) = 0;

loc_001CDF17: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CDF22u); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001CDF22: ;
    eax = MEM32(esi);
    edi = MEM32(eax + 0x40);
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x10), 0x800000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CDF49; /* je: equal / zero */

loc_001CDF30: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDF50; /* je: equal / zero */

loc_001CDF34: ;
    ecx = edi;
    PUSH32(esp, 0x001CDF3Bu); RECOMP_ABI_CALL(0x001CD9B0u, sub_001CD9B0); /* call 0x001CD9B0 */

loc_001CDF3B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CDF44u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CDF3Eu); } /* indirect call */
    }

loc_001CDF44: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CDF50;

loc_001CDF49: ;
    ecx = edi;
    PUSH32(esp, 0x001CDF50u); RECOMP_ABI_CALL(0x001CD9B0u, sub_001CD9B0); /* call 0x001CD9B0 */

loc_001CDF50: ;
    POP32(esp, edi);

loc_001CDF51: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x40);
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi);
    edx = MEM32(eax + 0x40);
    MEM32(ecx + 0x40) = edx;
    ecx = MEM32(esi);
    edx = MEM32(eax + 0x38);
    MEM32(ecx + 0x38) = edx;
    ecx = MEM32(esi);
    edx = MEM32(eax + 0x3C);
    MEM32(ecx + 0x3C) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CDF80
 * Original: 0x001CDF80 - 0x001CE342 (962 bytes, 301 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDF80(void)
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

loc_001CDF80: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x001CDF95u); RECOMP_ABI_CALL(0x001CEB70u, sub_001CEB70); /* call 0x001CEB70 */

loc_001CDF95: ;
    eax = MEM32(esp + 0x44);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = 1;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001CE30C; /* jle: less or equal (signed <=) */

loc_001CDFB0: ;
    ebx = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(8)) >> 32) & 1);
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    goto loc_001CDFC0;

    /* nop */

loc_001CDFC0: ;
    edx = MEM32(ebx + -8);
    ebp = ebx + -8;
    edi = edx;
    esi = 0x337084;
    ecx = 4;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CDFDD; /* je: equal / zero */

loc_001CDFD8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CDFDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CDFED; /* jne: not equal / not zero */

loc_001CDFE1: ;
    ecx = MEM32(esp + 0x64);
    MEM8(ecx) = 1;
    goto loc_001CE2F2;

loc_001CDFED: ;
    edi = edx;
    esi = 0x337088;
    ecx = 0xA;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE004; /* je: equal / zero */

loc_001CDFFF: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE004: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_001CE0E0; /* jne: not equal / not zero */

loc_001CE010: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE2F2; /* jne: not equal / not zero */

loc_001CE018: ;
    eax = MEM32(ebx);
    esi = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE025u); RECOMP_ABI_CALL(0x002BF4AAu, sub_002BF4AA); /* call 0x002BF4AA */

loc_001CE025: ;
    ecx = MEM32(0x33709C);
    edx = MEM32(0x337094);
    MEM32(esp + 0x34) = ecx;
    edi = eax;
    eax = MEM32(0x337098);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x2C) = edx;
    SET_LO8(edx, MEM8(esi));
    MEM8(esp + 0x32) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(esp + 0x33) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x30) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 3));
    eax = esp + 0x12;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = 0x5286AC;
    MEM32(esp + 0x24) = edi;
    MEM8(esp + 0x39) = LO8(edx);
    MEM8(esp + 0x3A) = 0;
    PUSH32(esp, 0x001CE07Fu); RECOMP_ABI_CALL(0x001C13E0u, sub_001C13E0); /* call 0x001C13E0 */

loc_001CE07F: ;
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE0A5; /* jne: not equal / not zero */

loc_001CE089: ;
    ecx = MEM32(esp + 0x5C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x33601C);
    PUSH32(esp, 0x001CE0A1u); RECOMP_ABI_CALL(0x001C5100u, sub_001C5100); /* call 0x001C5100 */

loc_001CE0A1: ;
    esi = MEM32(esp + 0x20);

loc_001CE0A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE0B5; /* jne: not equal / not zero */

loc_001CE0A9: ;
    esi = MEM32(0x37DD4C);
    esi = esi + 0x37DD38;

loc_001CE0B5: ;
    ecx = edi + edi * 4;
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CE0C4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CE0BEu); } /* indirect call */
    }

loc_001CE0C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CE2F2; /* je: equal / zero */

loc_001CE0D3: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001CE0DBu); RECOMP_ABI_CALL(0x001CDD00u, sub_001CDD00); /* call 0x001CDD00 */

loc_001CE0DB: ;
    goto loc_001CE2F2;

loc_001CE0E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE2F2; /* je: equal / zero */

loc_001CE0E8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3370A0);
    ecx = ebp;
    PUSH32(esp, 0x001CE0F6u); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CE0F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE178; /* je: equal / zero */

loc_001CE0FA: ;
    edx = MEM32(ebx);
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax));
    MEM8(0x3370B2) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(0x3370B3) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(0x3370B4) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 3));
    eax = esp + 0x13;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3370AC);
    ecx = 0x5286AC;
    MEM8(0x3370B5) = LO8(edx);
    MEM8(0x3370B6) = 0;
    PUSH32(esp, 0x001CE13Cu); RECOMP_ABI_CALL(0x001C13E0u, sub_001C13E0); /* call 0x001C13E0 */

loc_001CE13C: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE161; /* jne: not equal / not zero */

loc_001CE144: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, 0x3370AC);
    PUSH32(esp, 0x33601C);
    PUSH32(esp, 0x001CE15Cu); RECOMP_ABI_CALL(0x001C5100u, sub_001C5100); /* call 0x001C5100 */

loc_001CE15C: ;
    goto loc_001CE2F2;

loc_001CE161: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE2F2; /* je: equal / zero */

loc_001CE169: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE173u); RECOMP_ABI_CALL(0x001CD400u, sub_001CD400); /* call 0x001CD400 */

loc_001CE173: ;
    goto loc_001CE2F2;

loc_001CE178: ;
    eax = MEM32(ebp);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3370B8);
    PUSH32(esp, 0x001CE188u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CE188: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE2E4; /* jne: not equal / not zero */

loc_001CE193: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3370C4);
    ecx = ebp;
    PUSH32(esp, 0x001CE1A1u); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CE1A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE1C0; /* je: equal / zero */

loc_001CE1A5: ;
    edx = MEM32(ebx);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE1AFu); RECOMP_ABI_CALL(0x001CE9A0u, sub_001CE9A0); /* call 0x001CE9A0 */

loc_001CE1AF: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    goto loc_001CE2F2;

loc_001CE1C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3370D8);
    ecx = ebp;
    PUSH32(esp, 0x001CE1CEu); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CE1CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE1EE; /* je: equal / zero */

loc_001CE1D2: ;
    eax = MEM32(ebx);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE1DCu); RECOMP_ABI_CALL(0x002BF4AAu, sub_002BF4AA); /* call 0x002BF4AA */

loc_001CE1DC: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x24) = eax;
    goto loc_001CE2F2;

loc_001CE1EE: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x3370F4);
    ecx = ebp;
    PUSH32(esp, 0x001CE1FCu); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CE1FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE263; /* je: equal / zero */

loc_001CE200: ;
    esi = MEM32(ebx);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE20Au); RECOMP_ABI_CALL(0x002BFAE5u, sub_002BFAE5); /* call 0x002BFAE5 */

loc_001CE20A: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE217u); RECOMP_ABI_CALL(0x002BFAE5u, sub_002BFAE5); /* call 0x002BFAE5 */

loc_001CE217: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE224u); RECOMP_ABI_CALL(0x002BFAE5u, sub_002BFAE5); /* call 0x002BFAE5 */

loc_001CE224: ;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esi + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CE231u); RECOMP_ABI_CALL(0x002BFAE5u, sub_002BFAE5); /* call 0x002BFAE5 */

loc_001CE231: ;
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x48)) >> 32) & 1);
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x001CE25Eu); RECOMP_ABI_CALL(0x001CD300u, sub_001CD300); /* call 0x001CD300 */

loc_001CE25E: ;
    goto loc_001CE2F2;

loc_001CE263: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x337110);
    ecx = ebp;
    PUSH32(esp, 0x001CE271u); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CE271: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE28E; /* je: equal / zero */

loc_001CE275: ;
    eax = MEM32(ebx);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE27Fu); RECOMP_ABI_CALL(0x001CE9A0u, sub_001CE9A0); /* call 0x001CE9A0 */

loc_001CE27F: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = eax;
    goto loc_001CE2F2;

loc_001CE28E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x337128);
    ecx = ebp;
    PUSH32(esp, 0x001CE29Cu); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CE29C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE2B9; /* je: equal / zero */

loc_001CE2A0: ;
    eax = MEM32(ebx);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE2AAu); RECOMP_ABI_CALL(0x001CE9A0u, sub_001CE9A0); /* call 0x001CE9A0 */

loc_001CE2AA: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0xC) = eax;
    goto loc_001CE2F2;

loc_001CE2B9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x337140);
    ecx = ebp;
    PUSH32(esp, 0x001CE2C7u); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CE2C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE2F2; /* je: equal / zero */

loc_001CE2CB: ;
    eax = MEM32(ebx);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE2D5u); RECOMP_ABI_CALL(0x001CE9A0u, sub_001CE9A0); /* call 0x001CE9A0 */

loc_001CE2D5: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x10) = eax;
    goto loc_001CE2F2;

loc_001CE2E4: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE2EFu); RECOMP_ABI_CALL(0x001CE8E0u, sub_001CE8E0); /* call 0x001CE8E0 */

loc_001CE2EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CE2F2: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_001CDFC0; /* jne: not equal / not zero */

loc_001CE304: ;
    ebx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);

loc_001CE30C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE329; /* jle: less or equal (signed <=) */

loc_001CE311: ;
    esi = edi + 0x50;
    ebp = ebx + -1;

loc_001CE317: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE323; /* je: equal / zero */

loc_001CE31B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001CE323u); RECOMP_ABI_CALL(0x001CD850u, sub_001CD850); /* call 0x001CD850 */

loc_001CE323: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x50)) >> 32) & 1);
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE317; /* jne: not equal / not zero */

loc_001CE329: ;
    ecx = MEM32(esp + 0x60);
    MEM32(ecx) = ebx;
    ecx = esp + 0x44;
    PUSH32(esp, 0x001CE338u); RECOMP_ABI_CALL(0x001CEDF0u, sub_001CEDF0); /* call 0x001CEDF0 */

loc_001CE338: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CE350
 * Original: 0x001CE350 - 0x001CE55A (522 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE350: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(edx, MEM8(0x33715E));
    eax = MEM32(0x337158);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x88);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x13;
    esi = ebp;
    edi = esp + 0x40;
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
    SET_LO16(ecx, MEM16(0x33715C));
    MEM16(esp + 0x1C) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebp + 5));
    MEM8(esp + 0x1E) = LO8(edx);
    SET_LO8(edx, MEM8(ebp + 6));
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(ebp + 4));
    MEM8(esp + 0x1F) = LO8(ecx);
    ecx = esp + 0x12;
    MEM8(esp + 0x20) = LO8(edx);
    PUSH32(esp, ecx);
    MEM8(esp + 0x22) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 7));
    edx = esp + 0x1C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    ecx = 0x5286AC;
    MEM8(esp + 0x29) = LO8(eax);
    MEM8(esp + 0x2A) = LO8(ebx);
    PUSH32(esp, 0x001CE3C0u); RECOMP_ABI_CALL(0x001C13E0u, sub_001C13E0); /* call 0x001C13E0 */

loc_001CE3C0: ;
    _fa = (uint32_t)(MEM8(esp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x12), LO8(ebx) (8-bit) */
    esi = MEM32(esp + 0x94);
    if (CMP_NE(_fa, _fb)) goto loc_001CE3EB; /* jne: not equal / not zero */

loc_001CE3CD: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x33601C);
    ecx = esi;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x001CE3E7u); RECOMP_ABI_CALL(0x001C5100u, sub_001C5100); /* call 0x001C5100 */

loc_001CE3E7: ;
    eax = MEM32(esp + 0x14);

loc_001CE3EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_001CE3FD; /* jne: not equal / not zero */

loc_001CE3F1: ;
    edx = MEM32(0x37DD4C);
    eax = edx + 0x37DD38;

loc_001CE3FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE403u); RECOMP_ABI_CALL(0x001CDD00u, sub_001CDD00); /* call 0x001CDD00 */

loc_001CE403: ;
    _fa = (uint32_t)(MEM32(esp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x68), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE494; /* je: equal / zero */

loc_001CE40D: ;
    SET_LO16(edx, MEM16(0x337164));
    ecx = MEM32(0x337160);
    SET_LO8(eax, MEM8(0x337166));
    MEM32(esp + 0x2C) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x6C));
    MEM16(esp + 0x30) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x6D));
    MEM8(esp + 0x32) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x6E));
    MEM8(esp + 0x32) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x6F));
    MEM8(esp + 0x33) = LO8(edx);
    edx = esp + 0x13;
    MEM8(esp + 0x34) = LO8(eax);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    MEM8(esp + 0x39) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = 0x5286AC;
    MEM8(esp + 0x3E) = LO8(ebx);
    PUSH32(esp, 0x001CE464u); RECOMP_ABI_CALL(0x001C13E0u, sub_001C13E0); /* call 0x001C13E0 */

loc_001CE464: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE488; /* jne: not equal / not zero */

loc_001CE46A: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x33601C);
    ecx = esi;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x001CE484u); RECOMP_ABI_CALL(0x001C5100u, sub_001C5100); /* call 0x001C5100 */

loc_001CE484: ;
    eax = MEM32(esp + 0x14);

loc_001CE488: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE494; /* je: equal / zero */

loc_001CE48C: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001CE494u); RECOMP_ABI_CALL(0x001CD400u, sub_001CD400); /* call 0x001CD400 */

loc_001CE494: ;
    ecx = MEM32(esp + 0x5C);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 1;
    edi = 3;
    if ((_fa == 0)) goto loc_001CE4D0; /* je: equal / zero */

loc_001CE4A8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001CE4BC; /* je: equal / zero */

loc_001CE4AB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x337168);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CE4B7u); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001CE4B7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CE4E2;

loc_001CE4BC: ;
    eax = MEM32(ebp + 0x48);
    MEM32(ebp + 4) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 0x10) = esi;
    MEM32(eax + 8) = esi;
    goto loc_001CE4E2;

loc_001CE4D0: ;
    ecx = MEM32(ebp + 0x48);
    MEM32(ebp + 4) = edi;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = edi;
    MEM32(ecx + 8) = edi;

loc_001CE4E2: ;
    ecx = MEM32(esp + 0x60);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001CE508; /* je: equal / zero */

loc_001CE4EC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001CE500; /* je: equal / zero */

loc_001CE4EF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3371D0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CE4FBu); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001CE4FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CE50E;

loc_001CE500: ;
    edx = MEM32(ebp + 0x48);
    MEM32(edx + 0xC) = esi;
    goto loc_001CE50E;

loc_001CE508: ;
    eax = MEM32(ebp + 0x48);
    MEM32(eax + 0xC) = edi;

loc_001CE50E: ;
    ecx = MEM32(esp + 0x64);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001CE54F; /* je: equal / zero */

loc_001CE518: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001CE540; /* je: equal / zero */

loc_001CE51B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001CE535; /* je: equal / zero */

loc_001CE51E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x337238);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CE52Au); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001CE52A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001CE535: ;
    MEM32(ebp + 0x14) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001CE540: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x14) = 2;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001CE54F: ;
    POP32(esp, edi);
    MEM32(ebp + 0x14) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CE560
 * Original: 0x001CE560 - 0x001CE638 (216 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE560: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE5F8; /* jne: not equal / not zero */

loc_001CE57A: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001CE580: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(edi * 4 + 0x528928);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE59D; /* jne: not equal / not zero */

loc_001CE58F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CE596u); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001CE596: ;
    MEM32(edi * 4 + 0x528928) = ebx;

loc_001CE59D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE580; /* jl: less (signed <) */

loc_001CE5A3: ;
    eax = MEM32(esi + 0x40);
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE5B3; /* je: equal / zero */

loc_001CE5AD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE5B3u); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001CE5B3: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CE5CB; /* je: equal / zero */

loc_001CE5BC: ;
    ecx = MEM32(eax + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CE5C8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CE5C2u); } /* indirect call */
    }

loc_001CE5C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CE5CB: ;
    edi = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x10), 0x800000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CE5F0; /* je: equal / zero */

loc_001CE5D7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE5F7; /* je: equal / zero */

loc_001CE5DB: ;
    ecx = edi;
    PUSH32(esp, 0x001CE5E2u); RECOMP_ABI_CALL(0x001CD9B0u, sub_001CD9B0); /* call 0x001CD9B0 */

loc_001CE5E2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CE5EBu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CE5E5u); } /* indirect call */
    }

loc_001CE5EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CE5F7;

loc_001CE5F0: ;
    ecx = edi;
    PUSH32(esp, 0x001CE5F7u); RECOMP_ABI_CALL(0x001CD9B0u, sub_001CD9B0); /* call 0x001CD9B0 */

loc_001CE5F7: ;
    POP32(esp, edi);

loc_001CE5F8: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE635; /* je: equal / zero */

loc_001CE5FF: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x528948)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x528948), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE61A; /* jne: not equal / not zero */

loc_001CE60A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE611u); RECOMP_ABI_CALL(0x002D9200u, sub_002D9200); /* call 0x002D9200 */

loc_001CE611: ;
    edx = MEM32(esi);
    MEM32(edx * 4 + 0x528948) = ebx;

loc_001CE61A: ;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE623u); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001CE623: ;
    ecx = MEM32(esi + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CE62Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CE629u); } /* indirect call */
    }

loc_001CE62F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = ebx;

loc_001CE635: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE640
 * Original: 0x001CE640 - 0x001CE652 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE640: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001CE64Du); RECOMP_ABI_CALL(0x001CDD70u, sub_001CDD70); /* call 0x001CDD70 */

loc_001CE64D: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CE660
 * Original: 0x001CE660 - 0x001CE669 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE660: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_001CE560(); return; /* tail jmp 0x001CE560 */

}

/**
 * sub_001CE670
 * Original: 0x001CE670 - 0x001CE679 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE670: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_001CE560(); return; /* tail jmp 0x001CE560 */

}

/**
 * sub_001CE680
 * Original: 0x001CE680 - 0x001CE6B7 (55 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE680: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE6A3; /* jle: less or equal (signed <=) */

loc_001CE68E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp;
    edi = ebx;

loc_001CE694: ;
    ecx = esi;
    PUSH32(esp, 0x001CE69Bu); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_001CE69B: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE694; /* jne: not equal / not zero */

loc_001CE6A1: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001CE6A3: ;
    eax = ebx + ebx * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CE6B1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CE6ABu); } /* indirect call */
    }

loc_001CE6B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE6C0
 * Original: 0x001CE6C0 - 0x001CE71D (93 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001CE6C0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001CE718; /* jne: not equal / not zero */

loc_001CE6C9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);

loc_001CE6D1: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001CE705; /* jne: not equal / not zero */

loc_001CE6DB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE6F5; /* je: equal / zero */

loc_001CE6DF: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001CE705; /* jne: not equal / not zero */

loc_001CE6EB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE6D1; /* jne: not equal / not zero */

loc_001CE6F5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001CE705: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001CE718: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CE720
 * Original: 0x001CE720 - 0x001CE8DB (443 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001CE720: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x3373E8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CE734u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CE734: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE788; /* jne: not equal / not zero */

loc_001CE73B: ;
    edi = 0x3373D8;
    esi = ebx;
    ecx = 0xF;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE752; /* je: equal / zero */

loc_001CE74D: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE752: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE7F9; /* je: equal / zero */

loc_001CE75A: ;
    edi = 0x3373C8;
    esi = ebx;
    ecx = 0xE;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE771; /* je: equal / zero */

loc_001CE76C: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE771: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE898; /* je: equal / zero */

loc_001CE779: ;
    edi = 0x3373B8;
    ecx = 0x10;
    goto loc_001CE8AB;

loc_001CE788: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x3373AC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CE795u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CE795: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE84E; /* jne: not equal / not zero */

loc_001CE7A0: ;
    edi = 0x33739C;
    esi = ebx;
    ecx = 0xF;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE7B7; /* je: equal / zero */

loc_001CE7B2: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE7B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE898; /* je: equal / zero */

loc_001CE7BF: ;
    edi = 0x337388;
    esi = ebx;
    ecx = 0x12;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE7D6; /* je: equal / zero */

loc_001CE7D1: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE7D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE8BC; /* je: equal / zero */

loc_001CE7DE: ;
    edi = 0x337370;
    esi = ebx;
    ecx = 0x15;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE7F5; /* je: equal / zero */

loc_001CE7F0: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE7F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE802; /* jne: not equal / not zero */

loc_001CE7F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE802: ;
    edi = 0x33735C;
    esi = ebx;
    ecx = 0x12;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE819; /* je: equal / zero */

loc_001CE814: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE819: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE826; /* jne: not equal / not zero */

loc_001CE81D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE826: ;
    edi = 0x337344;
    esi = ebx;
    ecx = 0x17;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE83D; /* je: equal / zero */

loc_001CE838: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE83D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE8C5; /* jne: not equal / not zero */

loc_001CE845: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 5;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE84E: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x337338);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CE85Bu); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CE85B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE8C5; /* jne: not equal / not zero */

loc_001CE862: ;
    edi = 0x337328;
    esi = ebx;
    ecx = 0xE;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE879; /* je: equal / zero */

loc_001CE874: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE879: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE8D5; /* je: equal / zero */

loc_001CE87D: ;
    edi = 0x337314;
    esi = ebx;
    ecx = 0x12;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE894; /* je: equal / zero */

loc_001CE88F: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE894: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE8A1; /* jne: not equal / not zero */

loc_001CE898: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE8A1: ;
    edi = 0x337300;
    ecx = 0x11;

loc_001CE8AB: ;
    esi = ebx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE8B8; /* je: equal / zero */

loc_001CE8B3: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE8B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CE8C5; /* jne: not equal / not zero */

loc_001CE8BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CE8C5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3372C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CE8D2u); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001CE8D2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CE8D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE8E0
 * Original: 0x001CE8E0 - 0x001CE992 (178 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE8E0(void)
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

loc_001CE8E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x337428);
    ecx = esi;
    PUSH32(esp, 0x001CE8F3u); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CE8F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE917; /* je: equal / zero */

loc_001CE8F7: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE902u); RECOMP_ABI_CALL(0x001CE720u, sub_001CE720); /* call 0x001CE720 */

loc_001CE902: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CE917: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x337418);
    ecx = esi;
    PUSH32(esp, 0x001CE925u); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CE925: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE940; /* je: equal / zero */

loc_001CE929: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE934u); RECOMP_ABI_CALL(0x001CE720u, sub_001CE720); /* call 0x001CE720 */

loc_001CE934: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CE940: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x337404);
    ecx = esi;
    PUSH32(esp, 0x001CE94Eu); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CE94E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE969; /* je: equal / zero */

loc_001CE952: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE95Du); RECOMP_ABI_CALL(0x002BFAE5u, sub_002BFAE5); /* call 0x002BFAE5 */

loc_001CE95D: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CE969: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3373F4);
    ecx = esi;
    PUSH32(esp, 0x001CE977u); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CE977: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE990; /* je: equal / zero */

loc_001CE97B: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE986u); RECOMP_ABI_CALL(0x001CE720u, sub_001CE720); /* call 0x001CE720 */

loc_001CE986: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 0x1C) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CE990: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CE9A0
 * Original: 0x001CE9A0 - 0x001CEB6B (459 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001CE9A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x337560);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CE9B4u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CE9B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CEA44; /* jne: not equal / not zero */

loc_001CE9BF: ;
    edi = 0x33754C;
    esi = ebx;
    ecx = 0x11;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE9D6; /* je: equal / zero */

loc_001CE9D1: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE9D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEB65; /* je: equal / zero */

loc_001CE9DE: ;
    edi = 0x33753C;
    esi = ebx;
    ecx = 0x10;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CE9F5; /* je: equal / zero */

loc_001CE9F0: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CE9F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEB4C; /* je: equal / zero */

loc_001CE9FD: ;
    edi = 0x33752C;
    esi = ebx;
    ecx = 0x10;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CEA14; /* je: equal / zero */

loc_001CEA0F: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CEA14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEAB1; /* je: equal / zero */

loc_001CEA1C: ;
    edi = 0x337518;
    esi = ebx;
    ecx = 0x12;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CEA33; /* je: equal / zero */

loc_001CEA2E: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CEA33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CEB55; /* jne: not equal / not zero */

loc_001CEA3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CEA44: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x337508);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CEA51u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CEA51: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CEB02; /* jne: not equal / not zero */

loc_001CEA5C: ;
    edi = 0x3374F4;
    esi = ebx;
    ecx = 0x13;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CEA73; /* je: equal / zero */

loc_001CEA6E: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CEA73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEA3B; /* je: equal / zero */

loc_001CEA77: ;
    edi = 0x3374E0;
    esi = ebx;
    ecx = 0x12;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CEA8E; /* je: equal / zero */

loc_001CEA89: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CEA8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEB4C; /* je: equal / zero */

loc_001CEA96: ;
    edi = 0x3374CC;
    esi = ebx;
    ecx = 0x14;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CEAAD; /* je: equal / zero */

loc_001CEAA8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CEAAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CEABA; /* jne: not equal / not zero */

loc_001CEAB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CEABA: ;
    edi = 0x3374B8;
    esi = ebx;
    ecx = 0x14;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CEAD1; /* je: equal / zero */

loc_001CEACC: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CEAD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CEADE; /* jne: not equal / not zero */

loc_001CEAD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CEADE: ;
    edi = 0x33749C;
    esi = ebx;
    ecx = 0x19;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CEAF5; /* je: equal / zero */

loc_001CEAF0: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CEAF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CEB55; /* jne: not equal / not zero */

loc_001CEAF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 5;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CEB02: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x33748C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CEB0Fu); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CEB0F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CEB55; /* jne: not equal / not zero */

loc_001CEB16: ;
    edi = 0x337478;
    esi = ebx;
    ecx = 0x14;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CEB2D; /* je: equal / zero */

loc_001CEB28: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CEB2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEB65; /* je: equal / zero */

loc_001CEB31: ;
    edi = 0x337460;
    esi = ebx;
    ecx = 0x15;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CEB48; /* je: equal / zero */

loc_001CEB43: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CEB48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CEB55; /* jne: not equal / not zero */

loc_001CEB4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CEB55: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x337438);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CEB62u); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001CEB62: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CEB65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CEB70
 * Original: 0x001CEB70 - 0x001CED97 (551 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEB70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = ebp;
    PUSH32(esp, edi);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ebx;
    ecx = eax + 1;
    /* nop */

loc_001CEB90: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEB90; /* jne: not equal / not zero */

loc_001CEB97: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 8) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CEBA5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CEB9Fu); } /* indirect call */
    }

loc_001CEBA5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    ecx = ebp;
    /* nop */

loc_001CEBB0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEBB0; /* jne: not equal / not zero */

loc_001CEBBA: ;
    eax = MEM32(esi + 8);
    ebp = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CEBF0; /* jle: less or equal (signed <=) */

loc_001CEBC8: ;
    ebx = eax;
    /* nop */

loc_001CEBD0: ;
    SET_LO8(eax, MEM8(edx + ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEBD8; /* jne: not equal / not zero */

loc_001CEBD7: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CEBD8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CEBE2; /* jl: less (signed <) */

loc_001CEBDE: ;
    MEM32(esp + 0x14) = ecx;

loc_001CEBE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEBE9; /* jne: not equal / not zero */

loc_001CEBE6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CEBE9: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CEBD0; /* jl: less (signed <) */

loc_001CEBEE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CEBF0: ;
    ecx = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi + edi * 2;
    MEM32(esp + 0x14) = ecx;
    ecx = eax * 4 + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CEC0Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CEC06u); } /* indirect call */
    }

loc_001CEC0C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEC32; /* je: equal / zero */

loc_001CEC13: ;
    ecx = edi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edx = eax + 4;
    MEM32(eax) = edi;
    eax = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001CEC34; /* jl: less (signed <) */

loc_001CEC21: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CEC22: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CEC22; /* jne: not equal / not zero */

loc_001CEC30: ;
    goto loc_001CEC34;

loc_001CEC32: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CEC34: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 4) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001CEC7E; /* jle: less or equal (signed <=) */

loc_001CEC3B: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi;
    /* nop */

loc_001CEC40: ;
    eax = MEM32(esp + 0x14);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CEC50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CEC4Au); } /* indirect call */
    }

loc_001CEC50: ;
    edx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEC6D; /* je: equal / zero */

loc_001CEC59: ;
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CEC69; /* js: sign (negative) */

loc_001CEC60: ;
    ecx = eax + 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001CEC69: ;
    eax = edx;
    goto loc_001CEC6F;

loc_001CEC6D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CEC6F: ;
    edx = MEM32(esi + 4);
    MEM32(edx + ebp + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CEC40; /* jne: not equal / not zero */

loc_001CEC7C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CEC7E: ;
    edi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CECA5; /* je: equal / zero */

loc_001CEC8B: ;
    goto loc_001CEC90;

    /* nop */

loc_001CEC90: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CECA5; /* je: equal / zero */

loc_001CEC96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3B (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CECA2; /* je: equal / zero */

loc_001CEC9A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CECA2; /* je: equal / zero */

loc_001CEC9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CECA5; /* jne: not equal / not zero */

loc_001CECA2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CEC90; /* jne: not equal / not zero */

loc_001CECA5: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 0x1C) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001CECB0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001CECCF; /* je: equal / zero */

loc_001CECB6: ;
    SET_LO8(ecx, MEM8(ebp));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CECF0; /* je: equal / zero */

loc_001CECBD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3B (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CECF0; /* je: equal / zero */

loc_001CECC2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CECF0; /* je: equal / zero */

loc_001CECC7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CECF0; /* je: equal / zero */

loc_001CECCC: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CECB6; /* jne: not equal / not zero */

loc_001CECCF: ;
    MEM8(esp + 0x13) = 0;

loc_001CECD4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x13);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3D (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001CED76; /* ja: above (unsigned >) */

loc_001CECE2: ;
    ecx = ZX8(MEM8(ecx + 0x1CEDAC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1CED98); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001CED05u) goto loc_001CED05;
    if (_jt == 0x001CED19u) goto loc_001CED19;
    if (_jt == 0x001CED2Au) goto loc_001CED2A;
    if (_jt == 0x001CED54u) goto loc_001CED54;
    if (_jt == 0x001CED76u) goto loc_001CED76;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CECF0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CECCF; /* je: equal / zero */

loc_001CECF4: ;
    SET_LO8(ecx, MEM8(ebp));
    SET_LO8(ebx, MEM8(esp + 0x1C));
    MEM8(ebp) = 0;
    MEM8(esp + 0x13) = LO8(ecx);
    goto loc_001CECD4;

loc_001CED05: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CED76; /* jne: not equal / not zero */

loc_001CED09: ;
    edx = MEM32(esi + 4);
    SET_LO8(ebx, 1);
    MEM32(eax + edx) = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x1C) = LO8(ebx);
    goto loc_001CED76;

loc_001CED19: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CED76; /* je: equal / zero */

loc_001CED1D: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(eax + ecx + 8);
    MEM32(ecx + edx * 4) = edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001CED76;

loc_001CED2A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CED4C; /* je: equal / zero */

loc_001CED2E: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(eax + ecx + 8);
    MEM32(ecx + edx * 4) = edi;
    edi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + ecx + 4) = edx;
    MEM32(esp + 0x14) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CED4C: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 0x1C) = LO8(ebx);
    goto loc_001CED76;

loc_001CED54: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CED76; /* je: equal / zero */

loc_001CED58: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(eax + ecx + 8);
    MEM32(ecx + edx * 4) = edi;
    edi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + ecx + 4) = edx;
    MEM32(esp + 0x14) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CED76: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edi = ebp + 1;
    if (CMP_NE(_fa, _fb)) goto loc_001CECB0; /* jne: not equal / not zero */

loc_001CED85: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(esi) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEDF0
 * Original: 0x001CEDF0 - 0x001CEE4E (94 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEDF0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEE3A; /* je: equal / zero */

loc_001CEDFA: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, edi);
    edi = ecx + -4;
    edx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx + edx * 4;
    if ((_fas < 0)) goto loc_001CEE2D; /* js: sign (negative) */

loc_001CEE0A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 8;
    ebx = eax + 1;

loc_001CEE12: ;
    eax = MEM32(esi + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEE28; /* je: equal / zero */

loc_001CEE1C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CEE25u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CEE1Fu); } /* indirect call */
    }

loc_001CEE25: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CEE28: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CEE12; /* jne: not equal / not zero */

loc_001CEE2B: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001CEE2D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CEE36u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CEE30u); } /* indirect call */
    }

loc_001CEE36: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_001CEE3A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001CEE49u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CEE43u); } /* indirect call */
    }

loc_001CEE49: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001CEE50
 * Original: 0x001CEE50 - 0x001CF04C (508 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CEE50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CEE6B; /* jge: greater or equal (signed >=) */

loc_001CEE55: ;
    ecx = MEM32(esi * 4 + 0x311F48);
    edx = edi;
    PUSH32(esp, 0x001CEE63u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CEE63: ;
    MEM32(esi * 4 + 0x2E92B0) = edi;
    esp += 4; return; /* ret */

loc_001CEE6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CEE90; /* jge: greater or equal (signed >=) */

loc_001CEE73: ;
    ecx = MEM32(0x2E90A8);
    eax = MEM32(esi * 4 + 0x311D28);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = ecx;
    MEM32(esi * 4 + 0x2E92B0) = edi;
    esp += 4; return; /* ret */

loc_001CEE90: ;
    if (CMP_NE(_fa, _fb)) goto loc_001CEE99; /* jne: not equal / not zero */

loc_001CEE92: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEE98u); RECOMP_ABI_CALL(0x002D9D90u, sub_002D9D90); /* call 0x002D9D90 */

loc_001CEE98: ;
    esp += 4; return; /* ret */

loc_001CEE99: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEEA8; /* jne: not equal / not zero */

loc_001CEEA1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEEA7u); RECOMP_ABI_CALL(0x002DA5E0u, sub_002DA5E0); /* call 0x002DA5E0 */

loc_001CEEA7: ;
    esp += 4; return; /* ret */

loc_001CEEA8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEEB7; /* jne: not equal / not zero */

loc_001CEEB0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEEB6u); RECOMP_ABI_CALL(0x002DA140u, sub_002DA140); /* call 0x002DA140 */

loc_001CEEB6: ;
    esp += 4; return; /* ret */

loc_001CEEB7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEEC6; /* jne: not equal / not zero */

loc_001CEEBF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEEC5u); RECOMP_ABI_CALL(0x002DA4B0u, sub_002DA4B0); /* call 0x002DA4B0 */

loc_001CEEC5: ;
    esp += 4; return; /* ret */

loc_001CEEC6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEED5; /* jne: not equal / not zero */

loc_001CEECE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEED4u); RECOMP_ABI_CALL(0x002DA500u, sub_002DA500); /* call 0x002DA500 */

loc_001CEED4: ;
    esp += 4; return; /* ret */

loc_001CEED5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEEE4; /* jne: not equal / not zero */

loc_001CEEDD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEEE3u); RECOMP_ABI_CALL(0x002DA560u, sub_002DA560); /* call 0x002DA560 */

loc_001CEEE3: ;
    esp += 4; return; /* ret */

loc_001CEEE4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEEF3; /* jne: not equal / not zero */

loc_001CEEEC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEEF2u); RECOMP_ABI_CALL(0x002DA240u, sub_002DA240); /* call 0x002DA240 */

loc_001CEEF2: ;
    esp += 4; return; /* ret */

loc_001CEEF3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF02; /* jne: not equal / not zero */

loc_001CEEFB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEF01u); RECOMP_ABI_CALL(0x002DB010u, sub_002DB010); /* call 0x002DB010 */

loc_001CEF01: ;
    esp += 4; return; /* ret */

loc_001CEF02: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF11; /* jne: not equal / not zero */

loc_001CEF0A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEF10u); RECOMP_ABI_CALL(0x002DB0A0u, sub_002DB0A0); /* call 0x002DB0A0 */

loc_001CEF10: ;
    esp += 4; return; /* ret */

loc_001CEF11: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF20; /* jne: not equal / not zero */

loc_001CEF19: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEF1Fu); RECOMP_ABI_CALL(0x002DB140u, sub_002DB140); /* call 0x002DB140 */

loc_001CEF1F: ;
    esp += 4; return; /* ret */

loc_001CEF20: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF2F; /* jne: not equal / not zero */

loc_001CEF28: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEF2Eu); RECOMP_ABI_CALL(0x002DA190u, sub_002DA190); /* call 0x002DA190 */

loc_001CEF2E: ;
    esp += 4; return; /* ret */

loc_001CEF2F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF3E; /* jne: not equal / not zero */

loc_001CEF37: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEF3Du); RECOMP_ABI_CALL(0x002DA200u, sub_002DA200); /* call 0x002DA200 */

loc_001CEF3D: ;
    esp += 4; return; /* ret */

loc_001CEF3E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF4D; /* jne: not equal / not zero */

loc_001CEF46: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEF4Cu); RECOMP_ABI_CALL(0x002DA280u, sub_002DA280); /* call 0x002DA280 */

loc_001CEF4C: ;
    esp += 4; return; /* ret */

loc_001CEF4D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF5C; /* jne: not equal / not zero */

loc_001CEF55: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEF5Bu); RECOMP_ABI_CALL(0x002DA3D0u, sub_002DA3D0); /* call 0x002DA3D0 */

loc_001CEF5B: ;
    esp += 4; return; /* ret */

loc_001CEF5C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF6B; /* jne: not equal / not zero */

loc_001CEF64: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEF6Au); RECOMP_ABI_CALL(0x002DA450u, sub_002DA450); /* call 0x002DA450 */

loc_001CEF6A: ;
    esp += 4; return; /* ret */

loc_001CEF6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF7A; /* jne: not equal / not zero */

loc_001CEF73: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEF79u); RECOMP_ABI_CALL(0x002DA0C0u, sub_002DA0C0); /* call 0x002DA0C0 */

loc_001CEF79: ;
    esp += 4; return; /* ret */

loc_001CEF7A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF89; /* jne: not equal / not zero */

loc_001CEF82: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEF88u); RECOMP_ABI_CALL(0x002DB380u, sub_002DB380); /* call 0x002DB380 */

loc_001CEF88: ;
    esp += 4; return; /* ret */

loc_001CEF89: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF98; /* jne: not equal / not zero */

loc_001CEF91: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEF97u); RECOMP_ABI_CALL(0x002DB400u, sub_002DB400); /* call 0x002DB400 */

loc_001CEF97: ;
    esp += 4; return; /* ret */

loc_001CEF98: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEFA7; /* jne: not equal / not zero */

loc_001CEFA0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEFA6u); RECOMP_ABI_CALL(0x002DB320u, sub_002DB320); /* call 0x002DB320 */

loc_001CEFA6: ;
    esp += 4; return; /* ret */

loc_001CEFA7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEFB6; /* jne: not equal / not zero */

loc_001CEFAF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEFB5u); RECOMP_ABI_CALL(0x002DB350u, sub_002DB350); /* call 0x002DB350 */

loc_001CEFB5: ;
    esp += 4; return; /* ret */

loc_001CEFB6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEFC5; /* jne: not equal / not zero */

loc_001CEFBE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEFC4u); RECOMP_ABI_CALL(0x002DA100u, sub_002DA100); /* call 0x002DA100 */

loc_001CEFC4: ;
    esp += 4; return; /* ret */

loc_001CEFC5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEFD4; /* jne: not equal / not zero */

loc_001CEFCD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEFD3u); RECOMP_ABI_CALL(0x002DA2E0u, sub_002DA2E0); /* call 0x002DA2E0 */

loc_001CEFD3: ;
    esp += 4; return; /* ret */

loc_001CEFD4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEFE3; /* jne: not equal / not zero */

loc_001CEFDC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEFE2u); RECOMP_ABI_CALL(0x002DB450u, sub_002DB450); /* call 0x002DB450 */

loc_001CEFE2: ;
    esp += 4; return; /* ret */

loc_001CEFE3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEFF2; /* jne: not equal / not zero */

loc_001CEFEB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEFF1u); RECOMP_ABI_CALL(0x002DA350u, sub_002DA350); /* call 0x002DA350 */

loc_001CEFF1: ;
    esp += 4; return; /* ret */

loc_001CEFF2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF001; /* jne: not equal / not zero */

loc_001CEFFA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CF000u); RECOMP_ABI_CALL(0x002DB1B0u, sub_002DB1B0); /* call 0x002DB1B0 */

loc_001CF000: ;
    esp += 4; return; /* ret */

loc_001CF001: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF010; /* jne: not equal / not zero */

loc_001CF009: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CF00Fu); RECOMP_ABI_CALL(0x002DB1E0u, sub_002DB1E0); /* call 0x002DB1E0 */

loc_001CF00F: ;
    esp += 4; return; /* ret */

loc_001CF010: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF01F; /* jne: not equal / not zero */

loc_001CF018: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CF01Eu); RECOMP_ABI_CALL(0x002DB250u, sub_002DB250); /* call 0x002DB250 */

loc_001CF01E: ;
    esp += 4; return; /* ret */

loc_001CF01F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF02E; /* jne: not equal / not zero */

loc_001CF027: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CF02Du); RECOMP_ABI_CALL(0x002DB2C0u, sub_002DB2C0); /* call 0x002DB2C0 */

loc_001CF02D: ;
    esp += 4; return; /* ret */

loc_001CF02E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF03D; /* jne: not equal / not zero */

loc_001CF036: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CF03Cu); RECOMP_ABI_CALL(0x002DB2E0u, sub_002DB2E0); /* call 0x002DB2E0 */

loc_001CF03C: ;
    esp += 4; return; /* ret */

loc_001CF03D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF04B; /* jne: not equal / not zero */

loc_001CF045: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CF04Bu); RECOMP_ABI_CALL(0x002DB300u, sub_002DB300); /* call 0x002DB300 */

loc_001CF04B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF050
 * Original: 0x001CF050 - 0x001CF066 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF050(void)
{

loc_001CF050: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    ecx = 0x13;
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF070
 * Original: 0x001CF070 - 0x001CF07B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF070(void)
{

loc_001CF070: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF080
 * Original: 0x001CF080 - 0x001CF08D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF080(void)
{

loc_001CF080: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF090
 * Original: 0x001CF090 - 0x001CF09C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF090(void)
{

loc_001CF090: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF0A0
 * Original: 0x001CF0A0 - 0x001CF0AE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF0A0(void)
{

loc_001CF0A0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF0B0
 * Original: 0x001CF0B0 - 0x001CF0BC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF0B0(void)
{

loc_001CF0B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 8) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF0C0
 * Original: 0x001CF0C0 - 0x001CF0CE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF0C0(void)
{

loc_001CF0C0: ;
    SET_LO8(eax, MEM8(ecx + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF0D0
 * Original: 0x001CF0D0 - 0x001CF0DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF0D0(void)
{

loc_001CF0D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF0E0
 * Original: 0x001CF0E0 - 0x001CF0EE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF0E0(void)
{

loc_001CF0E0: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF0F0
 * Original: 0x001CF0F0 - 0x001CF191 (161 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF0F0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    MEM32(ecx + 0x14) = edx;
    if (CMP_A(_fa, _fb)) goto loc_001CF18C; /* ja: above (unsigned >) */

loc_001CF100: ;
    eax = 1;
    { uint32_t _jt = MEM32(edx * 4 + 0x1CF194); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001CF10Cu) goto loc_001CF10C;
    if (_jt == 0x001CF120u) goto loc_001CF120;
    if (_jt == 0x001CF138u) goto loc_001CF138;
    if (_jt == 0x001CF14Cu) goto loc_001CF14C;
    if (_jt == 0x001CF15Cu) goto loc_001CF15C;
    if (_jt == 0x001CF174u) goto loc_001CF174;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CF10C: ;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = 0;
    MEM32(ecx + 0x30) = 0x8006;
    esp += 8; return; /* ret 4 */

loc_001CF120: ;
    MEM32(ecx + 0x34) = 0x302;
    MEM32(ecx + 0x38) = 0x303;
    MEM32(ecx + 0x30) = 0x8006;
    esp += 8; return; /* ret 4 */

loc_001CF138: ;
    MEM32(ecx + 0x34) = 0x302;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x30) = 0x8006;
    esp += 8; return; /* ret 4 */

loc_001CF14C: ;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x30) = 0x800B;
    esp += 8; return; /* ret 4 */

loc_001CF15C: ;
    MEM32(ecx + 0x34) = 0x302;
    MEM32(ecx + 0x38) = 0;
    MEM32(ecx + 0x30) = 0x8006;
    esp += 8; return; /* ret 4 */

loc_001CF174: ;
    MEM32(ecx + 0x34) = 0x306;
    MEM32(ecx + 0x38) = 0;
    MEM32(ecx + 0x30) = 0x8006;
    esp += 8; return; /* ret 4 */

loc_001CF18C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF1B0
 * Original: 0x001CF1B0 - 0x001CF1BE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF1B0(void)
{

loc_001CF1B0: ;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF1C0
 * Original: 0x001CF1C0 - 0x001CF1CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF1C0(void)
{

loc_001CF1C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x18) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF1D0
 * Original: 0x001CF1D0 - 0x001CF1DE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF1D0(void)
{

loc_001CF1D0: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    ecx = MEM32(esp + 4);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF1E0
 * Original: 0x001CF1E0 - 0x001CF1EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF1E0(void)
{

loc_001CF1E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF1F0
 * Original: 0x001CF1F0 - 0x001CF1FE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF1F0(void)
{

loc_001CF1F0: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF200
 * Original: 0x001CF200 - 0x001CF20C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF200(void)
{

loc_001CF200: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF210
 * Original: 0x001CF210 - 0x001CF21E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF210(void)
{

loc_001CF210: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF220
 * Original: 0x001CF220 - 0x001CF22C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF220(void)
{

loc_001CF220: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x24) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF230
 * Original: 0x001CF230 - 0x001CF23E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF230(void)
{

loc_001CF230: ;
    SET_LO8(eax, MEM8(ecx + 0x24));
    ecx = MEM32(esp + 4);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF240
 * Original: 0x001CF240 - 0x001CF245 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF240: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF250
 * Original: 0x001CF250 - 0x001CF255 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF250: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF260
 * Original: 0x001CF260 - 0x001CF26C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF260(void)
{

loc_001CF260: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF270
 * Original: 0x001CF270 - 0x001CF27E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF270(void)
{

loc_001CF270: ;
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF280
 * Original: 0x001CF280 - 0x001CF285 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF280: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF290
 * Original: 0x001CF290 - 0x001CF295 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF290: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF2A0
 * Original: 0x001CF2A0 - 0x001CF2A5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF2A0(void)
{

loc_001CF2A0: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF2B0
 * Original: 0x001CF2B0 - 0x001CF2B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF2B0(void)
{

loc_001CF2B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF2C0
 * Original: 0x001CF2C0 - 0x001CF2CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF2C0(void)
{

loc_001CF2C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF2D0
 * Original: 0x001CF2D0 - 0x001CF2DE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF2D0(void)
{

loc_001CF2D0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF2E0
 * Original: 0x001CF2E0 - 0x001CF2EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF2E0(void)
{

loc_001CF2E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF2F0
 * Original: 0x001CF2F0 - 0x001CF2FE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF2F0(void)
{

loc_001CF2F0: ;
    eax = MEM32(ecx + 0x2C);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF300
 * Original: 0x001CF300 - 0x001CF30C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF300(void)
{

loc_001CF300: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF310
 * Original: 0x001CF310 - 0x001CF31E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF310(void)
{

loc_001CF310: ;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF320
 * Original: 0x001CF320 - 0x001CF341 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF320(void)
{

loc_001CF320: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x14) = 6;
    MEM32(ecx + 0x38) = edx;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CF350
 * Original: 0x001CF350 - 0x001CF370 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF350(void)
{

loc_001CF350: ;
    eax = MEM32(ecx + 0x34);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x38);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CF390
 * Original: 0x001CF390 - 0x001CF3A0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF390(void)
{

loc_001CF390: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF3B0
 * Original: 0x001CF3B0 - 0x001CF3BC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF3B0(void)
{

loc_001CF3B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x44) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF3C0
 * Original: 0x001CF3C0 - 0x001CF3CE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF3C0(void)
{

loc_001CF3C0: ;
    eax = MEM32(ecx + 0x44);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF3D0
 * Original: 0x001CF3D0 - 0x001CF3DD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF3D0(void)
{

loc_001CF3D0: ;
    eax = ZX8(MEM8(esp + 4));
    MEM32(ecx + 0x48) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF3E0
 * Original: 0x001CF3E0 - 0x001CF3F3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF3E0: ;
    eax = MEM32(ecx + 0x48);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF400
 * Original: 0x001CF400 - 0x001CF87D (1149 bytes, 297 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001CF400: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x24));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF479; /* jne: not equal / not zero */

loc_001CF40E: ;
    _fa = (uint32_t)(MEM32(0x528928)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528928), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF41D; /* je: equal / zero */

loc_001CF416: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CF41Du); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001CF41D: ;
    _fa = (uint32_t)(MEM32(0x52892C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x52892C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF42D; /* je: equal / zero */

loc_001CF425: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001CF42Du); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001CF42D: ;
    _fa = (uint32_t)(MEM32(0x528930)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528930), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF43D; /* je: equal / zero */

loc_001CF435: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001CF43Du); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001CF43D: ;
    _fa = (uint32_t)(MEM32(0x528934)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528934), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF44D; /* je: equal / zero */

loc_001CF445: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001CF44Du); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001CF44D: ;
    _fa = (uint32_t)(MEM8(0x528988)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x528988), LO8(ebx) (8-bit) */
    MEM32(0x528934) = ebx;
    MEM32(0x528930) = ebx;
    MEM32(0x52892C) = ebx;
    MEM32(0x528928) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF479; /* je: equal / zero */

loc_001CF46D: ;
    PUSH32(esp, ebx);
    MEM8(0x528988) = LO8(ebx);
    PUSH32(esp, 0x001CF479u); RECOMP_ABI_CALL(0x002DB1B0u, sub_002DB1B0); /* call 0x002DB1B0 */

loc_001CF479: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    ecx = MEM32(0x37EA34);
    MEM8(0x37EA28) = LO8(eax);
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF49C; /* je: equal / zero */

loc_001CF48E: ;
    MEM32(0x37EA34) = eax;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CF49Cu); RECOMP_ABI_CALL(0x002DA4B0u, sub_002DA4B0); /* call 0x002DA4B0 */

loc_001CF49C: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(MEM32(0x37EA38)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37EA38), eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001CF4C2; /* je: equal / zero */

loc_001CF4A8: ;
    MEM32(0x37EA38) = eax;
    edi = MEM32(esi + 0x30);
    edx = edi;
    ecx = 0x40350;
    PUSH32(esp, 0x001CF4BCu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF4BC: ;
    MEM32(0x2E93D8) = edi;

loc_001CF4C2: ;
    xmm0 = XMM_SCALAR(MEMF(0x528A14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x3C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CF4F6; /* jnp: not parity */

loc_001CF4D4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    MEMF(0x528A14) = xmm0.f[0]; /* movss */
    edi = MEM32(esi + 0x3C);
    edx = edi;
    ecx = 0x40384;
    PUSH32(esp, 0x001CF4F0u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF4F0: ;
    MEM32(0x2E93E4) = edi;

loc_001CF4F6: ;
    xmm0 = XMM_SCALAR(MEMF(0x528A18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x40); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CF5BE; /* jnp: not parity */

loc_001CF50C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    MEMF(0x528A18) = xmm0.f[0]; /* movss */
    edi = MEM32(esi + 0x40);
    edx = edi;
    ecx = 0x40388;
    PUSH32(esp, 0x001CF528u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF528: ;
    MEM32(0x2E93E8) = edi;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    ecx = 0x40330;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CF58D; /* jnp: not parity */

loc_001CF545: ;
    edx = 1;
    PUSH32(esp, 0x001CF54Fu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF54F: ;
    edx = 1;
    ecx = 0x40334;
    MEM32(0x2E93EC) = 1;
    PUSH32(esp, 0x001CF568u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF568: ;
    edx = 1;
    ecx = 0x40338;
    MEM32(0x2E93F0) = 1;
    PUSH32(esp, 0x001CF581u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF581: ;
    MEM32(0x2E93F4) = 1;
    goto loc_001CF5BE;

loc_001CF58D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001CF594u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF594: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40334;
    MEM32(0x2E93EC) = ebx;
    PUSH32(esp, 0x001CF5A6u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF5A6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40338;
    MEM32(0x2E93F0) = ebx;
    PUSH32(esp, 0x001CF5B8u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF5B8: ;
    MEM32(0x2E93F4) = ebx;

loc_001CF5BE: ;
    edx = ZX8(MEM8(0x37DB9C));
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF624; /* je: equal / zero */

loc_001CF5CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF603; /* jne: not equal / not zero */

loc_001CF5D1: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF5DBu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001CF5DB: ;
    ecx = eax;
    PUSH32(esp, 0x001CF5E2u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001CF5E2: ;
    ecx = eax;
    PUSH32(esp, 0x001CF5E9u); RECOMP_ABI_CALL(0x001C2D30u, sub_001C2D30); /* call 0x001C2D30 */

loc_001CF5E9: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CF5F3u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001CF5F3: ;
    ecx = eax;
    PUSH32(esp, 0x001CF5FAu); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001CF5FA: ;
    ecx = eax;
    PUSH32(esp, 0x001CF601u); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_001CF601: ;
    goto loc_001CF624;

loc_001CF603: ;
    MEM32(0x37EA48) = eax;
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x37DB9C) = LO8(eax);
    edi = MEM32(esi + 0x48);
    edx = edi;
    ecx = 0x4035C;
    PUSH32(esp, 0x001CF61Eu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF61E: ;
    MEM32(0x2E93B0) = edi;

loc_001CF624: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(MEM32(0x37EA44)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37EA44), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF649; /* je: equal / zero */

loc_001CF62F: ;
    MEM32(0x37EA44) = eax;
    edi = MEM32(esi + 0x44);
    edx = edi;
    ecx = 0x4034C;
    PUSH32(esp, 0x001CF643u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF643: ;
    MEM32(0x2E93DC) = edi;

loc_001CF649: ;
    edx = ZX8(MEM8(esi + 8));
    _fa = (uint32_t)(MEM32(0x37EA08)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37EA08), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF65F; /* jne: not equal / not zero */

loc_001CF655: ;
    eax = MEM32(0x37EA0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF683; /* je: equal / zero */

loc_001CF65F: ;
    ecx = ZX8(MEM8(esi + 8));
    MEM32(0x37EA08) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(0x37EA0C) = edx;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF67A; /* jne: not equal / not zero */

loc_001CF677: ;
    PUSH32(esp, ebx);
    goto loc_001CF67E;

loc_001CF67A: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);

loc_001CF67E: ;
    PUSH32(esp, 0x001CF683u); RECOMP_ABI_CALL(0x002DA190u, sub_002DA190); /* call 0x002DA190 */

loc_001CF683: ;
    ecx = MEM32(0x37EA04);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF70E; /* je: equal / zero */

loc_001CF690: ;
    edx = eax;
    MEM32(0x37EA04) = edx;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001CF6E5; /* je: equal / zero */

loc_001CF69F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001CF6CA; /* je: equal / zero */

loc_001CF6A2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF70E; /* jne: not equal / not zero */

loc_001CF6A5: ;
    edx = 0x1D01;
    ecx = 0x4037C;
    PUSH32(esp, 0x001CF6B4u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF6B4: ;
    MEM32(0x2E93B8) = 0x1D01;
    MEM32(0x2E944C) = 1;
    goto loc_001CF704;

loc_001CF6CA: ;
    edx = 0x1D01;
    ecx = 0x4037C;
    PUSH32(esp, 0x001CF6D9u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF6D9: ;
    MEM32(0x2E93B8) = 0x1D01;
    goto loc_001CF6FE;

loc_001CF6E5: ;
    edx = 0x1D00;
    ecx = 0x4037C;
    PUSH32(esp, 0x001CF6F4u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF6F4: ;
    MEM32(0x2E93B8) = 0x1D00;

loc_001CF6FE: ;
    MEM32(0x2E944C) = ebx;

loc_001CF704: ;
    MEM32(0x2E90A8) = MEM32(0x2E90A8) | 0x3000;
    _fa = (uint32_t)(MEM32(0x2E90A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001CF70E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(0x37EA14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37EA14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF733; /* je: equal / zero */

loc_001CF719: ;
    MEM32(0x37EA14) = eax;
    edi = MEM32(esi + 0x10);
    edx = edi;
    ecx = 0x40354;
    PUSH32(esp, 0x001CF72Du); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF72D: ;
    MEM32(0x2E9394) = edi;

loc_001CF733: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(0x37EA18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37EA18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF754; /* jne: not equal / not zero */

loc_001CF73E: ;
    ecx = MEM32(0x37EA3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x34) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF754; /* jne: not equal / not zero */

loc_001CF749: ;
    edx = MEM32(0x37EA40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x38) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF794; /* je: equal / zero */

loc_001CF754: ;
    MEM32(0x37EA18) = eax;
    eax = MEM32(esi + 0x34);
    MEM32(0x37EA3C) = eax;
    ecx = MEM32(esi + 0x38);
    MEM32(0x37EA40) = ecx;
    edi = MEM32(esi + 0x34);
    edx = edi;
    ecx = 0x40344;
    PUSH32(esp, 0x001CF779u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF779: ;
    MEM32(0x2E93A8) = edi;
    edi = MEM32(esi + 0x38);
    edx = edi;
    ecx = 0x40348;
    PUSH32(esp, 0x001CF78Eu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF78E: ;
    MEM32(0x2E93AC) = edi;

loc_001CF794: ;
    edx = ZX8(MEM8(esi + 0x18));
    _fa = (uint32_t)(MEM32(0x37EA1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37EA1C), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF7BF; /* je: equal / zero */

loc_001CF7A0: ;
    eax = ZX8(MEM8(esi + 0x18));
    MEM32(0x37EA1C) = eax;
    edi = ZX8(MEM8(esi + 0x18));
    edx = edi;
    ecx = 0x40300;
    PUSH32(esp, 0x001CF7B9u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF7B9: ;
    MEM32(0x2E93A0) = edi;

loc_001CF7BF: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(0x37EA20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37EA20), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF7E4; /* je: equal / zero */

loc_001CF7CA: ;
    MEM32(0x37EA20) = eax;
    edi = MEM32(esi + 0x1C);
    edx = edi;
    ecx = 0x40340;
    PUSH32(esp, 0x001CF7DEu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF7DE: ;
    MEM32(0x2E93A4) = edi;

loc_001CF7E4: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM32(0x37EA24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37EA24), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF809; /* je: equal / zero */

loc_001CF7EF: ;
    MEM32(0x37EA24) = eax;
    edi = MEM32(esi + 0x20);
    edx = edi;
    ecx = 0x4033C;
    PUSH32(esp, 0x001CF803u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF803: ;
    MEM32(0x2E9398) = edi;

loc_001CF809: ;
    ecx = MEM32(0x37EA30);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001CF842; /* je: equal / zero */

loc_001CF817: ;
    edx = eax;
    MEM32(0x37EA30) = edx;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001CF84F; /* je: equal / zero */

loc_001CF826: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF86F; /* jne: not equal / not zero */

loc_001CF829: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0x001CF838u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF838: ;
    MEM32(0x2E939C) = 1;

loc_001CF842: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    MEM32(0x37EA00) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001CF84F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    PUSH32(esp, 0x001CF85Bu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001CF85B: ;
    MEM32(0x2E939C) = ebx;
    ecx = MEM32(esi);
    POP32(esp, esi);
    MEM32(0x37EA00) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001CF86F: ;
    edx = MEM32(esi);
    POP32(esp, esi);
    MEM32(0x37EA00) = edx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF880
 * Original: 0x001CF880 - 0x001CF885 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF880(void)
{

loc_001CF880: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF890
 * Original: 0x001CF890 - 0x001CF893 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF890(void)
{

loc_001CF890: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF8A0
 * Original: 0x001CF8A0 - 0x001CF8A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF8A0(void)
{

loc_001CF8A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF8B0
 * Original: 0x001CF8B0 - 0x001CF924 (116 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF8B0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x44) = ecx;
    edx = 1;
    MEM32(eax) = 5;
    MEM32(eax + 4) = edx;
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = 0x901;
    MEM32(eax + 0x10) = 0x203;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 0x18) = LO8(edx);
    MEM32(eax + 0x1C) = 0x10;
    MEM32(eax + 0x20) = 0x204;
    MEM8(eax + 0x24) = LO8(edx);
    MEM32(eax + 0x34) = 0x302;
    MEM32(eax + 0x38) = 0x303;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0x1B02;
    MEM32(eax + 0x30) = 0x8006;
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF930
 * Original: 0x001CF930 - 0x001CF93C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF930(void)
{

loc_001CF930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CF938u); RECOMP_ABI_CALL(0x001CF8B0u, sub_001CF8B0); /* call 0x001CF8B0 */

loc_001CF938: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF940
 * Original: 0x001CF940 - 0x001CF95F (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF940(void)
{

loc_001CF940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x001CF94Au); RECOMP_ABI_CALL(0x001CF8B0u, sub_001CF8B0); /* call 0x001CF8B0 */

loc_001CF94A: ;
    esi = MEM32(esp + 0x10);
    edi = ebx;
    ecx = 0x13;
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
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF960
 * Original: 0x001CF960 - 0x001CFB77 (535 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF960(void)
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

loc_001CF960: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x001CF972u); RECOMP_ABI_CALL(0x001CEB70u, sub_001CEB70); /* call 0x001CEB70 */

loc_001CF972: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001CF97Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF976u); } /* indirect call */
    }

loc_001CF97C: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF98E; /* je: equal / zero */

loc_001CF985: ;
    ecx = ebp;
    PUSH32(esp, 0x001CF98Cu); RECOMP_ABI_CALL(0x001CF8B0u, sub_001CF8B0); /* call 0x001CF8B0 */

loc_001CF98C: ;
    goto loc_001CF990;

loc_001CF98E: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CF990: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001CFB67; /* jle: less or equal (signed <=) */

loc_001CF99C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;

loc_001CF9A7: ;
    edx = MEM32(ebx);
    edi = edx;
    esi = 0x337698;
    ecx = 4;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CF9C0; /* je: equal / zero */

loc_001CF9BB: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CF9C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CF9D0; /* jne: not equal / not zero */

loc_001CF9C4: ;
    ecx = MEM32(esp + 0x38);
    MEM8(ecx) = 1;
    goto loc_001CFB52;

loc_001CF9D0: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, 0x33769C);
    PUSH32(esp, 0x001CF9DDu); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CF9DD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFB48; /* jne: not equal / not zero */

loc_001CF9E8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3376A8);
    ecx = ebx;
    PUSH32(esp, 0x001CF9F6u); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CF9F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFA10; /* je: equal / zero */

loc_001CF9FA: ;
    edx = MEM32(ebx + 8);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CFA05u); RECOMP_ABI_CALL(0x001CFBF0u, sub_001CFBF0); /* call 0x001CFBF0 */

loc_001CFA05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;
    goto loc_001CFB52;

loc_001CFA10: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3376C4);
    ecx = ebx;
    PUSH32(esp, 0x001CFA1Eu); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CFA1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFA38; /* je: equal / zero */

loc_001CFA22: ;
    eax = MEM32(ebx + 8);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CFA2Du); RECOMP_ABI_CALL(0x001CFBF0u, sub_001CFBF0); /* call 0x001CFBF0 */

loc_001CFA2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x2C) = eax;
    goto loc_001CFB52;

loc_001CFA38: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3376DC);
    ecx = ebx;
    PUSH32(esp, 0x001CFA46u); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CFA46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFA60; /* je: equal / zero */

loc_001CFA4A: ;
    ecx = MEM32(ebx + 8);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CFA55u); RECOMP_ABI_CALL(0x001CFBF0u, sub_001CFBF0); /* call 0x001CFBF0 */

loc_001CFA55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x30) = eax;
    goto loc_001CFB52;

loc_001CFA60: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x3376FC);
    ecx = ebx;
    PUSH32(esp, 0x001CFA6Eu); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CFA6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFAB1; /* je: equal / zero */

loc_001CFA72: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CFA83u); RECOMP_ABI_CALL(0x001CFBF0u, sub_001CFBF0); /* call 0x001CFBF0 */

loc_001CFA83: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x001CFA8Du); RECOMP_ABI_CALL(0x001CFBF0u, sub_001CFBF0); /* call 0x001CFBF0 */

loc_001CFA8D: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x001CFA95u); RECOMP_ABI_CALL(0x001CFBF0u, sub_001CFBF0); /* call 0x001CFBF0 */

loc_001CFA95: ;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = 6;
    MEM32(ebp + 0x34) = eax;
    MEM32(ebp + 0x38) = esi;
    MEM32(ebp + 0x30) = edx;
    goto loc_001CFB52;

loc_001CFAB1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x337718);
    ecx = ebx;
    PUSH32(esp, 0x001CFABFu); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CFABF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFAD6; /* je: equal / zero */

loc_001CFAC3: ;
    eax = MEM32(ebx + 8);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CFACEu); RECOMP_ABI_CALL(0x002BFAE5u, sub_002BFAE5); /* call 0x002BFAE5 */

loc_001CFACE: ;
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CFB52;

loc_001CFAD6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x337730);
    ecx = ebx;
    PUSH32(esp, 0x001CFAE4u); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CFAE4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFAFB; /* je: equal / zero */

loc_001CFAE8: ;
    ecx = MEM32(ebx + 8);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CFAF3u); RECOMP_ABI_CALL(0x002BFAE5u, sub_002BFAE5); /* call 0x002BFAE5 */

loc_001CFAF3: ;
    MEMF(ebp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CFB52;

loc_001CFAFB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x33774C);
    ecx = ebx;
    PUSH32(esp, 0x001CFB09u); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CFB09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFB20; /* je: equal / zero */

loc_001CFB0D: ;
    edx = MEM32(ebx + 8);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CFB18u); RECOMP_ABI_CALL(0x001CFBD0u, sub_001CFBD0); /* call 0x001CFBD0 */

loc_001CFB18: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x44) = eax;
    goto loc_001CFB52;

loc_001CFB20: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x337768);
    ecx = ebx;
    PUSH32(esp, 0x001CFB2Eu); RECOMP_ABI_CALL(0x001CE6C0u, sub_001CE6C0); /* call 0x001CE6C0 */

loc_001CFB2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFB52; /* je: equal / zero */

loc_001CFB32: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CFB3Du); RECOMP_ABI_CALL(0x001CFBA0u, sub_001CFBA0); /* call 0x001CFBA0 */

loc_001CFB3D: ;
    edx = ZX8(LO8(eax));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x48) = edx;
    goto loc_001CFB52;

loc_001CFB48: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001CFB4Fu); RECOMP_ABI_CALL(0x001D7860u, sub_001D7860); /* call 0x001D7860 */

loc_001CFB4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CFB52: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_001CF9A7; /* jne: not equal / not zero */

loc_001CFB64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001CFB67: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x001CFB70u); RECOMP_ABI_CALL(0x001CEDF0u, sub_001CEDF0); /* call 0x001CEDF0 */

loc_001CFB70: ;
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
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
 * sub_001CFB80
 * Original: 0x001CFB80 - 0x001CFB9B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFB80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFB9A; /* je: equal / zero */

loc_001CFB88: ;
    MEM32(esp + 8) = 0x4C;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x37DB6C)); return; /* indirect tail jmp */

loc_001CFB9A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CFBA0
 * Original: 0x001CFBA0 - 0x001CFBC7 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001CFBA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0x31A528;
    ecx = 5;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags != 0)) goto loc_001CFBBD; /* je: equal / zero */

loc_001CFBB8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFBBD: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_001CFBD0
 * Original: 0x001CFBD0 - 0x001CFBEC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFBD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFBD0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x337784);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CFBE4u); RECOMP_ABI_CALL(0x002BF39Fu, sub_002BF39F); /* call 0x002BF39F */

loc_001CFBE4: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CFBF0
 * Original: 0x001CFBF0 - 0x001D0038 (1096 bytes, 442 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001CFBF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x337A10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CFC04u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CFC04: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFC57; /* jne: not equal / not zero */

loc_001CFC0B: ;
    edi = 0x337A00;
    esi = ebx;
    ecx = 0xD;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFC22; /* je: equal / zero */

loc_001CFC1D: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFC22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFC2F; /* jne: not equal / not zero */

loc_001CFC26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x900;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFC2F: ;
    edi = 0x3379F0;
    esi = ebx;
    ecx = 0xE;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFC46; /* je: equal / zero */

loc_001CFC41: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFC46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D0022; /* jne: not equal / not zero */

loc_001CFC4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x901;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFC57: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3379E4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CFC64u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CFC64: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFCDB; /* jne: not equal / not zero */

loc_001CFC6B: ;
    edi = 0x3379D4;
    esi = ebx;
    ecx = 0x10;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFC82; /* je: equal / zero */

loc_001CFC7D: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFC82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFC8F; /* jne: not equal / not zero */

loc_001CFC86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x1B00;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFC8F: ;
    edi = 0x3379C0;
    esi = ebx;
    ecx = 0x14;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFCA6; /* je: equal / zero */

loc_001CFCA1: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFCA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFCB3; /* jne: not equal / not zero */

loc_001CFCAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x1B01;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFCB3: ;
    edi = 0x3379B0;
    esi = ebx;
    ecx = 0x10;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFCCA; /* je: equal / zero */

loc_001CFCC5: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFCCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D0022; /* jne: not equal / not zero */

loc_001CFCD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x1B02;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFCDB: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3379A4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CFCE8u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CFCE8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFDF3; /* jne: not equal / not zero */

loc_001CFCF3: ;
    edi = 0x337994;
    esi = ebx;
    ecx = 0xE;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFD0A; /* je: equal / zero */

loc_001CFD05: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFD0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFD17; /* jne: not equal / not zero */

loc_001CFD0E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x8006;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFD17: ;
    edi = 0x337980;
    esi = ebx;
    ecx = 0x13;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFD2E; /* je: equal / zero */

loc_001CFD29: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFD2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFD3B; /* jne: not equal / not zero */

loc_001CFD32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x800A;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFD3B: ;
    edi = 0x337968;
    esi = ebx;
    ecx = 0x16;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFD52; /* je: equal / zero */

loc_001CFD4D: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFD52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFD5F; /* jne: not equal / not zero */

loc_001CFD56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x800B;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFD5F: ;
    edi = 0x337958;
    esi = ebx;
    ecx = 0xE;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFD76; /* je: equal / zero */

loc_001CFD71: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFD76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFD83; /* jne: not equal / not zero */

loc_001CFD7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x8007;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFD83: ;
    edi = 0x337948;
    esi = ebx;
    ecx = 0xE;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFD9A; /* je: equal / zero */

loc_001CFD95: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFD9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFDA7; /* jne: not equal / not zero */

loc_001CFD9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x8008;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFDA7: ;
    edi = 0x337934;
    esi = ebx;
    ecx = 0x14;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFDBE; /* je: equal / zero */

loc_001CFDB9: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFDBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFDCB; /* jne: not equal / not zero */

loc_001CFDC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xF006;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFDCB: ;
    edi = 0x337918;
    esi = ebx;
    ecx = 0x1C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFDE2; /* je: equal / zero */

loc_001CFDDD: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFDE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D0022; /* jne: not equal / not zero */

loc_001CFDEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xF005;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFDF3: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x33790C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CFE00u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_001CFE00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D0022; /* jne: not equal / not zero */

loc_001CFE0B: ;
    edi = 0x3378FC;
    esi = ebx;
    ecx = 0xF;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFE22; /* je: equal / zero */

loc_001CFE1D: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFE22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0032; /* je: equal / zero */

loc_001CFE2A: ;
    edi = 0x3378EC;
    esi = ebx;
    ecx = 0xE;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFE41; /* je: equal / zero */

loc_001CFE3C: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFE41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFE4E; /* jne: not equal / not zero */

loc_001CFE45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFE4E: ;
    edi = 0x3378D8;
    esi = ebx;
    ecx = 0x13;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFE65; /* je: equal / zero */

loc_001CFE60: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFE65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFE72; /* jne: not equal / not zero */

loc_001CFE69: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x300;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFE72: ;
    edi = 0x3378C0;
    esi = ebx;
    ecx = 0x16;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFE89; /* je: equal / zero */

loc_001CFE84: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFE89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFE96; /* jne: not equal / not zero */

loc_001CFE8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x301;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFE96: ;
    edi = 0x3378AC;
    esi = ebx;
    ecx = 0x13;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFEAD; /* je: equal / zero */

loc_001CFEA8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFEAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFEBA; /* jne: not equal / not zero */

loc_001CFEB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x302;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFEBA: ;
    edi = 0x337894;
    esi = ebx;
    ecx = 0x16;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFED1; /* je: equal / zero */

loc_001CFECC: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFED1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFEDE; /* jne: not equal / not zero */

loc_001CFED5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x303;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFEDE: ;
    edi = 0x337880;
    esi = ebx;
    ecx = 0x14;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFEF5; /* je: equal / zero */

loc_001CFEF0: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFEF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFF02; /* jne: not equal / not zero */

loc_001CFEF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x304;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFF02: ;
    edi = 0x337868;
    esi = ebx;
    ecx = 0x17;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFF19; /* je: equal / zero */

loc_001CFF14: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFF19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFF26; /* jne: not equal / not zero */

loc_001CFF1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x305;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFF26: ;
    edi = 0x337854;
    esi = ebx;
    ecx = 0x14;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFF3D; /* je: equal / zero */

loc_001CFF38: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFF3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFF4A; /* jne: not equal / not zero */

loc_001CFF41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x306;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFF4A: ;
    edi = 0x33783C;
    esi = ebx;
    ecx = 0x17;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFF61; /* je: equal / zero */

loc_001CFF5C: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFF61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFF6E; /* jne: not equal / not zero */

loc_001CFF65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x307;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFF6E: ;
    edi = 0x337824;
    esi = ebx;
    ecx = 0x16;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFF85; /* je: equal / zero */

loc_001CFF80: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFF85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFF92; /* jne: not equal / not zero */

loc_001CFF89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x308;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFF92: ;
    edi = 0x33780C;
    esi = ebx;
    ecx = 0x18;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFFA9; /* je: equal / zero */

loc_001CFFA4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFFA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFFB6; /* jne: not equal / not zero */

loc_001CFFAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x8001;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFFB6: ;
    edi = 0x3377F0;
    esi = ebx;
    ecx = 0x1B;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFFCD; /* je: equal / zero */

loc_001CFFC8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFFCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFFDA; /* jne: not equal / not zero */

loc_001CFFD1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x8002;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFFDA: ;
    edi = 0x3377D8;
    esi = ebx;
    ecx = 0x18;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001CFFF1; /* je: equal / zero */

loc_001CFFEC: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CFFF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001CFFFE; /* jne: not equal / not zero */

loc_001CFFF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x8003;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFFFE: ;
    edi = 0x3377BC;
    esi = ebx;
    ecx = 0x1B;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_001D0015; /* je: equal / zero */

loc_001D0010: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001D0015: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D0022; /* jne: not equal / not zero */

loc_001D0019: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x8004;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001D0022: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x33778C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D002Fu); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001D002F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0032: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0040
 * Original: 0x001D0040 - 0x001D0044 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0040(void)
{

loc_001D0040: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0050
 * Original: 0x001D0050 - 0x001D0057 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0050: ;
    eax = MEM32(ecx + eax * 8 + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D0060
 * Original: 0x001D0060 - 0x001D0077 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0060: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x5286AC;
    PUSH32(esp, 0x001D0074u); RECOMP_ABI_CALL(0x001C1230u, sub_001C1230); /* call 0x001C1230 */

loc_001D0074: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D0080
 * Original: 0x001D0080 - 0x001D0165 (229 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0080: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D0085: ;
    SET_LO8(ecx, MEM8(eax + 0x337B30));
    MEM8(esp + eax + 8) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0085; /* jne: not equal / not zero */

loc_001D0094: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001D015F; /* jle: less or equal (signed <=) */

loc_001D00AB: ;
    eax = ebx + 0x14;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);

loc_001D00B4: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D00C2u); RECOMP_ABI_CALL(0x001B4500u, sub_001B4500); /* call 0x001B4500 */

loc_001D00C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D00F0; /* je: equal / zero */

loc_001D00C9: ;
    ecx = eax;
    edi = ecx + 1;
    edi = edi;

loc_001D00D0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D00D0; /* jne: not equal / not zero */

loc_001D00D7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D00F0; /* ja: above (unsigned >) */

loc_001D00DE: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = esp + 0x26;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D00EBu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_001D00EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001D0114;

loc_001D00F0: ;
    eax = esp + 0x1E;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D00FCu); RECOMP_ABI_CALL(0x001B3500u, sub_001B3500); /* call 0x001B3500 */

loc_001D00FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x21;

loc_001D0103: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0114; /* jne: not equal / not zero */

loc_001D0108: ;
    MEM8(eax) = 0;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D0103; /* jae: above or equal (unsigned >=) */

loc_001D0114: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = 0x5286AC;
    MEM8(esp + 0x2A) = 0;
    PUSH32(esp, 0x001D012Du); RECOMP_ABI_CALL(0x001C13E0u, sub_001C13E0); /* call 0x001C13E0 */

loc_001D012D: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0145; /* jne: not equal / not zero */

loc_001D0135: ;
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = 0x5286AC;
    PUSH32(esp, 0x001D0145u); RECOMP_ABI_CALL(0x001C1230u, sub_001C1230); /* call 0x001C1230 */

loc_001D0145: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D00B4; /* jl: less (signed <) */

loc_001D015D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001D015F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D0170
 * Original: 0x001D0170 - 0x001D022A (186 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0170: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x337B38);
    SET_LO16(ecx, MEM16(0x337B3C));
    SET_LO8(edx, MEM8(0x337B3E));
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(esp + 8) = eax;
    eax = MEM32(edi + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM16(esp + 0xC) = LO16(ecx);
    MEM8(esp + 0xE) = LO8(edx);
    MEM8(esp + 0x12) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001D0224; /* jle: less or equal (signed <=) */

loc_001D01A6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edi + 0x14;
    goto loc_001D01B0;

    /* nop */

loc_001D01B0: ;
    eax = esp + 0x16;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D01BCu); RECOMP_ABI_CALL(0x001B3500u, sub_001B3500); /* call 0x001B3500 */

loc_001D01BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x1A) = 0;
    esi = esp + 0x19;

loc_001D01C8: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D01DE; /* je: equal / zero */

loc_001D01CE: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D01D7u); RECOMP_ABI_CALL(0x002BF252u, sub_002BF252); /* call 0x002BF252 */

loc_001D01D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D01E4; /* je: equal / zero */

loc_001D01DE: ;
    MEM8(esi) = 0x20;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001D01C8;

loc_001D01E4: ;
    esi = MEM32(ebx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = 0x5286AC;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D01FCu); RECOMP_ABI_CALL(0x001C13E0u, sub_001C13E0); /* call 0x001C13E0 */

loc_001D01FC: ;
    SET_LO8(ecx, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0217; /* je: equal / zero */

loc_001D0204: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0217; /* jne: not equal / not zero */

loc_001D0208: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = 0x5286AC;
    PUSH32(esp, 0x001D0217u); RECOMP_ABI_CALL(0x001C1290u, sub_001C1290); /* call 0x001C1290 */

loc_001D0217: ;
    eax = MEM32(edi + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D01B0; /* jl: less (signed <) */

loc_001D0222: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001D0224: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D0230
 * Original: 0x001D0230 - 0x001D02AF (127 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0230: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x58);
    MEM32(esi) = 1;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x18) = LO8(ebx);
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = 0xFFFFFFFFu;
    MEM32(esi + 0x30) = ebx;
    MEM8(esi + 0x34) = 1;
    MEM8(esi + 0x35) = LO8(ebx);
    MEM32(esi + 0x38) = ebx;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D0277u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D0271u); } /* indirect call */
    }

loc_001D0277: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0299; /* je: equal / zero */

loc_001D027E: ;
    ecx = eax;
    PUSH32(esp, 0x001D0285u); RECOMP_ABI_CALL(0x001CAF50u, sub_001CAF50); /* call 0x001CAF50 */

loc_001D0285: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x3C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001D0299: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x3C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D02B0
 * Original: 0x001D02B0 - 0x001D0341 (145 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D02B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D02B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x001D02C6u); RECOMP_ABI_CALL(0x001CB0A0u, sub_001CB0A0); /* call 0x001CB0A0 */

loc_001D02C6: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 0x10) = ebx;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D02E9; /* je: equal / zero */

loc_001D02D5: ;
    edx = MEM32(esi + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = edx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D02D5; /* jne: not equal / not zero */

loc_001D02E9: ;
    ecx = MEM32(esi + 0x10);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x337C50);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D02FBu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D02F5u); } /* indirect call */
    }

loc_001D02FB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D033A; /* je: equal / zero */

loc_001D0305: ;
    ecx = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D0333; /* jle: less or equal (signed <=) */

loc_001D030E: ;
    PUSH32(esp, edi);
    /* nop */

loc_001D0310: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + eax * 8 + 8);
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + eax * 8) = edi;
    ecx = MEM32(ecx + eax * 8);
    edx = MEM32(esi + 0xC);
    MEM32(edx + eax * 8 + 4) = ecx;
    ecx = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0310; /* jl: less (signed <) */

loc_001D0332: ;
    POP32(esp, edi);

loc_001D0333: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001D033A: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0350
 * Original: 0x001D0350 - 0x001D03A6 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0350: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi + 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D037D; /* ja: above (unsigned >) */

loc_001D035F: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x1D03A8); /* switch: 10 entries, 4 targets */
    if (_jt == 0x001D0366u) goto loc_001D0366;
    if (_jt == 0x001D036Bu) goto loc_001D036B;
    if (_jt == 0x001D0374u) goto loc_001D0374;
    if (_jt == 0x001D037Du) goto loc_001D037D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001D0366: ;
    MEM32(ecx + 0x30) = eax;
    goto loc_001D0384;

loc_001D036B: ;
    MEM32(ecx + 0x30) = 1;
    goto loc_001D0384;

loc_001D0374: ;
    MEM32(ecx + 0x30) = 2;
    goto loc_001D0384;

loc_001D037D: ;
    MEM32(ecx + 0x30) = 0xFFFFFFFFu;

loc_001D0384: ;
    edx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D03A2; /* je: equal / zero */

loc_001D038C: ;
    eax = 0xFFFF;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x24) = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx) = esi;
    SET_LO8(eax, 1);

loc_001D03A2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D03D0
 * Original: 0x001D03D0 - 0x001D043F (111 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D03D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D03D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001D043A; /* jle: less or equal (signed <=) */

loc_001D03DE: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    goto loc_001D03F0;

    /* nop */

loc_001D03F0: ;
    esi = MEM32(ebp);
    ecx = MEM32(esp + 0x14);

loc_001D03F7: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D041B; /* jne: not equal / not zero */

loc_001D03FF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0417; /* je: equal / zero */

loc_001D0403: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D041B; /* jne: not equal / not zero */

loc_001D040D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D03F7; /* jne: not equal / not zero */

loc_001D0417: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D0420;

loc_001D041B: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001D0420: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0436; /* je: equal / zero */

loc_001D0424: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001D03F0; /* jl: less (signed <) */

loc_001D042C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001D0436: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, ebp);

loc_001D043A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0440
 * Original: 0x001D0440 - 0x001D0452 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0440(void)
{

loc_001D0440: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x20);
    eax = MEM32(esp + 4);
    eax = MEM32(edx + eax * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0460
 * Original: 0x001D0460 - 0x001D047E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0460: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001D046Du); RECOMP_ABI_CALL(0x001D03D0u, sub_001D03D0); /* call 0x001D03D0 */

loc_001D046D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x2C) = eax;
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0480
 * Original: 0x001D0480 - 0x001D04DD (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0480: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0490; /* je: equal / zero */

loc_001D048C: ;
    MEM8(ecx + 0x35) = 1;

loc_001D0490: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D04D9; /* je: equal / zero */

loc_001D0499: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(eax + edx * 8) = edi;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001D04C9; /* jne: not equal / not zero */

loc_001D04AD: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    eax = eax + edx * 8 + 4;
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 1;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001D04C9: ;
    SET_LO8(eax, MEM8(ecx + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D04D7; /* je: equal / zero */

loc_001D04D0: ;
    eax = MEM32(ecx + 8);
    MEM32(eax + edx * 8 + 4) = esi;

loc_001D04D7: ;
    SET_LO8(eax, 1);

loc_001D04D9: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D04E0
 * Original: 0x001D04E0 - 0x001D04E9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D04E0(void)
{

loc_001D04E0: ;
    SET_LO8(eax, 1);
    MEM8(ecx + 0x18) = LO8(eax);
    MEM8(ecx + 0x34) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001D04F0
 * Original: 0x001D04F0 - 0x001D04F7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D04F0(void)
{

loc_001D04F0: ;
    MEM8(ecx + 0x18) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0500
 * Original: 0x001D0500 - 0x001D050C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0500(void)
{

loc_001D0500: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x38) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0510
 * Original: 0x001D0510 - 0x001D0522 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0510(void)
{

loc_001D0510: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D051Du); RECOMP_ABI_CALL(0x001CB250u, sub_001CB250); /* call 0x001CB250 */

loc_001D051D: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0530
 * Original: 0x001D0530 - 0x001D05BE (142 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0530: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001D0543; /* jle: less or equal (signed <=) */

loc_001D053E: ;
    edx = eax;
    MEM32(esp) = edx;

loc_001D0543: ;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D0589; /* jle: less or equal (signed <=) */

loc_001D0555: ;
    edx = 0xFFFFFFFCu;
    eax = esi + 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);

loc_001D0560: ;
    SET_LO8(ebx, MEM8(ecx + 0x35));
    ebp = MEM32(ecx + 0xC);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ebx = edx + eax;
    ebx = MEM32(ebx + ebp);
    MEM32(eax) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001D0579; /* jne: not equal / not zero */

loc_001D0572: ;
    ebx = MEM32(esp + 0x10);
    MEM32(eax + -4) = ebx;

loc_001D0579: ;
    ebx = MEM32(ecx + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0560; /* jl: less (signed <) */

loc_001D0584: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, ebp);

loc_001D0589: ;
    edi = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D05B7; /* je: equal / zero */

loc_001D0591: ;
    eax = ecx + 0x3C;
    MEM32(eax) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x34), LO8(edx) (8-bit) */
    MEM32(ecx + 0x40) = edx;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(ecx + 0x44) = edx;
    MEM32(ecx + 0x48) = ebx;
    MEM32(esi + edi * 8 + 4) = eax;
    eax = MEM32(ecx + 0x2C);
    MEM32(esi + eax * 8) = 1;

loc_001D05B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D05C0
 * Original: 0x001D05C0 - 0x001D062E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D05C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D05C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esi) = 1;
    PUSH32(esp, 0x001D05D1u); RECOMP_ABI_CALL(0x001CF930u, sub_001CF930); /* call 0x001CF930 */

loc_001D05D1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM8(esi + 0xA8) = 0;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D05E2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D05DCu); } /* indirect call */
    }

loc_001D05E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D05FC; /* je: equal / zero */

loc_001D05E9: ;
    PUSH32(esp, 0x37EC40);
    PUSH32(esp, 0x37EC30);
    ecx = eax;
    PUSH32(esp, 0x001D05FAu); RECOMP_ABI_CALL(0x001D7E70u, sub_001D7E70); /* call 0x001D7E70 */

loc_001D05FA: ;
    goto loc_001D05FE;

loc_001D05FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D05FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(esi + 0x54) = eax;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D060Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D0605u); } /* indirect call */
    }

loc_001D060B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0625; /* je: equal / zero */

loc_001D0612: ;
    PUSH32(esp, 0x37ECC8);
    ecx = eax;
    PUSH32(esp, 0x001D061Eu); RECOMP_ABI_CALL(0x001D7EC0u, sub_001D7EC0); /* call 0x001D7EC0 */

loc_001D061E: ;
    MEM32(esi + 0x50) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D0625: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0630
 * Original: 0x001D0630 - 0x001D06F2 (194 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0630: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xA8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xA8), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D06EE; /* je: equal / zero */

loc_001D0640: ;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, 0);
    ecx = edi;
    MEM8(esi + 0xA8) = 1;
    PUSH32(esp, 0x001D0654u); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_001D0654: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x001D065Du); RECOMP_ABI_CALL(0x001CF090u, sub_001CF090); /* call 0x001CF090 */

loc_001D065D: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001D0666u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_001D0666: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001D066Fu); RECOMP_ABI_CALL(0x001CF0B0u, sub_001CF0B0); /* call 0x001CF0B0 */

loc_001D066F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM8(esi + 0x58) = 0;
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm1.f[0]; /* movss */
    MEM32(esi + 0xA4) = 0;
    POP32(esp, edi);

loc_001D06EE: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0700
 * Original: 0x001D0700 - 0x001D077E (126 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 0x58) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D077B; /* je: equal / zero */

loc_001D0713: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0749; /* je: equal / zero */

loc_001D0718: ;
    eax = MEM32(esi + 0x9C);
    MEM32(eax) = 0x417FC;
    ecx = MEM32(esi + 0x9C);
    MEM32(ecx + 4) = ebx;
    eax = MEM32(esi + 0xA4);
    edx = eax + eax * 4;
    eax = MEM32(esi + 0xA0);
    edx = edx << 0x12;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40001818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40001818;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    goto loc_001D075E;

loc_001D0749: ;
    ecx = MEM32(esi + 0x9C);
    MEM32(ecx) = 0x417FC;
    edx = MEM32(esi + 0x9C);
    MEM32(edx + 4) = ebx;

loc_001D075E: ;
    edx = MEM32(esi + 0x9C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esi + 0x9C) = edx;
    PUSH32(esp, 0x001D0775u); RECOMP_ABI_CALL(0x002DDED0u, sub_002DDED0); /* call 0x002DDED0 */

loc_001D0775: ;
    MEM32(esi + 0xA4) = ebx;

loc_001D077B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0780
 * Original: 0x001D0780 - 0x001D0804 (132 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0780: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0802; /* je: equal / zero */

loc_001D078A: ;
    _fa = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA4), 0x60 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D07C8; /* jne: not equal / not zero */

loc_001D0793: ;
    eax = MEM32(esi + 0x9C);
    MEM32(eax) = 0x417FC;
    ecx = MEM32(esi + 0x9C);
    MEM32(ecx + 4) = 0;
    eax = MEM32(esi + 0xA4);
    edx = eax + eax * 4;
    eax = MEM32(esi + 0xA0);
    edx = edx << 0x12;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40001818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40001818;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    goto loc_001D07E1;

loc_001D07C8: ;
    ecx = MEM32(esi + 0x9C);
    MEM32(ecx) = 0x417FC;
    edx = MEM32(esi + 0x9C);
    MEM32(edx + 4) = 0;

loc_001D07E1: ;
    edx = MEM32(esi + 0x9C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esi + 0x9C) = edx;
    PUSH32(esp, 0x001D07F8u); RECOMP_ABI_CALL(0x002DDED0u, sub_002DDED0); /* call 0x002DDED0 */

loc_001D07F8: ;
    MEM32(esi + 0xA4) = 0;

loc_001D0802: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0810
 * Original: 0x001D0810 - 0x001D082C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0810(void)
{

loc_001D0810: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esi) = 1;
    PUSH32(esp, 0x001D0821u); RECOMP_ABI_CALL(0x001CF930u, sub_001CF930); /* call 0x001CF930 */

loc_001D0821: ;
    MEM8(esi + 0xAC) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0830
 * Original: 0x001D0830 - 0x001D0952 (290 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0830: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xAC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xAC), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D094E; /* je: equal / zero */

loc_001D0840: ;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, 1);
    ecx = edi;
    MEM8(esi + 0xAC) = 1;
    PUSH32(esp, 0x001D0854u); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_001D0854: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x001D085Du); RECOMP_ABI_CALL(0x001CF240u, sub_001CF240); /* call 0x001CF240 */

loc_001D085D: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x001D0866u); RECOMP_ABI_CALL(0x001CF090u, sub_001CF090); /* call 0x001CF090 */

loc_001D0866: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001D086Fu); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_001D086F: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001D0878u); RECOMP_ABI_CALL(0x001CF0B0u, sub_001CF0B0); /* call 0x001CF0B0 */

loc_001D0878: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D0882u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D087Cu); } /* indirect call */
    }

loc_001D0882: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001D089D; /* je: equal / zero */

loc_001D088A: ;
    PUSH32(esp, 0x37EAA8);
    PUSH32(esp, 0x37EA90);
    ecx = eax;
    PUSH32(esp, 0x001D089Bu); RECOMP_ABI_CALL(0x001D7E70u, sub_001D7E70); /* call 0x001D7E70 */

loc_001D089B: ;
    goto loc_001D089F;

loc_001D089D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D089F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(esi + 0x58) = eax;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D08ACu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D08A6u); } /* indirect call */
    }

loc_001D08AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D08C1; /* je: equal / zero */

loc_001D08B3: ;
    PUSH32(esp, 0x37EB40);
    ecx = eax;
    PUSH32(esp, 0x001D08BFu); RECOMP_ABI_CALL(0x001D7EC0u, sub_001D7EC0); /* call 0x001D7EC0 */

loc_001D08BF: ;
    goto loc_001D08C3;

loc_001D08C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D08C3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x50) = 0;
    MEM8(esi + 0x5C) = 0;
    MEMF(esi + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm1.f[0]; /* movss */
    MEM32(esi + 0xA8) = 0;

loc_001D094E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0960
 * Original: 0x001D0960 - 0x001D09A2 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0960: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x58);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D097E; /* je: equal / zero */

loc_001D096B: ;
    ecx = esi;
    PUSH32(esp, 0x001D0972u); RECOMP_ABI_CALL(0x001D7E90u, sub_001D7E90); /* call 0x001D7E90 */

loc_001D0972: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D097Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D0975u); } /* indirect call */
    }

loc_001D097B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D097E: ;
    esi = MEM32(edi + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0998; /* je: equal / zero */

loc_001D0985: ;
    ecx = esi;
    PUSH32(esp, 0x001D098Cu); RECOMP_ABI_CALL(0x001D7EE0u, sub_001D7EE0); /* call 0x001D7EE0 */

loc_001D098C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D0995u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D098Fu); } /* indirect call */
    }

loc_001D0995: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0998: ;
    ecx = edi + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001CF8A0(); return; /* tail jmp 0x001CF8A0 */

}

/**
 * sub_001D09B0
 * Original: 0x001D09B0 - 0x001D0A2E (126 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D09B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D09B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 0x5C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D0A2B; /* je: equal / zero */

loc_001D09C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D09F9; /* je: equal / zero */

loc_001D09C8: ;
    eax = MEM32(esi + 0xA0);
    MEM32(eax) = 0x417FC;
    ecx = MEM32(esi + 0xA0);
    MEM32(ecx + 4) = ebx;
    eax = MEM32(esi + 0xA8);
    edx = eax + eax * 2;
    eax = MEM32(esi + 0xA4);
    edx = edx << 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40001818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40001818;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    goto loc_001D0A0E;

loc_001D09F9: ;
    ecx = MEM32(esi + 0xA0);
    MEM32(ecx) = 0x417FC;
    edx = MEM32(esi + 0xA0);
    MEM32(edx + 4) = ebx;

loc_001D0A0E: ;
    edx = MEM32(esi + 0xA0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esi + 0xA0) = edx;
    PUSH32(esp, 0x001D0A25u); RECOMP_ABI_CALL(0x002DDED0u, sub_002DDED0); /* call 0x002DDED0 */

loc_001D0A25: ;
    MEM32(esi + 0xA8) = ebx;

loc_001D0A2B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0A30
 * Original: 0x001D0A30 - 0x001D0AB4 (132 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0AB2; /* je: equal / zero */

loc_001D0A3A: ;
    _fa = (uint32_t)(MEM32(esi + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA8), 0x60 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0A78; /* jne: not equal / not zero */

loc_001D0A43: ;
    eax = MEM32(esi + 0xA0);
    MEM32(eax) = 0x417FC;
    ecx = MEM32(esi + 0xA0);
    MEM32(ecx + 4) = 0;
    eax = MEM32(esi + 0xA8);
    edx = eax + eax * 2;
    eax = MEM32(esi + 0xA4);
    edx = edx << 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40001818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40001818;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    goto loc_001D0A91;

loc_001D0A78: ;
    ecx = MEM32(esi + 0xA0);
    MEM32(ecx) = 0x417FC;
    edx = MEM32(esi + 0xA0);
    MEM32(edx + 4) = 0;

loc_001D0A91: ;
    edx = MEM32(esi + 0xA0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esi + 0xA0) = edx;
    PUSH32(esp, 0x001D0AA8u); RECOMP_ABI_CALL(0x002DDED0u, sub_002DDED0); /* call 0x002DDED0 */

loc_001D0AA8: ;
    MEM32(esi + 0xA8) = 0;

loc_001D0AB2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0AC0
 * Original: 0x001D0AC0 - 0x001D0AD3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0AC0(void)
{

loc_001D0AC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D0AC8u); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_001D0AC8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0AE0
 * Original: 0x001D0AE0 - 0x001D0B22 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0AEE; /* je: equal / zero */

loc_001D0AEA: ;
    MEM8(esi + 0x18) = 0;

loc_001D0AEE: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0B06; /* je: equal / zero */

loc_001D0AF5: ;
    ecx = MEM32(esi + 0x10);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D0B03u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D0AFDu); } /* indirect call */
    }

loc_001D0B03: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0B06: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0B20; /* je: equal / zero */

loc_001D0B0D: ;
    ecx = esi;
    PUSH32(esp, 0x001D0B14u); RECOMP_ABI_CALL(0x001CC0D0u, sub_001CC0D0); /* call 0x001CC0D0 */

loc_001D0B14: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x58);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D0B1Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D0B17u); } /* indirect call */
    }

loc_001D0B1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0B20: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0B30
 * Original: 0x001D0B30 - 0x001D0B5A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0B30(void)
{

loc_001D0B30: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D0B4Eu); RECOMP_ABI_CALL(0x001D03D0u, sub_001D03D0); /* call 0x001D03D0 */

loc_001D0B4E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D0B56u); RECOMP_ABI_CALL(0x001D0480u, sub_001D0480); /* call 0x001D0480 */

loc_001D0B56: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D0B60
 * Original: 0x001D0B60 - 0x001D0B91 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(edx, MEM8(esi + 0x18));
    ecx = MEM32(esp + 8);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esi + 0x38) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D0B8D; /* jne: not equal / not zero */

loc_001D0B73: ;
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001D0B7Fu); RECOMP_ABI_CALL(0x001D0530u, sub_001D0530); /* call 0x001D0530 */

loc_001D0B7F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x001D0B87u); RECOMP_ABI_CALL(0x001CB1F0u, sub_001CB1F0); /* call 0x001CB1F0 */

loc_001D0B87: ;
    MEM8(esi + 0x34) = 0;
    SET_LO8(eax, 1);

loc_001D0B8D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0BA0
 * Original: 0x001D0BA0 - 0x001D0BE2 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0BA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0BBE; /* je: equal / zero */

loc_001D0BAB: ;
    ecx = esi;
    PUSH32(esp, 0x001D0BB2u); RECOMP_ABI_CALL(0x001D7E90u, sub_001D7E90); /* call 0x001D7E90 */

loc_001D0BB2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D0BBBu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D0BB5u); } /* indirect call */
    }

loc_001D0BBB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0BBE: ;
    esi = MEM32(edi + 0x50);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0BD8; /* je: equal / zero */

loc_001D0BC5: ;
    ecx = esi;
    PUSH32(esp, 0x001D0BCCu); RECOMP_ABI_CALL(0x001D7EE0u, sub_001D7EE0); /* call 0x001D7EE0 */

loc_001D0BCC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D0BD5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D0BCFu); } /* indirect call */
    }

loc_001D0BD5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0BD8: ;
    ecx = edi + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001CF8A0(); return; /* tail jmp 0x001CF8A0 */

}

/**
 * sub_001D0BF0
 * Original: 0x001D0BF0 - 0x001D0CCD (221 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0BF0: ;
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
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 0xA4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D0C20; /* je: equal / zero */

loc_001D0C10: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C15u); RECOMP_ABI_CALL(0x001D0780u, sub_001D0780); /* call 0x001D0780 */

loc_001D0C15: ;
    PUSH32(esp, edi);
    ecx = esi + 4;
    MEM32(esi) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C20u); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_001D0C20: ;
    eax = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C29u); RECOMP_ABI_CALL(0x001D4C90u, sub_001D4C90); /* call 0x001D4C90 */

loc_001D0C29: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C32u); RECOMP_ABI_CALL(0x001D4CC0u, sub_001D4CC0); /* call 0x001D4CC0 */

loc_001D0C32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C3Au); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D0C3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0CA7; /* je: equal / zero */

loc_001D0C3E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C43u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D0C43: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C4Au); RECOMP_ABI_CALL(0x001C1730u, sub_001C1730); /* call 0x001C1730 */

loc_001D0C4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0C5C; /* je: equal / zero */

loc_001D0C4E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C53u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D0C53: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C5Au); RECOMP_ABI_CALL(0x001C1730u, sub_001C1730); /* call 0x001C1730 */

loc_001D0C5A: ;
    goto loc_001D0C68;

loc_001D0C5C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C61u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D0C61: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C68u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D0C68: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C6Fu); RECOMP_ABI_CALL(0x001C1A60u, sub_001C1A60); /* call 0x001C1A60 */

loc_001D0C6F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C76u); RECOMP_ABI_CALL(0x001C7360u, sub_001C7360); /* call 0x001C7360 */

loc_001D0C76: ;
    ecx = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C80u); RECOMP_ABI_CALL(0x001C7AF0u, sub_001C7AF0); /* call 0x001C7AF0 */

loc_001D0C80: ;
    edx = esi + 0x5C;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C8Du); RECOMP_ABI_CALL(0x001C9C00u, sub_001C9C00); /* call 0x001C9C00 */

loc_001D0C8D: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0C96u); RECOMP_ABI_CALL(0x001C8910u, sub_001C8910); /* call 0x001C8910 */

loc_001D0C96: ;
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0CA4u); RECOMP_ABI_CALL(0x001D4CE0u, sub_001D4CE0); /* call 0x001D4CE0 */

loc_001D0CA4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0CA7: ;
    ecx = esi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0CAFu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001D0CAF: ;
    SET_LO8(eax, MEM8(0x529068));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0CC1; /* je: equal / zero */

loc_001D0CB8: ;
    RECOMP_UNIMPL("wbinvd", 0x001D0CB8u); /* TODO: wbinvd */
    MEM8(0x529068) = 0;

loc_001D0CC1: ;
    POP32(esp, edi);
    MEM8(esi + 0x58) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0CD0
 * Original: 0x001D0CD0 - 0x001D0DA1 (209 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA4);
    ecx = MEM32(0x37EDC0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D0CEB; /* jbe: below or equal (unsigned <=) */

loc_001D0CE4: ;
    ecx = esi;
    PUSH32(esp, 0x001D0CEBu); RECOMP_ABI_CALL(0x001D0780u, sub_001D0780); /* call 0x001D0780 */

loc_001D0CEB: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0D48; /* jne: not equal / not zero */

loc_001D0CF5: ;
    ecx = MEM32(0x37EDE8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D0D01u); RECOMP_ABI_CALL(0x002DDEB0u, sub_002DDEB0); /* call 0x002DDEB0 */

loc_001D0D01: ;
    ecx = MEM32(0x37EDC4);
    MEM32(esi + 0x9C) = eax;
    MEM32(eax) = 0x417FC;
    edx = MEM32(esi + 0x9C);
    eax = MEM32(esi);
    MEM32(edx + 4) = eax;
    edx = MEM32(esi + 0x9C);
    ecx = ecx << 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40001818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40001818;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = ecx;
    eax = MEM32(esi + 0x9C);
    ecx = eax + 8;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = ecx;
    MEM32(esi + 0x9C) = eax;

loc_001D0D48: ;
    eax = MEM32(esi + 0x9C);
    edx = MEM32(esp + 8);
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esi + 0x9C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x9C) = edx;
    eax = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(esi + 0x9C);
    eax = MEM32(esi + 0xA4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x9C) = ecx;
    MEM32(esi + 0xA4) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D0DB0
 * Original: 0x001D0DB0 - 0x001D0E99 (233 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0DB0: ;
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
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 0xA8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D0DE0; /* je: equal / zero */

loc_001D0DD0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0DD5u); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_001D0DD5: ;
    PUSH32(esp, edi);
    ecx = esi + 4;
    MEM32(esi) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0DE0u); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_001D0DE0: ;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0DE9u); RECOMP_ABI_CALL(0x001D4C90u, sub_001D4C90); /* call 0x001D4C90 */

loc_001D0DE9: ;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0DF2u); RECOMP_ABI_CALL(0x001D4CC0u, sub_001D4CC0); /* call 0x001D4CC0 */

loc_001D0DF2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0DFAu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D0DFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0E67; /* je: equal / zero */

loc_001D0DFE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E03u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D0E03: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E0Au); RECOMP_ABI_CALL(0x001C1730u, sub_001C1730); /* call 0x001C1730 */

loc_001D0E0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0E1C; /* je: equal / zero */

loc_001D0E0E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E13u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D0E13: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E1Au); RECOMP_ABI_CALL(0x001C1730u, sub_001C1730); /* call 0x001C1730 */

loc_001D0E1A: ;
    goto loc_001D0E28;

loc_001D0E1C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E21u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D0E21: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E28u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D0E28: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E2Fu); RECOMP_ABI_CALL(0x001C1A60u, sub_001C1A60); /* call 0x001C1A60 */

loc_001D0E2F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E36u); RECOMP_ABI_CALL(0x001C7360u, sub_001C7360); /* call 0x001C7360 */

loc_001D0E36: ;
    ecx = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E40u); RECOMP_ABI_CALL(0x001C7AF0u, sub_001C7AF0); /* call 0x001C7AF0 */

loc_001D0E40: ;
    edx = esi + 0x60;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E4Du); RECOMP_ABI_CALL(0x001C9C00u, sub_001C9C00); /* call 0x001C9C00 */

loc_001D0E4D: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E56u); RECOMP_ABI_CALL(0x001C8910u, sub_001C8910); /* call 0x001C8910 */

loc_001D0E56: ;
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E64u); RECOMP_ABI_CALL(0x001D4CE0u, sub_001D4CE0); /* call 0x001D4CE0 */

loc_001D0E64: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0E67: ;
    ecx = esi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E6Fu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001D0E6F: ;
    SET_LO8(eax, MEM8(0x529068));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0E81; /* je: equal / zero */

loc_001D0E78: ;
    RECOMP_UNIMPL("wbinvd", 0x001D0E78u); /* TODO: wbinvd */
    MEM8(0x529068) = 0;

loc_001D0E81: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0E8D; /* je: equal / zero */

loc_001D0E88: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0E8Du); RECOMP_ABI_CALL(0x001CC9E0u, sub_001CC9E0); /* call 0x001CC9E0 */

loc_001D0E8D: ;
    POP32(esp, edi);
    MEM8(esi + 0x5C) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0EA0
 * Original: 0x001D0EA0 - 0x001D0FA2 (258 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA8);
    ecx = MEM32(0x37EDC0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_001D0EBC; /* jbe: below or equal (unsigned <=) */

loc_001D0EB5: ;
    ecx = esi;
    PUSH32(esp, 0x001D0EBCu); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_001D0EBC: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0F19; /* jne: not equal / not zero */

loc_001D0EC6: ;
    ecx = MEM32(0x37EDEC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D0ED2u); RECOMP_ABI_CALL(0x002DDEB0u, sub_002DDEB0); /* call 0x002DDEB0 */

loc_001D0ED2: ;
    ecx = MEM32(0x37EDC8);
    MEM32(esi + 0xA0) = eax;
    MEM32(eax) = 0x417FC;
    edx = MEM32(esi + 0xA0);
    eax = MEM32(esi);
    MEM32(edx + 4) = eax;
    edx = MEM32(esi + 0xA0);
    ecx = ecx << 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40001818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40001818;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = ecx;
    eax = MEM32(esi + 0xA0);
    ecx = eax + 8;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA4) = ecx;
    MEM32(esi + 0xA0) = eax;

loc_001D0F19: ;
    eax = MEM32(esi + 0xA0);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esi + 0xA0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = ecx;
    eax = ecx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    eax = MEM32(esi + 0xA0);
    edx = 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = eax;
    edi = MEM32(ecx);
    MEM32(eax) = edi;
    edi = MEM32(esi + 0xA0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = edi;
    ecx = MEM32(ecx + 4);
    eax = edi;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0xA0);
    eax = MEM32(esi + 0xA8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xA0) = ecx;
    MEM32(esi + 0xA8) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D0FB0
 * Original: 0x001D0FB0 - 0x001D1098 (232 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0FB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA8);
    ecx = MEM32(0x37EDC0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D0FCB; /* jbe: below or equal (unsigned <=) */

loc_001D0FC4: ;
    ecx = esi;
    PUSH32(esp, 0x001D0FCBu); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_001D0FCB: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1028; /* jne: not equal / not zero */

loc_001D0FD5: ;
    ecx = MEM32(0x37EDEC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D0FE1u); RECOMP_ABI_CALL(0x002DDEB0u, sub_002DDEB0); /* call 0x002DDEB0 */

loc_001D0FE1: ;
    ecx = MEM32(0x37EDC8);
    MEM32(esi + 0xA0) = eax;
    MEM32(eax) = 0x417FC;
    edx = MEM32(esi + 0xA0);
    eax = MEM32(esi);
    MEM32(edx + 4) = eax;
    edx = MEM32(esi + 0xA0);
    ecx = ecx << 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40001818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40001818;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = ecx;
    eax = MEM32(esi + 0xA0);
    ecx = eax + 8;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA4) = ecx;
    MEM32(esi + 0xA0) = eax;

loc_001D1028: ;
    eax = MEM32(esi + 0xA0);
    edx = MEM32(esp + 8);
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    eax = MEM32(esi + 0xA0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = eax;
    edx = MEM32(ecx);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    edx = MEM32(esi + 0xA0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = edx;
    eax = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 0xA0);
    eax = MEM32(esi + 0xA8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xA0) = ecx;
    MEM32(esi + 0xA8) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D10A0
 * Original: 0x001D10A0 - 0x001D129C (508 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D10A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D10A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D10BB; /* jge: greater or equal (signed >=) */

loc_001D10A5: ;
    ecx = MEM32(esi * 4 + 0x311F48);
    edx = edi;
    PUSH32(esp, 0x001D10B3u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001D10B3: ;
    MEM32(esi * 4 + 0x2E92B0) = edi;
    esp += 4; return; /* ret */

loc_001D10BB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D10E0; /* jge: greater or equal (signed >=) */

loc_001D10C3: ;
    ecx = MEM32(0x2E90A8);
    eax = MEM32(esi * 4 + 0x311D28);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = ecx;
    MEM32(esi * 4 + 0x2E92B0) = edi;
    esp += 4; return; /* ret */

loc_001D10E0: ;
    if (CMP_NE(_fa, _fb)) goto loc_001D10E9; /* jne: not equal / not zero */

loc_001D10E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D10E8u); RECOMP_ABI_CALL(0x002D9D90u, sub_002D9D90); /* call 0x002D9D90 */

loc_001D10E8: ;
    esp += 4; return; /* ret */

loc_001D10E9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D10F8; /* jne: not equal / not zero */

loc_001D10F1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D10F7u); RECOMP_ABI_CALL(0x002DA5E0u, sub_002DA5E0); /* call 0x002DA5E0 */

loc_001D10F7: ;
    esp += 4; return; /* ret */

loc_001D10F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1107; /* jne: not equal / not zero */

loc_001D1100: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1106u); RECOMP_ABI_CALL(0x002DA140u, sub_002DA140); /* call 0x002DA140 */

loc_001D1106: ;
    esp += 4; return; /* ret */

loc_001D1107: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1116; /* jne: not equal / not zero */

loc_001D110F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1115u); RECOMP_ABI_CALL(0x002DA4B0u, sub_002DA4B0); /* call 0x002DA4B0 */

loc_001D1115: ;
    esp += 4; return; /* ret */

loc_001D1116: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1125; /* jne: not equal / not zero */

loc_001D111E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1124u); RECOMP_ABI_CALL(0x002DA500u, sub_002DA500); /* call 0x002DA500 */

loc_001D1124: ;
    esp += 4; return; /* ret */

loc_001D1125: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1134; /* jne: not equal / not zero */

loc_001D112D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1133u); RECOMP_ABI_CALL(0x002DA560u, sub_002DA560); /* call 0x002DA560 */

loc_001D1133: ;
    esp += 4; return; /* ret */

loc_001D1134: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1143; /* jne: not equal / not zero */

loc_001D113C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1142u); RECOMP_ABI_CALL(0x002DA240u, sub_002DA240); /* call 0x002DA240 */

loc_001D1142: ;
    esp += 4; return; /* ret */

loc_001D1143: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1152; /* jne: not equal / not zero */

loc_001D114B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1151u); RECOMP_ABI_CALL(0x002DB010u, sub_002DB010); /* call 0x002DB010 */

loc_001D1151: ;
    esp += 4; return; /* ret */

loc_001D1152: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1161; /* jne: not equal / not zero */

loc_001D115A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1160u); RECOMP_ABI_CALL(0x002DB0A0u, sub_002DB0A0); /* call 0x002DB0A0 */

loc_001D1160: ;
    esp += 4; return; /* ret */

loc_001D1161: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1170; /* jne: not equal / not zero */

loc_001D1169: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D116Fu); RECOMP_ABI_CALL(0x002DB140u, sub_002DB140); /* call 0x002DB140 */

loc_001D116F: ;
    esp += 4; return; /* ret */

loc_001D1170: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D117F; /* jne: not equal / not zero */

loc_001D1178: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D117Eu); RECOMP_ABI_CALL(0x002DA190u, sub_002DA190); /* call 0x002DA190 */

loc_001D117E: ;
    esp += 4; return; /* ret */

loc_001D117F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D118E; /* jne: not equal / not zero */

loc_001D1187: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D118Du); RECOMP_ABI_CALL(0x002DA200u, sub_002DA200); /* call 0x002DA200 */

loc_001D118D: ;
    esp += 4; return; /* ret */

loc_001D118E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D119D; /* jne: not equal / not zero */

loc_001D1196: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D119Cu); RECOMP_ABI_CALL(0x002DA280u, sub_002DA280); /* call 0x002DA280 */

loc_001D119C: ;
    esp += 4; return; /* ret */

loc_001D119D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D11AC; /* jne: not equal / not zero */

loc_001D11A5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D11ABu); RECOMP_ABI_CALL(0x002DA3D0u, sub_002DA3D0); /* call 0x002DA3D0 */

loc_001D11AB: ;
    esp += 4; return; /* ret */

loc_001D11AC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D11BB; /* jne: not equal / not zero */

loc_001D11B4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D11BAu); RECOMP_ABI_CALL(0x002DA450u, sub_002DA450); /* call 0x002DA450 */

loc_001D11BA: ;
    esp += 4; return; /* ret */

loc_001D11BB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D11CA; /* jne: not equal / not zero */

loc_001D11C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D11C9u); RECOMP_ABI_CALL(0x002DA0C0u, sub_002DA0C0); /* call 0x002DA0C0 */

loc_001D11C9: ;
    esp += 4; return; /* ret */

loc_001D11CA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D11D9; /* jne: not equal / not zero */

loc_001D11D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D11D8u); RECOMP_ABI_CALL(0x002DB380u, sub_002DB380); /* call 0x002DB380 */

loc_001D11D8: ;
    esp += 4; return; /* ret */

loc_001D11D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D11E8; /* jne: not equal / not zero */

loc_001D11E1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D11E7u); RECOMP_ABI_CALL(0x002DB400u, sub_002DB400); /* call 0x002DB400 */

loc_001D11E7: ;
    esp += 4; return; /* ret */

loc_001D11E8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D11F7; /* jne: not equal / not zero */

loc_001D11F0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D11F6u); RECOMP_ABI_CALL(0x002DB320u, sub_002DB320); /* call 0x002DB320 */

loc_001D11F6: ;
    esp += 4; return; /* ret */

loc_001D11F7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1206; /* jne: not equal / not zero */

loc_001D11FF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1205u); RECOMP_ABI_CALL(0x002DB350u, sub_002DB350); /* call 0x002DB350 */

loc_001D1205: ;
    esp += 4; return; /* ret */

loc_001D1206: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1215; /* jne: not equal / not zero */

loc_001D120E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1214u); RECOMP_ABI_CALL(0x002DA100u, sub_002DA100); /* call 0x002DA100 */

loc_001D1214: ;
    esp += 4; return; /* ret */

loc_001D1215: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1224; /* jne: not equal / not zero */

loc_001D121D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1223u); RECOMP_ABI_CALL(0x002DA2E0u, sub_002DA2E0); /* call 0x002DA2E0 */

loc_001D1223: ;
    esp += 4; return; /* ret */

loc_001D1224: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1233; /* jne: not equal / not zero */

loc_001D122C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1232u); RECOMP_ABI_CALL(0x002DB450u, sub_002DB450); /* call 0x002DB450 */

loc_001D1232: ;
    esp += 4; return; /* ret */

loc_001D1233: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1242; /* jne: not equal / not zero */

loc_001D123B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1241u); RECOMP_ABI_CALL(0x002DA350u, sub_002DA350); /* call 0x002DA350 */

loc_001D1241: ;
    esp += 4; return; /* ret */

loc_001D1242: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1251; /* jne: not equal / not zero */

loc_001D124A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1250u); RECOMP_ABI_CALL(0x002DB1B0u, sub_002DB1B0); /* call 0x002DB1B0 */

loc_001D1250: ;
    esp += 4; return; /* ret */

loc_001D1251: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1260; /* jne: not equal / not zero */

loc_001D1259: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D125Fu); RECOMP_ABI_CALL(0x002DB1E0u, sub_002DB1E0); /* call 0x002DB1E0 */

loc_001D125F: ;
    esp += 4; return; /* ret */

loc_001D1260: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D126F; /* jne: not equal / not zero */

loc_001D1268: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D126Eu); RECOMP_ABI_CALL(0x002DB250u, sub_002DB250); /* call 0x002DB250 */

loc_001D126E: ;
    esp += 4; return; /* ret */

loc_001D126F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D127E; /* jne: not equal / not zero */

loc_001D1277: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D127Du); RECOMP_ABI_CALL(0x002DB2C0u, sub_002DB2C0); /* call 0x002DB2C0 */

loc_001D127D: ;
    esp += 4; return; /* ret */

loc_001D127E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D128D; /* jne: not equal / not zero */

loc_001D1286: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D128Cu); RECOMP_ABI_CALL(0x002DB2E0u, sub_002DB2E0); /* call 0x002DB2E0 */

loc_001D128C: ;
    esp += 4; return; /* ret */

loc_001D128D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D129B; /* jne: not equal / not zero */

loc_001D1295: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D129Bu); RECOMP_ABI_CALL(0x002DB300u, sub_002DB300); /* call 0x002DB300 */

loc_001D129B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D12A0
 * Original: 0x001D12A0 - 0x001D12BF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D12A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D12A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D12A9u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D12A9: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D12B3u); RECOMP_ABI_CALL(0x001C1770u, sub_001C1770); /* call 0x001C1770 */

loc_001D12B3: ;
    MEM32(esi + 0xB4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D12C0
 * Original: 0x001D12C0 - 0x001D12E0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D12C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D12C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x001D12CAu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D12CA: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D12D4u); RECOMP_ABI_CALL(0x001C1770u, sub_001C1770); /* call 0x001C1770 */

loc_001D12D4: ;
    MEM32(esi + 0xB4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D12E0
 * Original: 0x001D12E0 - 0x001D1300 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D12E0(void)
{

loc_001D12E0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x3C); /* cvtsi2ss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x40); /* cvtsi2ss */
    ecx = MEM32(esp + 8);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D1300
 * Original: 0x001D1300 - 0x001D1304 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1300(void)
{

loc_001D1300: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_001D1310
 * Original: 0x001D1310 - 0x001D1314 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1310(void)
{

loc_001D1310: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_001D1320
 * Original: 0x001D1320 - 0x001D1325 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1320: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1330
 * Original: 0x001D1330 - 0x001D1335 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1330: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1340
 * Original: 0x001D1340 - 0x001D134E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1340(void)
{

loc_001D1340: ;
    SET_LO8(eax, MEM8(ecx + 0x68));
    ecx = MEM32(esp + 4);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1350
 * Original: 0x001D1350 - 0x001D1355 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1350: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1360
 * Original: 0x001D1360 - 0x001D1365 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1360: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1370
 * Original: 0x001D1370 - 0x001D13D3 (99 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1370: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1387; /* je: equal / zero */

loc_001D1384: ;
    edi = MEM32(edx + 0x40);

loc_001D1387: ;
    ebx = MEM32(eax + 0xC);
    MEM32(ecx + 0x40) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(ecx + 0x3C) = ebx;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x60) = eax;
    eax = MEM32(esi + 0x40);
    eax = MEM32(eax + 0x10);
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x18) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x64) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D13C8; /* je: equal / zero */

loc_001D13B3: ;
    eax = MEM32(edi + 0x24);
    MEM32(ecx + 0x64) = eax;
    edx = MEM32(edx + 0x40);
    eax = MEM32(edx + 0x10);
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x18) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0x4C) = eax;

loc_001D13C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D13E0
 * Original: 0x001D13E0 - 0x001D13E5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D13E0(void)
{

loc_001D13E0: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D13F0
 * Original: 0x001D13F0 - 0x001D140E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D13F0(void)
{

loc_001D13F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D13FEu); RECOMP_ABI_CALL(0x001C44E0u, sub_001C44E0); /* call 0x001C44E0 */

loc_001D13FE: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    MEM32(esi) = 0x337D74;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1410
 * Original: 0x001D1410 - 0x001D141B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1410: ;
    MEM32(ecx) = 0x337D74;
    g_seh_ebp = ebp; sub_001C4500(); return; /* tail jmp 0x001C4500 */

}

/**
 * sub_001D1420
 * Original: 0x001D1420 - 0x001D142B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1420: ;
    MEM32(ecx) = 0x337D78;
    g_seh_ebp = ebp; sub_001C45D0(); return; /* tail jmp 0x001C45D0 */

}

/**
 * sub_001D1430
 * Original: 0x001D1430 - 0x001D1440 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1430: ;
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
 * sub_001D1450
 * Original: 0x001D1450 - 0x001D1455 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1450(void)
{

loc_001D1450: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1460
 * Original: 0x001D1460 - 0x001D149A (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1460: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x68) = LO8(eax);
    _fa = (uint32_t)(MEM8(0x37DB9C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x37DB9C), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1495; /* je: equal / zero */

loc_001D146F: ;
    ecx = MEM32(0x528690);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(0x37DB9C) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001D1495; /* je: equal / zero */

loc_001D147E: ;
    PUSH32(esp, esi);
    esi = ZX8(LO8(eax));
    edx = esi;
    ecx = 0x4035C;
    PUSH32(esp, 0x001D148Eu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001D148E: ;
    MEM32(0x2E93B0) = esi;
    POP32(esp, esi);

loc_001D1495: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D14A0
 * Original: 0x001D14A0 - 0x001D14EB (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D14A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D14A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D14AEu); RECOMP_ABI_CALL(0x001C45B0u, sub_001C45B0); /* call 0x001C45B0 */

loc_001D14AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = edi;
    MEM32(esi) = 0x337D78;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x98) = eax;
    POP32(esp, edi);
    MEM8(esi + 0x4C) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D14F0
 * Original: 0x001D14F0 - 0x001D1514 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D14F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D14F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x337D74;
    PUSH32(esp, 0x001D14FEu); RECOMP_ABI_CALL(0x001C4500u, sub_001C4500); /* call 0x001C4500 */

loc_001D14FE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D150E; /* je: equal / zero */

loc_001D1505: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D150Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001D150B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D150E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1520
 * Original: 0x001D1520 - 0x001D1544 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1520: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x337D78;
    PUSH32(esp, 0x001D152Eu); RECOMP_ABI_CALL(0x001C45D0u, sub_001C45D0); /* call 0x001C45D0 */

loc_001D152E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D153E; /* je: equal / zero */

loc_001D1535: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D153Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001D153B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D153E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1550
 * Original: 0x001D1550 - 0x001D1555 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1550(void)
{

loc_001D1550: ;
    eax = MEM32(ecx + eax * 4 + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_001D1560
 * Original: 0x001D1560 - 0x001D1569 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1560(void)
{

loc_001D1560: ;
    MEMF(ecx + eax * 4 + 0x20) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001D1570
 * Original: 0x001D1570 - 0x001D1577 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1570(void)
{

loc_001D1570: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + eax * 4 + 0x20)); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001D1580
 * Original: 0x001D1580 - 0x001D1586 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1580: ;
    eax = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D1590
 * Original: 0x001D1590 - 0x001D1595 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1590(void)
{

loc_001D1590: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001D15A0
 * Original: 0x001D15A0 - 0x001D15A5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D15A0(void)
{

loc_001D15A0: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    esp += 4; return; /* ret */

}

/**
 * sub_001D15B0
 * Original: 0x001D15B0 - 0x001D15C2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D15B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D15B0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax * 4 + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001D15D0
 * Original: 0x001D15D0 - 0x001D1A07 (1079 bytes, 238 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D15D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D15D0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    PUSH32(esp, esi);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax * 4 + 0x1C;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x001D15F4u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D15F4: ;
    edi = MEM32(esp + 0x34);
    ecx = esi * 4 + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xDEADC0EDu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D160Bu); RECOMP_ABI_CALL(0x001C0EA0u, sub_001C0EA0); /* call 0x001C0EA0 */

loc_001D160B: ;
    edx = MEM32(esp + 0x34);
    MEM32(edi) = esi;
    eax = MEM32(edx + 0x70);
    edx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFBu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = eax;
    eax = MEM32(edx);
    ecx = edi + 4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 0x12;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40001818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40001818;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = esi;
    MEM32(ecx) = 0x417FC;
    MEM32(ecx + 4) = 8;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D19F7; /* jle: less or equal (signed <=) */

loc_001D164F: ;
    xmm6 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    /* nop */

loc_001D1660: ;
    edi = ZX16(MEM16(eax + 4));
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm5.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    edi = ZX16(MEM16(eax + 6));
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    edi = (uint32_t)(int32_t)SMEM8(eax + 9);
    xmm3.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    edi = (uint32_t)(int32_t)SMEM8(eax + 0xA);
    xmm3.f[0] = xmm3.f[0] + MEMF(0x528A20); /* addss */
    xmm4.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    edi = ZX8(MEM8(eax + 2));
    eax = ZX8(MEM8(eax + 3));
    xmm4.f[0] = xmm4.f[0] + MEMF(0x528A24); /* addss */
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D19EA; /* jnp: not parity */

loc_001D16E5: ;
    xmm6 = XMM_SCALAR(MEMF(0x528A48)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x528A4C)); /* movss */
    edi = MEM32(esp + 0x14);
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x528A50)); /* movss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x528A54)); /* movss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    eax = ecx;
    MEM32(eax) = edi;
    edi = MEM32(esp + 0x18);
    MEM32(eax + 4) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(eax + 8) = edi;
    edi = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = edi;
    xmm6 = XMM_SCALAR(MEMF(0x528A38)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x528A40); /* mulss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x528A3C)); /* movss */
    eax = MEM32(esp + 0xC);
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x528A44); /* mulss */
    MEM32(ecx + 0x10) = eax;
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(0x37EFA0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x528A48); /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x528A4C)); /* movss */
    edi = MEM32(esp + 0x14);
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x528A50)); /* movss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x528A54)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    MEM32(eax) = edi;
    edi = MEM32(esp + 0x18);
    MEM32(eax + 4) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(eax + 8) = edi;
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    edi = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = edi;
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(0x528A38); /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x528A40); /* mulss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x528A3C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x28); /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x528A44); /* mulss */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x37EFA0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A48); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x14);
    xmm0 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x28); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x528A4C); /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x528A50)); /* movss */
    eax = ecx;
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x528A54)); /* movss */
    MEM32(eax) = edi;
    edi = MEM32(esp + 0x18);
    MEM32(eax + 4) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(eax + 8) = edi;
    MEMF(esp + 0x20) = xmm7.f[0]; /* movss */
    edi = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = edi;
    xmm1.f[0] = xmm1.f[0] + MEMF(0x528A38); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x528A40); /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    xmm1 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x528A3C); /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x528A44); /* mulss */
    MEM32(ecx) = eax;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x37EFA0);
    MEM32(ecx + 8) = eax;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A4C); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x528A48)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x528A50)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x528A54)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    eax = ecx;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    edi = MEM32(esp + 0x14);
    MEM32(eax) = edi;
    edi = MEM32(esp + 0x18);
    MEM32(eax + 4) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(eax + 8) = edi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = edi;
    xmm0 = XMM_SCALAR(MEMF(0x528A38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x528A3C); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x528A44); /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A40); /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x37EFA0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D19EA: ;
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D1660; /* jne: not equal / not zero */

loc_001D19F7: ;
    POP32(esp, edi);
    MEM32(ecx) = 0x417FC;
    MEM32(ecx + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D1A10
 * Original: 0x001D1A10 - 0x001D1A13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1A10: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D1A20
 * Original: 0x001D1A20 - 0x001D1A23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1A20: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D1A30
 * Original: 0x001D1A30 - 0x001D1C77 (583 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1A30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x528A24);
    PUSH32(esp, 0x528A20);
    PUSH32(esp, 0x001D1A40u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1A40: ;
    ecx = eax;
    PUSH32(esp, 0x001D1A47u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1A47: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1A51u); RECOMP_ABI_CALL(0x001C3B10u, sub_001C3B10); /* call 0x001C3B10 */

loc_001D1A51: ;
    PUSH32(esp, 0x37EE1C);
    PUSH32(esp, 0x37EE18);
    PUSH32(esp, 0x001D1A60u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1A60: ;
    ecx = eax;
    PUSH32(esp, 0x001D1A67u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1A67: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1A71u); RECOMP_ABI_CALL(0x001C3820u, sub_001C3820); /* call 0x001C3820 */

loc_001D1A71: ;
    esi = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    ecx = MEM32(0x528A2C);
    MEMF(0x528A38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(0x528A3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    MEMF(0x528A40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    MEMF(0x528A44) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x20);
    MEM32(0x37EFA0) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(0x528A48) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x37EE18); /* mulss */
    MEMF(0x528A4C) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x37EE1C); /* mulss */
    MEMF(0x528A50) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(0x528A54) = xmm2.f[0]; /* movss */
    MEMF(0x528A48) = xmm0.f[0]; /* movss */
    MEMF(0x528A4C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001D1B11u); RECOMP_ABI_CALL(0x001D4C90u, sub_001D4C90); /* call 0x001D4C90 */

loc_001D1B11: ;
    edx = MEM32(0x528A34);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D1B1Du); RECOMP_ABI_CALL(0x001D4CC0u, sub_001D4CC0); /* call 0x001D4CC0 */

loc_001D1B1D: ;
    edx = MEM32(esi + 0x48);
    eax = MEM32(esi + 0x70);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1C32; /* jne: not equal / not zero */

loc_001D1B3D: ;
    PUSH32(esp, eax);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D1B48u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_001D1B48: ;
    PUSH32(esp, 0x207);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D1B57u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_001D1B57: ;
    PUSH32(esp, 0x528A58);
    MEM8(0x528A60) = 1;
    PUSH32(esp, 0x001D1B68u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1B68: ;
    ecx = eax;
    PUSH32(esp, 0x001D1B6Fu); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1B6F: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1B79u); RECOMP_ABI_CALL(0x001C32E0u, sub_001C32E0); /* call 0x001C32E0 */

loc_001D1B79: ;
    PUSH32(esp, 0x37EFA4);
    PUSH32(esp, 0x001D1B83u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1B83: ;
    ecx = eax;
    PUSH32(esp, 0x001D1B8Au); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1B8A: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1B94u); RECOMP_ABI_CALL(0x001C2FE0u, sub_001C2FE0); /* call 0x001C2FE0 */

loc_001D1B94: ;
    PUSH32(esp, 0x37EFA8);
    PUSH32(esp, 0x001D1B9Eu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1B9E: ;
    ecx = eax;
    PUSH32(esp, 0x001D1BA5u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1BA5: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1BAFu); RECOMP_ABI_CALL(0x001C3130u, sub_001C3130); /* call 0x001C3130 */

loc_001D1BAF: ;
    PUSH32(esp, 0x528A5C);
    PUSH32(esp, 0x001D1BB9u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1BB9: ;
    ecx = eax;
    PUSH32(esp, 0x001D1BC0u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1BC0: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1BCAu); RECOMP_ABI_CALL(0x001C2F10u, sub_001C2F10); /* call 0x001C2F10 */

loc_001D1BCA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001D1BD1u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1BD1: ;
    ecx = eax;
    PUSH32(esp, 0x001D1BD8u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1BD8: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1BE2u); RECOMP_ABI_CALL(0x001C32A0u, sub_001C32A0); /* call 0x001C32A0 */

loc_001D1BE2: ;
    PUSH32(esp, 0x207);
    PUSH32(esp, 0x001D1BECu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1BEC: ;
    ecx = eax;
    PUSH32(esp, 0x001D1BF3u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1BF3: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1BFDu); RECOMP_ABI_CALL(0x001C2F90u, sub_001C2F90); /* call 0x001C2F90 */

loc_001D1BFD: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x001D1C07u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1C07: ;
    ecx = eax;
    PUSH32(esp, 0x001D1C0Eu); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1C0E: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1C18u); RECOMP_ABI_CALL(0x001C30E0u, sub_001C30E0); /* call 0x001C30E0 */

loc_001D1C18: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1C1Fu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1C1F: ;
    ecx = eax;
    PUSH32(esp, 0x001D1C26u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1C26: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1C30u); RECOMP_ABI_CALL(0x001C2EC0u, sub_001C2EC0); /* call 0x001C2EC0 */

loc_001D1C30: ;
    goto loc_001D1C51;

loc_001D1C32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1C51; /* jne: not equal / not zero */

loc_001D1C37: ;
    PUSH32(esp, eax);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D1C42u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_001D1C42: ;
    PUSH32(esp, 0x203);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D1C51u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_001D1C51: ;
    ecx = 0x528A68;
    PUSH32(esp, 0x001D1C5Bu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001D1C5B: ;
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, 0x001D1C63u); RECOMP_ABI_CALL(0x001CC9E0u, sub_001CC9E0); /* call 0x001CC9E0 */

loc_001D1C63: ;
    SET_LO8(eax, MEM8(0x529068));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001D1C76; /* je: equal / zero */

loc_001D1C6D: ;
    RECOMP_UNIMPL("wbinvd", 0x001D1C6Du); /* TODO: wbinvd */
    MEM8(0x529068) = 0;

loc_001D1C76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D1C80
 * Original: 0x001D1C80 - 0x001D1D05 (133 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1C80: ;
    SET_LO8(eax, MEM8(0x528A60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1D04; /* je: equal / zero */

loc_001D1C89: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x528A58));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1C96u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1C96: ;
    ecx = eax;
    PUSH32(esp, 0x001D1C9Du); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1C9D: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1CA7u); RECOMP_ABI_CALL(0x001C32A0u, sub_001C32A0); /* call 0x001C32A0 */

loc_001D1CA7: ;
    ecx = MEM32(0x37EFA4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D1CB3u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1CB3: ;
    ecx = eax;
    PUSH32(esp, 0x001D1CBAu); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1CBA: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1CC4u); RECOMP_ABI_CALL(0x001C2F90u, sub_001C2F90); /* call 0x001C2F90 */

loc_001D1CC4: ;
    edx = MEM32(0x37EFA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D1CD0u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1CD0: ;
    ecx = eax;
    PUSH32(esp, 0x001D1CD7u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1CD7: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1CE1u); RECOMP_ABI_CALL(0x001C30E0u, sub_001C30E0); /* call 0x001C30E0 */

loc_001D1CE1: ;
    eax = MEM32(0x528A5C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1CECu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1CEC: ;
    ecx = eax;
    PUSH32(esp, 0x001D1CF3u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_001D1CF3: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D1CFDu); RECOMP_ABI_CALL(0x001C2EC0u, sub_001C2EC0); /* call 0x001C2EC0 */

loc_001D1CFD: ;
    MEM8(0x528A60) = 0;

loc_001D1D04: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D1D10
 * Original: 0x001D1D10 - 0x001D1DA8 (152 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1D10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x528A30);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1D21u); RECOMP_ABI_CALL(0x001D4C90u, sub_001D4C90); /* call 0x001D4C90 */

loc_001D1D21: ;
    ecx = MEM32(0x528A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D1D2Du); RECOMP_ABI_CALL(0x001D4CC0u, sub_001D4CC0); /* call 0x001D4CC0 */

loc_001D1D2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x528A68;
    PUSH32(esp, 0x001D1D3Au); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001D1D3A: ;
    esi = MEM32(esp + 0x20);
    ecx = MEM32(esi + 4);
    edi = MEM32(esi);
    PUSH32(esp, 0x001D1D48u); RECOMP_ABI_CALL(0x001CC9E0u, sub_001CC9E0); /* call 0x001CC9E0 */

loc_001D1D48: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, 1);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xFFFFFFA0u);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001D1D7Du); RECOMP_ABI_CALL(0x001D4CE0u, sub_001D4CE0); /* call 0x001D4CE0 */

loc_001D1D7D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1D86u); RECOMP_ABI_CALL(0x002DDEB0u, sub_002DDEB0); /* call 0x002DDEB0 */

loc_001D1D86: ;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D1D96u); RECOMP_ABI_CALL(0x001C06ECu, sub_001C06EC); /* call 0x001C06EC */

loc_001D1D96: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1DA1u); RECOMP_ABI_CALL(0x002DDED0u, sub_002DDED0); /* call 0x002DDED0 */

loc_001D1DA1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D1DB0
 * Original: 0x001D1DB0 - 0x001D211D (877 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1DB0(void)
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

loc_001D1DB0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1DBAu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D1DBA: ;
    edi = MEM32(esp + 0x38);
    esi = MEM32(edi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x001D1DC7u); RECOMP_ABI_CALL(0x002DEE70u, sub_002DEE70); /* call 0x002DEE70 */

loc_001D1DC7: ;
    eax = MEM32(0x37EFA0);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001D1DD4u); RECOMP_ABI_CALL(0x002DEE20u, sub_002DEE20); /* call 0x002DEE20 */

loc_001D1DD4: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D210E; /* jle: less or equal (signed <=) */

loc_001D1DE0: ;
    PUSH32(esp, ebx);
    ebx = eax;

loc_001D1DE3: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x37EE18); /* mulss */
    ecx = ZX16(MEM16(esi + 4));
    eax = (uint32_t)(int32_t)SMEM8(esi + 9);
    xmm3 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    edx = ZX16(MEM16(esi + 6));
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x37EE1C); /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xA);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A20); /* addss */
    eax = ZX8(MEM8(esi + 3));
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(esi + 2));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A24); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D2100; /* jnp: not parity */

loc_001D1EA6: ;
    xmm0 = XMM_SCALAR(MEMF(0x528A3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A44); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x528A38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A40); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 9);
    PUSH32(esp, 0x001D1EE3u); RECOMP_ABI_CALL(0x002DED80u, sub_002DED80); /* call 0x002DED80 */

loc_001D1EE3: ;
    ecx = MEM32(0x528A54);
    edx = MEM32(0x528A50);
    xmm0 = XMM_SCALAR(MEMF(0x528A4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x528A48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001D1F2Eu); RECOMP_ABI_CALL(0x002DEDC0u, sub_002DEDC0); /* call 0x002DEDC0 */

loc_001D1F2E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x528A3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x528A44); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A38); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A40); /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 9);
    PUSH32(esp, 0x001D1F7Bu); RECOMP_ABI_CALL(0x002DED80u, sub_002DED80); /* call 0x002DED80 */

loc_001D1F7B: ;
    eax = MEM32(0x528A54);
    ecx = MEM32(0x528A50);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x528A4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x3C); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001D1FD1u); RECOMP_ABI_CALL(0x002DEDC0u, sub_002DEDC0); /* call 0x002DEDC0 */

loc_001D1FD1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A3C); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A44); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A38); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A40); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 9);
    PUSH32(esp, 0x001D201Eu); RECOMP_ABI_CALL(0x002DED80u, sub_002DED80); /* call 0x002DED80 */

loc_001D201E: ;
    edx = MEM32(0x528A54);
    eax = MEM32(0x528A50);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A4C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001D2074u); RECOMP_ABI_CALL(0x002DEDC0u, sub_002DEDC0); /* call 0x002DEDC0 */

loc_001D2074: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A3C); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A44); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x528A38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A40); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 9);
    PUSH32(esp, 0x001D20B5u); RECOMP_ABI_CALL(0x002DED80u, sub_002DED80); /* call 0x002DED80 */

loc_001D20B5: ;
    ecx = MEM32(0x528A54);
    edx = MEM32(0x528A50);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A4C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x528A48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001D2100u); RECOMP_ABI_CALL(0x002DEDC0u, sub_002DEDC0); /* call 0x002DEDC0 */

loc_001D2100: ;
    esi = MEM32(edi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D1DE3; /* jne: not equal / not zero */

loc_001D210D: ;
    POP32(esp, ebx);

loc_001D210E: ;
    PUSH32(esp, 0x001D2113u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D2113: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002DEEB0(); return; /* tail jmp 0x002DEEB0 */

}

/**
 * sub_001D2120
 * Original: 0x001D2120 - 0x001D2472 (850 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2120(void)
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

loc_001D2120: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x001D2128u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D2128: ;
    eax = MEM32(esp + 0x20);
    ecx = ZX16(MEM16(eax + 4));
    xmm1 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    edx = ZX16(MEM16(eax + 6));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM8(eax + 9);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xA);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A20); /* addss */
    ecx = ZX8(MEM8(eax + 2));
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A24); /* addss */
    edx = ZX8(MEM8(eax + 3));
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x37EE18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x37EE1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    PUSH32(esp, 8);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001D21E6u); RECOMP_ABI_CALL(0x002DEE70u, sub_002DEE70); /* call 0x002DEE70 */

loc_001D21E6: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D2465; /* jnp: not parity */

loc_001D21FC: ;
    eax = MEM32(0x37EFA0);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001D2209u); RECOMP_ABI_CALL(0x002DEE20u, sub_002DEE20); /* call 0x002DEE20 */

loc_001D2209: ;
    xmm0 = XMM_SCALAR(MEMF(0x528A3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A44); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x528A38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A40); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 9);
    PUSH32(esp, 0x001D224Au); RECOMP_ABI_CALL(0x002DED80u, sub_002DED80); /* call 0x002DED80 */

loc_001D224A: ;
    ecx = MEM32(0x528A54);
    edx = MEM32(0x528A50);
    xmm0 = XMM_SCALAR(MEMF(0x528A4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x528A48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001D2295u); RECOMP_ABI_CALL(0x002DEDC0u, sub_002DEDC0); /* call 0x002DEDC0 */

loc_001D2295: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x528A3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x528A44); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A38); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A40); /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 9);
    PUSH32(esp, 0x001D22E1u); RECOMP_ABI_CALL(0x002DED80u, sub_002DED80); /* call 0x002DED80 */

loc_001D22E1: ;
    eax = MEM32(0x528A54);
    ecx = MEM32(0x528A50);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x528A4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001D2336u); RECOMP_ABI_CALL(0x002DEDC0u, sub_002DEDC0); /* call 0x002DEDC0 */

loc_001D2336: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A3C); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A44); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A38); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A40); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 9);
    PUSH32(esp, 0x001D2383u); RECOMP_ABI_CALL(0x002DED80u, sub_002DED80); /* call 0x002DED80 */

loc_001D2383: ;
    edx = MEM32(0x528A54);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    eax = MEM32(0x528A50);
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A4C); /* mulss */
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001D23D9u); RECOMP_ABI_CALL(0x002DEDC0u, sub_002DEDC0); /* call 0x002DEDC0 */

loc_001D23D9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x528A3C); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A44); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x528A38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A40); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 9);
    PUSH32(esp, 0x001D241Au); RECOMP_ABI_CALL(0x002DED80u, sub_002DED80); /* call 0x002DED80 */

loc_001D241A: ;
    ecx = MEM32(0x528A54);
    edx = MEM32(0x528A50);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x528A4C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x528A48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001D2465u); RECOMP_ABI_CALL(0x002DEDC0u, sub_002DEDC0); /* call 0x002DEDC0 */

loc_001D2465: ;
    PUSH32(esp, 0x001D246Au); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D246A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002DEEB0(); return; /* tail jmp 0x002DEEB0 */

}

/**
 * sub_001D2480
 * Original: 0x001D2480 - 0x001D264E (462 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2480: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x74);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D264B; /* je: equal / zero */

loc_001D2496: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x70);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D24B4; /* je: equal / zero */

loc_001D24A1: ;
    ecx = ebx;
    PUSH32(esp, 0x001D24A8u); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_001D24A8: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D24B1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D24ABu); } /* indirect call */
    }

loc_001D24B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D24B4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x4C);
    MEM32(esi + 0x70) = ebp;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D24C0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D24BAu); } /* indirect call */
    }

loc_001D24C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D24D1; /* je: equal / zero */

loc_001D24C7: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x001D24CFu); RECOMP_ABI_CALL(0x001CDD00u, sub_001CDD00); /* call 0x001CDD00 */

loc_001D24CF: ;
    goto loc_001D24D3;

loc_001D24D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D24D3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = edi;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_001D24FD; /* jne: not equal / not zero */

loc_001D24F6: ;
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    goto loc_001D251D;

loc_001D24FD: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(esi + 0x7C) = xmm2.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 6);
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_001D251D: ;
    PUSH32(esp, 5);
    ecx = 0x528A68;
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001D252Eu); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_001D252E: ;
    PUSH32(esp, 1);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D253Au); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_001D253A: ;
    PUSH32(esp, 0x204);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D2549u); RECOMP_ABI_CALL(0x001CF200u, sub_001CF200); /* call 0x001CF200 */

loc_001D2549: ;
    PUSH32(esp, ebp);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D2554u); RECOMP_ABI_CALL(0x001CF0B0u, sub_001CF0B0); /* call 0x001CF0B0 */

loc_001D2554: ;
    PUSH32(esp, 0x203);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D2563u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_001D2563: ;
    PUSH32(esp, 1);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D256Fu); RECOMP_ABI_CALL(0x001CF090u, sub_001CF090); /* call 0x001CF090 */

loc_001D256F: ;
    PUSH32(esp, 1);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D257Bu); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_001D257B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D2587u); RECOMP_ABI_CALL(0x001CF240u, sub_001CF240); /* call 0x001CF240 */

loc_001D2587: ;
    PUSH32(esp, 1);
    ecx = 0x528A68;
    PUSH32(esp, 0x001D2593u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_001D2593: ;
    _fa = (uint32_t)(MEM32(0x528A2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528A2C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D25C9; /* jne: not equal / not zero */

loc_001D259B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D25A4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D259Eu); } /* indirect call */
    }

loc_001D25A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D25C3; /* je: equal / zero */

loc_001D25AB: ;
    PUSH32(esp, 0x37EE48);
    PUSH32(esp, 0x37EE20);
    ecx = eax;
    PUSH32(esp, 0x001D25BCu); RECOMP_ABI_CALL(0x001D7E70u, sub_001D7E70); /* call 0x001D7E70 */

loc_001D25BC: ;
    MEM32(0x528A2C) = eax;
    goto loc_001D25C9;

loc_001D25C3: ;
    MEM32(0x528A2C) = ebp;

loc_001D25C9: ;
    _fa = (uint32_t)(MEM32(0x528A30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528A30), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D25FF; /* jne: not equal / not zero */

loc_001D25D1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D25DAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D25D4u); } /* indirect call */
    }

loc_001D25DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D25F9; /* je: equal / zero */

loc_001D25E1: ;
    PUSH32(esp, 0x37EE7C);
    PUSH32(esp, 0x37EE34);
    ecx = eax;
    PUSH32(esp, 0x001D25F2u); RECOMP_ABI_CALL(0x001D7E70u, sub_001D7E70); /* call 0x001D7E70 */

loc_001D25F2: ;
    MEM32(0x528A30) = eax;
    goto loc_001D25FF;

loc_001D25F9: ;
    MEM32(0x528A30) = ebp;

loc_001D25FF: ;
    _fa = (uint32_t)(MEM32(0x528A34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528A34), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D263E; /* jne: not equal / not zero */

loc_001D2607: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D2610u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D260Au); } /* indirect call */
    }

loc_001D2610: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2638; /* je: equal / zero */

loc_001D2617: ;
    PUSH32(esp, 0x37EEB0);
    ecx = eax;
    PUSH32(esp, 0x001D2623u); RECOMP_ABI_CALL(0x001D7EC0u, sub_001D7EC0); /* call 0x001D7EC0 */

loc_001D2623: ;
    POP32(esp, ebp);
    MEM32(0x528A34) = eax;
    eax = MEM32(0x528A28);
    POP32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x528A28) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D2638: ;
    MEM32(0x528A34) = ebp;

loc_001D263E: ;
    eax = MEM32(0x528A28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x528A28) = eax;
    POP32(esp, ebx);

loc_001D264B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2650
 * Original: 0x001D2650 - 0x001D26F2 (162 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D26CE; /* je: equal / zero */

loc_001D265D: ;
    MEM32(0x528A28) = MEM32(0x528A28) - 1;
    _fa = (uint32_t)(MEM32(0x528A28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D26CE; /* jne: not equal / not zero */

loc_001D2665: ;
    ecx = MEM32(0x528A2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D2682; /* je: equal / zero */

loc_001D2671: ;
    PUSH32(esp, 0x001D2676u); RECOMP_ABI_CALL(0x001D7E90u, sub_001D7E90); /* call 0x001D7E90 */

loc_001D2676: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D267Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D2679u); } /* indirect call */
    }

loc_001D267F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D2682: ;
    ecx = MEM32(0x528A30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x528A2C) = ebx;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D26A5; /* je: equal / zero */

loc_001D2694: ;
    PUSH32(esp, 0x001D2699u); RECOMP_ABI_CALL(0x001D7E90u, sub_001D7E90); /* call 0x001D7E90 */

loc_001D2699: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D26A2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D269Cu); } /* indirect call */
    }

loc_001D26A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D26A5: ;
    ecx = MEM32(0x528A34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x528A30) = ebx;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D26C8; /* je: equal / zero */

loc_001D26B7: ;
    PUSH32(esp, 0x001D26BCu); RECOMP_ABI_CALL(0x001D7EE0u, sub_001D7EE0); /* call 0x001D7EE0 */

loc_001D26BC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D26C5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D26BFu); } /* indirect call */
    }

loc_001D26C5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D26C8: ;
    MEM32(0x528A34) = ebx;

loc_001D26CE: ;
    esi = MEM32(edi + 0x70);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D26E8; /* je: equal / zero */

loc_001D26D5: ;
    ecx = esi;
    PUSH32(esp, 0x001D26DCu); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_001D26DC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D26E5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D26DFu); } /* indirect call */
    }

loc_001D26E5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D26E8: ;
    MEM32(edi + 0x70) = ebx;
    MEM32(edi + 0x74) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2700
 * Original: 0x001D2700 - 0x001D2788 (136 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(edi + 0x24);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(edi + 0x30);
    MEM32(esi + 0x30) = edx;
    edx = MEM32(edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D2745: ;
    eax = MEM32(edx + ecx * 4);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2745; /* jne: not equal / not zero */

loc_001D2753: ;
    ebx = ecx * 4 + 4;
    ebp = ebx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x337FB0);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D2769u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2763u); } /* indirect call */
    }

loc_001D2769: ;
    MEM32(esi) = eax;
    MEM32(eax) = ebp;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    esi = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D2780u); RECOMP_ABI_CALL(0x001C06ECu, sub_001C06EC); /* call 0x001C06EC */

loc_001D2780: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2790
 * Original: 0x001D2790 - 0x001D27AA (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2790: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D279Eu); RECOMP_ABI_CALL(0x002DE7D0u, sub_002DE7D0); /* call 0x002DE7D0 */

loc_001D279E: ;
    MEM8(0x529068) = 1;
    g_seh_ebp = ebp; sub_002D9450(); return; /* tail jmp 0x002D9450 */

}

/**
 * sub_001D27B0
 * Original: 0x001D27B0 - 0x001D27ED (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D27B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D27B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D27C0: ;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x528CE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 4 + 0x528CE8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D27DE; /* jne: not equal / not zero */

loc_001D27C9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esi * 4 + 0x528CE8) = 0;
    PUSH32(esp, 0x001D27DEu); RECOMP_ABI_CALL(0x002DCFB0u, sub_002DCFB0); /* call 0x002DCFB0 */

loc_001D27DE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D27C0; /* jl: less (signed <) */

loc_001D27E4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D27EAu); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001D27EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D27F0
 * Original: 0x001D27F0 - 0x001D2832 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D27F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D27F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2802u); RECOMP_ABI_CALL(0x002DEF00u, sub_002DEF00); /* call 0x002DEF00 */

loc_001D2802: ;
    ecx = MEM32(ebx + 0xC);
    esi = MEM32(ebx + 4);
    edx = ecx;
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
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
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
    PUSH32(esp, ebx);
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0x001D2823u); RECOMP_ABI_CALL(0x002DE7D0u, sub_002DE7D0); /* call 0x002DE7D0 */

loc_001D2823: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x529068) = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002D9450(); return; /* tail jmp 0x002D9450 */

}

/**
 * sub_001D2840
 * Original: 0x001D2840 - 0x001D2856 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2840(void)
{

loc_001D2840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D284Bu); RECOMP_ABI_CALL(0x002DE800u, sub_002DE800); /* call 0x002DE800 */

loc_001D284B: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2854u); RECOMP_ABI_CALL(0x002DEF40u, sub_002DEF40); /* call 0x002DEF40 */

loc_001D2854: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2860
 * Original: 0x001D2860 - 0x001D28C0 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2860: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 0x24) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    ecx = MEM32(0x528698);
    MEM32(eax + 0x1C) = ecx;
    MEM32(0x528698) = eax;
    esp += 44; return; /* ret 40 */

}

/**
 * sub_001D28C0
 * Original: 0x001D28C0 - 0x001D291F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D28C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D28C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D28C8u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D28C8: ;
    PUSH32(esp, 0x001D28CDu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D28CD: ;
    eax = MEM32(esp + 8);
    MEM32(0x528ABC) = esi;
    esi = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x528AC4) = esi;
    MEM32(0x528AC0) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2916; /* je: equal / zero */

loc_001D28ED: ;
    /* nop */

loc_001D28F0: ;
    esi = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x37F160); PUSH32(esp, 0x001D2902u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D28FBu); } /* indirect call */
    }

loc_001D2902: ;
    ecx = MEM32(0x528AC4);
    eax = ecx + esi * 4;
    MEM32(0x528AC4) = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D28F0; /* jne: not equal / not zero */

loc_001D2916: ;
    PUSH32(esp, 0x001D291Bu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001D291B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2920
 * Original: 0x001D2920 - 0x001D2923 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2920(void)
{

loc_001D2920: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2930
 * Original: 0x001D2930 - 0x001D2935 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2930(void)
{

loc_001D2930: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D2940
 * Original: 0x001D2940 - 0x001D2943 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2940(void)
{

loc_001D2940: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2950
 * Original: 0x001D2950 - 0x001D2A05 (181 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001D2963; /* jne: not equal / not zero */

loc_001D295E: ;
    ebx = 1;

loc_001D2963: ;
    eax = MEM32(esi + 4);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x337FF0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D2975u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D296Fu); } /* indirect call */
    }

loc_001D2975: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 4);
    ecx = eax * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x338000);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D298Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2988u); } /* indirect call */
    }

loc_001D298E: ;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D2A01; /* jle: less or equal (signed <=) */

loc_001D299D: ;
    /* nop */

loc_001D29A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D29AAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D29A4u); } /* indirect call */
    }

loc_001D29AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D29C5; /* je: equal / zero */

loc_001D29B1: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(edx + edi * 4);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001D29C3u); RECOMP_ABI_CALL(0x001D7E70u, sub_001D7E70); /* call 0x001D7E70 */

loc_001D29C3: ;
    goto loc_001D29C7;

loc_001D29C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D29C7: ;
    ecx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(ecx + edi * 4) = eax;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001D29D7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D29D1u); } /* indirect call */
    }

loc_001D29D7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D29F1; /* je: equal / zero */

loc_001D29DE: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx + edi * 4);
    edx = ecx + ebx * 4;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001D29EFu); RECOMP_ABI_CALL(0x001D7EC0u, sub_001D7EC0); /* call 0x001D7EC0 */

loc_001D29EF: ;
    goto loc_001D29F3;

loc_001D29F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D29F3: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + edi * 4) = eax;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D29A0; /* jl: less (signed <) */

loc_001D2A01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2A10
 * Original: 0x001D2A10 - 0x001D2A1C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A10(void)
{

loc_001D2A10: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2A20
 * Original: 0x001D2A20 - 0x001D2A24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A20(void)
{

loc_001D2A20: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2A30
 * Original: 0x001D2A30 - 0x001D2A3C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A30(void)
{

loc_001D2A30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x18) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2A40
 * Original: 0x001D2A40 - 0x001D2A44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A40(void)
{

loc_001D2A40: ;
    eax = ecx + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2A50
 * Original: 0x001D2A50 - 0x001D2A9D (77 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2A8D; /* je: equal / zero */

loc_001D2A5D: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2A8D; /* jne: not equal / not zero */

loc_001D2A64: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2A77; /* je: equal / zero */

loc_001D2A6B: ;
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(edi + 0x18) = ecx;

loc_001D2A74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D2A77: ;
    ecx = esi;
    PUSH32(esp, 0x001D2A7Eu); RECOMP_ABI_CALL(0x001D2950u, sub_001D2950); /* call 0x001D2950 */

loc_001D2A7E: ;
    edx = MEM32(esi + 0x10);
    MEM32(edi + 0x10) = edx;
    eax = MEM32(esi + 0x18);
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D2A8D: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2A74; /* jne: not equal / not zero */

loc_001D2A94: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001D2950(); return; /* tail jmp 0x001D2950 */

}

/**
 * sub_001D2AA0
 * Original: 0x001D2AA0 - 0x001D2AFE (94 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2AA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2AFC; /* je: equal / zero */

loc_001D2AAC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001D2AB2: ;
    eax = MEM32(esi);
    edi = eax;
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB0000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2AEF; /* jne: not equal / not zero */

loc_001D2AC8: ;
    ebx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2AEF; /* je: equal / zero */

loc_001D2ACF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2AE6; /* je: equal / zero */

loc_001D2AD3: ;
    ecx = ebx;
    PUSH32(esp, 0x001D2ADAu); RECOMP_ABI_CALL(0x001D7C90u, sub_001D7C90); /* call 0x001D7C90 */

loc_001D2ADA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D2AE3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D2ADDu); } /* indirect call */
    }

loc_001D2AE3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D2AE6: ;
    MEM32(esi + 0x10) = ebp;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = ebp;

loc_001D2AEF: ;
    eax = MEM32(esi + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = esi + edi * 4;
    if (CMP_NE(_fa, _fb)) goto loc_001D2AB2; /* jne: not equal / not zero */

loc_001D2AF9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001D2AFC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2B00
 * Original: 0x001D2B00 - 0x001D2B42 (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2B00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x28) = 1;
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2B2E; /* je: equal / zero */

loc_001D2B1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D2B25u); RECOMP_ABI_CALL(0x001D2700u, sub_001D2700); /* call 0x001D2700 */

loc_001D2B25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D2B2E: ;
    eax = MEM32(0x52869C);
    MEM32(esi + 0x1C) = eax;
    MEM32(0x52869C) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2B50
 * Original: 0x001D2B50 - 0x001D2B8F (63 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2B78; /* je: equal / zero */

loc_001D2B5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D2B60u); RECOMP_ABI_CALL(0x001D2AA0u, sub_001D2AA0); /* call 0x001D2AA0 */

loc_001D2B60: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D2B73u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D2B6Du); } /* indirect call */
    }

loc_001D2B73: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D2B78: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D2B81u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001D2B81: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D2B8Au); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001D2B8A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2B90
 * Original: 0x001D2B90 - 0x001D2C19 (137 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D2BE3; /* jle: less or equal (signed <=) */

loc_001D2B9D: ;
    PUSH32(esp, edi);
    edi = edi;

loc_001D2BA0: ;
    eax = MEM32(esi + 0x10);
    edi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2BBD; /* je: equal / zero */

loc_001D2BAA: ;
    ecx = edi;
    PUSH32(esp, 0x001D2BB1u); RECOMP_ABI_CALL(0x001D7E90u, sub_001D7E90); /* call 0x001D7E90 */

loc_001D2BB1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D2BBAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D2BB4u); } /* indirect call */
    }

loc_001D2BBA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D2BBD: ;
    ecx = MEM32(esi + 0x18);
    edi = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2BDA; /* je: equal / zero */

loc_001D2BC7: ;
    ecx = edi;
    PUSH32(esp, 0x001D2BCEu); RECOMP_ABI_CALL(0x001D7EE0u, sub_001D7EE0); /* call 0x001D7EE0 */

loc_001D2BCE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D2BD7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D2BD1u); } /* indirect call */
    }

loc_001D2BD7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D2BDA: ;
    eax = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2BA0; /* jl: less (signed <) */

loc_001D2BE2: ;
    POP32(esp, edi);

loc_001D2BE3: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 0x10);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D2BF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2BEEu); } /* indirect call */
    }

loc_001D2BF4: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x18);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D2C05u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D2BFFu); } /* indirect call */
    }

loc_001D2C05: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2C20
 * Original: 0x001D2C20 - 0x001D2C38 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2C20: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2C37; /* jne: not equal / not zero */

loc_001D2C2B: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2C37; /* je: equal / zero */

loc_001D2C32: ;
    g_seh_ebp = ebp; sub_001D2B90(); return; /* tail jmp 0x001D2B90 */

loc_001D2C37: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2C40
 * Original: 0x001D2C40 - 0x001D2C5C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C40(void)
{

loc_001D2C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D2C4Eu); RECOMP_ABI_CALL(0x001C1290u, sub_001C1290); /* call 0x001C1290 */

loc_001D2C4E: ;
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    PUSH32(esp, 0x001D2C57u); RECOMP_ABI_CALL(0x001C1290u, sub_001C1290); /* call 0x001C1290 */

loc_001D2C57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2C60
 * Original: 0x001D2C60 - 0x001D2C86 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C60(void)
{

loc_001D2C60: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D2C73u); RECOMP_ABI_CALL(0x001C1230u, sub_001C1230); /* call 0x001C1230 */

loc_001D2C73: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    PUSH32(esp, 0x001D2C81u); RECOMP_ABI_CALL(0x001C1230u, sub_001C1230); /* call 0x001C1230 */

loc_001D2C81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D2C90
 * Original: 0x001D2C90 - 0x001D2CAC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D2C90: ;
    edx = MEM32(esp + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D2C9Fu); RECOMP_ABI_CALL(0x001C13E0u, sub_001C13E0); /* call 0x001C13E0 */

loc_001D2C9F: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2CB0
 * Original: 0x001D2CB0 - 0x001D2CCF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D2CB0: ;
    edx = MEM32(esp + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x14)) >> 32) & 1);
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D2CC2u); RECOMP_ABI_CALL(0x001C13E0u, sub_001C13E0); /* call 0x001C13E0 */

loc_001D2CC2: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2CD0
 * Original: 0x001D2CD0 - 0x001D2CF3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2CD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D2CD9u); RECOMP_ABI_CALL(0x001C1640u, sub_001C1640); /* call 0x001C1640 */

loc_001D2CD9: ;
    edi = esi + 0x14;
    ecx = edi;
    PUSH32(esp, 0x001D2CE3u); RECOMP_ABI_CALL(0x001C1640u, sub_001C1640); /* call 0x001C1640 */

loc_001D2CE3: ;
    ecx = edi;
    PUSH32(esp, 0x001D2CEAu); RECOMP_ABI_CALL(0x001C1640u, sub_001C1640); /* call 0x001C1640 */

loc_001D2CEA: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001C1640(); return; /* tail jmp 0x001C1640 */

}

/**
 * sub_001D2D00
 * Original: 0x001D2D00 - 0x001D2D1C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D00(void)
{

loc_001D2D00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D2D0Eu); RECOMP_ABI_CALL(0x001C1290u, sub_001C1290); /* call 0x001C1290 */

loc_001D2D0E: ;
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    PUSH32(esp, 0x001D2D17u); RECOMP_ABI_CALL(0x001C1290u, sub_001C1290); /* call 0x001C1290 */

loc_001D2D17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2D20
 * Original: 0x001D2D20 - 0x001D2D46 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D20(void)
{

loc_001D2D20: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D2D33u); RECOMP_ABI_CALL(0x001C1230u, sub_001C1230); /* call 0x001C1230 */

loc_001D2D33: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    PUSH32(esp, 0x001D2D41u); RECOMP_ABI_CALL(0x001C1230u, sub_001C1230); /* call 0x001C1230 */

loc_001D2D41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D2D50
 * Original: 0x001D2D50 - 0x001D2D6C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D2D50: ;
    edx = MEM32(esp + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D2D5Fu); RECOMP_ABI_CALL(0x001C13E0u, sub_001C13E0); /* call 0x001C13E0 */

loc_001D2D5F: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2D70
 * Original: 0x001D2D70 - 0x001D2D8F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D2D70: ;
    edx = MEM32(esp + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x14)) >> 32) & 1);
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D2D82u); RECOMP_ABI_CALL(0x001C13E0u, sub_001C13E0); /* call 0x001C13E0 */

loc_001D2D82: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2D90
 * Original: 0x001D2D90 - 0x001D2DA1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2D90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D2D98u); RECOMP_ABI_CALL(0x001C14E0u, sub_001C14E0); /* call 0x001C14E0 */

loc_001D2D98: ;
    ecx = esi + 0x14;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001C14E0(); return; /* tail jmp 0x001C14E0 */

}

/**
 * sub_001D2DB0
 * Original: 0x001D2DB0 - 0x001D2DC1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D2DB8u); RECOMP_ABI_CALL(0x001C1610u, sub_001C1610); /* call 0x001C1610 */

loc_001D2DB8: ;
    ecx = esi + 0x14;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001C1610(); return; /* tail jmp 0x001C1610 */

}

/**
 * sub_001D2DD0
 * Original: 0x001D2DD0 - 0x001D2DE1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D2DD8u); RECOMP_ABI_CALL(0x001C14E0u, sub_001C14E0); /* call 0x001C14E0 */

loc_001D2DD8: ;
    ecx = esi + 0x14;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001C14E0(); return; /* tail jmp 0x001C14E0 */

}

/**
 * sub_001D2DF0
 * Original: 0x001D2DF0 - 0x001D2E01 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D2DF8u); RECOMP_ABI_CALL(0x001C1610u, sub_001C1610); /* call 0x001C1610 */

loc_001D2DF8: ;
    ecx = esi + 0x14;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001C1610(); return; /* tail jmp 0x001C1610 */

}

/**
 * sub_001D2E10
 * Original: 0x001D2E10 - 0x001D2E33 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2E10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D2E19u); RECOMP_ABI_CALL(0x001C1640u, sub_001C1640); /* call 0x001C1640 */

loc_001D2E19: ;
    edi = esi + 0x14;
    ecx = edi;
    PUSH32(esp, 0x001D2E23u); RECOMP_ABI_CALL(0x001C1640u, sub_001C1640); /* call 0x001C1640 */

loc_001D2E23: ;
    ecx = edi;
    PUSH32(esp, 0x001D2E2Au); RECOMP_ABI_CALL(0x001C1640u, sub_001C1640); /* call 0x001C1640 */

loc_001D2E2A: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001C1640(); return; /* tail jmp 0x001C1640 */

}

/**
 * sub_001D2E40
 * Original: 0x001D2E40 - 0x001D2FDB (411 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E40(void)
{

loc_001D2E40: ;
    eax = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(eax + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm0.f[0]; /* movss */
    esp += 124; return; /* ret 120 */

}

/**
 * sub_001D2FE0
 * Original: 0x001D2FE0 - 0x001D30C3 (227 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2FE0(void)
{

loc_001D2FE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x58) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x68) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x78) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x74) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x70) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x88) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x84) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x80) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x98) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x94) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001D30D0
 * Original: 0x001D30D0 - 0x001D31EB (283 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D30D0(void)
{

loc_001D30D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x10) = edx;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xC); /* subss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 0x30);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 0x3C);
    MEM32(ecx + 0x60) = edx;
    edx = MEM32(eax + 0x48);
    MEM32(ecx + 0x70) = edx;
    edx = MEM32(eax + 0x54);
    MEM32(ecx + 0x80) = edx;
    edx = MEM32(eax + 0x60);
    MEM32(ecx + 0x90) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x14) = edx;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x44) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(ecx + 0x54) = edx;
    edx = MEM32(eax + 0x40);
    MEM32(ecx + 0x64) = edx;
    edx = MEM32(eax + 0x4C);
    MEM32(ecx + 0x74) = edx;
    edx = MEM32(eax + 0x58);
    MEM32(ecx + 0x84) = edx;
    edx = MEM32(eax + 0x64);
    MEM32(ecx + 0x94) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x18) = edx;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x14); /* subss */
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(eax + 0x2C);
    MEM32(ecx + 0x48) = edx;
    edx = MEM32(eax + 0x38);
    MEM32(ecx + 0x58) = edx;
    edx = MEM32(eax + 0x44);
    MEM32(ecx + 0x68) = edx;
    edx = MEM32(eax + 0x50);
    MEM32(ecx + 0x78) = edx;
    edx = MEM32(eax + 0x5C);
    MEM32(ecx + 0x88) = edx;
    eax = MEM32(eax + 0x68);
    MEM32(ecx + 0x98) = eax;
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x9C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D31F0
 * Original: 0x001D31F0 - 0x001D344B (603 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D31F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D31F0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x338158)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x338154)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm3 = xmm7; /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm7.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x300474); /* mulss */
    xmm7.f[0] = xmm7.f[0] - MEMF(0x2FE99C); /* subss */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x338150); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33814C); /* mulss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm3.f[0]; /* movss */
    MEMF(esp) = xmm4.f[0]; /* movss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    eax = ecx + 0x20;
    goto loc_001D32E5;

loc_001D32C2: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_001D32E5: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + edx * 4 + 0x40); /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + edx * 4 + 0x40); /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = xmm7; /* movaps */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + edx * 4 + 0x40); /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * MEMF(esp + edx * 4 + 0x40); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + edx * 4 + 0x40); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + edx * 4 + 0x40); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + edx * 4 + 0x40); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + edx * 4 + 0x40); /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + edx * 4 + 0x40); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x338148); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x338144); /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x338140); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x33813C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x10); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + -32); /* addss */
    xmm6 = XMM_SCALAR(MEMF(0x338138)); /* movss */
    MEMF(eax + -32) = xmm0.f[0]; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm7.f[0]; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] + MEMF(eax + -16); /* addss */
    MEMF(eax + -16) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x338134)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x338130)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax + 0x20); /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 0x50); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x60); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 0x70); /* addss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm3.f[0]; /* movss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D32C2; /* jl: less (signed <) */

loc_001D3445: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001D3450
 * Original: 0x001D3450 - 0x001D3606 (438 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3450(void)
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

loc_001D3450: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x10); /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm3 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3517; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001D350F: ;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    goto loc_001D3529;

loc_001D3517: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF504); /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_001D3529: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 4);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x58);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x60);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x001D3562u); RECOMP_ABI_CALL(0x001D31F0u, sub_001D31F0); /* call 0x001D31F0 */

loc_001D3562: ;
    xmm0 = XMM_SCALAR(MEMF(0x33815C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x58);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x60);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x001D35FFu); RECOMP_ABI_CALL(0x001D31F0u, sub_001D31F0); /* call 0x001D31F0 */

loc_001D35FF: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 52; return; /* ret 48 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D3610
 * Original: 0x001D3610 - 0x001D3781 (369 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3610(void)
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

loc_001D3610: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    xmm2 = xmm3; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x18); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEMF(esp) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    PUSH32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) / fp_top()); /* fdivr dword ptr [0x2fe99c] */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x50);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x001D36DDu); RECOMP_ABI_CALL(0x001D31F0u, sub_001D31F0); /* call 0x001D31F0 */

loc_001D36DD: ;
    xmm0 = XMM_SCALAR(MEMF(0x33815C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    eax = MEM32(esp + 0x44);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x50);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x001D377Au); RECOMP_ABI_CALL(0x001D31F0u, sub_001D31F0); /* call 0x001D31F0 */

loc_001D377A: ;
    POP32(esp, esi);
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
 * sub_001D3790
 * Original: 0x001D3790 - 0x001D386D (221 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3790: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x001D37C9u); RECOMP_ABI_CALL(0x001D31F0u, sub_001D31F0); /* call 0x001D31F0 */

loc_001D37C9: ;
    xmm0 = XMM_SCALAR(MEMF(0x33815C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x001D386Au); RECOMP_ABI_CALL(0x001D31F0u, sub_001D31F0); /* call 0x001D31F0 */

loc_001D386A: ;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001D3870
 * Original: 0x001D3870 - 0x001D3D27 (1207 bytes, 242 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3870: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    eax = ecx + 0x20;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 4;
    goto loc_001D38A0;

    /* nop */
    edi = edi;

loc_001D38A0: ;
    xmm7 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + -16)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 4) = xmm6.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    MEMF(esp) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x70)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x54) = xmm7.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax + -16) = xmm6.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x70); /* mulss */
    MEMF(esp + 0x40) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x6C); /* mulss */
    MEMF(esp + 0x3C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x74); /* mulss */
    MEMF(esp + 0x38) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x40); /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x6C); /* mulss */
    MEMF(esp + 0x4C) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x38); /* addss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x84); /* mulss */
    MEMF(eax) = xmm6.f[0]; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x80); /* mulss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x7C); /* mulss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x84); /* mulss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(esp + 0x48) = xmm5.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x20); /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x7C); /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x18); /* addss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x84); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm6.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x84); /* mulss */
    MEMF(esp + 0x44) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x20) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x70); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(eax + 0x30) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x70); /* mulss */
    MEMF(eax + 0x50) = xmm5.f[0]; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x84); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x6C); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    MEMF(eax + 0x60) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x80); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x7C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D38A0; /* jne: not equal / not zero */

loc_001D3D21: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 68; return; /* ret 64 */

}

/**
 * sub_001D3D30
 * Original: 0x001D3D30 - 0x001D3E15 (229 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3D30(void)
{

loc_001D3D30: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001D3E20
 * Original: 0x001D3E20 - 0x001D4316 (1270 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3E20(void)
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

loc_001D3E20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x14);
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_001D3E44; /* jge: greater or equal (signed >=) */

loc_001D3E3E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D3E44: ;
    eax = MEM32(esp + 0x10);
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    esi = edx;
    esi = esi >> 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEM32(esp + 0x18) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3E79; /* jge: greater or equal (signed >=) */

loc_001D3E73: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D3E79: ;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    esi = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x18) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3EAA; /* jge: greater or equal (signed >=) */

loc_001D3EA4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D3EAA: ;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3ED6; /* jge: greater or equal (signed >=) */

loc_001D3ED0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D3ED6: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    xmm1 = XMM_SCALAR(MEMF(0x305FE4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x10)); /* fadd dword ptr [ecx + 0x10] */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x14)); /* fadd dword ptr [ecx + 0x14] */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x18)); /* fadd dword ptr [ecx + 0x18] */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x1C)); /* fadd dword ptr [ecx + 0x1c] */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 0x20); /* addss */
    MEMF(ecx + 0x20) = xmm3.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 0x24); /* addss */
    MEMF(ecx + 0x24) = xmm4.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x28)); /* fadd dword ptr [ecx + 0x28] */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x2C)); /* fadd dword ptr [ecx + 0x2c] */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 0x30); /* addss */
    MEMF(ecx + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ecx + 0x34); /* addss */
    MEMF(ecx + 0x34) = xmm4.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(ecx + 0x38); /* addss */
    MEMF(ecx + 0x38) = xmm5.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x3C); /* addss */
    MEMF(ecx + 0x3C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x40); /* addss */
    MEMF(ecx + 0x40) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x44); /* addss */
    MEMF(ecx + 0x44) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x48); /* addss */
    MEMF(ecx + 0x48) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x4C); /* addss */
    MEMF(ecx + 0x4C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x50); /* addss */
    MEMF(ecx + 0x50) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x54); /* addss */
    MEMF(ecx + 0x54) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x58); /* addss */
    MEMF(ecx + 0x58) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x5C); /* addss */
    MEMF(ecx + 0x5C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x60); /* addss */
    MEMF(ecx + 0x60) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x64); /* addss */
    MEMF(ecx + 0x64) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x68); /* addss */
    MEMF(ecx + 0x68) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x6C); /* addss */
    MEMF(ecx + 0x6C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x70)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x70); /* addss */
    MEMF(ecx + 0x70) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x74); /* addss */
    MEMF(ecx + 0x74) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x78)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x78); /* addss */
    MEMF(ecx + 0x78) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x7C); /* addss */
    MEMF(ecx + 0x7C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x80); /* addss */
    MEMF(ecx + 0x80) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x84)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x84); /* addss */
    MEMF(ecx + 0x84) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x88)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x88); /* addss */
    MEMF(ecx + 0x88) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x8C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x8C); /* addss */
    MEMF(ecx + 0x8C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ecx + 0x90); /* addss */
    MEMF(ecx + 0x90) = xmm6.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0x94); /* addss */
    MEMF(ecx + 0x94) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0x98); /* addss */
    MEMF(ecx + 0x98) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0x9C); /* addss */
    MEMF(ecx + 0x9C) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
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
 * sub_001D4320
 * Original: 0x001D4320 - 0x001D4670 (848 bytes, 194 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4320(void)
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

loc_001D4320: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D4344; /* jge: greater or equal (signed >=) */

loc_001D433E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D4344: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    edx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEM32(esp + 0x10) = edx;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D436F; /* jge: greater or equal (signed >=) */

loc_001D4369: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D436F: ;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    edx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D4399; /* jge: greater or equal (signed >=) */

loc_001D4393: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D4399: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEM32(esp) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D43BC; /* jge: greater or equal (signed >=) */

loc_001D43B6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D43BC: ;
    MEMF(esp) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(0x305FE4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x20); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = xmm2; /* movaps */
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 0x24); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 0x30); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x30) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = xmm2; /* movaps */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 0x34); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + 0x38); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x38) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x3C); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 0x3C) = xmm5.f[0]; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x40); /* mulss */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    fp_push(MEMF(esp)); /* fld float */
    MEMF(ecx + 0x40) = xmm5.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1C)); /* fmul dword ptr [ecx + 0x1c] */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x44); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 0x44) = xmm5.f[0]; /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x48); /* mulss */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEMF(ecx + 0x48) = xmm5.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x28)); /* fmul dword ptr [ecx + 0x28] */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x4C); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 0x4C) = xmm5.f[0]; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x50); /* mulss */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    fp_push(MEMF(esp)); /* fld float */
    MEMF(ecx + 0x50) = xmm5.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x54); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 0x54) = xmm5.f[0]; /* movss */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x58); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x58) = xmm5.f[0]; /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x5C); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x5C) = xmm5.f[0]; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x60); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x60) = xmm5.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x64); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x64) = xmm5.f[0]; /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x68); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x68) = xmm5.f[0]; /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x6C); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6C) = xmm5.f[0]; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x70); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x70) = xmm5.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x74); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x74) = xmm5.f[0]; /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x78); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x78) = xmm5.f[0]; /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x7C); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x7C) = xmm5.f[0]; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x80); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x90); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x80) = xmm5.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x84); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x94); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x84) = xmm5.f[0]; /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x88); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 0x98); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x88) = xmm5.f[0]; /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x8C); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + 0x9C); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x8C) = xmm5.f[0]; /* movss */
    MEMF(ecx + 0x90) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x94) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x98) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x9C) = xmm4.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_001D4670
 * Original: 0x001D4670 - 0x001D4A66 (1014 bytes, 235 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4670(void)
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

loc_001D4670: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D4694; /* jge: greater or equal (signed >=) */

loc_001D468E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D4694: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    edx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEM32(esp + 0x14) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D46C3; /* jge: greater or equal (signed >=) */

loc_001D46BD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D46C3: ;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    edx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D46F1; /* jge: greater or equal (signed >=) */

loc_001D46EB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D46F1: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEM32(esp) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D4718; /* jge: greater or equal (signed >=) */

loc_001D4712: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_001D4718: ;
    MEMF(esp) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    xmm1 = XMM_SCALAR(MEMF(0x305FE4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3 = xmm2; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4 = xmm3; /* movaps */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + 0x24); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x24) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + 0x30); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + 0x34); /* mulss */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    MEMF(ecx + 0x34) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5 = xmm4; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x38); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 0x38) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm6 = xmm5; /* movaps */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x3C); /* mulss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x3C) = xmm6.f[0]; /* movss */
    xmm6 = xmm2; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x40); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 0x40) = xmm6.f[0]; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x44); /* mulss */
    fp_push(MEMF(esp)); /* fld float */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1C)); /* fmul dword ptr [ecx + 0x1c] */
    MEMF(ecx + 0x44) = xmm6.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x28)); /* fmul dword ptr [ecx + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x305FE4)); /* fmul dword ptr [0x305fe4] */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x48); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x48) = xmm6.f[0]; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x4C); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x4C) = xmm6.f[0]; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x50); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x50) = xmm6.f[0]; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x54); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x54) = xmm6.f[0]; /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x58); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x58) = xmm6.f[0]; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x5C); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x5C) = xmm6.f[0]; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x60); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x60) = xmm6.f[0]; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x64); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x64) = xmm6.f[0]; /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x68); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x68) = xmm6.f[0]; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x6C); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x6C) = xmm6.f[0]; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x70); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x70) = xmm6.f[0]; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x74); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x74) = xmm6.f[0]; /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x78); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x78) = xmm6.f[0]; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x7C); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x7C) = xmm6.f[0]; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x80); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x80) = xmm6.f[0]; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x84); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x84) = xmm6.f[0]; /* movss */
    xmm6 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x90); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 0x94); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + 0x98); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x88); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x88) = xmm6.f[0]; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx + 0x9C); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx + 0x8C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x8C) = xmm6.f[0]; /* movss */
    MEMF(ecx + 0x90) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x94) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x98) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0x9C) = xmm5.f[0]; /* movss */
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
 * sub_001D4A70
 * Original: 0x001D4A70 - 0x001D4AAC (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4A70(void)
{

loc_001D4A70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    ebx = esi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001D4A84u); RECOMP_ABI_CALL(0x001C1DB0u, sub_001C1DB0); /* call 0x001C1DB0 */

loc_001D4A84: ;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x338274;
    PUSH32(esp, 0x001D4A92u); RECOMP_ABI_CALL(0x001D13F0u, sub_001D13F0); /* call 0x001D13F0 */

loc_001D4A92: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D4A9Au); RECOMP_ABI_CALL(0x001D14A0u, sub_001D14A0); /* call 0x001D14A0 */

loc_001D4A9A: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x100) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D4AB0
 * Original: 0x001D4AB0 - 0x001D4AD1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x1C;
    MEM32(esi) = 0x338274;
    PUSH32(esp, 0x001D4AC1u); RECOMP_ABI_CALL(0x001D1420u, sub_001D1420); /* call 0x001D1420 */

loc_001D4AC1: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x001D4AC9u); RECOMP_ABI_CALL(0x001D1410u, sub_001D1410); /* call 0x001D1410 */

loc_001D4AC9: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001C1DD0(); return; /* tail jmp 0x001C1DD0 */

}

/**
 * sub_001D4AE0
 * Original: 0x001D4AE0 - 0x001D4AE5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4AE0(void)
{

loc_001D4AE0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D4AF0
 * Original: 0x001D4AF0 - 0x001D4B2C (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x1C;
    MEM32(esi) = 0x338274;
    PUSH32(esp, 0x001D4B01u); RECOMP_ABI_CALL(0x001D1420u, sub_001D1420); /* call 0x001D1420 */

loc_001D4B01: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x001D4B09u); RECOMP_ABI_CALL(0x001D1410u, sub_001D1410); /* call 0x001D1410 */

loc_001D4B09: ;
    ecx = esi;
    PUSH32(esp, 0x001D4B10u); RECOMP_ABI_CALL(0x001C1DD0u, sub_001C1DD0); /* call 0x001C1DD0 */

loc_001D4B10: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D4B26; /* je: equal / zero */

loc_001D4B17: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x104);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001D4B23u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D4B1Du); } /* indirect call */
    }

loc_001D4B23: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D4B26: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D4B30
 * Original: 0x001D4B30 - 0x001D4B3A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4B30(void)
{

loc_001D4B30: ;
    eax = MEM32(esp + 4);
    MEM32(0x528AD4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001D4B40
 * Original: 0x001D4B40 - 0x001D4B46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4B40(void)
{

loc_001D4B40: ;
    eax = MEM32(0x528AD4);
    esp += 4; return; /* ret */

}

/**
 * sub_001D4B50
 * Original: 0x001D4B50 - 0x001D4B8F (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4B50: ;
    eax = MEM32(0x528AD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4B5B; /* je: equal / zero */

loc_001D4B59: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_001D4B5B: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x528AD8);
    PUSH32(esp, 0x001D4B75u); RECOMP_ABI_CALL(0x002BFB41u, sub_002BFB41); /* call 0x002BFB41 */

loc_001D4B75: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x528AD8);
    esi = eax;
    MEM8(0x528CD7) = 0;
    PUSH32(esp, 0x001D4B8Bu); RECOMP_ABI_CALL(0x001EF107u, sub_001EF107); /* call 0x001EF107 */

loc_001D4B8B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D4B90
 * Original: 0x001D4B90 - 0x001D4BDD (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4B90: ;
    eax = MEM32(0x528AD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4BA9; /* je: equal / zero */

loc_001D4B99: ;
    edx = MEM32(esp + 4);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001D4BA5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D4BA3u); } /* indirect call */
    }

loc_001D4BA5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001D4BA9: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x528AD8);
    PUSH32(esp, 0x001D4BC3u); RECOMP_ABI_CALL(0x002BFB41u, sub_002BFB41); /* call 0x002BFB41 */

loc_001D4BC3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x528AD8);
    esi = eax;
    MEM8(0x528CD7) = 0;
    PUSH32(esp, 0x001D4BD9u); RECOMP_ABI_CALL(0x001EF107u, sub_001EF107); /* call 0x001EF107 */

loc_001D4BD9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D4BE0
 * Original: 0x001D4BE0 - 0x001D4BEA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4BE0(void)
{

loc_001D4BE0: ;
    eax = MEM32(esp + 4);
    MEM32(0x37F0B8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001D4BF0
 * Original: 0x001D4BF0 - 0x001D4C4B (91 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4BF0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x37F0B8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001D4C4A; /* jg: greater (signed >) */

loc_001D4C00: ;
    eax = MEM32(0x528AD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D4C1D; /* je: equal / zero */

loc_001D4C0F: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001D4C16u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001D4C14u); } /* indirect call */
    }

loc_001D4C16: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D4C1D: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x528AD8);
    PUSH32(esp, 0x001D4C31u); RECOMP_ABI_CALL(0x002BFB41u, sub_002BFB41); /* call 0x002BFB41 */

loc_001D4C31: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x528AD8);
    esi = eax;
    MEM8(0x528CD7) = 0;
    PUSH32(esp, 0x001D4C47u); RECOMP_ABI_CALL(0x001EF107u, sub_001EF107); /* call 0x001EF107 */

loc_001D4C47: ;
    eax = esi;
    POP32(esp, esi);

loc_001D4C4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D4C50
 * Original: 0x001D4C50 - 0x001D4C71 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4C50: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4C5D; /* jne: not equal / not zero */

loc_001D4C58: ;
    g_seh_ebp = ebp; sub_002DCD80(); return; /* tail jmp 0x002DCD80 */

loc_001D4C5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4C67; /* jne: not equal / not zero */

loc_001D4C62: ;
    g_seh_ebp = ebp; sub_002DCDE0(); return; /* tail jmp 0x002DCDE0 */

loc_001D4C67: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D4C70u); RECOMP_ABI_CALL(0x002DCF70u, sub_002DCF70); /* call 0x002DCF70 */

loc_001D4C70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D4C80
 * Original: 0x001D4C80 - 0x001D4C90 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4C80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D4C8Fu); RECOMP_ABI_CALL(0x002DF000u, sub_002DF000); /* call 0x002DF000 */

loc_001D4C8F: ;
    esp += 4; return; /* ret */

}
