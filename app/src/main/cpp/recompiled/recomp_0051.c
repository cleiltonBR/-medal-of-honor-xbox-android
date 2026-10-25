/**
 * Medal of Honor European Assault - Recompiled code chunk 51
 * Functions: 250 (0x001BE951 - 0x001C35C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001BE951
 * Original: 0x001BE951 - 0x001BEA47 (246 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE951(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE951: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE974; /* je: equal / zero */

loc_001BE967: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BE96Du); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001BE96D: ;
    MEM32(esi + 0x528) = MEM32(esi + 0x528) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x528)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BE974: ;
    _fa = (uint32_t)(MEM8(esi + 0x548)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x548), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE985; /* jne: not equal / not zero */

loc_001BE97D: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    goto loc_001BEA42;

loc_001BE985: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, 0xB);
    POP32(esp, ebx);
    MEM32(esi + 0x52C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001BE9AA; /* je: equal / zero */

loc_001BE99A: ;
    eax = edi;
    edx = eax + 1;

loc_001BE99F: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE99F; /* jne: not equal / not zero */

loc_001BE9A6: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001BE9AC;

loc_001BE9AA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BE9AC: ;
    ecx = 0x103;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = esi + 0x538;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BE9CEu); RECOMP_ABI_CALL(0x001EE441u, sub_001EE441); /* call 0x001EE441 */

loc_001BE9CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEA34; /* jne: not equal / not zero */

loc_001BE9D2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, 0xA);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001BEA3E; /* je: equal / zero */

loc_001BE9D9: ;
    eax = ebp + -260;
    edx = eax + 1;

loc_001BE9E2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE9E2; /* jne: not equal / not zero */

loc_001BE9E9: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + eax + -260;
    ecx = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001BE9F6: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE9F6; /* jne: not equal / not zero */

loc_001BEA00: ;
    edi = esi + 0xA0;
    PUSH32(esp, edi);
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEA13u); RECOMP_ABI_CALL(0x001EFC53u, sub_001EFC53); /* call 0x001EFC53 */

loc_001BEA13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x528) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001BEA29; /* je: equal / zero */

loc_001BEA1E: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEA27u); RECOMP_ABI_CALL(0x001BDF31u, sub_001BDF31); /* call 0x001BDF31 */

loc_001BEA27: ;
    goto loc_001BEA3E;

loc_001BEA29: ;
    MEM32(esi + 0x528) = MEM32(esi + 0x528) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x528)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xB);
    goto loc_001BEA3D;

loc_001BEA34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x48F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEA3E; /* jne: not equal / not zero */

loc_001BEA3B: ;
    PUSH32(esp, 2);

loc_001BEA3D: ;
    POP32(esp, ebx);

loc_001BEA3E: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);

loc_001BEA42: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001BEA47
 * Original: 0x001BEA47 - 0x001BEAFD (182 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEA47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEA47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001BEA6C; /* je: equal / zero */

loc_001BEA5F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEA65u); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001BEA65: ;
    MEM32(esi + 0x528) = MEM32(esi + 0x528) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x528)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BEA6C: ;
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -260;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -260;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = 0xB;
    MEM32(esi + 0x52C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEA98u); RECOMP_ABI_CALL(0x001BDFB5u, sub_001BDFB5); /* call 0x001BDFB5 */

loc_001BEA98: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -260;
    PUSH32(esp, eax);
    eax = esi + 0x538;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, 0x3357A8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEABAu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001BEABA: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0xA0;
    PUSH32(esp, edi);
    eax = ebp + -520;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEAD0u); RECOMP_ABI_CALL(0x001EFC53u, sub_001EFC53); /* call 0x001EFC53 */

loc_001BEAD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x528) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001BEAEC; /* je: equal / zero */

loc_001BEADB: ;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + -4) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEAEAu); RECOMP_ABI_CALL(0x001BDF31u, sub_001BDF31); /* call 0x001BDF31 */

loc_001BEAEA: ;
    goto loc_001BEAF3;

loc_001BEAEC: ;
    MEM32(esi + 0x528) = MEM32(esi + 0x528) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x528)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BEAF3: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BEAFD
 * Original: 0x001BEAFD - 0x001BEB4B (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEAFD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEAFD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0xA0;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x528));
    PUSH32(esp, 0x001BEB14u); RECOMP_ABI_CALL(0x001EFD60u, sub_001EFD60); /* call 0x001EFD60 */

loc_001BEB14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEB29; /* je: equal / zero */

loc_001BEB18: ;
    ecx = MEM32(esi + 0x52C);
    PUSH32(esp, 0xA);
    POP32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BEB27u); RECOMP_ABI_CALL(0x001BDF31u, sub_001BDF31); /* call 0x001BDF31 */

loc_001BEB27: ;
    goto loc_001BEB45;

loc_001BEB29: ;
    PUSH32(esp, 0xB);
    POP32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x528));
    PUSH32(esp, 0x001BEB37u); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001BEB37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEB3E; /* jne: not equal / not zero */

loc_001BEB3B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BEB3E: ;
    MEM32(esi + 0x528) = MEM32(esi + 0x528) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x528)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BEB45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BEB4B
 * Original: 0x001BEB4B - 0x001BEB92 (71 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEB4B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEB4B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB);
    esi = ecx;
    POP32(esp, ebx);
    edi = esi + 0xA0;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x528));
    PUSH32(esp, 0x001BEB65u); RECOMP_ABI_CALL(0x001EFD60u, sub_001EFD60); /* call 0x001EFD60 */

loc_001BEB65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEB7A; /* je: equal / zero */

loc_001BEB69: ;
    ecx = MEM32(esi + 0x52C);
    PUSH32(esp, 0xA);
    POP32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BEB78u); RECOMP_ABI_CALL(0x001BDF31u, sub_001BDF31); /* call 0x001BDF31 */

loc_001BEB78: ;
    goto loc_001BEB8C;

loc_001BEB7A: ;
    PUSH32(esp, MEM32(esi + 0x528));
    PUSH32(esp, 0x001BEB85u); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001BEB85: ;
    MEM32(esi + 0x528) = MEM32(esi + 0x528) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x528)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BEB8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BEB92
 * Original: 0x001BEB92 - 0x001BEC1C (138 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEB92(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BEB92: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x524);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEBAD; /* je: equal / zero */

loc_001BEBA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BEBA6u); RECOMP_ABI_CALL(0x001EE8C5u, sub_001EE8C5); /* call 0x001EE8C5 */

loc_001BEBA6: ;
    MEM32(esi + 0x524) = MEM32(esi + 0x524) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x524)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BEBAD: ;
    _fa = (uint32_t)(MEM8(esi + 0x548)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x548), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEBBB; /* jne: not equal / not zero */

loc_001BEBB6: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    goto loc_001BEC17;

loc_001BEBBB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0x424;
    MEM32(esi + 0x530) = ebx;
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esi + 0x1E0;
    PUSH32(esp, eax);
    eax = esi + 0x538;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0xB;
    PUSH32(esp, 0x001BEBF2u); RECOMP_ABI_CALL(0x001EE774u, sub_001EE774); /* call 0x001EE774 */

loc_001BEBF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x524) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001BEC09; /* je: equal / zero */

loc_001BEBFD: ;
    MEM32(esp + 0x10) = 0xA;
    MEM32(ebx) = ebp;
    goto loc_001BEC10;

loc_001BEC09: ;
    MEM32(esi + 0x524) = MEM32(esi + 0x524) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x524)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BEC10: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001BEC17: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BEC1C
 * Original: 0x001BEC1C - 0x001BEC83 (103 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEC1C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEC1C: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x548)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x548), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEC2D; /* jne: not equal / not zero */

loc_001BEC28: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BEC2D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    ebx = esi + 0x424;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esi + 0x1E0;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x524));
    PUSH32(esp, 0x001BEC50u); RECOMP_ABI_CALL(0x001EE87Eu, sub_001EE87E); /* call 0x001EE87E */

loc_001BEC50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEC61; /* je: equal / zero */

loc_001BEC54: ;
    eax = MEM32(esi + 0x530);
    PUSH32(esp, 0xA);
    POP32(esp, edi);
    MEM32(eax) = ebx;
    goto loc_001BEC7D;

loc_001BEC61: ;
    PUSH32(esp, 0xB);
    POP32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x524));
    PUSH32(esp, 0x001BEC6Fu); RECOMP_ABI_CALL(0x001EE8C5u, sub_001EE8C5); /* call 0x001EE8C5 */

loc_001BEC6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEC76; /* jne: not equal / not zero */

loc_001BEC73: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BEC76: ;
    MEM32(esi + 0x524) = MEM32(esi + 0x524) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x524)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BEC7D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BEC83
 * Original: 0x001BEC83 - 0x001BED43 (192 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEC83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEC83: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = 0xB;
    MEM32(esi + 0x530) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001BECB7; /* je: equal / zero */

loc_001BECAA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BECB0u); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001BECB0: ;
    MEM32(esi + 0x528) = MEM32(esi + 0x528) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x528)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BECB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -260;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BECD4u); RECOMP_ABI_CALL(0x001BDFB5u, sub_001BDFB5); /* call 0x001BDFB5 */

loc_001BECD4: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    eax = esi + 0x538;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, 0x3357B0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BECF3u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001BECF3: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x41);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0xCC;
    MEM32(ebp + 8) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esi + 0xA0;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BED19u); RECOMP_ABI_CALL(0x001EFC53u, sub_001EFC53); /* call 0x001EFC53 */

loc_001BED19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x528) = eax;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001BED33; /* je: equal / zero */

loc_001BED25: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0xA;
    MEM32(ebx) = eax;
    goto loc_001BED3A;

loc_001BED33: ;
    MEM32(esi + 0x528) = MEM32(esi + 0x528) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x528)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BED3A: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BED43
 * Original: 0x001BED43 - 0x001BED97 (84 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BED43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BED43: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB);
    esi = ecx;
    POP32(esp, ebp);
    PUSH32(esp, 0x41);
    POP32(esp, ecx);
    ebx = esi + 0xCC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esi + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x528));
    PUSH32(esp, 0x001BED6Du); RECOMP_ABI_CALL(0x001EFD60u, sub_001EFD60); /* call 0x001EFD60 */

loc_001BED6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BED7E; /* je: equal / zero */

loc_001BED71: ;
    eax = MEM32(esi + 0x530);
    PUSH32(esp, 0xA);
    POP32(esp, ebp);
    MEM32(eax) = ebx;
    goto loc_001BED90;

loc_001BED7E: ;
    PUSH32(esp, MEM32(esi + 0x528));
    PUSH32(esp, 0x001BED89u); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001BED89: ;
    MEM32(esi + 0x528) = MEM32(esi + 0x528) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x528)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BED90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BED97
 * Original: 0x001BED97 - 0x001BEDC2 (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BED97(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BED97: ;
    _fa = (uint32_t)(MEM8(ecx + 0x548)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x548), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEDA4; /* jne: not equal / not zero */

loc_001BEDA0: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_001BEDA4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x524;
    PUSH32(esp, MEM32(esi));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001BEDB5u); RECOMP_ABI_CALL(0x001EE8C5u, sub_001EE8C5); /* call 0x001EE8C5 */

loc_001BEDB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEDBA; /* jne: not equal / not zero */

loc_001BEDB9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BEDBA: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BEDC2
 * Original: 0x001BEDC2 - 0x001BEE80 (190 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEDC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEDC2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEDE5; /* je: equal / zero */

loc_001BEDD8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEDDEu); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001BEDDE: ;
    MEM32(esi + 0x528) = MEM32(esi + 0x528) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x528)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BEDE5: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 1;
    edi = eax + 1;

loc_001BEDF5: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEDF5; /* jne: not equal / not zero */

loc_001BEDFC: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x103;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    eax = ebp + -264;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(eax));
    eax = esi + 0x538;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEE22u); RECOMP_ABI_CALL(0x001EE441u, sub_001EE441); /* call 0x001EE441 */

loc_001BEE22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001BEE78; /* jne: not equal / not zero */

loc_001BEE27: ;
    eax = ebp + -264;
    edx = eax + 1;

loc_001BEE30: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEE30; /* jne: not equal / not zero */

loc_001BEE37: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + eax + -264) = 0x2A2E2A;
    eax = esi + 0xA0;
    PUSH32(esp, eax);
    eax = ebp + -264;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEE57u); RECOMP_ABI_CALL(0x001EFC53u, sub_001EFC53); /* call 0x001EFC53 */

loc_001BEE57: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    MEM32(esi + 0x528) = eax;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEE71u); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001BEE71: ;
    MEM32(esi + 0x528) = MEM32(esi + 0x528) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x528)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BEE78: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BEE80
 * Original: 0x001BEE80 - 0x001BEF41 (193 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEE80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001BEE80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x104));
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001BEE9C; /* jne: not equal / not zero */

loc_001BEE95: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001BEF3C;

loc_001BEE9C: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax + 1;

loc_001BEEA6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001BEEA6; /* jne: not equal / not zero */

loc_001BEEAD: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x103;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(ebp + 0xC));
    _fb = (uint32_t)(0x538) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x538)) >> 32) & 1);
    edi = edi + 0x538;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEED1u); RECOMP_ABI_CALL(0x001EE441u, sub_001EE441); /* call 0x001EE441 */

loc_001BEED1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001BEF39; /* jne: not equal / not zero */

loc_001BEED5: ;
    eax = ebp + -260;
    edx = eax + 1;

loc_001BEEDE: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001BEEDE; /* jne: not equal / not zero */

loc_001BEEE5: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + eax + -260;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001BEEF3: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001BEEF3; /* jne: not equal / not zero */

loc_001BEEFD: ;
    SET_LO8(ecx, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = 0x80;
    if (TEST_Z(_fa, _fb)) goto loc_001BEF0D; /* je: equal / zero */

loc_001BEF0A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BEF0D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001BEF15; /* je: equal / zero */

loc_001BEF12: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BEF15: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001BEF1D; /* je: equal / zero */

loc_001BEF1A: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BEF1D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001BEF25; /* je: equal / zero */

loc_001BEF22: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BEF25: ;
    PUSH32(esp, eax);
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEF32u); RECOMP_ABI_CALL(0x001ECF7Bu, sub_001ECF7B); /* call 0x001ECF7B */

loc_001BEF32: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BEF39: ;
    eax = esi;
    POP32(esp, esi);

loc_001BEF3C: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001BEF41
 * Original: 0x001BEF41 - 0x001BEF50 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEF41(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEF41: ;
    _fb = (uint32_t)(0x534) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x534;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BEF4Du); RECOMP_ABI_CALL(0x001EDE79u, sub_001EDE79); /* call 0x001EDE79 */

loc_001BEF4D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BEF50
 * Original: 0x001BEF50 - 0x001BEF8D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEF50(void)
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

loc_001BEF50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEF5Bu); RECOMP_ABI_CALL(0x001BEF41u, sub_001BEF41); /* call 0x001BEF41 */

loc_001BEF5B: ;
    ecx = MEM32(ebp + 0xC);
    ecx = eax + ecx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 8) = ecx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEF72; /* jge: greater or equal (signed >=) */

loc_001BEF6C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x334E18)); /* fadd qword ptr [0x334e18] */

loc_001BEF72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001BEF82; /* jge: greater or equal (signed >=) */

loc_001BEF7C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x334E18)); /* fadd qword ptr [0x334e18] */

loc_001BEF82: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEF89u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001BEF89: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BEF8D
 * Original: 0x001BEF8D - 0x001BEFD5 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEF8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEF8D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x104);
    eax = ebp + -260;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(eax));
    _fb = (uint32_t)(0x538) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x538;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEFBCu); RECOMP_ABI_CALL(0x001EE441u, sub_001EE441); /* call 0x001EE441 */

loc_001BEFBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEFCE; /* jne: not equal / not zero */

loc_001BEFC0: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEFCCu); RECOMP_ABI_CALL(0x001ED22Fu, sub_001ED22F); /* call 0x001ED22F */

loc_001BEFCC: ;
    esi = eax;

loc_001BEFCE: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BEFD5
 * Original: 0x001BEFD5 - 0x001BEFEF (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEFD5(void)
{

loc_001BEFD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx + 0x53C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    SET_LO8(eax, MEM8(ecx + 0x548));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BEFEF
 * Original: 0x001BEFEF - 0x001BF089 (154 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEFEF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEFEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1BF3AF);
    esi = ecx;
    PUSH32(esp, 3);
    PUSH32(esp, 0x34);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM32(esi) = 0x3357D0;
    PUSH32(esp, 0x001BF00Bu); RECOMP_ABI_CALL(0x00012790u, sub_00012790); /* call 0x00012790 */

loc_001BF00B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x53C;
    MEM16(edi) = LO16(ecx);
    MEM16(edi + 2) = LO16(ecx);
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = esi + 0x534;
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 0x548) = LO8(ecx);
    MEM8(esi + 0x549) = LO8(ecx);
    MEM32(esi + 0x528) = ecx;
    MEM32(esi + 0x524) = ecx;
    MEM32(eax) = 0x5C3A55;
    edi = edx + 0x538;

loc_001BF053: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(edi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF053; /* jne: not equal / not zero */

loc_001BF05D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x5258B8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    edx = 0x5256A8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_001BF06B: ;
    PUSH32(esp, 2);
    eax = edx;
    POP32(esp, edx);

loc_001BF070: ;
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(0x42) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x42;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BF070; /* jne: not equal / not zero */

loc_001BF079: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5258B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5258B8 (32-bit) */
    edx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BF06B; /* jl: less (signed <) */

loc_001BF082: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BF089
 * Original: 0x001BF089 - 0x001BF208 (383 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF089(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF089: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x2F6758;
    PUSH32(esp, esi);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF0A7u); RECOMP_ABI_CALL(0x002F76DDu, sub_002F76DD); /* call 0x002F76DD */

loc_001BF0A7: ;
    ebx = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF0B7u); RECOMP_ABI_CALL(0x002F76FFu, sub_002F76FF); /* call 0x002F76FF */

loc_001BF0B7: ;
    esi = MEM32(ebp + 8);
    SET_LO16(edi, MEM16(esi));
    edx = ZX16(LO16(edi));
    ecx = edx;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001BF18B; /* je: equal / zero */

loc_001BF0CD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BF158; /* je: equal / zero */

loc_001BF0D4: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BF124; /* je: equal / zero */

loc_001BF0D7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BF0EA; /* je: equal / zero */

loc_001BF0DA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BF1BE; /* jne: not equal / not zero */

loc_001BF0E1: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001BF1BE;

loc_001BF0EA: ;
    SET_LO16(eax, MEM16(esi + 2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF0FB; /* jne: not equal / not zero */

loc_001BF0F6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF108; /* jne: not equal / not zero */

loc_001BF0FB: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF10C; /* jne: not equal / not zero */

loc_001BF100: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x80000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF10C; /* je: equal / zero */

loc_001BF108: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BF10C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    eax = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_001BF11C; /* jne: not equal / not zero */

loc_001BF114: ;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001BF1BC;

loc_001BF11C: ;
    eax = eax >> 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001BF1BC;

loc_001BF124: ;
    SET_LO16(eax, MEM16(esi + 2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF135; /* jne: not equal / not zero */

loc_001BF130: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF142; /* jne: not equal / not zero */

loc_001BF135: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF146; /* jne: not equal / not zero */

loc_001BF13A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF146; /* je: equal / zero */

loc_001BF142: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BF146: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    eax = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_001BF153; /* jne: not equal / not zero */

loc_001BF14E: ;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001BF1BC;

loc_001BF153: ;
    eax = eax >> 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001BF1BC;

loc_001BF158: ;
    SET_LO16(eax, MEM16(esi + 2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF169; /* jne: not equal / not zero */

loc_001BF164: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF176; /* jne: not equal / not zero */

loc_001BF169: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF17A; /* jne: not equal / not zero */

loc_001BF16E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF17A; /* je: equal / zero */

loc_001BF176: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BF17A: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    eax = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_001BF186; /* jne: not equal / not zero */

loc_001BF182: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001BF1BC;

loc_001BF186: ;
    eax = eax >> 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001BF1BC;

loc_001BF18B: ;
    SET_LO16(eax, MEM16(esi + 2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF19B; /* jne: not equal / not zero */

loc_001BF197: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BF1A8; /* jne: not equal / not zero */

loc_001BF19B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF1AC; /* jne: not equal / not zero */

loc_001BF1A0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF1AC; /* je: equal / zero */

loc_001BF1A8: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BF1AC: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF1B6; /* jne: not equal / not zero */

loc_001BF1B1: ;
    SET_LO8(eax, MEM8(ebp + -4));
    goto loc_001BF1BC;

loc_001BF1B6: ;
    eax = MEM32(ebp + -4);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001BF1BC: ;
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_001BF1BE: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 4 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BF1FE; /* jae: above or equal (unsigned >=) */

loc_001BF1C4: ;
    ecx = ZX16(MEM16(esi + 2));
    _fa = (uint32_t)(MEM8(ecx + edx * 2 + 0x5258B8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + edx * 2 + 0x5258B8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF1D6; /* je: equal / zero */

loc_001BF1D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF1E9; /* je: equal / zero */

loc_001BF1D6: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF1ED; /* jne: not equal / not zero */

loc_001BF1DC: ;
    ecx = MEM32(ebp + -12);
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF1E9u); RECOMP_ABI_CALL(0x001BE862u, sub_001BE862); /* call 0x001BE862 */

loc_001BF1E9: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */

loc_001BF1ED: ;
    ecx = ZX16(MEM16(esi));
    edx = ZX16(MEM16(esi + 2));
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edx + ecx * 2 + 0x5258B8) = LO8(eax);

loc_001BF1FE: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BF208
 * Original: 0x001BF208 - 0x001BF341 (313 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF208(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF208: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001BF21D; /* je: equal / zero */

loc_001BF21B: ;
    MEM32(eax) = ebx;

loc_001BF21D: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF226; /* je: equal / zero */

loc_001BF224: ;
    MEM32(eax) = ebx;

loc_001BF226: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF22F; /* je: equal / zero */

loc_001BF22D: ;
    MEM32(eax) = ebx;

loc_001BF22F: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF240u); RECOMP_ABI_CALL(0x001BEF41u, sub_001BEF41); /* call 0x001BEF41 */

loc_001BF240: ;
    edi = eax;
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x538) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x538;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF25Au); RECOMP_ABI_CALL(0x001ED815u, sub_001ED815); /* call 0x001ED815 */

loc_001BF25A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF2F7; /* je: equal / zero */

loc_001BF262: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0);
    PUSH32(esp, 0xF423F);
    ebx = edx;
    edi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF27Bu); RECOMP_ABI_CALL(0x002BF5D0u, sub_002BF5D0); /* call 0x002BF5D0 */

loc_001BF27B: ;
    esi = edx;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), esi (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001BF292; /* jb: below (unsigned <) */

loc_001BF285: ;
    if (CMP_A(_fa, _fb)) goto loc_001BF28C; /* ja: above (unsigned >) */

loc_001BF287: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BF292; /* jbe: below or equal (unsigned <=) */

loc_001BF28C: ;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -16) = esi;

loc_001BF292: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF29Fu); RECOMP_ABI_CALL(0x002C0620u, sub_002C0620); /* call 0x002C0620 */

loc_001BF29F: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), esi (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001BF2BA; /* jb: below (unsigned <) */

loc_001BF2A7: ;
    if (CMP_A(_fa, _fb)) goto loc_001BF2B1; /* ja: above (unsigned >) */

loc_001BF2A9: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BF2BA; /* jbe: below or equal (unsigned <=) */

loc_001BF2B1: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = esi;

loc_001BF2BA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF2C7u); RECOMP_ABI_CALL(0x002C0620u, sub_002C0620); /* call 0x002C0620 */

loc_001BF2C7: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), esi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001BF2E2; /* jb: below (unsigned <) */

loc_001BF2CF: ;
    if (CMP_A(_fa, _fb)) goto loc_001BF2D9; /* ja: above (unsigned >) */

loc_001BF2D1: ;
    eax = MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001BF2E2; /* jbe: below or equal (unsigned <=) */

loc_001BF2D9: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = esi;

loc_001BF2E2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, MEM32(ebp + -36));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF2EFu); RECOMP_ABI_CALL(0x002C0620u, sub_002C0620); /* call 0x002C0620 */

loc_001BF2EF: ;
    ebx = MEM32(ebp + -16);
    MEM32(ebp + -8) = eax;
    goto loc_001BF316;

loc_001BF2F7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF2FCu); RECOMP_ABI_CALL(0x001ED4D5u, sub_001ED4D5); /* call 0x001ED4D5 */

loc_001BF2FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF30F; /* je: equal / zero */

loc_001BF301: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x48F (32-bit) */
    MEM32(ebp + 8) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001BF316; /* jne: not equal / not zero */

loc_001BF30F: ;
    MEM32(ebp + 8) = 2;

loc_001BF316: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001BF320; /* je: equal / zero */

loc_001BF31E: ;
    MEM32(eax) = ebx;

loc_001BF320: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001BF32E; /* je: equal / zero */

loc_001BF329: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;

loc_001BF32E: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF33A; /* je: equal / zero */

loc_001BF335: ;
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;

loc_001BF33A: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001BF341
 * Original: 0x001BF341 - 0x001BF385 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF341(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF341: ;
    MEM32(ecx) = 0x3357C0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 8) = LO16(edx);
    MEM16(ecx + 0xA) = LO16(edx);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    PUSH32(esp, edi);
    edi = ecx + 0x14;
    MEM32(edi) = edx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = edx;
    MEM8(edi + 0x10) = LO8(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = 0x524D4306;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(ecx + 0x28) = 1;
    MEM8(ecx + 0x2C) = LO8(edx);
    eax = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BF385
 * Original: 0x001BF385 - 0x001BF3AF (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF385(void)
{

loc_001BF385: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    edi = eax + 8;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = eax + 0x14;
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
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x2C) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BF3AF
 * Original: 0x001BF3AF - 0x001BF3DC (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF3AF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF3AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001BF3B8u); RECOMP_ABI_CALL(0x001BF341u, sub_001BF341); /* call 0x001BF341 */

loc_001BF3B8: ;
    MEM32(esi) = 0x3357C8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x14;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi + 0x28) = 1;
    MEM8(esi + 0x2C) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BF3DC
 * Original: 0x001BF3DC - 0x001BF3FA (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF3DC(void)
{

loc_001BF3DC: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BF3E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF3E1u); } /* indirect call */
    }

loc_001BF3E3: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x001BF3F6u); RECOMP_ABI_CALL(0x001BF385u, sub_001BF385); /* call 0x001BF385 */

loc_001BF3F6: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BF3FA
 * Original: 0x001BF3FA - 0x001BF41D (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF3FA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF3FA: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3357BC;
    if (TEST_Z(_fa, _fb)) goto loc_001BF417; /* je: equal / zero */

loc_001BF40A: ;
    PUSH32(esp, 0x54C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BF415u); RECOMP_ABI_CALL(0x001BB2C6u, sub_001BB2C6); /* call 0x001BB2C6 */

loc_001BF415: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_001BF417: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BF41D
 * Original: 0x001BF41D - 0x001BF427 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF41D(void)
{

loc_001BF41D: ;
    eax = MEM32(esp + 4);
    MEM32(0x5280C4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001BF427
 * Original: 0x001BF427 - 0x001BF588 (353 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF427(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF427: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001BF449; /* je: equal / zero */

loc_001BF437: ;
    eax = ebx;
    edx = eax + 1;

loc_001BF43C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF43C; /* jne: not equal / not zero */

loc_001BF443: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    goto loc_001BF44B;

loc_001BF449: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BF44B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF481; /* jle: less or equal (signed <=) */

loc_001BF451: ;
    PUSH32(esp, 4);
    ecx = ebp + 0xC;
    POP32(esp, esi);

loc_001BF457: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + ebx);
    _fb = (uint32_t)(0x63) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x63;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001BF473; /* je: equal / zero */

loc_001BF460: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BF46D; /* je: equal / zero */

loc_001BF463: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001BF46D; /* je: equal / zero */

loc_001BF468: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001BF47C; /* jne: not equal / not zero */

loc_001BF46D: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    goto loc_001BF478;

loc_001BF473: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM8(ecx);

loc_001BF478: ;
    MEM32(ebp + eax * 4 + -60) = edx;

loc_001BF47C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BF457; /* jl: less (signed <) */

loc_001BF481: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x5280C4); PUSH32(esp, 0x001BF48Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF484u); } /* indirect call */
    }

loc_001BF48A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001BF583; /* je: equal / zero */

loc_001BF493: ;
    edi = MEM32(0x5280C0);
    edi = edi << 0xB;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edi;
    esi = edi + 0x5258C0;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001BF4AA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF53C; /* je: equal / zero */

loc_001BF4B2: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF4B8u); RECOMP_ABI_CALL(0x002BF4AAu, sub_002BF4AA); /* call 0x002BF4AA */

loc_001BF4B8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    SET_LO8(ecx, MEM8(eax + ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x64 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF4E0; /* je: equal / zero */

loc_001BF4C2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x73 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF535; /* jne: not equal / not zero */

loc_001BF4C7: ;
    eax = MEM32(ebp + eax * 4 + -60);
    goto loc_001BF4D6;

loc_001BF4CD: ;
    MEM16(esi) = LO16(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BF4D6: ;
    SET_LO16(ecx, MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF4CD; /* jne: not equal / not zero */

loc_001BF4DE: ;
    goto loc_001BF535;

loc_001BF4E0: ;
    edi = MEM32(ebp + eax * 4 + -60);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF4F1; /* jge: greater or equal (signed >=) */

loc_001BF4E8: ;
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM16(esi) = 0x2D;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BF4F1: ;
    eax = edi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BF4F5: ;
    PUSH32(esp, 0xA);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF4F5; /* jne: not equal / not zero */

loc_001BF500: ;
    MEM8(ebp + ecx + -28) = LO8(eax);

loc_001BF504: ;
    eax = edi;
    PUSH32(esp, 0xA);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x30);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + ecx + -28) = LO8(edx);
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001BF504; /* jne: not equal / not zero */

loc_001BF51A: ;
    SET_LO8(ecx, MEM8(ebp + -28));
    eax = ebp + -28;

loc_001BF520: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF532; /* je: equal / zero */

loc_001BF524: ;
    SET_LO16(ecx, SX8(LO8(ecx)));
    MEM16(esi) = LO16(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(eax));
    goto loc_001BF520;

loc_001BF532: ;
    edi = MEM32(ebp + -4);

loc_001BF535: ;
    ebx = MEM32(ebp + 0xC);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001BF554;

loc_001BF53C: ;
    SET_LO16(eax, MEM16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x25 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF549; /* jne: not equal / not zero */

loc_001BF545: ;
    SET_LO8(ecx, 1);
    goto loc_001BF554;

loc_001BF549: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x22) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x22 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF554; /* je: equal / zero */

loc_001BF54F: ;
    MEM16(esi) = LO16(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BF554: ;
    eax = MEM32(ebp + -8);
    SET_LO16(edx, MEM16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001BF4AA; /* jne: not equal / not zero */

loc_001BF568: ;
    MEM16(esi) = MEM16(esi) & LO16(edx);
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(0x5280C0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 5);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edi + 0x5258C0;
    MEM32(0x5280C0) = edx;

loc_001BF583: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF604
 * Original: 0x001BF604 - 0x001BF61A (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF604(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF604: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF619; /* je: equal / zero */

loc_001BF60E: ;
    goto loc_001BF613;

loc_001BF610: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BF613: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF610; /* jne: not equal / not zero */

loc_001BF619: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BF61A
 * Original: 0x001BF61A - 0x001BF63A (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF61A(void)
{

loc_001BF61A: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BF621u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF61Fu); } /* indirect call */
    }

loc_001BF621: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BF63A
 * Original: 0x001BF63A - 0x001BF643 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF63A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF63A: ;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF643
 * Original: 0x001BF643 - 0x001BF6E6 (163 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF643(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF643: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = ebx + 8;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) + 2;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF6DF; /* jle: less or equal (signed <=) */

loc_001BF665: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001BF66Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF66Au); } /* indirect call */
    }

loc_001BF66D: ;
    ecx = MEM32(ebx + 4);
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEM16(ebp + -12) = LO16(esi);
    MEM16(ebp + -10) = LO16(esi);
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF687u); RECOMP_ABI_CALL(0x001BEFD5u, sub_001BEFD5); /* call 0x001BEFD5 */

loc_001BF687: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + 0xB) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001BF69A; /* je: equal / zero */

loc_001BF68E: ;
    ecx = MEM32(ebx + 4);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF69Au); RECOMP_ABI_CALL(0x001BE14Cu, sub_001BE14C); /* call 0x001BE14C */

loc_001BF69A: ;
    ecx = MEM32(ebx + 4);
    esi = ebx + 8;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF6A6u); RECOMP_ABI_CALL(0x001BE037u, sub_001BE037); /* call 0x001BE037 */

loc_001BF6A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF6C5; /* jne: not equal / not zero */

loc_001BF6AA: ;
    PUSH32(esp, MEM32(edi + 8));
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF6B6u); RECOMP_ABI_CALL(0x001BEF50u, sub_001BEF50); /* call 0x001BEF50 */

loc_001BF6B6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 4);
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF6C5u); RECOMP_ABI_CALL(0x001BE14Cu, sub_001BE14C); /* call 0x001BE14C */

loc_001BF6C5: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF6D7; /* je: equal / zero */

loc_001BF6CB: ;
    ecx = MEM32(ebx + 4);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF6D7u); RECOMP_ABI_CALL(0x001BE037u, sub_001BE037); /* call 0x001BE037 */

loc_001BF6D7: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001BF6DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF6DCu); } /* indirect call */
    }

loc_001BF6DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BF6E6
 * Original: 0x001BF6E6 - 0x001BF778 (146 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF6E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF6E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001BF772; /* jbe: below or equal (unsigned <=) */

loc_001BF6F7: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001BF6FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF6FCu); } /* indirect call */
    }

loc_001BF6FF: ;
    ecx = MEM32(esi + 4);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM16(ebp + -16) = LO16(ebx);
    MEM16(ebp + -14) = LO16(ebx);
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF719u); RECOMP_ABI_CALL(0x001BEFD5u, sub_001BEFD5); /* call 0x001BEFD5 */

loc_001BF719: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001BF72C; /* je: equal / zero */

loc_001BF720: ;
    ecx = MEM32(esi + 4);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF72Cu); RECOMP_ABI_CALL(0x001BE14Cu, sub_001BE14C); /* call 0x001BE14C */

loc_001BF72C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = esi + 8;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF739u); RECOMP_ABI_CALL(0x001BE037u, sub_001BE037); /* call 0x001BE037 */

loc_001BF739: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF758; /* jne: not equal / not zero */

loc_001BF73D: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF749u); RECOMP_ABI_CALL(0x001BEF50u, sub_001BEF50); /* call 0x001BEF50 */

loc_001BF749: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF758u); RECOMP_ABI_CALL(0x001BE14Cu, sub_001BE14C); /* call 0x001BE14C */

loc_001BF758: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001BF76A; /* je: equal / zero */

loc_001BF75E: ;
    ecx = MEM32(esi + 4);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF76Au); RECOMP_ABI_CALL(0x001BE037u, sub_001BE037); /* call 0x001BE037 */

loc_001BF76A: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001BF772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF76Fu); } /* indirect call */
    }

loc_001BF772: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BF778
 * Original: 0x001BF778 - 0x001BF7AD (53 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF778(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF778: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BF780u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF77Eu); } /* indirect call */
    }

loc_001BF780: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF797; /* je: equal / zero */

loc_001BF78B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001BF797u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF794u); } /* indirect call */
    }

loc_001BF797: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 4));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001BF7A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF79Eu); } /* indirect call */
    }

loc_001BF7A1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001BF7A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF7A5u); } /* indirect call */
    }

loc_001BF7A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BF7AD
 * Original: 0x001BF7AD - 0x001BF83F (146 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF7AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF7AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001BF7C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF7BDu); } /* indirect call */
    }

loc_001BF7C0: ;
    ecx = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM16(ebp + -20) = LO16(ebx);
    MEM16(ebp + -18) = LO16(ebx);
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF7DCu); RECOMP_ABI_CALL(0x001BEFD5u, sub_001BEFD5); /* call 0x001BEFD5 */

loc_001BF7DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001BF7EF; /* je: equal / zero */

loc_001BF7E3: ;
    ecx = MEM32(esi + 4);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF7EFu); RECOMP_ABI_CALL(0x001BE14Cu, sub_001BE14C); /* call 0x001BE14C */

loc_001BF7EF: ;
    ecx = MEM32(esi + 4);
    edi = esi + 8;
    PUSH32(esp, edi);
    MEM32(ebp + -8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF7FEu); RECOMP_ABI_CALL(0x001BE037u, sub_001BE037); /* call 0x001BE037 */

loc_001BF7FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF81C; /* jne: not equal / not zero */

loc_001BF802: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 4);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF810u); RECOMP_ABI_CALL(0x001BEF50u, sub_001BEF50); /* call 0x001BEF50 */

loc_001BF810: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF81Cu); RECOMP_ABI_CALL(0x001BE14Cu, sub_001BE14C); /* call 0x001BE14C */

loc_001BF81C: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF82D; /* je: equal / zero */

loc_001BF821: ;
    ecx = MEM32(esi + 4);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF82Du); RECOMP_ABI_CALL(0x001BE037u, sub_001BE037); /* call 0x001BE037 */

loc_001BF82D: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001BF835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF832u); } /* indirect call */
    }

loc_001BF835: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BF83F
 * Original: 0x001BF83F - 0x001BF86F (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF83F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF83F: ;
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x3357D4;
    edi = eax + 8;
    MEM16(edi) = LO16(ecx);
    MEM16(edi + 2) = LO16(ecx);
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = ecx;
    esi = 0x37D854;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BF86F
 * Original: 0x001BF86F - 0x001BF873 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF86F(void)
{

loc_001BF86F: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_001BF873
 * Original: 0x001BF873 - 0x001BF8E9 (118 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF873(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF873: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x335514;
    if (TEST_Z(_fa, _fb)) goto loc_001BF88A; /* je: equal / zero */

loc_001BF883: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BF889u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001BF889: ;
    POP32(esp, ecx);

loc_001BF88A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    eax = ZX8(MEM8(eax));
    esp += 4; return; /* ret */

loc_001BF899: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF8A2; /* jne: not equal / not zero */

loc_001BF89E: ;
    eax = ZX16(MEM16(eax));
    esp += 4; return; /* ret */

loc_001BF8A2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF8AF; /* jne: not equal / not zero */

loc_001BF8A7: ;
    eax = MEM32(eax);
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_001BF8AF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF8B7; /* jne: not equal / not zero */

loc_001BF8B4: ;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_001BF8B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    MEM8(ecx) = LO8(eax);
    esp += 4; return; /* ret */

loc_001BF8C2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF8CB; /* jne: not equal / not zero */

loc_001BF8C7: ;
    MEM16(ecx) = LO16(eax);
    esp += 4; return; /* ret */

loc_001BF8CB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF8D3; /* jne: not equal / not zero */

loc_001BF8D0: ;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

loc_001BF8D3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF8E8; /* jne: not equal / not zero */

loc_001BF8D8: ;
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx) = LO8(eax);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + 1) = LO8(edx);
    MEM8(ecx + 2) = LO8(eax);

loc_001BF8E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BF8E9
 * Original: 0x001BF8E9 - 0x001BF92F (70 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF8E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF8E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001BF926; /* je: equal / zero */

loc_001BF8F4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BF91D; /* je: equal / zero */

loc_001BF8F7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BF90C; /* je: equal / zero */

loc_001BF8FA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001BF901; /* je: equal / zero */

loc_001BF8FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001BF901: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001BF90C: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax + 0xE));
    ecx = MEM32(eax + ecx * 4 + 0x10);
    eax = MEM32(ecx + eax + 0xC);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001BF91D: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax + 0xC));
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001BF926: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax + 0xE));
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001BF92F
 * Original: 0x001BF92F - 0x001BF947 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF92F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF92F: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF946; /* jne: not equal / not zero */

loc_001BF936: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    MEM16(eax + 0xE) = LO16(ecx);
    MEM16(eax + 0xE) = LO16(ecx);

loc_001BF946: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BF947
 * Original: 0x001BF947 - 0x001BF958 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF947(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF947: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = ZX16(MEM16(eax));
    ecx = ZX16(MEM16(ecx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF958
 * Original: 0x001BF958 - 0x001BF981 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF958(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF958: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x1BF947);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BF971u); RECOMP_ABI_CALL(0x002BECF0u, sub_002BECF0); /* call 0x002BECF0 */

loc_001BF971: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF97D; /* je: equal / zero */

loc_001BF978: ;
    eax = ZX16(MEM16(eax + 2));
    esp += 4; return; /* ret */

loc_001BF97D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF981
 * Original: 0x001BF981 - 0x001BF9BF (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF981(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF981: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BF99D; /* je: equal / zero */

loc_001BF98C: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001BF99Au); RECOMP_ABI_CALL(0x001BF958u, sub_001BF958); /* call 0x001BF958 */

loc_001BF99A: ;
    POP32(esp, ecx);
    goto loc_001BF9A1;

loc_001BF99D: ;
    eax = MEM32(esp + 0xC);

loc_001BF9A1: ;
    ecx = ZX16(MEM16(esi + 0xE));
    ecx = MEM32(esi + ecx * 4 + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_001BF9BC; /* jl: less (signed <) */

loc_001BF9B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BF9BC; /* jae: above or equal (unsigned >=) */

loc_001BF9B5: ;
    eax = MEM32(ecx + eax * 4 + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001BF9BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF9BF
 * Original: 0x001BF9BF - 0x001BF9C4 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF9BF(void)
{

loc_001BF9BF: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001BF9C4
 * Original: 0x001BF9C4 - 0x001BFA40 (124 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF9C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF9C4: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFA3A; /* je: equal / zero */

loc_001BF9D2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFEu);
    POP32(esp, ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001BF9D9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFA28; /* jne: not equal / not zero */

loc_001BF9E0: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x78 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFA28; /* jne: not equal / not zero */

loc_001BF9E6: ;
    edx = esi + 2;

loc_001BF9E9: ;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFA1B; /* je: equal / zero */

loc_001BF9EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BF9FF; /* jl: less (signed <) */

loc_001BF9F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001BF9FF; /* jg: greater (signed >) */

loc_001BF9F7: ;
    eax = ZX8(LO8(eax));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001BFA0D;

loc_001BF9FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFA28; /* jl: less (signed <) */

loc_001BFA03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x66 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001BFA28; /* jg: greater (signed >) */

loc_001BFA07: ;
    eax = ZX8(LO8(eax));
    _fb = (uint32_t)(0x57) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x57;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001BFA0D: ;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BF9E9; /* jl: less (signed <) */

loc_001BFA1B: ;
    MEM16(ecx) = LO16(edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001BFA33;

loc_001BFA28: ;
    SET_LO16(eax, ZX8(MEM8(esi)));
    MEM16(ecx) = LO16(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001BFA33: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF9D9; /* jne: not equal / not zero */

loc_001BFA38: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001BFA3A: ;
    MEM16(ecx) = MEM16(ecx) & 0;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFA40
 * Original: 0x001BFA40 - 0x001BFA8B (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFA40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);

loc_001BFA4A: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFA85; /* je: equal / zero */

loc_001BFA52: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001BFA6C; /* jae: above or equal (unsigned >=) */

loc_001BFA58: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5C (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFA65; /* jne: not equal / not zero */

loc_001BFA5E: ;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), 0x78 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFA6C; /* je: equal / zero */

loc_001BFA65: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001BFA81;

loc_001BFA6C: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x3357E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BFA7Bu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001BFA7B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BFA81: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001BFA4A;

loc_001BFA85: ;
    MEM8(edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFA8B
 * Original: 0x001BFA8B - 0x001BFAA0 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFA8B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFA8B: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5280C8);
    PUSH32(esp, 0x001BFA9Cu); RECOMP_ABI_CALL(0x001C0344u, sub_001C0344); /* call 0x001C0344 */

loc_001BFA9C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BFAA0
 * Original: 0x001BFAA0 - 0x001BFB2E (142 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFAA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001BFAB3; /* jne: not equal / not zero */

loc_001BFAAF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001BFAB8;

loc_001BFAB3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFAB8; /* jne: not equal / not zero */

loc_001BFAB7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BFAB8: ;
    ecx = MEM32(0x5281C8);
    MEM32(0x5281C8) = MEM32(0x5281C8) + 1;
    _fa = (uint32_t)(MEM32(0x5281C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + 0xC) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x5280C8;

loc_001BFAD2: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFAEB; /* je: equal / zero */

loc_001BFAD8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFAED; /* jne: not equal / not zero */

loc_001BFADC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFAED; /* jne: not equal / not zero */

loc_001BFAE1: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFAEB; /* je: equal / zero */

loc_001BFAE6: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001BFAED;

loc_001BFAEB: ;
    eax = edi;

loc_001BFAED: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5281C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x5281C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFAD2; /* jl: less (signed <) */

loc_001BFAF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001BFB24; /* je: equal / zero */

loc_001BFAFF: ;
    ecx = MEM32(0x528364);
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x5280D4) = MEM32(eax + 0x5280D4) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x5280D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x5280C8) = esi;
    MEM32(eax + 0x5280CC) = ebx;
    MEM32(eax + 0x5280D0) = ecx;

loc_001BFB24: ;
    MEM32(0x5281C8) = MEM32(0x5281C8) - 1;
    _fa = (uint32_t)(MEM32(0x5281C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFB2E
 * Original: 0x001BFB2E - 0x001BFB5F (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFB2E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFB2E: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x5280C8;

loc_001BFB39: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFB49; /* je: equal / zero */

loc_001BFB3D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5281C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5281C8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFB39; /* jl: less (signed <) */

loc_001BFB49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFB5E; /* jge: greater or equal (signed >=) */

loc_001BFB4E: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + 0x5280C8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFB5E; /* jne: not equal / not zero */

loc_001BFB5B: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BFB5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BFB5F
 * Original: 0x001BFB5F - 0x001BFBC1 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFB5F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFB5F: ;
    eax = MEM32(0x528364);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5281CC) = eax;
    esi = 0x5280D0;

loc_001BFB72: ;
    ecx = MEM32(esi + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFBB1; /* je: equal / zero */

loc_001BFB79: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(0x528364)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528364), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFBB1; /* jl: less (signed <) */

loc_001BFB83: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFBB1; /* jne: not equal / not zero */

loc_001BFB89: ;
    edx = MEM32(0x528364);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 4) = 1;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x001BFB9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BFB9Du); } /* indirect call */
    }

loc_001BFB9F: ;
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(0x528364);
    _fb = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = eax;

loc_001BFBB1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5281D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5281D0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFB72; /* jl: less (signed <) */

loc_001BFBBC: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFBC1
 * Original: 0x001BFBC1 - 0x001BFBED (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFBC1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFBC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001BFBCAu); RECOMP_ABI_CALL(0x001C01E1u, sub_001C01E1); /* call 0x001C01E1 */

loc_001BFBCA: ;
    esi = eax;
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BFBDF;

loc_001BFBD2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFBE8; /* jne: not equal / not zero */

loc_001BFBD6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BFBDCu); RECOMP_ABI_CALL(0x001BFB5Fu, sub_001BFB5F); /* call 0x001BFB5F */

loc_001BFBDC: ;
    POP32(esp, ecx);
    edi = eax;

loc_001BFBDF: ;
    PUSH32(esp, 0x001BFBE4u); RECOMP_ABI_CALL(0x001C01E1u, sub_001C01E1); /* call 0x001C01E1 */

loc_001BFBE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFBD2; /* jl: less (signed <) */

loc_001BFBE8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFBED
 * Original: 0x001BFBED - 0x001BFC0B (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFBED(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFBED: ;
    PUSH32(esp, esi);
    esi = 0x5282CC;

loc_001BFBF3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFBFB; /* je: equal / zero */

loc_001BFBF9: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001BFBFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BFBF9u); } /* indirect call */
    }

loc_001BFBFB: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5281D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5281D0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFBF3; /* jge: greater or equal (signed >=) */

loc_001BFC09: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFC0B
 * Original: 0x001BFC0B - 0x001BFC25 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFC0B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFC0B: ;
    PUSH32(esp, 0x001BFC10u); RECOMP_ABI_CALL(0x001BFBEDu, sub_001BFBED); /* call 0x001BFBED */

loc_001BFC10: ;
    PUSH32(esp, 0x001BFC15u); RECOMP_ABI_CALL(0x001C0E94u, sub_001C0E94); /* call 0x001C0E94 */

loc_001BFC15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFC1B; /* je: equal / zero */

loc_001BFC19: ;
    /* int3: debug-trap slide byte, stepped over */
    esp += 4; return; /* ret */

loc_001BFC1B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BFC24u); RECOMP_ABI_CALL(0x001ED307u, sub_001ED307); /* call 0x001ED307 */

loc_001BFC24: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BFC25
 * Original: 0x001BFC25 - 0x001BFC57 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFC25(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFC25: ;
    ecx = MEM32(esp + 4);
    eax = 0x5281D0;

loc_001BFC2E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFC56; /* je: equal / zero */

loc_001BFC32: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5282D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5282D0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFC2E; /* jl: less (signed <) */

loc_001BFC3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BFC3E: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x5281D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x5281D0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFC4F; /* je: equal / zero */

loc_001BFC48: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFC3E; /* jl: less (signed <) */

loc_001BFC4E: ;
    esp += 4; return; /* ret */

loc_001BFC4F: ;
    MEM32(eax * 4 + 0x5281D0) = ecx;

loc_001BFC56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BFC57
 * Original: 0x001BFC57 - 0x001BFC76 (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFC57(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFC57: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BFC59: ;
    ecx = MEM32(eax * 4 + 0x5281D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFC6D; /* je: equal / zero */

loc_001BFC66: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFC59; /* jl: less (signed <) */

loc_001BFC6C: ;
    esp += 4; return; /* ret */

loc_001BFC6D: ;
    MEM32(eax * 4 + 0x5281D0) = MEM32(eax * 4 + 0x5281D0) & 0;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x5281D0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BFC76
 * Original: 0x001BFC76 - 0x001BFCBA (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFC76(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFC76: ;
    MEM32(0x5282E0) = MEM32(0x5282E0) & 0;
    _fa = (uint32_t)(MEM32(0x5282E0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x5282D8));
    PUSH32(esp, 0x001BFC89u); RECOMP_ABI_CALL(0x001F00BDu, sub_001F00BD); /* call 0x001F00BD */

loc_001BFC89: ;
    esi = 0x5282D0;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BFC94u); RECOMP_ABI_CALL(0x001C0770u, sub_001C0770); /* call 0x001C0770 */

loc_001BFC94: ;
    goto loc_001BFC9D;

loc_001BFC96: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001BFC9Du); RECOMP_ABI_CALL(0x001BFF14u, sub_001BFF14); /* call 0x001BFF14 */

loc_001BFC9D: ;
    _fa = (uint32_t)(MEM32(0x52835C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x52835C), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001BFC96; /* jne: not equal / not zero */

loc_001BFCA7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BFCADu); RECOMP_ABI_CALL(0x001C07C4u, sub_001C07C4); /* call 0x001C07C4 */

loc_001BFCAD: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BFCB5u); RECOMP_ABI_CALL(0x001C0283u, sub_001C0283); /* call 0x001C0283 */

loc_001BFCB5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFCBA
 * Original: 0x001BFCBA - 0x001BFD11 (87 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFCBA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFCBA: ;
    PUSH32(esp, edi);
    edi = 0x5282D0;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BFCC6u); RECOMP_ABI_CALL(0x001C0791u, sub_001C0791); /* call 0x001C0791 */

loc_001BFCC6: ;
    _fa = (uint32_t)(MEM32(0x5282E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5282E0), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001BFD08; /* je: equal / zero */

loc_001BFCD0: ;
    PUSH32(esp, esi);

loc_001BFCD1: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x528360) = MEM32(0x528360) + 1;
    _fa = (uint32_t)(MEM32(0x528360)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x528364) = MEM32(0x528364) + 1;
    _fa = (uint32_t)(MEM32(0x528364)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x52833C;

loc_001BFCE4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFCEC; /* je: equal / zero */

loc_001BFCEA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001BFCECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BFCEAu); } /* indirect call */
    }

loc_001BFCEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x52835C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x52835C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFCE4; /* jl: less (signed <) */

loc_001BFCF7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BFCFDu); RECOMP_ABI_CALL(0x001C0791u, sub_001C0791); /* call 0x001C0791 */

loc_001BFCFD: ;
    _fa = (uint32_t)(MEM32(0x5282E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5282E0), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001BFCD1; /* jne: not equal / not zero */

loc_001BFD07: ;
    POP32(esp, esi);

loc_001BFD08: ;
    MEM32(0x52835C) = MEM32(0x52835C) & 0;
    _fa = (uint32_t)(MEM32(0x52835C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFD11
 * Original: 0x001BFD11 - 0x001BFDC3 (178 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFD11(void)
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

loc_001BFD11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x5282E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x5282E4); /* addss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BFD38u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_001BFD38: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -8); /* subss */
    fp_push(MEMF(ebp + -8)); /* fld float */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEMF(0x5282E8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BFD57u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001BFD57: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x5282EC) = MEM32(0x5282EC) + eax;
    _fa = (uint32_t)(MEM32(0x5282EC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(0x5282E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5282E0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFDAB; /* je: equal / zero */

loc_001BFD66: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BFD6Bu); RECOMP_ABI_CALL(0x001EEAFEu, sub_001EEAFE); /* call 0x001EEAFE */

loc_001BFD6B: ;
    ecx = eax;
    eax = MEM32(0x5282EC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFD95; /* jge: greater or equal (signed >=) */

loc_001BFD7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFC18u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFC18u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFD92; /* jge: greater or equal (signed >=) */

loc_001BFD81: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BFD86u); RECOMP_ABI_CALL(0x001EEAFEu, sub_001EEAFE); /* call 0x001EEAFE */

loc_001BFD86: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5282F0) = MEM32(0x5282F0) + 1;
    _fa = (uint32_t)(MEM32(0x5282F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5282EC) = eax;

loc_001BFD92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BFD95: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BFD11);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BFDA6u); RECOMP_ABI_CALL(0x001EFF99u, sub_001EFF99); /* call 0x001EFF99 */

loc_001BFDA6: ;
    MEM32(0x5282D8) = eax;

loc_001BFDAB: ;
    _fa = (uint32_t)(MEM8(0x5282DC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5282DC), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFDBF; /* jne: not equal / not zero */

loc_001BFDB4: ;
    PUSH32(esp, 0x5282D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BFDBEu); RECOMP_ABI_CALL(0x001C0770u, sub_001C0770); /* call 0x001C0770 */

loc_001BFDBE: ;
    POP32(esp, ecx);

loc_001BFDBF: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BFDC3
 * Original: 0x001BFDC3 - 0x001BFE7E (187 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFDC3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFDC3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001BFDD3; /* jne: not equal / not zero */

loc_001BFDD0: ;
    PUSH32(esp, 0x64);
    POP32(esp, esi);

loc_001BFDD3: ;
    _fa = (uint32_t)(MEM32(0x528300)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528300), ebx (32-bit) */
    edi = 0x5282D0;
    if (CMP_NE(_fa, _fb)) goto loc_001BFE07; /* jne: not equal / not zero */

loc_001BFDE0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x52833C);
    PUSH32(esp, 0x001BFDECu); RECOMP_ABI_CALL(0x001C0283u, sub_001C0283); /* call 0x001C0283 */

loc_001BFDEC: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BFDF4u); RECOMP_ABI_CALL(0x001C0283u, sub_001C0283); /* call 0x001C0283 */

loc_001BFDF4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x528364) = ebx;
    MEM32(0x528300) = 1;

loc_001BFE07: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FEFB0)); /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    PUSH32(esp, edi);
    MEMF(0x5282E4) = xmm1.f[0]; /* movss */
    MEM32(0x528360) = ebx;
    PUSH32(esp, 0x001BFE2Bu); RECOMP_ABI_CALL(0x001C0752u, sub_001C0752); /* call 0x001C0752 */

loc_001BFE2B: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1BFCBA);
    edi = 0x5282F4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BFE3Fu); RECOMP_ABI_CALL(0x001C00AEu, sub_001C00AE); /* call 0x001C00AE */

loc_001BFE3F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BFE45u); RECOMP_ABI_CALL(0x001BFEFCu, sub_001BFEFC); /* call 0x001BFEFC */

loc_001BFE45: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x52835C) = esi;
    MEM32(0x5282E0) = esi;
    MEM8(0x5282DC) = 1;
    PUSH32(esp, 0x001BFE60u); RECOMP_ABI_CALL(0x001EEAFEu, sub_001EEAFE); /* call 0x001EEAFE */

loc_001BFE60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(0x5282EC) = eax;
    PUSH32(esp, 0x001BFE6Fu); RECOMP_ABI_CALL(0x001BFD11u, sub_001BFD11); /* call 0x001BFD11 */

loc_001BFE6F: ;
    eax = MEM32(0x52835C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x5282DC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFE7E
 * Original: 0x001BFE7E - 0x001BFEB1 (51 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFE7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFE7E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ebp + -16;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    MEM32(eax) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001BFEA2; /* je: equal / zero */

loc_001BFE9D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + -12); PUSH32(esp, 0x001BFEA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BFE9Du); } /* indirect call */
    }

loc_001BFEA0: ;
    goto loc_001BFEA9;

loc_001BFEA2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x001BFEA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BFEA5u); } /* indirect call */
    }

loc_001BFEA8: ;
    POP32(esp, ecx);

loc_001BFEA9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BFEB1
 * Original: 0x001BFEB1 - 0x001BFEC6 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFEB1(void)
{

loc_001BFEB1: ;
    MEM32(0x528308) = 0xFFFFFFFEu;
    PUSH32(esp, 0x001BFEC0u); RECOMP_ABI_CALL(0x001EF48Eu, sub_001EF48E); /* call 0x001EF48E */

loc_001BFEC0: ;
    MEM32(0x52830C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001BFEC6
 * Original: 0x001BFEC6 - 0x001BFED5 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFEC6(void)
{

loc_001BFEC6: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x528304);
    PUSH32(esp, 0x001BFED2u); RECOMP_ABI_CALL(0x001C0283u, sub_001C0283); /* call 0x001C0283 */

loc_001BFED2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFED5
 * Original: 0x001BFED5 - 0x001BFEF7 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFED5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFED5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFEE4; /* jne: not equal / not zero */

loc_001BFEDF: ;
    PUSH32(esp, 0xFFFFFFFEu);
    POP32(esp, eax);
    goto loc_001BFEEB;

loc_001BFEE4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFEF5; /* je: equal / zero */

loc_001BFEEB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFEF1u); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001BFEF1: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BFEF5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFEFC
 * Original: 0x001BFEFC - 0x001BFF14 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFEFC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFEFC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFF12; /* je: equal / zero */

loc_001BFF08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFF0Eu); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001BFF0E: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BFF12: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFF14
 * Original: 0x001BFF14 - 0x001BFF20 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFF14(void)
{

loc_001BFF14: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001BFF1Fu); RECOMP_ABI_CALL(0x001ED69Du, sub_001ED69D); /* call 0x001ED69D */

loc_001BFF1F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BFF20
 * Original: 0x001BFF20 - 0x001BFF43 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFF20: ;
    ecx = MEM32(0x52835C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFF2D; /* jne: not equal / not zero */

loc_001BFF2A: ;
    PUSH32(esp, 0x64);
    POP32(esp, ecx);

loc_001BFF2D: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFF42u); RECOMP_ABI_CALL(0x001ED69Du, sub_001ED69D); /* call 0x001ED69D */

loc_001BFF42: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BFF43
 * Original: 0x001BFF43 - 0x001BFF78 (53 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFF43(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001BFF43: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001BFF5E; /* jne: not equal / not zero */

loc_001BFF4C: ;
    PUSH32(esp, 0x001BFF51u); RECOMP_ABI_CALL(0x001EF48Eu, sub_001EF48E); /* call 0x001EF48E */

loc_001BFF51: ;
    _fb = (uint32_t)(MEM32(0x52830C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(0x52830C)));
    eax = eax - MEM32(0x52830C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_001BFF5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001BFF67; /* jne: not equal / not zero */

loc_001BFF63: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001BFF67: ;
    PUSH32(esp, 0x001BFF6Cu); RECOMP_ABI_CALL(0x001EF48Eu, sub_001EF48E); /* call 0x001EF48E */

loc_001BFF6C: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_001BFF75
 * Original: 0x001BFF75 - 0x001BFF78 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFF75(void)
{

loc_001BFF75: ;
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_001BFF77
 * Original: 0x001BFF77 - 0x001BFF78 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFF77(void)
{

loc_001BFF77: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BFF78
 * Original: 0x001BFF78 - 0x001BFFDB (99 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFF78(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFF78: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFF87; /* jne: not equal / not zero */

loc_001BFF80: ;
    eax = MEM32(0x528308);
    goto loc_001BFF94;

loc_001BFF87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFF91; /* jne: not equal / not zero */

loc_001BFF8C: ;
    PUSH32(esp, 0xFFFFFFFEu);
    POP32(esp, eax);
    goto loc_001BFF98;

loc_001BFF91: ;
    eax = MEM32(eax + 4);

loc_001BFF94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFFD8; /* je: equal / zero */

loc_001BFF98: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFF9Eu); RECOMP_ABI_CALL(0x001EF1C3u, sub_001EF1C3); /* call 0x001EF1C3 */

loc_001BFF9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF1u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFFD4; /* je: equal / zero */

loc_001BFFA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFFD0; /* je: equal / zero */

loc_001BFFA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFFCC; /* je: equal / zero */

loc_001BFFAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFFD8; /* je: equal / zero */

loc_001BFFB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFFC8; /* je: equal / zero */

loc_001BFFB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFFC4; /* je: equal / zero */

loc_001BFFBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFFD8; /* jne: not equal / not zero */

loc_001BFFC0: ;
    PUSH32(esp, 3);
    goto loc_001BFFD6;

loc_001BFFC4: ;
    PUSH32(esp, 2);
    goto loc_001BFFD6;

loc_001BFFC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_001BFFCC: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_001BFFD0: ;
    PUSH32(esp, 0xFFFFFFFEu);
    goto loc_001BFFD6;

loc_001BFFD4: ;
    PUSH32(esp, 0xFFFFFFFDu);

loc_001BFFD6: ;
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_001BFFD8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BFFDB
 * Original: 0x001BFFDB - 0x001C004C (113 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFFDB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFFDB: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFFEB; /* jne: not equal / not zero */

loc_001BFFE3: ;
    ecx = MEM32(0x528308);
    goto loc_001BFFF8;

loc_001BFFEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFFF5; /* jne: not equal / not zero */

loc_001BFFF0: ;
    PUSH32(esp, 0xFFFFFFFEu);
    POP32(esp, ecx);
    goto loc_001BFFFC;

loc_001BFFF5: ;
    ecx = MEM32(eax + 4);

loc_001BFFF8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0049; /* je: equal / zero */

loc_001BFFFC: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C003C; /* je: equal / zero */

loc_001C0005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0038; /* je: equal / zero */

loc_001C000A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0033; /* je: equal / zero */

loc_001C000F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0022; /* je: equal / zero */

loc_001C0013: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C002E; /* je: equal / zero */

loc_001C0018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C002A; /* je: equal / zero */

loc_001C001D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0026; /* je: equal / zero */

loc_001C0022: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C003F;

loc_001C0026: ;
    PUSH32(esp, 0xF);
    goto loc_001C003E;

loc_001C002A: ;
    PUSH32(esp, 2);
    goto loc_001C003E;

loc_001C002E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001C003F;

loc_001C0033: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C003F;

loc_001C0038: ;
    PUSH32(esp, 0xFFFFFFFEu);
    goto loc_001C003E;

loc_001C003C: ;
    PUSH32(esp, 0xFFFFFFF1u);

loc_001C003E: ;
    POP32(esp, eax);

loc_001C003F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C0046u); RECOMP_ABI_CALL(0x001EF171u, sub_001EF171); /* call 0x001EF171 */

loc_001C0046: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001C0049: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0000
 * Original: 0x001C0000 - 0x001C004C (76 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0000: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C003C; /* je: equal / zero */

loc_001C0005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0038; /* je: equal / zero */

loc_001C000A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0033; /* je: equal / zero */

loc_001C000F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0022; /* je: equal / zero */

loc_001C0013: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C002E; /* je: equal / zero */

loc_001C0018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C002A; /* je: equal / zero */

loc_001C001D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0026; /* je: equal / zero */

loc_001C0022: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C003F;

loc_001C0026: ;
    PUSH32(esp, 0xF);
    goto loc_001C003E;

loc_001C002A: ;
    PUSH32(esp, 2);
    goto loc_001C003E;

loc_001C002E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001C003F;

loc_001C0033: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C003F;

loc_001C0038: ;
    PUSH32(esp, 0xFFFFFFFEu);
    goto loc_001C003E;

loc_001C003C: ;
    PUSH32(esp, 0xFFFFFFF1u);

loc_001C003E: ;
    POP32(esp, eax);

loc_001C003F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C0046u); RECOMP_ABI_CALL(0x001EF171u, sub_001EF171); /* call 0x001EF171 */

loc_001C0046: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001C000A
 * Original: 0x001C000A - 0x001C004C (66 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C000A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C000A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0033; /* je: equal / zero */

loc_001C000F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0022; /* je: equal / zero */

loc_001C0013: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C002E; /* je: equal / zero */

loc_001C0018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C002A; /* je: equal / zero */

loc_001C001D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0026; /* je: equal / zero */

loc_001C0022: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C003F;

loc_001C0026: ;
    PUSH32(esp, 0xF);
    goto loc_001C003E;

loc_001C002A: ;
    PUSH32(esp, 2);
    goto loc_001C003E;

loc_001C002E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001C003F;

loc_001C0033: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C003F;

    PUSH32(esp, 0xFFFFFFFEu);
    goto loc_001C003E;

    PUSH32(esp, 0xFFFFFFF1u);

loc_001C003E: ;
    POP32(esp, eax);

loc_001C003F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C0046u); RECOMP_ABI_CALL(0x001EF171u, sub_001EF171); /* call 0x001EF171 */

loc_001C0046: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0013
 * Original: 0x001C0013 - 0x001C004C (57 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0013(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0013: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C002E; /* je: equal / zero */

loc_001C0018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C002A; /* je: equal / zero */

loc_001C001D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0026; /* je: equal / zero */

loc_001C0022: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C003F;

loc_001C0026: ;
    PUSH32(esp, 0xF);
    goto loc_001C003E;

loc_001C002A: ;
    PUSH32(esp, 2);
    goto loc_001C003E;

loc_001C002E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001C003F;

    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C003F;

    PUSH32(esp, 0xFFFFFFFEu);
    goto loc_001C003E;

    PUSH32(esp, 0xFFFFFFF1u);

loc_001C003E: ;
    POP32(esp, eax);

loc_001C003F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C0046u); RECOMP_ABI_CALL(0x001EF171u, sub_001EF171); /* call 0x001EF171 */

loc_001C0046: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001C002E
 * Original: 0x001C002E - 0x001C004C (30 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C002E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C002E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001C003F;

    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C003F;

    PUSH32(esp, 0xFFFFFFFEu);
    goto loc_001C003E;

    PUSH32(esp, 0xFFFFFFF1u);

loc_001C003E: ;
    POP32(esp, eax);

loc_001C003F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C0046u); RECOMP_ABI_CALL(0x001EF171u, sub_001EF171); /* call 0x001EF171 */

loc_001C0046: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0040
 * Original: 0x001C0040 - 0x001C004C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0040: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C0046u); RECOMP_ABI_CALL(0x001EF171u, sub_001EF171); /* call 0x001EF171 */

loc_001C0046: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0049
 * Original: 0x001C0049 - 0x001C004C (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0049(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0049: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C004C
 * Original: 0x001C004C - 0x001C0074 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C004C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C004C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C005Eu); RECOMP_ABI_CALL(0x001EF2A5u, sub_001EF2A5); /* call 0x001EF2A5 */

loc_001C005E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0070; /* je: equal / zero */

loc_001C0062: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x103 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C0070: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0074
 * Original: 0x001C0074 - 0x001C00A6 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0074(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0074: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C007Bu); RECOMP_ABI_CALL(0x001C01E1u, sub_001C01E1); /* call 0x001C01E1 */

loc_001C007B: ;
    esi = eax;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C0081: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001C008Au); RECOMP_ABI_CALL(0x001C004Cu, sub_001C004C); /* call 0x001C004C */

loc_001C008A: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001C00A1; /* jne: not equal / not zero */

loc_001C0091: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0081; /* je: equal / zero */

loc_001C0098: ;
    PUSH32(esp, 0x001C009Du); RECOMP_ABI_CALL(0x001C01E1u, sub_001C01E1); /* call 0x001C01E1 */

loc_001C009D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0081; /* jl: less (signed <) */

loc_001C00A1: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C00AE
 * Original: 0x001C00AE - 0x001C0113 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C00AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C00AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = eax;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BFE7E);
    PUSH32(esp, MEM32(ebp + 0x14));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -16) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C00DFu); RECOMP_ABI_CALL(0x001EF420u, sub_001EF420); /* call 0x001EF420 */

loc_001C00DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001C010D; /* je: equal / zero */

loc_001C00E6: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C00EFu); RECOMP_ABI_CALL(0x001BFFDBu, sub_001BFFDB); /* call 0x001BFFDB */

loc_001C00EF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C00F9u); RECOMP_ABI_CALL(0x001EF217u, sub_001EF217); /* call 0x001EF217 */

loc_001C00F9: ;
    goto loc_001C0104;

loc_001C00FB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0104u); RECOMP_ABI_CALL(0x001ED69Du, sub_001ED69D); /* call 0x001ED69D */

loc_001C0104: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C00FB; /* je: equal / zero */

loc_001C0109: ;
    SET_LO8(eax, 1);
    goto loc_001C010F;

loc_001C010D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001C010F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0113
 * Original: 0x001C0113 - 0x001C017E (107 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0113(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0113: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = eax;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1BFE7E);
    PUSH32(esp, MEM32(ebp + 0x18));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C014Au); RECOMP_ABI_CALL(0x001EF420u, sub_001EF420); /* call 0x001EF420 */

loc_001C014A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001C0178; /* je: equal / zero */

loc_001C0151: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C015Au); RECOMP_ABI_CALL(0x001BFFDBu, sub_001BFFDB); /* call 0x001BFFDB */

loc_001C015A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0164u); RECOMP_ABI_CALL(0x001EF217u, sub_001EF217); /* call 0x001EF217 */

loc_001C0164: ;
    goto loc_001C016F;

loc_001C0166: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C016Fu); RECOMP_ABI_CALL(0x001ED69Du, sub_001ED69D); /* call 0x001ED69D */

loc_001C016F: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0166; /* je: equal / zero */

loc_001C0174: ;
    SET_LO8(eax, 1);
    goto loc_001C017A;

loc_001C0178: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001C017A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001C017E
 * Original: 0x001C017E - 0x001C01A1 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C017E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C017E: ;
    eax = MEM32(0x37D860);
    MEM32(0x528314) = MEM32(0x528314) & 0;
    _fa = (uint32_t)(MEM32(0x528314)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x528310) = eax;
    esi = 0x3357F0;
    edi = 0x528318;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C01A1
 * Original: 0x001C01A1 - 0x001C01A7 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C01A1(void)
{

loc_001C01A1: ;
    eax = 0x528310;
    esp += 4; return; /* ret */

}

/**
 * sub_001C01A7
 * Original: 0x001C01A7 - 0x001C01B8 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C01A7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C01A7: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x2FE5C0); PUSH32(esp, 0x001C01B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C01AFu); } /* indirect call */
    }

loc_001C01B5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C01B8
 * Original: 0x001C01B8 - 0x001C01C3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C01B8(void)
{

loc_001C01B8: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x6D757446;
    esp += 4; return; /* ret */

}

/**
 * sub_001C01C3
 * Original: 0x001C01C3 - 0x001C01D2 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C01C3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C01C3: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x2FE5C4); PUSH32(esp, 0x001C01D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C01CBu); } /* indirect call */
    }

loc_001C01D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C01D2
 * Original: 0x001C01D2 - 0x001C01E1 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C01D2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C01D2: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x2FE5C8); PUSH32(esp, 0x001C01E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C01DAu); } /* indirect call */
    }

loc_001C01E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C01E1
 * Original: 0x001C01E1 - 0x001C01E7 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C01E1(void)
{

loc_001C01E1: ;
    eax = MEM32(0x528360);
    esp += 4; return; /* ret */

}

/**
 * sub_001C01E7
 * Original: 0x001C01E7 - 0x001C01FA (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C01E7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C01E7: ;
    eax = MEM32(0x528360);
    ecx = MEM32(0x52832C);
    MEM32(0x52832C) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0235
 * Original: 0x001C0235 - 0x001C025D (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0235(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0235: ;
    PUSH32(esp, esi);
    esi = MEM32(0x528360);
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001C0252;

loc_001C0242: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C0249u); RECOMP_ABI_CALL(0x001BFB5Fu, sub_001BFB5F); /* call 0x001BFB5F */

loc_001C0249: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C0250u); RECOMP_ABI_CALL(0x001BFF14u, sub_001BFF14); /* call 0x001BFF14 */

loc_001C0250: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_001C0252: ;
    eax = MEM32(0x528360);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_001C0242; /* js: sign (negative) */

loc_001C025B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C025D
 * Original: 0x001C025D - 0x001C0263 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C025D(void)
{

loc_001C025D: ;
    eax = MEM32(0x52835C);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0283
 * Original: 0x001C0283 - 0x001C0296 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0283(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0283: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001C0292u); RECOMP_ABI_CALL(0x001C0EA0u, sub_001C0EA0); /* call 0x001C0EA0 */

loc_001C0292: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0296
 * Original: 0x001C0296 - 0x001C02DA (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0296(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0296: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C02BD; /* je: equal / zero */

loc_001C02A5: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -512;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C02B8u); RECOMP_ABI_CALL(0x002BF3D9u, sub_002BF3D9); /* call 0x002BF3D9 */

loc_001C02B8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001C02C4;

loc_001C02BD: ;
    MEM8(ebp + -512) = 0;

loc_001C02C4: ;
    eax = ebp + -512;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3357FC);
    { uint32_t _icall_target = MEM32(0x37D864); PUSH32(esp, 0x001C02D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C02D0u); } /* indirect call */
    }

loc_001C02D6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001C02DA
 * Original: 0x001C02DA - 0x001C0344 (106 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C02DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C02DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0301; /* je: equal / zero */

loc_001C02E9: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -512;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C02FCu); RECOMP_ABI_CALL(0x002BF3D9u, sub_002BF3D9); /* call 0x002BF3D9 */

loc_001C02FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001C0308;

loc_001C0301: ;
    MEM8(ebp + -512) = 0;

loc_001C0308: ;
    eax = ebp + -512;
    PUSH32(esp, eax);
    PUSH32(esp, 0x335800);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C031Bu); RECOMP_ABI_CALL(0x001C05C0u, sub_001C05C0); /* call 0x001C05C0 */

loc_001C031B: ;
    eax = MEM32(0x528330);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C033D; /* je: equal / zero */

loc_001C0327: ;
    PUSH32(esp, MEM32(0x528334));
    PUSH32(esp, eax);
    PUSH32(esp, 0x33580C);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C033Au); RECOMP_ABI_CALL(0x001C05C0u, sub_001C05C0); /* call 0x001C05C0 */

loc_001C033A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C033D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0342u); RECOMP_ABI_CALL(0x001BFC0Bu, sub_001BFC0B); /* call 0x001BFC0B */

loc_001C0342: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0344
 * Original: 0x001C0344 - 0x001C03F7 (179 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0344(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0344: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    if (CMP_L(_fas, _fbs)) goto loc_001C035D; /* jl: less (signed <) */

loc_001C0355: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C035D; /* je: equal / zero */

loc_001C0359: ;
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001C035D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    POP32(esp, edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0370; /* jl: less (signed <) */

loc_001C0365: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0370; /* je: equal / zero */

loc_001C0369: ;
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C0370: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    POP32(esp, ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C03B9; /* jl: less (signed <) */

loc_001C0378: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C03B9; /* je: equal / zero */

loc_001C037C: ;
    MEM32(eax) = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001C03B9;

loc_001C0384: ;
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
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C03B9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C0384; /* jge: greater or equal (signed >=) */

loc_001C03BE: ;
    goto loc_001C03D1;

loc_001C03C0: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C03D1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C03C0; /* jge: greater or equal (signed >=) */

loc_001C03D6: ;
    goto loc_001C03DE;

loc_001C03D8: ;
    MEM32(eax) = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C03DE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C03D8; /* jge: greater or equal (signed >=) */

loc_001C03E2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    POP32(esp, ebx);
    if (CMP_L(_fas, _fbs)) goto loc_001C03EE; /* jl: less (signed <) */

loc_001C03E7: ;
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C03EE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001C03F6; /* jl: less (signed <) */

loc_001C03F4: ;
    MEM8(eax) = LO8(ecx);

loc_001C03F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C040D
 * Original: 0x001C040D - 0x001C047C (111 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C040D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C040D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0436; /* jne: not equal / not zero */

loc_001C0411: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), ecx (32-bit) */
    eax = 0x37D86C;
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001C0422: ;
    edx = MEM32(eax);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37DA6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37DA6C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0422; /* jl: less (signed <) */

loc_001C0435: ;
    esp += 4; return; /* ret */

loc_001C0436: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0464; /* jne: not equal / not zero */

loc_001C043B: ;
    eax = 0x37D86C;

loc_001C0440: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0459; /* je: equal / zero */

loc_001C0447: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), edx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;

loc_001C0459: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37DA6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37DA6C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0440; /* jl: less (signed <) */

loc_001C0463: ;
    esp += 4; return; /* ret */

loc_001C0464: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), ecx (32-bit) */
    eax = eax * 8 + 0x37D86C;
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx ^ MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = MEM32(eax) ^ ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C048D
 * Original: 0x001C048D - 0x001C04C2 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C048D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C048D: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + 0x37DA7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x37DA7C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C04C0; /* je: equal / zero */

loc_001C04A1: ;
    _fa = (uint32_t)(MEM32(0x52836C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x52836C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C04AF; /* jne: not equal / not zero */

loc_001C04AA: ;
    PUSH32(esp, 0x001C04AFu); RECOMP_ABI_CALL(0x001C04DFu, sub_001C04DF); /* call 0x001C04DF */

loc_001C04AF: ;
    eax = esi + 0x37DA80;
    ecx = MEM32(eax);
    ecx = ecx ^ MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = MEM32(eax) ^ ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C04C0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C04C2
 * Original: 0x001C04C2 - 0x001C04DF (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C04C2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C04C2: ;
    _fa = (uint32_t)(MEM32(0x52836C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x52836C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C04D0; /* jne: not equal / not zero */

loc_001C04CB: ;
    PUSH32(esp, 0x001C04D0u); RECOMP_ABI_CALL(0x001C04DFu, sub_001C04DF); /* call 0x001C04DF */

loc_001C04D0: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x001C04DDu); RECOMP_ABI_CALL(0x001C040Du, sub_001C040D); /* call 0x001C040D */

loc_001C04DD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C04DF
 * Original: 0x001C04DF - 0x001C0555 (118 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C04DF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C04DF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x52836C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x52836C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0554; /* jne: not equal / not zero */

loc_001C04E9: ;
    MEM32(0x52836C) = 1;
    eax = 0x37DA80;

loc_001C04F8: ;
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37DAE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37DAE0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C04F8; /* jl: less (signed <) */

loc_001C0505: ;
    eax = 0x37D86C;
    ecx = 0x37DA6C;

loc_001C050F: ;
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C050F; /* jl: less (signed <) */

loc_001C0519: ;
    eax = 0x37DAAC;

loc_001C051E: ;
    MEM32(eax + -4) = edx;
    MEM32(eax) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37DADC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37DADC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C051E; /* jl: less (signed <) */

loc_001C052D: ;
    eax = 0x37D8DC;

loc_001C0532: ;
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + -4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0532; /* jl: less (signed <) */

loc_001C053F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001C0548u); RECOMP_ABI_CALL(0x001C04C2u, sub_001C04C2); /* call 0x001C04C2 */

loc_001C0548: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001C0551u); RECOMP_ABI_CALL(0x001C048Du, sub_001C048D); /* call 0x001C048D */

loc_001C0551: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C0554: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0555
 * Original: 0x001C0555 - 0x001C05C0 (107 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0555(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0555: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x2000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0562u); RECOMP_ABI_CALL(0x002BE550u, sub_002BE550); /* call 0x002BE550 */

loc_001C0562: ;
    _fa = (uint32_t)(MEM32(0x52836C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x52836C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0570; /* jne: not equal / not zero */

loc_001C056B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0570u); RECOMP_ABI_CALL(0x001C04DFu, sub_001C04DF); /* call 0x001C04DF */

loc_001C0570: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edi * 8 + 0x37D86C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi * 8 + 0x37D86C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C05BD; /* je: equal / zero */

loc_001C057E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8192;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0591u); RECOMP_ABI_CALL(0x002BF3D9u, sub_002BF3D9); /* call 0x002BF3D9 */

loc_001C0591: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x37DA7C;

loc_001C0599: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C05B1; /* je: equal / zero */

loc_001C059F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C05B1; /* je: equal / zero */

loc_001C05A5: ;
    ecx = ebp + -8192;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001C05AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C05ADu); } /* indirect call */
    }

loc_001C05AF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_001C05B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37DADC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x37DADC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0599; /* jl: less (signed <) */

loc_001C05BC: ;
    POP32(esp, esi);

loc_001C05BD: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001C05C0
 * Original: 0x001C05C0 - 0x001C05D6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C05C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C05C0: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001C05D2u); RECOMP_ABI_CALL(0x001C0555u, sub_001C0555); /* call 0x001C0555 */

loc_001C05D2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C069F
 * Original: 0x001C069F - 0x001C06D7 (56 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C069F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C069F: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001C06CA; /* jbe: below or equal (unsigned <=) */

loc_001C06B0: ;
    edx = esi + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C06CA; /* jae: above or equal (unsigned >=) */

loc_001C06B7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C06D5; /* je: equal / zero */

loc_001C06BD: ;
    esi = eax;

loc_001C06BF: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(edx));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    if ((_fa != 0)) goto loc_001C06BF; /* jne: not equal / not zero */

loc_001C06C8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C06CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C06D2u); RECOMP_ABI_CALL(0x001C06ECu, sub_001C06EC); /* call 0x001C06EC */

loc_001C06D2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C06D5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C06EC
 * Original: 0x001C06EC - 0x001C0752 (102 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C06EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C06EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    goto loc_001C0706;

loc_001C06F7: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C070B; /* jle: less or equal (signed <=) */

loc_001C06FD: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001C0706: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C06F7; /* jne: not equal / not zero */

loc_001C070B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001C073F; /* jne: not equal / not zero */

loc_001C0710: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C073F; /* jl: less (signed <) */

loc_001C0716: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_001C0718: ;
    edx = MEM32(ecx + 4);
    esi = MEM32(ecx + 8);
    edi = MEM32(ecx + 0xC);
    ebx = MEM32(ecx);
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x10);
    POP32(esp, edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - edx;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = ebx;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C0718; /* jge: greater or equal (signed >=) */

loc_001C073D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001C073F: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C074F; /* jle: less or equal (signed <=) */

loc_001C0746: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C0746; /* jne: not equal / not zero */

loc_001C074F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0752
 * Original: 0x001C0752 - 0x001C0770 (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0752(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0752: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C075Fu); RECOMP_ABI_CALL(0x001ED542u, sub_001ED542); /* call 0x001ED542 */

loc_001C075F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C076D; /* je: equal / zero */

loc_001C0763: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001C076D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0770
 * Original: 0x001C0770 - 0x001C077D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0770(void)
{

loc_001C0770: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0x001C077Cu); RECOMP_ABI_CALL(0x001ED5A3u, sub_001ED5A3); /* call 0x001ED5A3 */

loc_001C077C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0791
 * Original: 0x001C0791 - 0x001C07A0 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0791(void)
{

loc_001C0791: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0x001C079Fu); RECOMP_ABI_CALL(0x001ED6EFu, sub_001ED6EF); /* call 0x001ED6EF */

loc_001C079F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C07C4
 * Original: 0x001C07C4 - 0x001C07D1 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C07C4(void)
{

loc_001C07C4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0x001C07D0u); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001C07D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C07D1
 * Original: 0x001C07D1 - 0x001C07D6 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C07D1(void)
{

loc_001C07D1: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001C07D6
 * Original: 0x001C07D6 - 0x001C07EB (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C07D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C07D6: ;
    goto loc_001C07E4;

loc_001C07D8: ;
    ecx = MEM32(esp + 4);
    MEM32(esp + 4) = MEM32(esp + 4) - 1;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C07EA; /* je: equal / zero */

loc_001C07E4: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C07D8; /* jne: not equal / not zero */

loc_001C07EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C07EB
 * Original: 0x001C07EB - 0x001C0864 (121 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C07EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C07EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001C085F; /* je: equal / zero */

loc_001C07F8: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001C085E; /* jbe: below or equal (unsigned <=) */

loc_001C07FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0826; /* jne: not equal / not zero */

loc_001C0808: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    MEM32(ebp + -4) = 1;
    MEM32(ecx) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001C081F; /* jne: not equal / not zero */

loc_001C0817: ;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    goto loc_001C0856;

loc_001C081F: ;
    esi = MEM32(edx);
    MEM32(ecx + 8) = esi;
    goto loc_001C0856;

loc_001C0826: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C085C; /* je: equal / zero */

loc_001C082A: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0836; /* je: equal / zero */

loc_001C0830: ;
    esi = ebx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C082A; /* jne: not equal / not zero */

loc_001C0836: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C085C; /* je: equal / zero */

loc_001C083C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C085C; /* jne: not equal / not zero */

loc_001C0840: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = edi;
    edi = MEM32(edx);
    MEM32(esi) = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    MEM32(ebp + -4) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001C0856; /* jne: not equal / not zero */

loc_001C0853: ;
    MEM32(ecx + 0xC) = esi;

loc_001C0856: ;
    MEM32(edx) = eax;
    MEM32(ecx + 4) = MEM32(ecx + 4) | 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C085C: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001C085E: ;
    POP32(esp, edi);

loc_001C085F: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0864
 * Original: 0x001C0864 - 0x001C089F (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0864(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0864: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0872u); RECOMP_ABI_CALL(0x001C01A7u, sub_001C01A7); /* call 0x001C01A7 */

loc_001C0872: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    MEM32(esi) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ecx);
    MEM32(esi + 4) = 2;
    if (CMP_NE(_fa, _fb)) goto loc_001C0893; /* jne: not equal / not zero */

loc_001C088E: ;
    eax = 0x1C07D1;

loc_001C0893: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C089F
 * Original: 0x001C089F - 0x001C08DC (61 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C089F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C089F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    edi = eax + 0x18;
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + 0xC);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001C08D1; /* jne: not equal / not zero */

loc_001C08CC: ;
    ecx = 0x1C07D1;

loc_001C08D1: ;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x14) = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C08F1
 * Original: 0x001C08F1 - 0x001C0929 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C08F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C08F1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0900u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0900: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C091F; /* je: equal / zero */

loc_001C0909: ;
    ecx = MEM32(esi + 8);
    MEM32(eax) = ecx;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C091B; /* jne: not equal / not zero */

loc_001C0918: ;
    MEM32(esi + 0xC) = eax;

loc_001C091B: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C091F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0925u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0925: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0929
 * Original: 0x001C0929 - 0x001C0965 (60 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0929(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0929: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0938u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0938: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C095B; /* je: equal / zero */

loc_001C0941: ;
    ecx = MEM32(esi + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001C0955; /* jne: not equal / not zero */

loc_001C0950: ;
    MEM32(esi + 8) = eax;
    goto loc_001C0957;

loc_001C0955: ;
    MEM32(ecx) = eax;

loc_001C0957: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C095B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0961u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0961: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0965
 * Original: 0x001C0965 - 0x001C09A6 (65 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0965(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0965: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = esi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0975u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0975: ;
    edi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0995; /* je: equal / zero */

loc_001C097F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C098C; /* jne: not equal / not zero */

loc_001C0984: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = eax;
    goto loc_001C0991;

loc_001C098C: ;
    ecx = MEM32(edi);
    MEM32(esi + 8) = ecx;

loc_001C0991: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = eax;

loc_001C0995: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C099Fu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C099F: ;
    POP32(esp, ecx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C09A6
 * Original: 0x001C09A6 - 0x001C09F7 (81 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C09A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C09A6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = esi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C09B6u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C09B6: ;
    edi = MEM32(esi + 0xC);
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C09E6; /* je: equal / zero */

loc_001C09C0: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C09DE; /* je: equal / zero */

loc_001C09C9: ;
    MEM32(esi + 0xC) = eax;
    goto loc_001C09D3;

loc_001C09CE: ;
    eax = MEM32(eax);
    MEM32(esi + 0xC) = eax;

loc_001C09D3: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    eax = MEM32(esi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_001C09CE; /* jne: not equal / not zero */

loc_001C09DA: ;
    MEM32(eax) = ecx;
    goto loc_001C09E4;

loc_001C09DE: ;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;

loc_001C09E4: ;
    MEM32(edi) = ecx;

loc_001C09E6: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C09F0u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C09F0: ;
    POP32(esp, ecx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C09F7
 * Original: 0x001C09F7 - 0x001C0A6C (117 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C09F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C09F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0A0Cu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0A0C: ;
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0A5F; /* je: equal / zero */

loc_001C0A14: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x001C0A1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0A19u); } /* indirect call */
    }

loc_001C0A1C: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(esi + 8);
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + 0xC) = eax;
    goto loc_001C0A3F;

loc_001C0A2C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x001C0A33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0A30u); } /* indirect call */
    }

loc_001C0A33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_AE(_fa, _fb)) goto loc_001C0A43; /* jae: above or equal (unsigned >=) */

loc_001C0A3A: ;
    MEM32(ebp + 8) = edi;
    edi = MEM32(edi);

loc_001C0A3F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0A2C; /* jne: not equal / not zero */

loc_001C0A43: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001C0A51; /* jne: not equal / not zero */

loc_001C0A4C: ;
    MEM32(esi + 8) = ebx;
    goto loc_001C0A53;

loc_001C0A51: ;
    MEM32(eax) = ebx;

loc_001C0A53: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001C0A5B; /* jne: not equal / not zero */

loc_001C0A58: ;
    MEM32(esi + 0xC) = ebx;

loc_001C0A5B: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C0A5F: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0A67u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0A67: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0A6C
 * Original: 0x001C0A6C - 0x001C0A9D (49 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0A6C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0A6C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edi + 0x18;
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001C0A7Eu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0A7E: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0A90; /* je: equal / zero */

loc_001C0A87: ;
    ecx = edi;
    PUSH32(esp, 0x001C0A8Eu); RECOMP_ABI_CALL(0x001C07EBu, sub_001C07EB); /* call 0x001C07EB */

loc_001C0A8E: ;
    ebx = eax;

loc_001C0A90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C0A96u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0A96: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0AA4
 * Original: 0x001C0AA4 - 0x001C0AE5 (65 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0AA4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0AA4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001C0AB6u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0AB6: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0AD5; /* je: equal / zero */

loc_001C0ABD: ;
    eax = MEM32(esi + 8);
    goto loc_001C0ACB;

loc_001C0AC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0AD8; /* je: equal / zero */

loc_001C0AC8: ;
    eax = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001C0ACB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0AC2; /* jne: not equal / not zero */

loc_001C0ACF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0AD8; /* je: equal / zero */

loc_001C0AD5: ;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C0AD8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0ADEu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0ADE: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0AE5
 * Original: 0x001C0AE5 - 0x001C0B18 (51 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0AE5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0AE5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001C0AF8u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0AF8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0B0B; /* je: equal / zero */

loc_001C0B00: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x001C0B07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0B04u); } /* indirect call */
    }

loc_001C0B07: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebx = eax;

loc_001C0B0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0B11u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0B11: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0B18
 * Original: 0x001C0B18 - 0x001C0B4B (51 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0B18(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0B18: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001C0B2Bu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0B2B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0B3E; /* je: equal / zero */

loc_001C0B33: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x001C0B3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0B37u); } /* indirect call */
    }

loc_001C0B3A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebx = eax;

loc_001C0B3E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0B44u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0B44: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0B4B
 * Original: 0x001C0B4B - 0x001C0B88 (61 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0B4B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0B4B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0B5Au); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0B5A: ;
    esi = MEM32(esi + 8);
    POP32(esp, ecx);
    goto loc_001C0B78;

loc_001C0B60: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0B7C; /* je: equal / zero */

loc_001C0B67: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esp + 0x18); PUSH32(esp, 0x001C0B70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0B6Cu); } /* indirect call */
    }

loc_001C0B70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001C0B7C; /* jne: not equal / not zero */

loc_001C0B76: ;
    esi = MEM32(esi);

loc_001C0B78: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0B60; /* jne: not equal / not zero */

loc_001C0B7C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0B82u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0B82: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0B88
 * Original: 0x001C0B88 - 0x001C0BC1 (57 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0B88(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0B88: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0B97u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0B97: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0BB3; /* je: equal / zero */

loc_001C0B9F: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001C0BAF; /* jbe: below or equal (unsigned <=) */

loc_001C0BA7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C0BAEu); RECOMP_ABI_CALL(0x001C07D6u, sub_001C07D6); /* call 0x001C07D6 */

loc_001C0BAE: ;
    POP32(esp, ecx);

loc_001C0BAF: ;
    esi = eax;
    goto loc_001C0BB5;

loc_001C0BB3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C0BB5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0BBBu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0BBB: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0BC1
 * Original: 0x001C0BC1 - 0x001C0C10 (79 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0BC1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0BC1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = esi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0BD1u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0BD1: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0C03; /* je: equal / zero */

loc_001C0BD9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x001C0BE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0BDDu); } /* indirect call */
    }

loc_001C0BE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_AE(_fa, _fb)) goto loc_001C0BEE; /* jae: above or equal (unsigned >=) */

loc_001C0BE8: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0BD9; /* jne: not equal / not zero */

loc_001C0BEE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0C03; /* je: equal / zero */

loc_001C0BF2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x001C0BF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0BF6u); } /* indirect call */
    }

loc_001C0BF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0C03; /* je: equal / zero */

loc_001C0C01: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C0C03: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0C09u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0C09: ;
    POP32(esp, ecx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0C10
 * Original: 0x001C0C10 - 0x001C0C64 (84 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0C10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = edi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0C20u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0C20: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0C57; /* je: equal / zero */

loc_001C0C28: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0C44; /* je: equal / zero */

loc_001C0C2F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esp + 0x1C); PUSH32(esp, 0x001C0C38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0C34u); } /* indirect call */
    }

loc_001C0C38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001C0C44; /* jne: not equal / not zero */

loc_001C0C3E: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0C28; /* jne: not equal / not zero */

loc_001C0C44: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0C57; /* je: equal / zero */

loc_001C0C48: ;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0x001C0C51u); RECOMP_ABI_CALL(0x001C07EBu, sub_001C07EB); /* call 0x001C07EB */

loc_001C0C51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0C57; /* jne: not equal / not zero */

loc_001C0C55: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C0C57: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0C5Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0C5D: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0C64
 * Original: 0x001C0C64 - 0x001C0CAE (74 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0C64(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0C64: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = esi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0C74u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0C74: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0C9F; /* je: equal / zero */

loc_001C0C7C: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001C0C8C; /* jbe: below or equal (unsigned <=) */

loc_001C0C84: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C0C8Bu); RECOMP_ABI_CALL(0x001C07D6u, sub_001C07D6); /* call 0x001C07D6 */

loc_001C0C8B: ;
    POP32(esp, ecx);

loc_001C0C8C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0CA1; /* je: equal / zero */

loc_001C0C92: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x001C0C9Bu); RECOMP_ABI_CALL(0x001C07EBu, sub_001C07EB); /* call 0x001C07EB */

loc_001C0C9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0CA1; /* jne: not equal / not zero */

loc_001C0C9F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C0CA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0CA7u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0CA7: ;
    POP32(esp, ecx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0CAE
 * Original: 0x001C0CAE - 0x001C0CEF (65 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0CAE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0CAE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = edi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0CBEu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0CBE: ;
    PUSH32(esp, MEM32(esp + 0x1C));
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0x001C0CCBu); RECOMP_ABI_CALL(0x001C07D6u, sub_001C07D6); /* call 0x001C07D6 */

loc_001C0CCB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0CE2; /* je: equal / zero */

loc_001C0CD3: ;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0x001C0CDCu); RECOMP_ABI_CALL(0x001C07EBu, sub_001C07EB); /* call 0x001C07EB */

loc_001C0CDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0CE2; /* jne: not equal / not zero */

loc_001C0CE0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C0CE2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0CE8u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0CE8: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0CEF
 * Original: 0x001C0CEF - 0x001C0D4B (92 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0CEF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0CEF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = esi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0CFFu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0CFF: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0D3C; /* je: equal / zero */

loc_001C0D07: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x001C0D0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0D0Bu); } /* indirect call */
    }

loc_001C0D0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_AE(_fa, _fb)) goto loc_001C0D1C; /* jae: above or equal (unsigned >=) */

loc_001C0D16: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0D07; /* jne: not equal / not zero */

loc_001C0D1C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0D3C; /* je: equal / zero */

loc_001C0D20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x001C0D27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0D24u); } /* indirect call */
    }

loc_001C0D27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001C0D3C; /* jne: not equal / not zero */

loc_001C0D2F: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x001C0D38u); RECOMP_ABI_CALL(0x001C07EBu, sub_001C07EB); /* call 0x001C07EB */

loc_001C0D38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0D3E; /* jne: not equal / not zero */

loc_001C0D3C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C0D3E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C0D44u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0D44: ;
    POP32(esp, ecx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0D4B
 * Original: 0x001C0D4B - 0x001C0DCE (131 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0D4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0D4B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0D62u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0D62: ;
    eax = MEM32(esi + 4);
    ebx = eax;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    ebx = ebx & 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0D76u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0D76: ;
    edi = MEM32(esi + 8);
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_001C0D99;

loc_001C0D7D: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C0D9D; /* jne: not equal / not zero */

loc_001C0D83: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x001C0D8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0D87u); } /* indirect call */
    }

loc_001C0D8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001C0D94; /* jne: not equal / not zero */

loc_001C0D90: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C0D94: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(edi);

loc_001C0D99: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0D7D; /* jne: not equal / not zero */

loc_001C0D9D: ;
    edi = esi + 0x18;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0DA6u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0DA6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_001C0DB6; /* je: equal / zero */

loc_001C0DAE: ;
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 8) = ecx;
    goto loc_001C0DBA;

loc_001C0DB6: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C0DBA: ;
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0DC5u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0DC5: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0DCE
 * Original: 0x001C0DCE - 0x001C0DFB (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0DCE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0DCE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = edi + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C0DDDu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0DDD: ;
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0DEBu); RECOMP_ABI_CALL(0x001C0D4Bu, sub_001C0D4B); /* call 0x001C0D4B */

loc_001C0DEB: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001C0DF3u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0DF3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0DFB
 * Original: 0x001C0DFB - 0x001C0E0C (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0DFB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0DFB: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0E08u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0E08: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0E0C
 * Original: 0x001C0E0C - 0x001C0E1B (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0E0C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0E0C: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0E19u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0E19: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0E1B
 * Original: 0x001C0E1B - 0x001C0E94 (121 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0E1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0E1B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = ebx + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0E31u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001C0E31: ;
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_001C0E87; /* jle: less or equal (signed <=) */

loc_001C0E38: ;
    PUSH32(esp, esi);

loc_001C0E39: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0E41u); RECOMP_ABI_CALL(0x001C0B88u, sub_001C0B88); /* call 0x001C0B88 */

loc_001C0E41: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    POP32(esp, ecx);
    esi = eax;
    POP32(esp, ecx);
    MEM32(ebp + 8) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001C0E6A; /* jle: less or equal (signed <=) */

loc_001C0E4D: ;
    eax = edi + -1;
    MEM32(ebp + -4) = eax;

loc_001C0E53: ;
    esi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x001C0E5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0E59u); } /* indirect call */
    }

loc_001C0E5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_001C0E65; /* jge: greater or equal (signed >=) */

loc_001C0E62: ;
    MEM32(ebp + 8) = esi;

loc_001C0E65: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C0E53; /* jne: not equal / not zero */

loc_001C0E6A: ;
    edx = MEM32(ebp + 8);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0E74u); RECOMP_ABI_CALL(0x001C07EBu, sub_001C07EB); /* call 0x001C07EB */

loc_001C0E74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0E86; /* je: equal / zero */

loc_001C0E78: ;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0E7Fu); RECOMP_ABI_CALL(0x001C0929u, sub_001C0929); /* call 0x001C0929 */

loc_001C0E7F: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_001C0E39; /* jg: greater (signed >) */

loc_001C0E86: ;
    POP32(esp, esi);

loc_001C0E87: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0E8Fu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001C0E8F: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0E94
 * Original: 0x001C0E94 - 0x001C0E97 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0E94(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0E94: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C0E97
 * Original: 0x001C0E97 - 0x001C0E98 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0E97(void)
{

loc_001C0E97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0EA0
 * Original: 0x001C0EA0 - 0x001C0F82 (226 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0EA0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1F (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C0F1A; /* jne: not equal / not zero */

loc_001C0EBD: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_001C0ED0; /* jns: not sign (positive) */

loc_001C0EC2: ;
    goto loc_001C0EDF;

    /* nop */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C0ED0: ;
    XMM_STORE(eax, xmm0); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_001C0ED0; /* jns: not sign (positive) */

loc_001C0EDF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_001C0EEF; /* js: sign (negative) */

loc_001C0EE4: ;
    XMM_STORE_LOW(eax, xmm0); /* movlps */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_001C0EE4; /* jns: not sign (positive) */

loc_001C0EEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_001C0EF5; /* jne: not equal / not zero */

loc_001C0EF4: ;
    esp += 4; return; /* ret */

loc_001C0EF5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C0F02; /* jb: below (unsigned <) */

loc_001C0EFA: ;
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C0F02: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C0F10; /* jb: below (unsigned <) */

loc_001C0F07: ;
    MEM16(eax) = LO16(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C0F10: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C0F19; /* jb: below (unsigned <) */

loc_001C0F15: ;
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001C0F19: ;
    esp += 4; return; /* ret */

loc_001C0F1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 1 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0F2A; /* je: equal / zero */

loc_001C0F21: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0F2A; /* jl: less (signed <) */

loc_001C0F26: ;
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001C0F2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 2 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0F3F; /* je: equal / zero */

loc_001C0F31: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0F3F; /* jl: less (signed <) */

loc_001C0F36: ;
    MEM16(eax) = LO16(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C0F3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 4 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0F53; /* je: equal / zero */

loc_001C0F46: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0F53; /* jl: less (signed <) */

loc_001C0F4B: ;
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C0F53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 8 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0F68; /* je: equal / zero */

loc_001C0F5A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0F68; /* jl: less (signed <) */

loc_001C0F5F: ;
    XMM_STORE_LOW(eax, xmm0); /* movlps */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C0F68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C0F7D; /* je: equal / zero */

loc_001C0F6F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0F7D; /* jl: less (signed <) */

loc_001C0F74: ;
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001C0F7D: ;
    goto loc_001C0EBD;

}

/**
 * sub_001C0F82
 * Original: 0x001C0F82 - 0x001C0F93 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0F82(void)
{

loc_001C0F82: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x3358A0);
    PUSH32(esp, 0x001C0F90u); RECOMP_ABI_CALL(0x002BF339u, sub_002BF339); /* call 0x002BF339 */

loc_001C0F90: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0F93
 * Original: 0x001C0F93 - 0x001C0F9D (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0F93(void)
{

loc_001C0F93: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001C0F9Cu); RECOMP_ABI_CALL(0x001EF107u, sub_001EF107); /* call 0x001EF107 */

loc_001C0F9C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0F9D
 * Original: 0x001C0F9D - 0x001C0FBC (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0F9D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0F9D: ;
    eax = MEM32(0x37DA70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0FBB; /* je: equal / zero */

loc_001C0FA7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0FADu); RECOMP_ABI_CALL(0x001EF49Bu, sub_001EF49B); /* call 0x001EF49B */

loc_001C0FAD: ;
    MEM32(0x37DA70) = MEM32(0x37DA70) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(0x37DA70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37DAA4) = MEM32(0x37DAA4) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(0x37DAA4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001C0FBB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C0FBC
 * Original: 0x001C0FBC - 0x001C1002 (70 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0FBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0FBC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    edx = eax + 1;

loc_001C0FC6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0FC6; /* jne: not equal / not zero */

loc_001C0FCD: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x37DA70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0FFF; /* je: equal / zero */

loc_001C0FDC: ;
    PUSH32(esp, 0);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0FECu); RECOMP_ABI_CALL(0x001EF5A6u, sub_001EF5A6); /* call 0x001EF5A6 */

loc_001C0FEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0FF5; /* je: equal / zero */

loc_001C0FF0: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0FFF; /* je: equal / zero */

loc_001C0FF5: ;
    PUSH32(esp, 0x3358CC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0FFFu); RECOMP_ABI_CALL(0x001EF107u, sub_001EF107); /* call 0x001EF107 */

loc_001C0FFF: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1002
 * Original: 0x001C1002 - 0x001C1083 (129 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1002(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1002: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -256;
    PUSH32(esp, 0x3358A4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C101Fu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001C101F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0000000u);
    eax = ebp + -256;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C103Cu); RECOMP_ABI_CALL(0x001EF962u, sub_001EF962); /* call 0x001EF962 */

loc_001C103C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x37DA70) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001C106F; /* jne: not equal / not zero */

loc_001C1046: ;
    eax = ebp + -256;
    PUSH32(esp, eax);
    eax = ebp + -512;
    PUSH32(esp, 0x3358AC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C105Eu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001C105E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -512;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C106Du); RECOMP_ABI_CALL(0x001EF107u, sub_001EF107); /* call 0x001EF107 */

loc_001C106D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_001C106F: ;
    PUSH32(esp, 0x1C0F9D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C1079u); RECOMP_ABI_CALL(0x001BFC25u, sub_001BFC25); /* call 0x001BFC25 */

loc_001C1079: ;
    MEM32(0x37DAA4) = MEM32(0x37DAA4) | 1;
    _fa = (uint32_t)(MEM32(0x37DAA4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ecx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1090
 * Original: 0x001C1090 - 0x001C109A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1090(void)
{

loc_001C1090: ;
    eax = MEM32(esp + 4);
    MEM32(0x37DAD8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C10A0
 * Original: 0x001C10A0 - 0x001C10B6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C10A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C10A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    edx = MEM32(0x37DAD8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001C10C0
 * Original: 0x001C10C0 - 0x001C10F0 (48 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C10C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C10C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(edx, MEM8(esi));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C10E5; /* je: equal / zero */

loc_001C10CD: ;
    PUSH32(esp, edi);
    edi = edi;

loc_001C10D0: ;
    edi = eax;
    edx = SX8(LO8(edx));
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi ^ edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 1));
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C10D0; /* jne: not equal / not zero */

loc_001C10E4: ;
    POP32(esp, edi);

loc_001C10E5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 4)); }
    POP32(esp, esi);
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C10F0
 * Original: 0x001C10F0 - 0x001C1222 (306 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C10F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C10F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001C1142; /* jne: not equal / not zero */

loc_001C10FC: ;
    eax = MEM32(0x37DAD8);
    ecx = eax;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x335920);
    PUSH32(esp, ecx);
    MEM32(esi + 4) = eax;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001C1115u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C110Fu); } /* indirect call */
    }

loc_001C1115: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001C1142; /* jbe: below or equal (unsigned <=) */

loc_001C1124: ;
    goto loc_001C1130;

    /* nop */
    /* nop */

loc_001C1130: ;
    edx = MEM32(esi + 8);
    MEM32(edx + eax * 4) = 0;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C1130; /* jb: below (unsigned <) */

loc_001C1142: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(edx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1164; /* je: equal / zero */

loc_001C114E: ;
    edi = edi;

loc_001C1150: ;
    edi = eax;
    ecx = SX8(LO8(ecx));
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi ^ ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 1));
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1150; /* jne: not equal / not zero */

loc_001C1164: ;
    ecx = MEM32(esi + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1183; /* je: equal / zero */

loc_001C1174: ;
    edi = eax;

loc_001C1176: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C117D; /* jb: below (unsigned <) */

loc_001C117B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C117D: ;
    _fa = (uint32_t)(MEM32(edi + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1176; /* jne: not equal / not zero */

loc_001C1183: ;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + edx * 4) = ecx;
    edx = MEM32(esi);
    ebx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = edx;
    if (CMP_B(_fa, _fb)) goto loc_001C121C; /* jb: below (unsigned <) */

loc_001C119C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 8);
    eax = ebx + ebx;
    edx = eax * 4;
    PUSH32(esp, 0x335940);
    PUSH32(esp, edx);
    MEM32(esi + 4) = eax;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001C11B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C11B3u); } /* indirect call */
    }

loc_001C11B9: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001C11E2; /* jbe: below or equal (unsigned <=) */

loc_001C11C8: ;
    goto loc_001C11D0;

    /* nop */

loc_001C11D0: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = 0;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C11D0; /* jb: below (unsigned <) */

loc_001C11E2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001C1205; /* jle: less or equal (signed <=) */

loc_001C11EE: ;
    edi = edi;

loc_001C11F0: ;
    eax = MEM32(ebp + edi * 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001C1200u); RECOMP_ABI_CALL(0x001C10F0u, sub_001C10F0); /* call 0x001C10F0 */

loc_001C1200: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C11F0; /* jl: less (signed <) */

loc_001C1205: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C121B; /* je: equal / zero */

loc_001C1209: ;
    edx = ebx * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001C1218u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C1212u); } /* indirect call */
    }

loc_001C1218: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C121B: ;
    POP32(esp, ebp);

loc_001C121C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C1230
 * Original: 0x001C1230 - 0x001C128C (92 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1230: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    ebp = ecx;
    edx = eax + 1;
    /* nop */

loc_001C1240: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1240; /* jne: not equal / not zero */

loc_001C1247: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x335960);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001C1258u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1252u); } /* indirect call */
    }

loc_001C1258: ;
    ecx = MEM32(esp + 0x20);
    ebx = eax + 4;
    esi = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001C1270: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1270; /* jne: not equal / not zero */

loc_001C127A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x001C1283u); RECOMP_ABI_CALL(0x001C10F0u, sub_001C10F0); /* call 0x001C10F0 */

loc_001C1283: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C1290
 * Original: 0x001C1290 - 0x001C1344 (180 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1290: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C133E; /* je: equal / zero */

loc_001C12A0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C12ABu); RECOMP_ABI_CALL(0x001C10C0u, sub_001C10C0); /* call 0x001C10C0 */

loc_001C12AB: ;
    edi = eax;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, esi);

loc_001C12B6: ;
    eax = MEM32(ebx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C12F1; /* je: equal / zero */

loc_001C12BD: ;
    esi = eax + 4;
    eax = MEM32(esp + 0x18);

loc_001C12C4: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C12E8; /* jne: not equal / not zero */

loc_001C12CC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C12E4; /* je: equal / zero */

loc_001C12D0: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C12E8; /* jne: not equal / not zero */

loc_001C12DA: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_001C12C4; /* jne: not equal / not zero */

loc_001C12E4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C12ED;

loc_001C12E8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001C12ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1307; /* je: equal / zero */

loc_001C12F1: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001C133C; /* ja: above (unsigned >) */

loc_001C12FA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001C1301; /* jb: below (unsigned <) */

loc_001C12FF: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C1301: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001C12B6;

loc_001C1307: ;
    ecx = MEM32(ebx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C133C; /* je: equal / zero */

loc_001C130E: ;
    eax = ecx + 4;
    esi = eax + 1;

loc_001C1314: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C1314; /* jne: not equal / not zero */

loc_001C131B: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001C1328u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1322u); } /* indirect call */
    }

loc_001C1328: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + edi * 4) = 0;
    eax = MEM32(ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;

loc_001C133C: ;
    POP32(esp, esi);
    POP32(esp, edi);

loc_001C133E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1350
 * Original: 0x001C1350 - 0x001C1384 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1350: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001C135Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1357u); } /* indirect call */
    }

loc_001C135D: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C137D; /* je: equal / zero */

loc_001C137A: ;
    MEM32(ecx + 4) = eax;

loc_001C137D: ;
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1390
 * Original: 0x001C1390 - 0x001C13DF (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1390: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C13DC; /* je: equal / zero */

loc_001C1397: ;
    edx = MEM32(esp + 4);
    goto loc_001C13A0;

    /* nop */

loc_001C13A0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C13AE; /* je: equal / zero */

loc_001C13A4: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C13A0; /* jne: not equal / not zero */

loc_001C13AB: ;
    esp += 8; return; /* ret 4 */

loc_001C13AE: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C13BD; /* je: equal / zero */

loc_001C13B5: ;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    goto loc_001C13C3;

loc_001C13BD: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x10) = edx;

loc_001C13C3: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C13D0; /* je: equal / zero */

loc_001C13CA: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_001C13D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001C13D9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C13D3u); } /* indirect call */
    }

loc_001C13D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C13DC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C13E0
 * Original: 0x001C13E0 - 0x001C14DC (252 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C13E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C13E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001C13FF; /* jne: not equal / not zero */

loc_001C13EF: ;
    eax = MEM32(esp + 0x14);
    MEM8(eax) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001C13FF: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C140Au); RECOMP_ABI_CALL(0x001C10C0u, sub_001C10C0); /* call 0x001C10C0 */

loc_001C140A: ;
    PUSH32(esp, ebx);
    ebp = eax;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, edi);

loc_001C1416: ;
    edi = MEM32(esi + ebp * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1455; /* je: equal / zero */

loc_001C141D: ;
    edx = MEM32(esp + 0x1C);
    esi = edi + 4;

loc_001C1424: ;
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C1448; /* jne: not equal / not zero */

loc_001C142C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1444; /* je: equal / zero */

loc_001C1430: ;
    SET_LO8(eax, MEM8(edx + 1));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C1448; /* jne: not equal / not zero */

loc_001C143A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C1424; /* jne: not equal / not zero */

loc_001C1444: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C144D;

loc_001C1448: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001C144D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C1455; /* jne: not equal / not zero */

loc_001C1451: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C1487; /* jne: not equal / not zero */

loc_001C1455: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001C1474; /* ja: above (unsigned >) */

loc_001C145E: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001C1465; /* jb: below (unsigned <) */

loc_001C1463: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C1465: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    goto loc_001C1416;

loc_001C1474: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    MEM8(ecx) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001C1487: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + ebp * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C14A5; /* je: equal / zero */

loc_001C1492: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    MEM8(ecx) = 1;
    eax = MEM32(eax);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001C14A5: ;
    edi = MEM32(esp + 0x20);
    MEM8(edi) = 0;
    esi = MEM32(ecx + 0x10);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C14D2; /* je: equal / zero */

loc_001C14B5: ;
    ebx = MEM32(esp + 0x1C);
    /* nop */

loc_001C14C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C14D2; /* jne: not equal / not zero */

loc_001C14C4: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi); PUSH32(esp, 0x001C14C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C14C6u); } /* indirect call */
    }

loc_001C14C8: ;
    esi = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C14C0; /* jne: not equal / not zero */

loc_001C14D2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C14E0
 * Original: 0x001C14E0 - 0x001C1565 (133 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C14E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C14E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1530; /* je: equal / zero */

loc_001C14EA: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001C152F; /* jbe: below or equal (unsigned <=) */

loc_001C14F4: ;
    PUSH32(esp, ebp);

loc_001C14F5: ;
    eax = MEM32(esi + 8);
    edx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C151C; /* je: equal / zero */

loc_001C14FF: ;
    eax = edx + 4;
    ebp = eax + 1;

loc_001C1505: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1505; /* jne: not equal / not zero */

loc_001C150C: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001C1519u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C1513u); } /* indirect call */
    }

loc_001C1519: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C151C: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = 0;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C14F5; /* jb: below (unsigned <) */

loc_001C152E: ;
    POP32(esp, ebp);

loc_001C152F: ;
    POP32(esp, edi);

loc_001C1530: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C155C; /* je: equal / zero */

loc_001C153D: ;
    /* nop */

loc_001C1540: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(eax + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = edx;
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001C1552u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C154Cu); } /* indirect call */
    }

loc_001C1552: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1540; /* jne: not equal / not zero */

loc_001C155C: ;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1570
 * Original: 0x001C1570 - 0x001C1574 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1570: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1580
 * Original: 0x001C1580 - 0x001C1583 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1580(void)
{

loc_001C1580: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1590
 * Original: 0x001C1590 - 0x001C15AE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1590: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001C15AD; /* jbe: below or equal (unsigned <=) */

loc_001C1599: ;
    ecx = MEM32(ecx + 8);
    /* nop */

loc_001C15A0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C15AD; /* jne: not equal / not zero */

loc_001C15A5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C15A0; /* jb: below (unsigned <) */

loc_001C15AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C15B0
 * Original: 0x001C15B0 - 0x001C15DA (42 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C15B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C15B0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(edx) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C15D6; /* jae: above or equal (unsigned >=) */

loc_001C15BF: ;
    PUSH32(esp, edi);

loc_001C15C0: ;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(esi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C15D5; /* jne: not equal / not zero */

loc_001C15C9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = eax;
    edi = MEM32(ecx + 4);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C15C0; /* jb: below (unsigned <) */

loc_001C15D5: ;
    POP32(esp, edi);

loc_001C15D6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C15E0
 * Original: 0x001C15E0 - 0x001C15ED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C15E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001C15E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C15F0
 * Original: 0x001C15F0 - 0x001C1600 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C15F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C15F0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1610
 * Original: 0x001C1610 - 0x001C1639 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1610: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C1618u); RECOMP_ABI_CALL(0x001C14E0u, sub_001C14E0); /* call 0x001C14E0 */

loc_001C1618: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1637; /* je: equal / zero */

loc_001C161F: ;
    ecx = MEM32(esi + 4);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001C162Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C1627u); } /* indirect call */
    }

loc_001C162D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_001C1637: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1640
 * Original: 0x001C1640 - 0x001C1669 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C1648u); RECOMP_ABI_CALL(0x001C14E0u, sub_001C14E0); /* call 0x001C14E0 */

loc_001C1648: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1667; /* je: equal / zero */

loc_001C164F: ;
    ecx = MEM32(esi + 4);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001C165Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C1657u); } /* indirect call */
    }

loc_001C165D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_001C1667: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1670
 * Original: 0x001C1670 - 0x001C167A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1670(void)
{

loc_001C1670: ;
    eax = MEM32(esp + 4);
    MEM32(0x528370) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1680
 * Original: 0x001C1680 - 0x001C1686 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1680(void)
{

loc_001C1680: ;
    eax = MEM32(0x528370);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1690
 * Original: 0x001C1690 - 0x001C1696 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1690: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x528370)); return; /* indirect tail jmp */

}

/**
 * sub_001C16A0
 * Original: 0x001C16A0 - 0x001C16B5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C16A0(void)
{

loc_001C16A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    MEM32(edx + 4) = esi;
    MEM32(ecx + 0x10) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C16C0
 * Original: 0x001C16C0 - 0x001C1720 (96 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C16C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C16C0: ;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C16E0; /* jne: not equal / not zero */

loc_001C16CC: ;
    edx = MEM32(eax + 0xC);
    edx = MEM32(edx + 4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001C16DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C16DBu); } /* indirect call */
    }

loc_001C16DE: ;
    goto loc_001C170A;

loc_001C16E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C16F4; /* je: equal / zero */

loc_001C16E4: ;
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C16F4; /* je: equal / zero */

loc_001C16EE: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C16E4; /* jne: not equal / not zero */

loc_001C16F4: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx + 0xC);
    edx = MEM32(edx + 4);
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001C170Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1707u); } /* indirect call */
    }

loc_001C170A: ;
    _fa = (uint32_t)(MEM32(0x528794)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528794), esi (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001C171D; /* jne: not equal / not zero */

loc_001C1713: ;
    MEM32(0x528794) = 0;

loc_001C171D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1720
 * Original: 0x001C1720 - 0x001C1726 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1720(void)
{

loc_001C1720: ;
    eax = MEM32(0x52878C);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1730
 * Original: 0x001C1730 - 0x001C1736 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1730(void)
{

loc_001C1730: ;
    eax = MEM32(0x528790);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1740
 * Original: 0x001C1740 - 0x001C1746 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1740(void)
{

loc_001C1740: ;
    eax = MEM32(0x528794);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1750
 * Original: 0x001C1750 - 0x001C1761 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1750(void)
{

loc_001C1750: ;
    eax = MEM32(esp + 4);
    MEM32(0x52878C) = eax;
    MEM32(0x528794) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1770
 * Original: 0x001C1770 - 0x001C178A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1770: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x528790) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001C1782; /* jne: not equal / not zero */

loc_001C177D: ;
    eax = MEM32(0x52878C);

loc_001C1782: ;
    MEM32(0x528794) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1790
 * Original: 0x001C1790 - 0x001C179A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1790(void)
{

loc_001C1790: ;
    eax = MEM32(esp + 4);
    MEM32(0x37DB68) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C17A0
 * Original: 0x001C17A0 - 0x001C17AA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C17A0(void)
{

loc_001C17A0: ;
    eax = MEM32(esp + 4);
    MEM32(0x37DB6C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C17B0
 * Original: 0x001C17B0 - 0x001C17B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C17B0(void)
{

loc_001C17B0: ;
    eax = MEM32(0x528788);
    esp += 4; return; /* ret */

}

/**
 * sub_001C17C0
 * Original: 0x001C17C0 - 0x001C17C5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C17C0(void)
{

loc_001C17C0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C17D0
 * Original: 0x001C17D0 - 0x001C180B (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C17D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C17D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x174);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001C17E0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C17DAu); } /* indirect call */
    }

loc_001C17E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C17F1; /* je: equal / zero */

loc_001C17E7: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001C17EFu); RECOMP_ABI_CALL(0x001C47C0u, sub_001C47C0); /* call 0x001C47C0 */

loc_001C17EF: ;
    goto loc_001C17F3;

loc_001C17F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C17F3: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 4) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(0x52878C) = eax;
    MEM32(0x528794) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1810
 * Original: 0x001C1810 - 0x001C184D (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1810: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x104);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001C1820u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C181Au); } /* indirect call */
    }

loc_001C1820: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C183D; /* je: equal / zero */

loc_001C1827: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001C182Fu); RECOMP_ABI_CALL(0x001D4A70u, sub_001D4A70); /* call 0x001D4A70 */

loc_001C182F: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 4) = edx;
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C183D: ;
    edx = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 4) = edx;
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1850
 * Original: 0x001C1850 - 0x001C188B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1850: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C185Eu); RECOMP_ABI_CALL(0x001C16C0u, sub_001C16C0); /* call 0x001C16C0 */

loc_001C185E: ;
    _fa = (uint32_t)(MEM32(0x52878C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x52878C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1886; /* jne: not equal / not zero */

loc_001C1866: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1881; /* je: equal / zero */

loc_001C186D: ;
    /* nop */

loc_001C1870: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1881; /* je: equal / zero */

loc_001C1877: ;
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1870; /* jne: not equal / not zero */

loc_001C1881: ;
    MEM32(0x52878C) = eax;

loc_001C1886: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1890
 * Original: 0x001C1890 - 0x001C18B1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1890: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C189Bu); RECOMP_ABI_CALL(0x001C16C0u, sub_001C16C0); /* call 0x001C16C0 */

loc_001C189B: ;
    _fa = (uint32_t)(MEM32(0x528790)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528790), esi (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001C18AE; /* jne: not equal / not zero */

loc_001C18A4: ;
    MEM32(0x528790) = 0;

loc_001C18AE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C18C0
 * Original: 0x001C18C0 - 0x001C1969 (169 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C18C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C18C0: ;
    SET_LO8(eax, MEM8(0x528375));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001C192D; /* jne: not equal / not zero */

loc_001C18CC: ;
    PUSH32(esp, 0x335A9C);
    PUSH32(esp, 0);
    MEM8(0x528375) = 1;
    PUSH32(esp, 0x001C18DFu); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C18DF: ;
    PUSH32(esp, 0x335AB8);
    PUSH32(esp, 0x335AE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C18F0u); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C18F0: ;
    PUSH32(esp, 0x335AFC);
    PUSH32(esp, 0x335B04);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C1901u); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C1901: ;
    PUSH32(esp, 0x335B3C);
    PUSH32(esp, 0x335B5C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C1912u); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C1912: ;
    PUSH32(esp, 0x335B78);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C191Eu); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C191E: ;
    PUSH32(esp, 0x335BC8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C192Au); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C192A: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C192D: ;
    esi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x104);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001C193Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C1936u); } /* indirect call */
    }

loc_001C193C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1959; /* je: equal / zero */

loc_001C1943: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001C194Bu); RECOMP_ABI_CALL(0x001D4A70u, sub_001D4A70); /* call 0x001D4A70 */

loc_001C194B: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 4) = edx;
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C1959: ;
    edx = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax + 0xC);
    MEM32(ecx + 4) = edx;
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1970
 * Original: 0x001C1970 - 0x001C1A02 (146 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1970: ;
    SET_LO8(eax, MEM8(0x528376));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001C19DE; /* jne: not equal / not zero */

loc_001C197D: ;
    PUSH32(esp, 0x335BE4);
    PUSH32(esp, 0);
    MEM8(0x528376) = 1;
    PUSH32(esp, 0x001C1990u); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C1990: ;
    PUSH32(esp, 0x335C00);
    PUSH32(esp, 0x335C2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C19A1u); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C19A1: ;
    PUSH32(esp, 0x335C44);
    PUSH32(esp, 0x335C4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C19B2u); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C19B2: ;
    PUSH32(esp, 0x335C84);
    PUSH32(esp, 0x335CA8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C19C3u); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C19C3: ;
    PUSH32(esp, 0x335CC8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C19CFu); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C19CF: ;
    PUSH32(esp, 0x335D18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C19DBu); RECOMP_ABI_CALL(0x001D4BF0u, sub_001D4BF0); /* call 0x001D4BF0 */

loc_001C19DB: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C19DE: ;
    esi = MEM32(esp + 0xC);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C19EAu); RECOMP_ABI_CALL(0x001C16C0u, sub_001C16C0); /* call 0x001C16C0 */

loc_001C19EA: ;
    eax = MEM32(0x528790);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001C19FF; /* jne: not equal / not zero */

loc_001C19F5: ;
    MEM32(0x528790) = 0;

loc_001C19FF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1A10
 * Original: 0x001C1A10 - 0x001C1A59 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1A10: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A0);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001C1A20u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C1A1Au); } /* indirect call */
    }

loc_001C1A20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1A43; /* je: equal / zero */

loc_001C1A27: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001C1A2Fu); RECOMP_ABI_CALL(0x001C7240u, sub_001C7240); /* call 0x001C7240 */

loc_001C1A2F: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x194) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C1A43: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x194) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1A60
 * Original: 0x001C1A60 - 0x001C1A67 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A60(void)
{

loc_001C1A60: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1A70
 * Original: 0x001C1A70 - 0x001C1A7A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A70(void)
{

loc_001C1A70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1A80
 * Original: 0x001C1A80 - 0x001C1A85 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A80(void)
{

loc_001C1A80: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1A90
 * Original: 0x001C1A90 - 0x001C1AC9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1A90: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1AC6; /* je: equal / zero */

loc_001C1A9A: ;
    edx = MEM32(ecx + 4);
    edx = MEM32(edx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx + 4);
    esi = MEM32(eax + 0xC);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(edx + 0x10);
    MEM32(esi + 0x10) = edx;
    POP32(esp, esi);

loc_001C1AC6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1AD0
 * Original: 0x001C1AD0 - 0x001C1B4F (127 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1AD0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xC);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1AF4; /* jne: not equal / not zero */

loc_001C1AE3: ;
    eax = MEM32(ebx + 0xC);
    esi = MEM32(eax + 0x10);
    ecx = MEM32(esi + 0x194);
    MEM32(eax + 0x10) = ecx;
    goto loc_001C1B22;

loc_001C1AF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1B10; /* je: equal / zero */

loc_001C1AF8: ;
    goto loc_001C1B00;

    /* nop */

loc_001C1B00: ;
    ecx = MEM32(eax + 0x194);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1B10; /* je: equal / zero */

loc_001C1B0A: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1B00; /* jne: not equal / not zero */

loc_001C1B10: ;
    esi = MEM32(eax + 0x194);
    edx = MEM32(esi + 0x194);
    MEM32(eax + 0x194) = edx;

loc_001C1B22: ;
    ecx = esi;
    PUSH32(esp, 0x001C1B29u); RECOMP_ABI_CALL(0x001C72C0u, sub_001C72C0); /* call 0x001C72C0 */

loc_001C1B29: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x001C1B35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1B2Fu); } /* indirect call */
    }

loc_001C1B35: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001C1B4C; /* jne: not equal / not zero */

loc_001C1B45: ;
    MEM32(eax + 0xC) = 0;

loc_001C1B4C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1B50
 * Original: 0x001C1B50 - 0x001C1B5E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1B50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C1B5Au); RECOMP_ABI_CALL(0x002BEDCFu, sub_002BEDCF); /* call 0x002BEDCF */

loc_001C1B5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1B60
 * Original: 0x001C1B60 - 0x001C1B6C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1B60(void)
{

loc_001C1B60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C1B6Au); RECOMP_ABI_CALL(0x002BF1A3u, sub_002BF1A3); /* call 0x002BF1A3 */

loc_001C1B6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1B70
 * Original: 0x001C1B70 - 0x001C1B73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1B70(void)
{

loc_001C1B70: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1B80
 * Original: 0x001C1B80 - 0x001C1D7C (508 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1B80: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C1B9B; /* jge: greater or equal (signed >=) */

loc_001C1B85: ;
    ecx = MEM32(esi * 4 + 0x311F48);
    edx = edi;
    PUSH32(esp, 0x001C1B93u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C1B93: ;
    MEM32(esi * 4 + 0x2E92B0) = edi;
    esp += 4; return; /* ret */

loc_001C1B9B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C1BC0; /* jge: greater or equal (signed >=) */

loc_001C1BA3: ;
    ecx = MEM32(0x2E90A8);
    eax = MEM32(esi * 4 + 0x311D28);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = ecx;
    MEM32(esi * 4 + 0x2E92B0) = edi;
    esp += 4; return; /* ret */

loc_001C1BC0: ;
    if (CMP_NE(_fa, _fb)) goto loc_001C1BC9; /* jne: not equal / not zero */

loc_001C1BC2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1BC8u); RECOMP_ABI_CALL(0x002D9D90u, sub_002D9D90); /* call 0x002D9D90 */

loc_001C1BC8: ;
    esp += 4; return; /* ret */

loc_001C1BC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1BD8; /* jne: not equal / not zero */

loc_001C1BD1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1BD7u); RECOMP_ABI_CALL(0x002DA5E0u, sub_002DA5E0); /* call 0x002DA5E0 */

loc_001C1BD7: ;
    esp += 4; return; /* ret */

loc_001C1BD8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1BE7; /* jne: not equal / not zero */

loc_001C1BE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1BE6u); RECOMP_ABI_CALL(0x002DA140u, sub_002DA140); /* call 0x002DA140 */

loc_001C1BE6: ;
    esp += 4; return; /* ret */

loc_001C1BE7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1BF6; /* jne: not equal / not zero */

loc_001C1BEF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1BF5u); RECOMP_ABI_CALL(0x002DA4B0u, sub_002DA4B0); /* call 0x002DA4B0 */

loc_001C1BF5: ;
    esp += 4; return; /* ret */

loc_001C1BF6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C05; /* jne: not equal / not zero */

loc_001C1BFE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1C04u); RECOMP_ABI_CALL(0x002DA500u, sub_002DA500); /* call 0x002DA500 */

loc_001C1C04: ;
    esp += 4; return; /* ret */

loc_001C1C05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C14; /* jne: not equal / not zero */

loc_001C1C0D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1C13u); RECOMP_ABI_CALL(0x002DA560u, sub_002DA560); /* call 0x002DA560 */

loc_001C1C13: ;
    esp += 4; return; /* ret */

loc_001C1C14: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C23; /* jne: not equal / not zero */

loc_001C1C1C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1C22u); RECOMP_ABI_CALL(0x002DA240u, sub_002DA240); /* call 0x002DA240 */

loc_001C1C22: ;
    esp += 4; return; /* ret */

loc_001C1C23: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C32; /* jne: not equal / not zero */

loc_001C1C2B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1C31u); RECOMP_ABI_CALL(0x002DB010u, sub_002DB010); /* call 0x002DB010 */

loc_001C1C31: ;
    esp += 4; return; /* ret */

loc_001C1C32: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C41; /* jne: not equal / not zero */

loc_001C1C3A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1C40u); RECOMP_ABI_CALL(0x002DB0A0u, sub_002DB0A0); /* call 0x002DB0A0 */

loc_001C1C40: ;
    esp += 4; return; /* ret */

loc_001C1C41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C50; /* jne: not equal / not zero */

loc_001C1C49: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1C4Fu); RECOMP_ABI_CALL(0x002DB140u, sub_002DB140); /* call 0x002DB140 */

loc_001C1C4F: ;
    esp += 4; return; /* ret */

loc_001C1C50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C5F; /* jne: not equal / not zero */

loc_001C1C58: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1C5Eu); RECOMP_ABI_CALL(0x002DA190u, sub_002DA190); /* call 0x002DA190 */

loc_001C1C5E: ;
    esp += 4; return; /* ret */

loc_001C1C5F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C6E; /* jne: not equal / not zero */

loc_001C1C67: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1C6Du); RECOMP_ABI_CALL(0x002DA200u, sub_002DA200); /* call 0x002DA200 */

loc_001C1C6D: ;
    esp += 4; return; /* ret */

loc_001C1C6E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C7D; /* jne: not equal / not zero */

loc_001C1C76: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1C7Cu); RECOMP_ABI_CALL(0x002DA280u, sub_002DA280); /* call 0x002DA280 */

loc_001C1C7C: ;
    esp += 4; return; /* ret */

loc_001C1C7D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C8C; /* jne: not equal / not zero */

loc_001C1C85: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1C8Bu); RECOMP_ABI_CALL(0x002DA3D0u, sub_002DA3D0); /* call 0x002DA3D0 */

loc_001C1C8B: ;
    esp += 4; return; /* ret */

loc_001C1C8C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1C9B; /* jne: not equal / not zero */

loc_001C1C94: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1C9Au); RECOMP_ABI_CALL(0x002DA450u, sub_002DA450); /* call 0x002DA450 */

loc_001C1C9A: ;
    esp += 4; return; /* ret */

loc_001C1C9B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1CAA; /* jne: not equal / not zero */

loc_001C1CA3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1CA9u); RECOMP_ABI_CALL(0x002DA0C0u, sub_002DA0C0); /* call 0x002DA0C0 */

loc_001C1CA9: ;
    esp += 4; return; /* ret */

loc_001C1CAA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1CB9; /* jne: not equal / not zero */

loc_001C1CB2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1CB8u); RECOMP_ABI_CALL(0x002DB380u, sub_002DB380); /* call 0x002DB380 */

loc_001C1CB8: ;
    esp += 4; return; /* ret */

loc_001C1CB9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1CC8; /* jne: not equal / not zero */

loc_001C1CC1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1CC7u); RECOMP_ABI_CALL(0x002DB400u, sub_002DB400); /* call 0x002DB400 */

loc_001C1CC7: ;
    esp += 4; return; /* ret */

loc_001C1CC8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1CD7; /* jne: not equal / not zero */

loc_001C1CD0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1CD6u); RECOMP_ABI_CALL(0x002DB320u, sub_002DB320); /* call 0x002DB320 */

loc_001C1CD6: ;
    esp += 4; return; /* ret */

loc_001C1CD7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1CE6; /* jne: not equal / not zero */

loc_001C1CDF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1CE5u); RECOMP_ABI_CALL(0x002DB350u, sub_002DB350); /* call 0x002DB350 */

loc_001C1CE5: ;
    esp += 4; return; /* ret */

loc_001C1CE6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1CF5; /* jne: not equal / not zero */

loc_001C1CEE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1CF4u); RECOMP_ABI_CALL(0x002DA100u, sub_002DA100); /* call 0x002DA100 */

loc_001C1CF4: ;
    esp += 4; return; /* ret */

loc_001C1CF5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1D04; /* jne: not equal / not zero */

loc_001C1CFD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1D03u); RECOMP_ABI_CALL(0x002DA2E0u, sub_002DA2E0); /* call 0x002DA2E0 */

loc_001C1D03: ;
    esp += 4; return; /* ret */

loc_001C1D04: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1D13; /* jne: not equal / not zero */

loc_001C1D0C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1D12u); RECOMP_ABI_CALL(0x002DB450u, sub_002DB450); /* call 0x002DB450 */

loc_001C1D12: ;
    esp += 4; return; /* ret */

loc_001C1D13: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1D22; /* jne: not equal / not zero */

loc_001C1D1B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1D21u); RECOMP_ABI_CALL(0x002DA350u, sub_002DA350); /* call 0x002DA350 */

loc_001C1D21: ;
    esp += 4; return; /* ret */

loc_001C1D22: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1D31; /* jne: not equal / not zero */

loc_001C1D2A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1D30u); RECOMP_ABI_CALL(0x002DB1B0u, sub_002DB1B0); /* call 0x002DB1B0 */

loc_001C1D30: ;
    esp += 4; return; /* ret */

loc_001C1D31: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1D40; /* jne: not equal / not zero */

loc_001C1D39: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1D3Fu); RECOMP_ABI_CALL(0x002DB1E0u, sub_002DB1E0); /* call 0x002DB1E0 */

loc_001C1D3F: ;
    esp += 4; return; /* ret */

loc_001C1D40: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1D4F; /* jne: not equal / not zero */

loc_001C1D48: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1D4Eu); RECOMP_ABI_CALL(0x002DB250u, sub_002DB250); /* call 0x002DB250 */

loc_001C1D4E: ;
    esp += 4; return; /* ret */

loc_001C1D4F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1D5E; /* jne: not equal / not zero */

loc_001C1D57: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1D5Du); RECOMP_ABI_CALL(0x002DB2C0u, sub_002DB2C0); /* call 0x002DB2C0 */

loc_001C1D5D: ;
    esp += 4; return; /* ret */

loc_001C1D5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1D6D; /* jne: not equal / not zero */

loc_001C1D66: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1D6Cu); RECOMP_ABI_CALL(0x002DB2E0u, sub_002DB2E0); /* call 0x002DB2E0 */

loc_001C1D6C: ;
    esp += 4; return; /* ret */

loc_001C1D6D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1D7B; /* jne: not equal / not zero */

loc_001C1D75: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1D7Bu); RECOMP_ABI_CALL(0x002DB300u, sub_002DB300); /* call 0x002DB300 */

loc_001C1D7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1D80
 * Original: 0x001C1D80 - 0x001C1D81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1D80(void)
{

loc_001C1D80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1D90
 * Original: 0x001C1D90 - 0x001C1DA8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1D90: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    edx = MEM32(0x5286A4);
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x5286A0) = ecx;
    MEM32(0x5286A4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1DB0
 * Original: 0x001C1DB0 - 0x001C1DD0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1DB0(void)
{

loc_001C1DB0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x335EC0;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C1DD0
 * Original: 0x001C1DD0 - 0x001C1DFD (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    MEM32(esi) = 0x335EC0;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1DFB; /* je: equal / zero */

loc_001C1DE3: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001C1DF1u); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_001C1DF1: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1DE3; /* jne: not equal / not zero */

loc_001C1DFB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1E00
 * Original: 0x001C1E00 - 0x001C1E2D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1E00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C1E09u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001C1E09: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001C1E13u); RECOMP_ABI_CALL(0x001C1750u, sub_001C1750); /* call 0x001C1750 */

loc_001C1E13: ;
    PUSH32(esp, 0x001C1E18u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001C1E18: ;
    eax = MEM32(esi + 0x150);
    ecx = MEM32(esi + 0x14C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C1E2Bu); RECOMP_ABI_CALL(0x002D8800u, sub_002D8800); /* call 0x002D8800 */

loc_001C1E2B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C1E30
 * Original: 0x001C1E30 - 0x001C22B6 (1158 bytes, 275 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1E30(void)
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

loc_001C1E30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C1E3Au); RECOMP_ABI_CALL(0x001D5D30u, sub_001D5D30); /* call 0x001D5D30 */

loc_001C1E3A: ;
    eax = MEM32(0x528928);
    ecx = MEM32(0x528694);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1E58; /* jne: not equal / not zero */

loc_001C1E4B: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1E52u); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001C1E52: ;
    MEM32(0x528928) = edi;

loc_001C1E58: ;
    ecx = MEM32(0x528694);
    _fa = (uint32_t)(MEM32(0x52892C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x52892C), ecx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001C1E7A; /* jne: not equal / not zero */

loc_001C1E6D: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001C1E74u); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001C1E74: ;
    MEM32(0x52892C) = edi;

loc_001C1E7A: ;
    edx = MEM32(0x528694);
    _fa = (uint32_t)(MEM32(0x528930)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528930), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1E96; /* jne: not equal / not zero */

loc_001C1E88: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001C1E90u); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001C1E90: ;
    MEM32(0x528930) = edi;

loc_001C1E96: ;
    eax = MEM32(0x528694);
    _fa = (uint32_t)(MEM32(0x528934)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x528934), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1EB1; /* jne: not equal / not zero */

loc_001C1EA3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001C1EABu); RECOMP_ABI_CALL(0x002D9050u, sub_002D9050); /* call 0x002D9050 */

loc_001C1EAB: ;
    MEM32(0x528934) = edi;

loc_001C1EB1: ;
    eax = MEM32(esi + 0x3C);
    ebx = 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1EF0; /* je: equal / zero */

loc_001C1EBD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x10);
    edx = edi;
    ecx = 0x40384;
    PUSH32(esp, 0x001C1ED6u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C1ED6: ;
    edx = edi;
    ecx = 0x40388;
    MEM32(0x2E93E4) = edi;
    PUSH32(esp, 0x001C1EE8u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C1EE8: ;
    MEM32(0x2E93E8) = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C1EF0: ;
    PUSH32(esp, 0x001C1EF5u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001C1EF5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1EFBu); RECOMP_ABI_CALL(0x002DD140u, sub_002DD140); /* call 0x002DD140 */

loc_001C1EFB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C1F01u); RECOMP_ABI_CALL(0x002DBF80u, sub_002DBF80); /* call 0x002DBF80 */

loc_001C1F01: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001C1F07u); RECOMP_ABI_CALL(0x002DD140u, sub_002DD140); /* call 0x002DD140 */

loc_001C1F07: ;
    ecx = MEM32(0x528CDC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C1F13u); RECOMP_ABI_CALL(0x002DD590u, sub_002DD590); /* call 0x002DD590 */

loc_001C1F13: ;
    edx = MEM32(0x528CE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C1F1Fu); RECOMP_ABI_CALL(0x002DD3B0u, sub_002DD3B0); /* call 0x002DD3B0 */

loc_001C1F1F: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37EA30) = edi;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1F5B; /* jne: not equal / not zero */

loc_001C1F2D: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xE4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C1F5B; /* jp: parity */

loc_001C1F46: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C225E; /* jnp: not parity */

loc_001C1F5B: ;
    eax = ZX8(MEM8(0x528688));
    ecx = ZX8(MEM8(0x528689));
    MEM32(0x2E944C) = eax;
    MEM32(0x2E90A8) = MEM32(0x2E90A8) | 0x3000;
    _fa = (uint32_t)(MEM32(0x2E90A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(0x2E90A8);
    MEM32(0x2E9420) = ecx;
    ecx = 0x2000;
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37EA34) = edi;
    MEM32(0x37EA08) = edi;
    MEM32(0x37EA0C) = edi;
    MEM32(0x37EA1C) = edi;
    MEM32(0x37EA30) = edi;
    eax = MEM32(esi + 0x90);
    MEM32(0x2E90A8) = ebx;
    edx = ebx;
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E9424) = eax;
    eax = MEM32(esi + 0x94);
    MEM32(0x2E90A8) = edx;
    ebx = edx;
    MEM32(0x2E9428) = eax;
    eax = MEM32(esi + 0x98);
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = ebx;
    MEM32(0x2E942C) = eax;
    eax = MEM32(esi + 0x9C);
    edx = ebx;
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = edx;
    MEM32(0x2E9430) = eax;
    edx = MEM32(esi + 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C2005u); RECOMP_ABI_CALL(0x002DA140u, sub_002DA140); /* call 0x002DA140 */

loc_001C2005: ;
    eax = MEM32(0x37DB8C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2010u); RECOMP_ABI_CALL(0x002DB0A0u, sub_002DB0A0); /* call 0x002DB0A0 */

loc_001C2010: ;
    ecx = ZX8(MEM8(0x528988));
    PUSH32(esp, ecx);
    MEM32(0x37DBA0) = edi;
    PUSH32(esp, 0x001C2023u); RECOMP_ABI_CALL(0x002DB1B0u, sub_002DB1B0); /* call 0x002DB1B0 */

loc_001C2023: ;
    edx = MEM32(0x528CDC);
    PUSH32(esp, edx);
    MEM32(0x37EA04) = edi;
    PUSH32(esp, 0x001C2035u); RECOMP_ABI_CALL(0x002DD590u, sub_002DD590); /* call 0x002DD590 */

loc_001C2035: ;
    eax = MEM32(0x528CE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2040u); RECOMP_ABI_CALL(0x002DD3B0u, sub_002DD3B0); /* call 0x002DD3B0 */

loc_001C2040: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4147C;
    PUSH32(esp, 0x001C204Cu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C204C: ;
    edx = MEM32(0x528A14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40384;
    MEM32(0x2E93FC) = ebx;
    edi = edx;
    PUSH32(esp, 0x001C2066u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2066: ;
    edx = MEM32(0x528A18);
    MEM32(0x2E93E4) = edi;
    ecx = 0x40388;
    edi = edx;
    PUSH32(esp, 0x001C207Eu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C207E: ;
    edx = ebp;
    ecx = 0x41D78;
    MEM32(0x2E93E8) = edi;
    PUSH32(esp, 0x001C2090u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2090: ;
    xmm0 = XMM_SCALAR(MEMF(0x528A18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(0x2E93F8) = ebp;
    ecx = 0x40330;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C20E3; /* jnp: not parity */

loc_001C20B0: ;
    edx = ebp;
    PUSH32(esp, 0x001C20B7u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C20B7: ;
    edx = ebp;
    ecx = 0x40334;
    MEM32(0x2E93EC) = ebp;
    PUSH32(esp, 0x001C20C9u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C20C9: ;
    edx = ebp;
    ecx = 0x40338;
    MEM32(0x2E93F0) = ebp;
    PUSH32(esp, 0x001C20DBu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C20DB: ;
    MEM32(0x2E93F4) = ebp;
    goto loc_001C2114;

loc_001C20E3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001C20EAu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C20EA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40334;
    MEM32(0x2E93EC) = ebx;
    PUSH32(esp, 0x001C20FCu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C20FC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40338;
    MEM32(0x2E93F0) = ebx;
    PUSH32(esp, 0x001C210Eu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C210E: ;
    MEM32(0x2E93F4) = ebx;

loc_001C2114: ;
    ebx = 4;
    edx = ebx;
    ecx = 0x409F8;
    PUSH32(esp, 0x001C2125u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2125: ;
    edx = MEM32(0x37EA44);
    ecx = 0x4034C;
    MEM32(0x2E93E0) = ebx;
    edi = edx;
    PUSH32(esp, 0x001C213Du); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C213D: ;
    edx = MEM32(0x37EA3C);
    MEM32(0x2E93DC) = edi;
    ecx = 0x40344;
    edi = edx;
    PUSH32(esp, 0x001C2155u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2155: ;
    edx = MEM32(0x37EA40);
    MEM32(0x2E93A8) = edi;
    ecx = 0x40348;
    edi = edx;
    PUSH32(esp, 0x001C216Du); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C216D: ;
    edx = MEM32(0x37EA14);
    MEM32(0x2E93AC) = edi;
    ecx = 0x40354;
    edi = edx;
    PUSH32(esp, 0x001C2185u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2185: ;
    edx = MEM32(0x37EA24);
    MEM32(0x2E9394) = edi;
    ecx = 0x4033C;
    edi = edx;
    PUSH32(esp, 0x001C219Du); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C219D: ;
    edx = MEM32(0x37EA20);
    MEM32(0x2E9398) = edi;
    ecx = 0x40340;
    edi = edx;
    PUSH32(esp, 0x001C21B5u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C21B5: ;
    MEM32(0x2E93A4) = edi;
    edi = ZX8(MEM8(0x37DB9C));
    edx = edi;
    ecx = 0x4035C;
    PUSH32(esp, 0x001C21CEu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C21CE: ;
    edx = MEM32(0x37EA38);
    MEM32(0x2E93B0) = edi;
    ecx = 0x40350;
    edi = edx;
    PUSH32(esp, 0x001C21E6u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C21E6: ;
    edx = MEM32(0x37DB98);
    MEM32(0x2E93D8) = edi;
    ecx = 0x40374;
    edi = edx;
    PUSH32(esp, 0x001C21FEu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C21FE: ;
    edx = MEM32(0x37DB94);
    MEM32(0x2E93C0) = edi;
    ecx = 0x40378;
    edi = edx;
    PUSH32(esp, 0x001C2216u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2216: ;
    edx = MEM32(0x37DBAC);
    MEM32(0x2E93C4) = edi;
    ecx = 0x40364;
    edi = edx;
    PUSH32(esp, 0x001C222Eu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C222E: ;
    edx = MEM32(0x37DBA8);
    MEM32(0x2E93C8) = edi;
    ecx = 0x40368;
    edi = edx;
    PUSH32(esp, 0x001C2246u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2246: ;
    edx = ebx;
    ecx = 0x409F8;
    MEM32(0x2E93CC) = edi;
    PUSH32(esp, 0x001C2258u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2258: ;
    MEM32(0x2E93E0) = ebx;

loc_001C225E: ;
    eax = MEM32(esi + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C2276; /* je: equal / zero */

loc_001C226A: ;
    ecx = MEM32(esi + 0x148);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;

loc_001C2276: ;
    eax = MEM32(esi + 0x15C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C228C; /* je: equal / zero */

loc_001C2280: ;
    ecx = MEM32(esi + 0x14C);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;

loc_001C228C: ;
    eax = MEM32(esi + 0x160);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C22A2; /* je: equal / zero */

loc_001C2296: ;
    ecx = MEM32(esi + 0x150);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;

loc_001C22A2: ;
    PUSH32(esp, 0x001C22A7u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_001C22A7: ;
    eax = MEM32(0x528378);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x528378) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C22C0
 * Original: 0x001C22C0 - 0x001C22DF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C22C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001C22C0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C22CCu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001C22CC: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x001C22D8u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_001C22D8: ;
    MEM32(esi + 0x44) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C22E0
 * Original: 0x001C22E0 - 0x001C2303 (35 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C22E0(void)
{

loc_001C22E0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x134); /* cvtsi2ss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x138); /* cvtsi2ss */
    ecx = MEM32(esp + 8);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2310
 * Original: 0x001C2310 - 0x001C2313 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2310(void)
{

loc_001C2310: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2320
 * Original: 0x001C2320 - 0x001C2327 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2320(void)
{

loc_001C2320: ;
    eax = MEM32(ecx + 0x13C);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2330
 * Original: 0x001C2330 - 0x001C2366 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2330: ;
    eax = MEM32(esp + 4);
    edx = 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2356; /* je: equal / zero */

loc_001C233D: ;
    edx = 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C2363; /* jne: not equal / not zero */

loc_001C2346: ;
    MEM32(ecx + 0x34) = 6;
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x4C) = edx;
    esp += 8; return; /* ret 4 */

loc_001C2356: ;
    MEM32(ecx + 0x34) = 5;
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x4C) = edx;

loc_001C2363: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2370
 * Original: 0x001C2370 - 0x001C2377 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2370(void)
{

loc_001C2370: ;
    eax = MEM32(ecx + 0x140);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2380
 * Original: 0x001C2380 - 0x001C23BA (58 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2380: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C23B0; /* je: equal / zero */

loc_001C2388: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C239F; /* je: equal / zero */

loc_001C238D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C23B7; /* jne: not equal / not zero */

loc_001C2392: ;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x38) = 0x2A;
    esp += 8; return; /* ret 4 */

loc_001C239F: ;
    MEM32(ecx + 0x50) = 0x10;
    MEM32(ecx + 0x38) = 0x2C;
    esp += 8; return; /* ret 4 */

loc_001C23B0: ;
    MEM32(ecx + 0x50) = 0;

loc_001C23B7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C23C0
 * Original: 0x001C23C0 - 0x001C23C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C23C0(void)
{

loc_001C23C0: ;
    eax = MEM32(ecx + 0x144);
    esp += 4; return; /* ret */

}

/**
 * sub_001C23D0
 * Original: 0x001C23D0 - 0x001C2444 (116 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C23D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C23D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ecx + 0x58) = LO8(eax);
    MEM32(ecx + 0x11C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001C23F1; /* jne: not equal / not zero */

loc_001C23E5: ;
    MEM32(ecx + 0x120) = 0x80000000u;
    goto loc_001C2422;

loc_001C23F1: ;
    eax = MEM32(ecx + 0xE0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x120) = 0;
    if ((_fa == 0)) goto loc_001C241A; /* je: equal / zero */

loc_001C2406: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001C2413; /* je: equal / zero */

loc_001C2409: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C241C; /* jne: not equal / not zero */

loc_001C240C: ;
    edx = 4;
    goto loc_001C241C;

loc_001C2413: ;
    edx = 2;
    goto loc_001C241C;

loc_001C241A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C241C: ;
    MEM32(ecx + 0x120) = edx;

loc_001C2422: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2441; /* je: equal / zero */

loc_001C242B: ;
    ecx = MEM32(ecx + 0x120);
    eax = MEM32(0x2E90A8);
    MEM32(0x2E90A8) = eax;
    MEM32(0x2E94AC) = ecx;

loc_001C2441: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2450
 * Original: 0x001C2450 - 0x001C2454 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2450(void)
{

loc_001C2450: ;
    SET_LO8(eax, MEM8(ecx + 0x58));
    esp += 4; return; /* ret */

}

/**
 * sub_001C2460
 * Original: 0x001C2460 - 0x001C246C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2460(void)
{

loc_001C2460: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x64) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2470
 * Original: 0x001C2470 - 0x001C247E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2470(void)
{

loc_001C2470: ;
    eax = MEM32(ecx + 0x64);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2480
 * Original: 0x001C2480 - 0x001C2C82 (2050 bytes, 549 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2480: ;
    eax = MEM32(0x528690);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x4C));
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001C24A7; /* jne: not equal / not zero */

loc_001C2494: ;
    eax = MEM32(esi + 0xB0);
    ecx = MEM32(esi + 0xAC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C24A7u); RECOMP_ABI_CALL(0x002D9CC0u, sub_002D9CC0); /* call 0x002D9CC0 */

loc_001C24A7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0xF0;
    ecx = 0x11;
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = MEM32(esi + 0x34);
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x44);
    MEM32(esi + 0xF8) = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0xEC)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xEC), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp) = eax;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0xF4) = ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x500) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x500 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xFC) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001C24FB; /* jne: not equal / not zero */

loc_001C24E9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2D0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C24FB; /* jne: not equal / not zero */

loc_001C24F1: ;
    MEM32(esi + 0x118) = 0x50;

loc_001C24FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x780 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C252D; /* jne: not equal / not zero */

loc_001C2502: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x438) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x438 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2514; /* jne: not equal / not zero */

loc_001C250A: ;
    MEM32(esi + 0x118) = 0x30;

loc_001C2514: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x780 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C252D; /* jne: not equal / not zero */

loc_001C251B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x21C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C252D; /* jne: not equal / not zero */

loc_001C2523: ;
    MEM32(esi + 0x118) = 0xB0;

loc_001C252D: ;
    SET_LO8(ecx, MEM8(esi + 0xA4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C253E; /* je: equal / zero */

loc_001C2537: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x118) = MEM32(esi + 0x118) | 0x10;
    _fa = (uint32_t)(MEM32(esi + 0x118)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C253E: ;
    SET_LO8(ecx, MEM8(esi + 0xA5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2559; /* je: equal / zero */

loc_001C2548: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x280) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x280 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001C2559; /* jne: not equal / not zero */

loc_001C254F: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x118) = MEM32(esi + 0x118) | 0x100;
    _fa = (uint32_t)(MEM32(esi + 0x118)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C2559: ;
    SET_LO8(eax, MEM8(esi + 0xDC));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    MEM32(esi + 0x10C) = ebx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x11C) = eax;
    SET_LO8(eax, MEM8(esi + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C258B; /* jne: not equal / not zero */

loc_001C2579: ;
    MEM32(esi + 0x11C) = ebx;
    MEM32(esi + 0x120) = 0x80000000u;
    goto loc_001C25B2;

loc_001C258B: ;
    eax = MEM32(esi + 0xE0);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001C25AA; /* je: equal / zero */

loc_001C2596: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001C25A3; /* je: equal / zero */

loc_001C2599: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C25AC; /* jne: not equal / not zero */

loc_001C259C: ;
    ecx = 4;
    goto loc_001C25AC;

loc_001C25A3: ;
    ecx = 2;
    goto loc_001C25AC;

loc_001C25AA: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C25AC: ;
    MEM32(esi + 0x120) = ecx;

loc_001C25B2: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001C25CF; /* je: equal / zero */

loc_001C25BE: ;
    ecx = MEM32(esi + 0x38);
    MEM32(esi + 0x110) = ebx;
    MEM32(esi + 0x114) = ecx;
    goto loc_001C25D9;

loc_001C25CF: ;
    MEM32(esi + 0x110) = 0;

loc_001C25D9: ;
    edx = MEM32(esi + 0x3C);
    MEM32(esi + 0x104) = ebx;
    MEM32(esi + 0x100) = edx;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C2611; /* jne: not equal / not zero */

loc_001C25F1: ;
    PUSH32(esp, 0x528690);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C2603u); RECOMP_ABI_CALL(0x002D9CE0u, sub_002D9CE0); /* call 0x002D9CE0 */

loc_001C2603: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_001C261C; /* jge: greater or equal (signed >=) */

loc_001C2607: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001C2611: ;
    PUSH32(esp, 0x001C2616u); RECOMP_ABI_CALL(0x002D98F0u, sub_002D98F0); /* call 0x002D98F0 */

loc_001C2616: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001C261Cu); RECOMP_ABI_CALL(0x002D8750u, sub_002D8750); /* call 0x002D8750 */

loc_001C261C: ;
    PUSH32(esp, 0x528380);
    PUSH32(esp, 0x001C2626u); RECOMP_ABI_CALL(0x002D8310u, sub_002D8310); /* call 0x002D8310 */

loc_001C2626: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C262Cu); RECOMP_ABI_CALL(0x002DD140u, sub_002DD140); /* call 0x002DD140 */

loc_001C262C: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0x001C2636u); RECOMP_ABI_CALL(0x002DA190u, sub_002DA190); /* call 0x002DA190 */

loc_001C2636: ;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0x001C2642u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2642: ;
    _cf = 0; /* logical op clears CF */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E939C) = ebx;
    MEM32(0x37EA30) = ebp;
    MEM32(0x37EA08) = ebp;
    MEM32(0x37EA0C) = ebp;
    eax = MEM32(esi + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2666u); RECOMP_ABI_CALL(0x002DB010u, sub_002DB010); /* call 0x002DB010 */

loc_001C2666: ;
    ecx = ZX8(MEM8(esi + 0x84));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C2673u); RECOMP_ABI_CALL(0x002DB0A0u, sub_002DB0A0); /* call 0x002DB0A0 */

loc_001C2673: ;
    edi = MEM32(esi + 0x7C);
    edx = edi;
    ecx = 0x4036C;
    PUSH32(esp, 0x001C2682u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2682: ;
    MEM32(0x2E93D0) = edi;
    edi = MEM32(esi + 0x78);
    edx = edi;
    ecx = 0x40368;
    PUSH32(esp, 0x001C2697u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2697: ;
    MEM32(0x2E93CC) = edi;
    edi = MEM32(esi + 0x74);
    edx = edi;
    ecx = 0x40364;
    PUSH32(esp, 0x001C26ACu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C26AC: ;
    MEM32(0x2E93C8) = edi;
    edx = MEM32(esi + 0x70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C26BBu); RECOMP_ABI_CALL(0x002DB140u, sub_002DB140); /* call 0x002DB140 */

loc_001C26BB: ;
    edi = MEM32(esi + 0x6C);
    edx = edi;
    ecx = 0x40378;
    PUSH32(esp, 0x001C26CAu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C26CA: ;
    MEM32(0x2E93C4) = edi;
    edi = MEM32(esi + 0x68);
    edx = edi;
    ecx = 0x40374;
    PUSH32(esp, 0x001C26DFu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C26DF: ;
    MEM32(0x2E93C0) = edi;
    edi = ZX8(MEM8(esi + 0x85));
    edx = edi;
    ecx = 0x4035C;
    PUSH32(esp, 0x001C26F8u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C26F8: ;
    MEM32(0x2E93B0) = edi;
    edi = MEM32(esi + 0x88);
    edx = edi;
    ecx = 0x40358;
    PUSH32(esp, 0x001C2710u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2710: ;
    MEM32(0x2E93BC) = edi;
    edi = ZX8(MEM8(esi + 0x60));
    edx = edi;
    ecx = 0x40310;
    PUSH32(esp, 0x001C2726u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2726: ;
    MEM32(0x2E93B4) = edi;
    eax = MEM32(esi + 0xB8);
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C273Fu); RECOMP_ABI_CALL(0x002D9A20u, sub_002D9A20); /* call 0x002D9A20 */

loc_001C273F: ;
    edx = MEM32(esi + 0x64);
    MEM32(0x37EA10) = edx;
    eax = ZX8(MEM8(esi + 0x84));
    MEM32(0x37DB8C) = eax;
    ecx = MEM32(esi + 0x7C);
    MEM32(0x37DBA4) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(0x37DBA8) = edx;
    eax = MEM32(esi + 0x74);
    MEM32(0x37DBAC) = eax;
    ecx = MEM32(esi + 0x70);
    MEM32(0x37DB90) = ecx;
    edx = MEM32(esi + 0x6C);
    MEM32(0x37DB94) = edx;
    eax = MEM32(esi + 0x68);
    MEM32(0x37DB98) = eax;
    SET_LO8(ecx, MEM8(esi + 0x85));
    MEM8(0x37DB9C) = LO8(ecx);
    edx = MEM32(esi + 0x88);
    MEM32(0x37DBA0) = edx;
    SET_LO8(eax, MEM8(esi + 0x60));
    MEM8(0x528688) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x8D));
    MEM8(0x528689) = LO8(ecx);
    edx = MEM32(esi + 0xA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C27C0u); RECOMP_ABI_CALL(0x002DA100u, sub_002DA100); /* call 0x002DA100 */

loc_001C27C0: ;
    eax = ZX8(MEM8(esi + 0x8D));
    edx = MEM32(0x2E90A8);
    ecx = 0x2000;
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = edx;
    edi = edx;
    _cf = 0; /* logical op clears CF */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E9420) = eax;
    eax = MEM32(esi + 0x90);
    MEM32(0x2E90A8) = edi;
    edx = edi;
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E9424) = eax;
    eax = MEM32(esi + 0x94);
    MEM32(0x2E90A8) = edx;
    edi = edx;
    MEM32(0x2E9428) = eax;
    eax = MEM32(esi + 0x98);
    _cf = 0; /* logical op clears CF */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = edi;
    MEM32(0x2E942C) = eax;
    eax = MEM32(esi + 0x9C);
    edx = edi;
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = edx;
    MEM32(0x2E9430) = eax;
    eax = MEM32(esi + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C283Fu); RECOMP_ABI_CALL(0x002DA140u, sub_002DA140); /* call 0x002DA140 */

loc_001C283F: ;
    eax = MEM32(esi + 0xBC);
    edx = MEM32(0x2E90A8);
    ecx = 0x100;
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = edx;
    edi = edx;
    _cf = 0; /* logical op clears CF */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E9480) = eax;
    eax = MEM32(esi + 0xC0);
    MEM32(0x2E90A8) = edi;
    edx = edi;
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E9484) = eax;
    eax = MEM32(esi + 0xC4);
    MEM32(0x2E90A8) = edx;
    edi = edx;
    _cf = 0; /* logical op clears CF */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E949C) = eax;
    eax = MEM32(esi + 0xC8);
    MEM32(0x2E90A8) = edi;
    edx = edi;
    MEM32(0x2E9490) = eax;
    eax = MEM32(esi + 0xCC);
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = edx;
    edi = edx;
    MEM32(0x2E9494) = eax;
    eax = MEM32(esi + 0xD0);
    _cf = 0; /* logical op clears CF */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = edi;
    MEM32(0x2E9498) = eax;
    eax = ZX8(MEM8(esi + 0xD4));
    edx = edi;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x900;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = edx;
    MEM32(0x2E9488) = eax;
    eax = ZX8(MEM8(esi + 0xD5));
    edi = edx;
    _cf = 0; /* logical op clears CF */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = edi;
    MEM32(0x2E948C) = eax;
    ecx = ZX8(MEM8(esi + 0xED));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C2903u); RECOMP_ABI_CALL(0x002DB2E0u, sub_002DB2E0); /* call 0x002DB2E0 */

loc_001C2903: ;
    edx = ZX8(MEM8(esi + 0xEE));
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C2910u); RECOMP_ABI_CALL(0x002DB2C0u, sub_002DB2C0); /* call 0x002DB2C0 */

loc_001C2910: ;
    eax = ZX8(MEM8(esi + 0xEF));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C291Du); RECOMP_ABI_CALL(0x002DB1E0u, sub_002DB1E0); /* call 0x002DB1E0 */

loc_001C291D: ;
    ecx = MEM32(esi + 0xE8);
    edx = MEM32(esi + 0xE4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C2930u); RECOMP_ABI_CALL(0x002DC070u, sub_002DC070); /* call 0x002DC070 */

loc_001C2930: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x44);
    edx = MEM32(esi + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, 0xF3);
    MEM32(esi + 0x134) = eax;
    eax = MEM32(esi + 0x4C);
    MEM32(esi + 0x138) = ecx;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi + 0x13C) = edx;
    MEM32(esi + 0x140) = eax;
    MEM32(esi + 0x144) = ecx;
    PUSH32(esp, 0x001C2977u); RECOMP_ABI_CALL(0x002DC350u, sub_002DC350); /* call 0x002DC350 */

loc_001C2977: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C297Eu); RECOMP_ABI_CALL(0x002DD140u, sub_002DD140); /* call 0x002DD140 */

loc_001C297E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C2985u); RECOMP_ABI_CALL(0x002DBF80u, sub_002DBF80); /* call 0x002DBF80 */

loc_001C2985: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C298Bu); RECOMP_ABI_CALL(0x002DD140u, sub_002DD140); /* call 0x002DD140 */

loc_001C298B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C2992u); RECOMP_ABI_CALL(0x002D8A80u, sub_002D8A80); /* call 0x002D8A80 */

loc_001C2992: ;
    MEM32(esi + 0x14C) = eax;
    PUSH32(esp, 0x001C299Du); RECOMP_ABI_CALL(0x002D8E00u, sub_002D8E00); /* call 0x002D8E00 */

loc_001C299D: ;
    PUSH32(esp, ebp);
    MEM32(esi + 0x150) = eax;
    PUSH32(esp, 0x001C29A9u); RECOMP_ABI_CALL(0x002D8A80u, sub_002D8A80); /* call 0x002D8A80 */

loc_001C29A9: ;
    MEM32(esi + 0x148) = eax;
    edi = MEM32(0x528698);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C29D4; /* je: equal / zero */

loc_001C29B9: ;
    /* nop */

loc_001C29C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C29CAu); RECOMP_ABI_CALL(0x001D2A50u, sub_001D2A50); /* call 0x001D2A50 */

loc_001C29CA: ;
    edi = MEM32(edi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C29C0; /* jne: not equal / not zero */

loc_001C29D4: ;
    edi = MEM32(0x52869C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001C29F0; /* je: equal / zero */

loc_001C29DE: ;
    edi = edi;

loc_001C29E0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C29E6u); RECOMP_ABI_CALL(0x001D2700u, sub_001D2700); /* call 0x001D2700 */

loc_001C29E6: ;
    edi = MEM32(edi + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C29E0; /* jne: not equal / not zero */

loc_001C29F0: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C29FCu); RECOMP_ABI_CALL(0x002D8560u, sub_002D8560); /* call 0x002D8560 */

loc_001C29FC: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C2A07u); RECOMP_ABI_CALL(0x002D8560u, sub_002D8560); /* call 0x002D8560 */

loc_001C2A07: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C2A10u); RECOMP_ABI_CALL(0x002D9560u, sub_002D9560); /* call 0x002D9560 */

loc_001C2A10: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001C2A1Cu); RECOMP_ABI_CALL(0x002D9560u, sub_002D9560); /* call 0x002D9560 */

loc_001C2A1C: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = ecx;
    PUSH32(esp, 0x001C2A54u); RECOMP_ABI_CALL(0x002D9560u, sub_002D9560); /* call 0x002D9560 */

loc_001C2A54: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C2A5Fu); RECOMP_ABI_CALL(0x002D9560u, sub_002D9560); /* call 0x002D9560 */

loc_001C2A5F: ;
    eax = MEM32(esi + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C2ADD; /* jne: not equal / not zero */

loc_001C2A69: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x335E78);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001C2A76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2A70u); } /* indirect call */
    }

loc_001C2A76: ;
    MEM32(esi + 0x158) = eax;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x28;
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(esi + 0x148);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2AA0u); RECOMP_ABI_CALL(0x002DE9A0u, sub_002DE9A0); /* call 0x002DE9A0 */

loc_001C2AA0: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x34);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = MEM32(esi + 0x158);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C2ACBu); RECOMP_ABI_CALL(0x002F6369u, sub_002F6369); /* call 0x002F6369 */

loc_001C2ACB: ;
    edx = MEM32(esi + 0x148);
    eax = MEM32(esi + 0x158);
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;

loc_001C2ADD: ;
    eax = MEM32(esi + 0x168);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C2AFC; /* jne: not equal / not zero */

loc_001C2AE7: ;
    edx = MEM32(esi + 0x158);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C2AF3u); RECOMP_ABI_CALL(0x001CD900u, sub_001CD900); /* call 0x001CD900 */

loc_001C2AF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x168) = eax;

loc_001C2AFC: ;
    eax = MEM32(esi + 0x15C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C2B7A; /* jne: not equal / not zero */

loc_001C2B06: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x335E84);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001C2B13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2B0Du); } /* indirect call */
    }

loc_001C2B13: ;
    MEM32(esi + 0x15C) = eax;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x28;
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(esi + 0x14C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2B3Du); RECOMP_ABI_CALL(0x002DE9A0u, sub_002DE9A0); /* call 0x002DE9A0 */

loc_001C2B3D: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x34);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = MEM32(esi + 0x15C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C2B68u); RECOMP_ABI_CALL(0x002F6369u, sub_002F6369); /* call 0x002F6369 */

loc_001C2B68: ;
    edx = MEM32(esi + 0x14C);
    eax = MEM32(esi + 0x15C);
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;

loc_001C2B7A: ;
    eax = MEM32(esi + 0x164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C2B99; /* jne: not equal / not zero */

loc_001C2B84: ;
    edx = MEM32(esi + 0x15C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C2B90u); RECOMP_ABI_CALL(0x001CD900u, sub_001CD900); /* call 0x001CD900 */

loc_001C2B90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x164) = eax;

loc_001C2B99: ;
    eax = MEM32(esi + 0x160);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C2C4F; /* jne: not equal / not zero */

loc_001C2BA7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x335E90);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x001C2BB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2BAEu); } /* indirect call */
    }

loc_001C2BB4: ;
    MEM32(esi + 0x160) = eax;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x28;
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(esi + 0x150);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2BDEu); RECOMP_ABI_CALL(0x002DE9A0u, sub_002DE9A0); /* call 0x002DE9A0 */

loc_001C2BDE: ;
    eax = MEM32(esp + 0x28);
    ecx = eax + -42;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001C2C0F; /* ja: above (unsigned >) */

loc_001C2BEA: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1C2C84); /* switch: 7 entries, 5 targets */
    if (_jt == 0x001C2BF1u) goto loc_001C2BF1;
    if (_jt == 0x001C2BF8u) goto loc_001C2BF8;
    if (_jt == 0x001C2BFFu) goto loc_001C2BFF;
    if (_jt == 0x001C2C06u) goto loc_001C2C06;
    if (_jt == 0x001C2C0Fu) goto loc_001C2C0F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C2BF1: ;
    eax = 5;
    goto loc_001C2C0B;

loc_001C2BF8: ;
    eax = 6;
    goto loc_001C2C0B;

loc_001C2BFF: ;
    eax = 0x11;
    goto loc_001C2C0B;

loc_001C2C06: ;
    eax = 0x12;

loc_001C2C0B: ;
    MEM32(esp + 0x28) = eax;

loc_001C2C0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2C15u); RECOMP_ABI_CALL(0x002F5587u, sub_002F5587); /* call 0x002F5587 */

loc_001C2C15: ;
    edx = MEM32(esi + 0x160);
    ecx = eax;
    eax = MEM32(esp + 0x3C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2C3Du); RECOMP_ABI_CALL(0x002F6369u, sub_002F6369); /* call 0x002F6369 */

loc_001C2C3D: ;
    eax = MEM32(esi + 0x150);
    ecx = MEM32(esi + 0x160);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_001C2C4F: ;
    eax = MEM32(esi + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001C2C6E; /* jne: not equal / not zero */

loc_001C2C59: ;
    eax = MEM32(esi + 0x160);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2C65u); RECOMP_ABI_CALL(0x001CD900u, sub_001CD900); /* call 0x001CD900 */

loc_001C2C65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x16C) = eax;

loc_001C2C6E: ;
    PUSH32(esp, 0x1C1D90);
    PUSH32(esp, 0x001C2C78u); RECOMP_ABI_CALL(0x002D8510u, sub_002D8510); /* call 0x002D8510 */

loc_001C2C78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C2CA0
 * Original: 0x001C2CA0 - 0x001C2CDA (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2CA0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x60) = LO8(eax);
    _fa = (uint32_t)(MEM8(0x528688)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x528688), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2CD5; /* je: equal / zero */

loc_001C2CAF: ;
    MEM8(0x528688) = LO8(eax);
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2CD5; /* je: equal / zero */

loc_001C2CBD: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0x60));
    edx = esi;
    ecx = 0x40310;
    PUSH32(esp, 0x001C2CCEu); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2CCE: ;
    MEM32(0x2E93B4) = esi;
    POP32(esp, esi);

loc_001C2CD5: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2CE0
 * Original: 0x001C2CE0 - 0x001C2CEE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2CE0(void)
{

loc_001C2CE0: ;
    SET_LO8(eax, MEM8(ecx + 0x60));
    ecx = MEM32(esp + 4);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2CF0
 * Original: 0x001C2CF0 - 0x001C2D2D (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2CF0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x85) = LO8(eax);
    _fa = (uint32_t)(MEM8(0x37DB9C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x37DB9C), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2D28; /* je: equal / zero */

loc_001C2D02: ;
    ecx = MEM32(0x528690);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(0x37DB9C) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001C2D28; /* je: equal / zero */

loc_001C2D11: ;
    PUSH32(esp, esi);
    esi = ZX8(LO8(eax));
    edx = esi;
    ecx = 0x4035C;
    PUSH32(esp, 0x001C2D21u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2D21: ;
    MEM32(0x2E93B0) = esi;
    POP32(esp, esi);

loc_001C2D28: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2D30
 * Original: 0x001C2D30 - 0x001C2D41 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2D30(void)
{

loc_001C2D30: ;
    SET_LO8(eax, MEM8(ecx + 0x85));
    ecx = MEM32(esp + 4);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2D50
 * Original: 0x001C2D50 - 0x001C2D5C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2D50(void)
{

loc_001C2D50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2D60
 * Original: 0x001C2D60 - 0x001C2D6E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2D60(void)
{

loc_001C2D60: ;
    eax = MEM32(ecx + 0x5C);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2D70
 * Original: 0x001C2D70 - 0x001C2DC8 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2D70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C2DC3; /* jle: less or equal (signed <=) */

loc_001C2D78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C2DC3; /* jg: greater (signed >) */

loc_001C2D7D: ;
    MEM32(ecx + 0xE0) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001C2D9C; /* je: equal / zero */

loc_001C2D88: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001C2D95; /* je: equal / zero */

loc_001C2D8B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C2D9E; /* jne: not equal / not zero */

loc_001C2D8E: ;
    edx = 4;
    goto loc_001C2D9E;

loc_001C2D95: ;
    edx = 2;
    goto loc_001C2D9E;

loc_001C2D9C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C2D9E: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2DBE; /* je: equal / zero */

loc_001C2DA7: ;
    SET_LO8(eax, MEM8(ecx + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2DBE; /* je: equal / zero */

loc_001C2DAE: ;
    eax = MEM32(0x2E90A8);
    MEM32(0x2E90A8) = eax;
    MEM32(0x2E94AC) = edx;

loc_001C2DBE: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_001C2DC3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2DD0
 * Original: 0x001C2DD0 - 0x001C2DE1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2DD0(void)
{

loc_001C2DD0: ;
    eax = MEM32(ecx + 0xE0);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2DF0
 * Original: 0x001C2DF0 - 0x001C2DF5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2DF0(void)
{

loc_001C2DF0: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2E00
 * Original: 0x001C2E00 - 0x001C2E2C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2E00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    edx = MEM32(ecx + 8);
    MEM32(edx + 0x3C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001C2E1E; /* jne: not equal / not zero */

loc_001C2E0F: ;
    eax = MEM32(ecx + 8);
    MEM8(eax + 0x8C) = 0;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_001C2E1E: ;
    ecx = MEM32(ecx + 8);
    SET_LO8(eax, 1);
    MEM8(ecx + 0x8C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2E30
 * Original: 0x001C2E30 - 0x001C2E41 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2E30(void)
{

loc_001C2E30: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2E50
 * Original: 0x001C2E50 - 0x001C2E94 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2E50: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + 0x68) = esi;
    edx = MEM32(ecx + 8);
    eax = MEM32(0x37DB98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x68) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2E8E; /* je: equal / zero */

loc_001C2E68: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edx;
    edx = MEM32(ecx + 0x68);
    MEM32(0x37DB98) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C2E8E; /* je: equal / zero */

loc_001C2E7C: ;
    edx = esi;
    ecx = 0x40374;
    PUSH32(esp, 0x001C2E88u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2E88: ;
    MEM32(0x2E93C0) = esi;

loc_001C2E8E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2EA0
 * Original: 0x001C2EA0 - 0x001C2EB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2EA0(void)
{

loc_001C2EA0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x68);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2EC0
 * Original: 0x001C2EC0 - 0x001C2F04 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2EC0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + 0x6C) = esi;
    edx = MEM32(ecx + 8);
    eax = MEM32(0x37DB94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x6C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2EFE; /* je: equal / zero */

loc_001C2ED8: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edx;
    edx = MEM32(ecx + 0x6C);
    MEM32(0x37DB94) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C2EFE; /* je: equal / zero */

loc_001C2EEC: ;
    edx = esi;
    ecx = 0x40378;
    PUSH32(esp, 0x001C2EF8u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2EF8: ;
    MEM32(0x2E93C4) = esi;

loc_001C2EFE: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2F10
 * Original: 0x001C2F10 - 0x001C2F21 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2F10(void)
{

loc_001C2F10: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x6C);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2F30
 * Original: 0x001C2F30 - 0x001C2F6A (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2F30: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEM32(edx + 0x70) = eax;
    edx = MEM32(ecx + 8);
    esi = MEM32(0x37DB90);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0x70) (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C2F65; /* je: equal / zero */

loc_001C2F4A: ;
    ecx = edx;
    edx = MEM32(ecx + 0x70);
    ecx = MEM32(0x528690);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x37DB90) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C2F65; /* je: equal / zero */

loc_001C2F5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C2F65u); RECOMP_ABI_CALL(0x002DB140u, sub_002DB140); /* call 0x002DB140 */

loc_001C2F65: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2F70
 * Original: 0x001C2F70 - 0x001C2F81 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2F70(void)
{

loc_001C2F70: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x70);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2F90
 * Original: 0x001C2F90 - 0x001C2FD4 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2F90: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + 0x74) = esi;
    edx = MEM32(ecx + 8);
    eax = MEM32(0x37DBAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x74) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2FCE; /* je: equal / zero */

loc_001C2FA8: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edx;
    edx = MEM32(ecx + 0x74);
    MEM32(0x37DBAC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C2FCE; /* je: equal / zero */

loc_001C2FBC: ;
    edx = esi;
    ecx = 0x40364;
    PUSH32(esp, 0x001C2FC8u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C2FC8: ;
    MEM32(0x2E93C8) = esi;

loc_001C2FCE: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2FE0
 * Original: 0x001C2FE0 - 0x001C2FF1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2FE0(void)
{

loc_001C2FE0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x74);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3000
 * Original: 0x001C3000 - 0x001C3044 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3000: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + 0x78) = esi;
    edx = MEM32(ecx + 8);
    eax = MEM32(0x37DBA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x78) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C303E; /* je: equal / zero */

loc_001C3018: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edx;
    edx = MEM32(ecx + 0x78);
    MEM32(0x37DBA8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C303E; /* je: equal / zero */

loc_001C302C: ;
    edx = esi;
    ecx = 0x40368;
    PUSH32(esp, 0x001C3038u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C3038: ;
    MEM32(0x2E93CC) = esi;

loc_001C303E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3050
 * Original: 0x001C3050 - 0x001C3061 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3050(void)
{

loc_001C3050: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x78);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3070
 * Original: 0x001C3070 - 0x001C30B4 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3070: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + 0x7C) = esi;
    edx = MEM32(ecx + 8);
    eax = MEM32(0x37DBA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x7C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C30AE; /* je: equal / zero */

loc_001C3088: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edx;
    edx = MEM32(ecx + 0x7C);
    MEM32(0x37DBA4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C30AE; /* je: equal / zero */

loc_001C309C: ;
    edx = esi;
    ecx = 0x4036C;
    PUSH32(esp, 0x001C30A8u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C30A8: ;
    MEM32(0x2E93D0) = esi;

loc_001C30AE: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C30C0
 * Original: 0x001C30C0 - 0x001C30D1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C30C0(void)
{

loc_001C30C0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x7C);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C30E0
 * Original: 0x001C30E0 - 0x001C312D (77 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C30E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C30E0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + 0x80) = esi;
    edx = MEM32(ecx + 8);
    eax = MEM32(0x37DBB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x80) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3127; /* je: equal / zero */

loc_001C30FE: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edx;
    edx = MEM32(ecx + 0x80);
    MEM32(0x37DBB0) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C3127; /* je: equal / zero */

loc_001C3115: ;
    edx = esi;
    ecx = 0x40360;
    PUSH32(esp, 0x001C3121u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C3121: ;
    MEM32(0x2E93D4) = esi;

loc_001C3127: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3130
 * Original: 0x001C3130 - 0x001C3144 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3130(void)
{

loc_001C3130: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x80);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3150
 * Original: 0x001C3150 - 0x001C3228 (216 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3150: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x300;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C3180;

    /* nop */
    goto loc_001C3180;

    /* nop */

loc_001C3180: ;
    ecx = ZX8(MEM8(eax + 0x528380));
    xmm4.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm4.f[0], g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFF000000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C31A4; /* je: equal / zero */

loc_001C319F: ;
    ecx = 0xFF;

loc_001C31A4: ;
    edx = ZX8(MEM8(eax + 0x528480));
    xmm4.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEM8(esp + eax) = LO8(ecx);
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm4.f[0], g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFF000000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C31CB; /* je: equal / zero */

loc_001C31C6: ;
    ecx = 0xFF;

loc_001C31CB: ;
    MEM8(esp + eax + 0x100) = LO8(ecx);
    ecx = ZX8(MEM8(eax + 0x528580));
    xmm4.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm4.f[0], g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFF000000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C31F6; /* je: equal / zero */

loc_001C31F1: ;
    ecx = 0xFF;

loc_001C31F6: ;
    MEM8(esp + eax + 0x200) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C3180; /* jl: less (signed <) */

loc_001C3209: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C321D; /* je: equal / zero */

loc_001C3212: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001C321Du); RECOMP_ABI_CALL(0x002D8280u, sub_002D8280); /* call 0x002D8280 */

loc_001C321D: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x300;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C3230
 * Original: 0x001C3230 - 0x001C329C (108 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3230: ;
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x300;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x308);
    PUSH32(esp, edi);
    edi = esi;
    ecx = esp + 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001C3250: ;
    ecx = esp + eax + 8;
    SET_LO8(edx, MEM8(edi + ecx));
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(esi + eax + 0x100));
    MEM8(ecx + 0x100) = LO8(edx);
    SET_LO8(edx, MEM8(esi + eax + 0x200));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    MEM8(ecx + 0x200) = LO8(edx);
    if (CMP_L(_fas, _fbs)) goto loc_001C3250; /* jl: less (signed <) */

loc_001C327B: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C3291; /* je: equal / zero */

loc_001C3286: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001C3291u); RECOMP_ABI_CALL(0x002D8280u, sub_002D8280); /* call 0x002D8280 */

loc_001C3291: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x300;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C32A0
 * Original: 0x001C32A0 - 0x001C32D5 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C32A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C32A0: ;
    edx = MEM32(ecx + 8);
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(edx + 0x84) = LO8(eax);
    ecx = MEM32(ecx + 8);
    edx = ZX8(MEM8(ecx + 0x84));
    ecx = MEM32(0x528690);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x37DB8C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C32D0; /* je: equal / zero */

loc_001C32C7: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C32D0u); RECOMP_ABI_CALL(0x002DB0A0u, sub_002DB0A0); /* call 0x002DB0A0 */

loc_001C32D0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C32E0
 * Original: 0x001C32E0 - 0x001C32F4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C32E0(void)
{

loc_001C32E0: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ecx, MEM8(eax + 0x84));
    edx = MEM32(esp + 4);
    MEM8(edx) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3300
 * Original: 0x001C3300 - 0x001C3321 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3300(void)
{

loc_001C3300: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001C3308u); RECOMP_ABI_CALL(0x002D8A80u, sub_002D8A80); /* call 0x002D8A80 */

loc_001C3308: ;
    esi = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C3315u); RECOMP_ABI_CALL(0x002F63CCu, sub_002F63CC); /* call 0x002F63CC */

loc_001C3315: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C331Bu); RECOMP_ABI_CALL(0x002DE660u, sub_002DE660); /* call 0x002DE660 */

loc_001C331B: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3330
 * Original: 0x001C3330 - 0x001C337D (77 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3330: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + 0x88) = esi;
    edx = MEM32(ecx + 8);
    eax = MEM32(0x37DBA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x88) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3377; /* je: equal / zero */

loc_001C334E: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edx;
    edx = MEM32(ecx + 0x88);
    MEM32(0x37DBA0) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C3377; /* je: equal / zero */

loc_001C3365: ;
    edx = esi;
    ecx = 0x40358;
    PUSH32(esp, 0x001C3371u); RECOMP_ABI_CALL(0x002D9DC0u, sub_002D9DC0); /* call 0x002D9DC0 */

loc_001C3371: ;
    MEM32(0x2E93BC) = esi;

loc_001C3377: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3380
 * Original: 0x001C3380 - 0x001C3394 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3380(void)
{

loc_001C3380: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x88);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C33A0
 * Original: 0x001C33A0 - 0x001C33D7 (55 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C33A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C33A0: ;
    ecx = MEM32(ecx + 8);
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x8D) = LO8(eax);
    ecx = MEM32(0x528690);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C33D2; /* je: equal / zero */

loc_001C33B7: ;
    ecx = MEM32(0x2E90A8);
    edx = ZX8(LO8(eax));
    ecx = ecx | 0x2000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = ecx;
    MEM32(0x2E9420) = edx;

loc_001C33D2: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C33E0
 * Original: 0x001C33E0 - 0x001C33F4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C33E0(void)
{

loc_001C33E0: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ecx, MEM8(eax + 0x8D));
    edx = MEM32(esp + 4);
    MEM8(edx) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3400
 * Original: 0x001C3400 - 0x001C342B (43 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3400: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x90) = eax;
    ecx = MEM32(0x528690);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3426; /* je: equal / zero */

loc_001C3417: ;
    MEM32(0x2E90A8) = MEM32(0x2E90A8) | 0x2000;
    _fa = (uint32_t)(MEM32(0x2E90A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E9424) = eax;

loc_001C3426: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3430
 * Original: 0x001C3430 - 0x001C3444 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3430(void)
{

loc_001C3430: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x90);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3450
 * Original: 0x001C3450 - 0x001C3488 (56 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3450: ;
    eax = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3483; /* je: equal / zero */

loc_001C346A: ;
    eax = MEM32(0x2E90A8);
    ecx = MEM32(esp + 4);
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = eax;
    MEM32(0x2E9428) = ecx;

loc_001C3483: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3490
 * Original: 0x001C3490 - 0x001C34A4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3490(void)
{

loc_001C3490: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x94);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C34B0
 * Original: 0x001C34B0 - 0x001C34E8 (56 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C34B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C34B0: ;
    eax = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C34E3; /* je: equal / zero */

loc_001C34CA: ;
    eax = MEM32(0x2E90A8);
    ecx = MEM32(esp + 4);
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = eax;
    MEM32(0x2E942C) = ecx;

loc_001C34E3: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C34F0
 * Original: 0x001C34F0 - 0x001C3504 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C34F0(void)
{

loc_001C34F0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x98);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3510
 * Original: 0x001C3510 - 0x001C3548 (56 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3510: ;
    eax = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x9C) = xmm0.f[0]; /* movss */
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3543; /* je: equal / zero */

loc_001C352A: ;
    eax = MEM32(0x2E90A8);
    ecx = MEM32(esp + 4);
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2E90A8) = eax;
    MEM32(0x2E9430) = ecx;

loc_001C3543: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3550
 * Original: 0x001C3550 - 0x001C3564 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3550(void)
{

loc_001C3550: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x9C);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3570
 * Original: 0x001C3570 - 0x001C3592 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3570: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xA0) = eax;
    ecx = MEM32(0x528690);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C358D; /* je: equal / zero */

loc_001C3587: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C358Du); RECOMP_ABI_CALL(0x002DA140u, sub_002DA140); /* call 0x002DA140 */

loc_001C358D: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C35A0
 * Original: 0x001C35A0 - 0x001C35B4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C35A0(void)
{

loc_001C35A0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0xA0);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C35C0
 * Original: 0x001C35C0 - 0x001C3636 (118 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C35C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C35C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    MEM8(ecx + 0xA4) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001C35F1; /* jne: not equal / not zero */

loc_001C35D4: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x780 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C35EA; /* je: equal / zero */

loc_001C35E2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x500) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x500 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C35F1; /* jne: not equal / not zero */

loc_001C35EA: ;
    MEM8(eax + 0xA4) = 1;

loc_001C35F1: ;
    eax = MEM32(0x528690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3630; /* je: equal / zero */

loc_001C35FA: ;
    edx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(edx + 0xA4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = edx;
    ecx = MEM32(eax + 0x118);
    if (CMP_EQ(_fa, _fb)) goto loc_001C3614; /* je: equal / zero */

loc_001C360F: ;
    ecx = ecx | 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001C3617;

loc_001C3614: ;
    ecx = ecx & 0xFFFFFFEFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001C3617: ;
    MEM32(eax + 0x118) = ecx;
    PUSH32(esp, 0x001C3622u); RECOMP_ABI_CALL(0x002D98F0u, sub_002D98F0); /* call 0x002D98F0 */

loc_001C3622: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C3630u); RECOMP_ABI_CALL(0x002D8750u, sub_002D8750); /* call 0x002D8750 */

loc_001C3630: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
