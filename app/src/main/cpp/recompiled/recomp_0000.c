/**
 * Medal of Honor European Assault - Recompiled code chunk 0
 * Functions: 250 (0x00011000 - 0x000172F0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00011000
 * Original: 0x00011000 - 0x00011010 (16 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011000(void)
{

loc_00011000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011010
 * Original: 0x00011010 - 0x00011011 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011010(void)
{

loc_00011010: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011020
 * Original: 0x00011020 - 0x00011028 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011020(void)
{

loc_00011020: ;
    MEM8(0x3858C8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00011030
 * Original: 0x00011030 - 0x00011036 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011030(void)
{

loc_00011030: ;
    eax = 0x3864D8;
    esp += 4; return; /* ret */

}

/**
 * sub_00011040
 * Original: 0x00011040 - 0x00011066 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011040: ;
    eax = MEM32(0x372784);
    PUSH32(esp, 0x2FE814);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011050u); RECOMP_ABI_CALL(0x002BDD96u, sub_002BDD96); /* call 0x002BDD96 */

loc_00011050: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011063; /* je: equal / zero */

loc_00011057: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001105Du); RECOMP_ABI_CALL(0x002BDCE9u, sub_002BDCE9); /* call 0x002BDCE9 */

loc_0001105D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00011063: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00011070
 * Original: 0x00011070 - 0x000110A0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011070: ;
    eax = MEM32(0x372784);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FE818);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011081u); RECOMP_ABI_CALL(0x002BDD96u, sub_002BDD96); /* call 0x002BDD96 */

loc_00011081: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x22F0);
    PUSH32(esp, 0x3864D8);
    PUSH32(esp, 0x00011095u); RECOMP_ABI_CALL(0x002BDEC0u, sub_002BDEC0); /* call 0x002BDEC0 */

loc_00011095: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001109Bu); RECOMP_ABI_CALL(0x002BDCE9u, sub_002BDCE9); /* call 0x002BDCE9 */

loc_0001109B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000110D0
 * Original: 0x000110D0 - 0x000111D6 (262 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000110D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000110D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FE838);
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(ecx, MEM8(0x2FE83C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x3858C8);
    MEM32(esp + 0xC) = eax;
    MEM8(esp + 0x10) = LO8(ecx);
    PUSH32(esp, 0x000110F4u); RECOMP_ABI_CALL(0x002C92F0u, sub_002C92F0); /* call 0x002C92F0 */

loc_000110F4: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM8(ebp + 8) = 0;
    PUSH32(esp, 0x3858C8);
    MEM8(0x372780) = 1;
    PUSH32(esp, 0x0001110Eu); RECOMP_ABI_CALL(0x002BE050u, sub_002BE050); /* call 0x002BE050 */

loc_0001110E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011164; /* je: equal / zero */

loc_00011115: ;
    PUSH32(esp, edi);
    goto loc_00011120;

    /* nop */
    /* nop */

loc_00011120: ;
    edi = 0x2FE82C;
    esi = eax;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0001113A; /* jne: not equal / not zero */

loc_00011132: ;
    MEM8(0x372780) = LO8(edx);
    goto loc_00011150;

loc_0001113A: ;
    esi = eax;
    edi = 0x2FE81C;
    ecx = 0xF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00011150; /* jne: not equal / not zero */

loc_0001114C: ;
    MEM8(ebp + 8) = 1;

loc_00011150: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001115Cu); RECOMP_ABI_CALL(0x002BE050u, sub_002BE050); /* call 0x002BE050 */

loc_0001115C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011120; /* jne: not equal / not zero */

loc_00011163: ;
    POP32(esp, edi);

loc_00011164: ;
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000111BC; /* je: equal / zero */

loc_0001116B: ;
    edx = MEM32(0x372784);
    PUSH32(esp, 0x2FE814);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001117Cu); RECOMP_ABI_CALL(0x002BDD96u, sub_002BDD96); /* call 0x002BDD96 */

loc_0001117C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000111BC; /* je: equal / zero */

loc_00011183: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011189u); RECOMP_ABI_CALL(0x002BDCE9u, sub_002BDCE9); /* call 0x002BDCE9 */

loc_00011189: ;
    eax = MEM32(0x372784);
    PUSH32(esp, 0x2FE814);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011199u); RECOMP_ABI_CALL(0x002BDD96u, sub_002BDD96); /* call 0x002BDD96 */

loc_00011199: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x22F0);
    PUSH32(esp, 0x3864D8);
    PUSH32(esp, 0x000111ADu); RECOMP_ABI_CALL(0x002BE004u, sub_002BE004); /* call 0x002BE004 */

loc_000111AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000111B3u); RECOMP_ABI_CALL(0x002BDCE9u, sub_002BDCE9); /* call 0x002BDCE9 */

loc_000111B3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000111BC: ;
    ecx = MEM32(0x372784);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000111C8u); RECOMP_ABI_CALL(0x001ED06Cu, sub_001ED06C); /* call 0x001ED06C */

loc_000111C8: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000111D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000111CDu); } /* indirect call */
    }

loc_000111D0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000111E0
 * Original: 0x000111E0 - 0x00011255 (117 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000111E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000111E0: ;
    eax = ZX8(MEM8(0x3858C8));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FE840);
    esi = ecx;
    PUSH32(esp, 0x000111F5u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000111F5: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001124D; /* je: equal / zero */

loc_000111FF: ;
    ecx = MEM32(0x372784);
    PUSH32(esp, 0x2FE814);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00011210u); RECOMP_ABI_CALL(0x002BDD96u, sub_002BDD96); /* call 0x002BDD96 */

loc_00011210: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001124D; /* je: equal / zero */

loc_00011217: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001121Du); RECOMP_ABI_CALL(0x002BDCE9u, sub_002BDCE9); /* call 0x002BDCE9 */

loc_0001121D: ;
    edx = MEM32(0x372784);
    PUSH32(esp, 0x2FE814);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001122Eu); RECOMP_ABI_CALL(0x002BDD96u, sub_002BDD96); /* call 0x002BDD96 */

loc_0001122E: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x22F0);
    PUSH32(esp, 0x3864D8);
    PUSH32(esp, 0x00011242u); RECOMP_ABI_CALL(0x002BE004u, sub_002BE004); /* call 0x002BE004 */

loc_00011242: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011248u); RECOMP_ABI_CALL(0x002BDCE9u, sub_002BDCE9); /* call 0x002BDCE9 */

loc_00011248: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001124D: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_00011260
 * Original: 0x00011260 - 0x00011276 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011260: ;
    eax = MEM32(0x372784);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0001126Eu); RECOMP_ABI_CALL(0x001ED06Cu, sub_001ED06C); /* call 0x001ED06C */

loc_0001126E: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_00011280
 * Original: 0x00011280 - 0x00011283 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011280(void)
{

loc_00011280: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    esp += 4; return; /* ret */

}

/**
 * sub_00011290
 * Original: 0x00011290 - 0x000112A1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011290: ;
    MEM8(0x3864C8) = 1;
    PUSH32(esp, 0x0001129Cu); RECOMP_ABI_CALL(0x000128D0u, sub_000128D0); /* call 0x000128D0 */

loc_0001129C: ;
    g_seh_ebp = ebp; sub_002D98F0(); return; /* tail jmp 0x002D98F0 */

}

/**
 * sub_000112B0
 * Original: 0x000112B0 - 0x00011408 (344 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000112B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000112B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000112B6u); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_000112B6: ;
    PUSH32(esp, 0x2FE868);
    esi = eax;
    PUSH32(esp, 0x000112C2u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_000112C2: ;
    PUSH32(esp, 0x000112C7u); RECOMP_ABI_CALL(0x0003B0C0u, sub_0003B0C0); /* call 0x0003B0C0 */

loc_000112C7: ;
    PUSH32(esp, 0x000112CCu); RECOMP_ABI_CALL(0x00264300u, sub_00264300); /* call 0x00264300 */

loc_000112CC: ;
    PUSH32(esp, 0x000112D1u); RECOMP_ABI_CALL(0x000F1920u, sub_000F1920); /* call 0x000F1920 */

loc_000112D1: ;
    PUSH32(esp, 0x000112D6u); RECOMP_ABI_CALL(0x00050920u, sub_00050920); /* call 0x00050920 */

loc_000112D6: ;
    PUSH32(esp, 0x000112DBu); RECOMP_ABI_CALL(0x0004FAB0u, sub_0004FAB0); /* call 0x0004FAB0 */

loc_000112DB: ;
    PUSH32(esp, 0x000112E0u); RECOMP_ABI_CALL(0x00053BC0u, sub_00053BC0); /* call 0x00053BC0 */

loc_000112E0: ;
    PUSH32(esp, 0x000112E5u); RECOMP_ABI_CALL(0x00080510u, sub_00080510); /* call 0x00080510 */

loc_000112E5: ;
    PUSH32(esp, 0x000112EAu); RECOMP_ABI_CALL(0x00134870u, sub_00134870); /* call 0x00134870 */

loc_000112EA: ;
    PUSH32(esp, 0x000112EFu); RECOMP_ABI_CALL(0x0012FBE0u, sub_0012FBE0); /* call 0x0012FBE0 */

loc_000112EF: ;
    PUSH32(esp, 0x000112F4u); RECOMP_ABI_CALL(0x000ED3C0u, sub_000ED3C0); /* call 0x000ED3C0 */

loc_000112F4: ;
    PUSH32(esp, 0x000112F9u); RECOMP_ABI_CALL(0x0014F9D0u, sub_0014F9D0); /* call 0x0014F9D0 */

loc_000112F9: ;
    PUSH32(esp, 0x000112FEu); RECOMP_ABI_CALL(0x000E4F50u, sub_000E4F50); /* call 0x000E4F50 */

loc_000112FE: ;
    PUSH32(esp, 0x00011303u); RECOMP_ABI_CALL(0x0014D200u, sub_0014D200); /* call 0x0014D200 */

loc_00011303: ;
    PUSH32(esp, 0x00011308u); RECOMP_ABI_CALL(0x000C81F0u, sub_000C81F0); /* call 0x000C81F0 */

loc_00011308: ;
    PUSH32(esp, 0x0001130Du); RECOMP_ABI_CALL(0x000FE040u, sub_000FE040); /* call 0x000FE040 */

loc_0001130D: ;
    PUSH32(esp, 0x00011312u); RECOMP_ABI_CALL(0x0010D120u, sub_0010D120); /* call 0x0010D120 */

loc_00011312: ;
    PUSH32(esp, 0x00011317u); RECOMP_ABI_CALL(0x0013D2B0u, sub_0013D2B0); /* call 0x0013D2B0 */

loc_00011317: ;
    PUSH32(esp, 0x0001131Cu); RECOMP_ABI_CALL(0x000E8B80u, sub_000E8B80); /* call 0x000E8B80 */

loc_0001131C: ;
    PUSH32(esp, 0x00011321u); RECOMP_ABI_CALL(0x000F6AE0u, sub_000F6AE0); /* call 0x000F6AE0 */

loc_00011321: ;
    PUSH32(esp, 0x00011326u); RECOMP_ABI_CALL(0x000F3480u, sub_000F3480); /* call 0x000F3480 */

loc_00011326: ;
    PUSH32(esp, 0x0001132Bu); RECOMP_ABI_CALL(0x00194160u, sub_00194160); /* call 0x00194160 */

loc_0001132B: ;
    PUSH32(esp, 0x00011330u); RECOMP_ABI_CALL(0x00188A90u, sub_00188A90); /* call 0x00188A90 */

loc_00011330: ;
    PUSH32(esp, 0x00011335u); RECOMP_ABI_CALL(0x000AAD40u, sub_000AAD40); /* call 0x000AAD40 */

loc_00011335: ;
    PUSH32(esp, 0x0001133Au); RECOMP_ABI_CALL(0x000C1480u, sub_000C1480); /* call 0x000C1480 */

loc_0001133A: ;
    PUSH32(esp, 0x0001133Fu); RECOMP_ABI_CALL(0x0018D510u, sub_0018D510); /* call 0x0018D510 */

loc_0001133F: ;
    PUSH32(esp, 0x00011344u); RECOMP_ABI_CALL(0x0018D790u, sub_0018D790); /* call 0x0018D790 */

loc_00011344: ;
    PUSH32(esp, 0x00011349u); RECOMP_ABI_CALL(0x0018ADA0u, sub_0018ADA0); /* call 0x0018ADA0 */

loc_00011349: ;
    PUSH32(esp, 0x389FD0);
    PUSH32(esp, 0x00011353u); RECOMP_ABI_CALL(0x00072200u, sub_00072200); /* call 0x00072200 */

loc_00011353: ;
    PUSH32(esp, 0x00011358u); RECOMP_ABI_CALL(0x0007E600u, sub_0007E600); /* call 0x0007E600 */

loc_00011358: ;
    PUSH32(esp, 0x389FD0);
    PUSH32(esp, 0x00011362u); RECOMP_ABI_CALL(0x0014E9B0u, sub_0014E9B0); /* call 0x0014E9B0 */

loc_00011362: ;
    PUSH32(esp, 0x389FD0);
    PUSH32(esp, 0x0001136Cu); RECOMP_ABI_CALL(0x000C01D0u, sub_000C01D0); /* call 0x000C01D0 */

loc_0001136C: ;
    PUSH32(esp, 0x389FD0);
    PUSH32(esp, 0x00011376u); RECOMP_ABI_CALL(0x000E7220u, sub_000E7220); /* call 0x000E7220 */

loc_00011376: ;
    PUSH32(esp, 0x0001137Bu); RECOMP_ABI_CALL(0x000F7FF0u, sub_000F7FF0); /* call 0x000F7FF0 */

loc_0001137B: ;
    PUSH32(esp, 0x389FD0);
    PUSH32(esp, 0x00011385u); RECOMP_ABI_CALL(0x00183BB0u, sub_00183BB0); /* call 0x00183BB0 */

loc_00011385: ;
    PUSH32(esp, 0x0001138Au); RECOMP_ABI_CALL(0x001851C0u, sub_001851C0); /* call 0x001851C0 */

loc_0001138A: ;
    PUSH32(esp, 0x389FD0);
    PUSH32(esp, 0x00011394u); RECOMP_ABI_CALL(0x000BB970u, sub_000BB970); /* call 0x000BB970 */

loc_00011394: ;
    PUSH32(esp, 0x00011399u); RECOMP_ABI_CALL(0x0018EE80u, sub_0018EE80); /* call 0x0018EE80 */

loc_00011399: ;
    PUSH32(esp, 0x0001139Eu); RECOMP_ABI_CALL(0x0018E850u, sub_0018E850); /* call 0x0018E850 */

loc_0001139E: ;
    PUSH32(esp, 0x000113A3u); RECOMP_ABI_CALL(0x000A6750u, sub_000A6750); /* call 0x000A6750 */

loc_000113A3: ;
    PUSH32(esp, 0x000113A8u); RECOMP_ABI_CALL(0x0013EC60u, sub_0013EC60); /* call 0x0013EC60 */

loc_000113A8: ;
    PUSH32(esp, 0x389FD0);
    PUSH32(esp, 0x000113B2u); RECOMP_ABI_CALL(0x000ADAC0u, sub_000ADAC0); /* call 0x000ADAC0 */

loc_000113B2: ;
    PUSH32(esp, 0x000113B7u); RECOMP_ABI_CALL(0x00157710u, sub_00157710); /* call 0x00157710 */

loc_000113B7: ;
    PUSH32(esp, 0x000113BCu); RECOMP_ABI_CALL(0x000BD550u, sub_000BD550); /* call 0x000BD550 */

loc_000113BC: ;
    PUSH32(esp, 0x000113C1u); RECOMP_ABI_CALL(0x000BCB60u, sub_000BCB60); /* call 0x000BCB60 */

loc_000113C1: ;
    PUSH32(esp, 0x000113C6u); RECOMP_ABI_CALL(0x000A5860u, sub_000A5860); /* call 0x000A5860 */

loc_000113C6: ;
    PUSH32(esp, 0x000113CBu); RECOMP_ABI_CALL(0x000ACDB0u, sub_000ACDB0); /* call 0x000ACDB0 */

loc_000113CB: ;
    PUSH32(esp, 0x000113D0u); RECOMP_ABI_CALL(0x0010D610u, sub_0010D610); /* call 0x0010D610 */

loc_000113D0: ;
    PUSH32(esp, 0x000113D5u); RECOMP_ABI_CALL(0x001102E0u, sub_001102E0); /* call 0x001102E0 */

loc_000113D5: ;
    PUSH32(esp, 0x000113DAu); RECOMP_ABI_CALL(0x0012F180u, sub_0012F180); /* call 0x0012F180 */

loc_000113DA: ;
    PUSH32(esp, 0x000113DFu); RECOMP_ABI_CALL(0x00158390u, sub_00158390); /* call 0x00158390 */

loc_000113DF: ;
    PUSH32(esp, 0x000113E4u); RECOMP_ABI_CALL(0x000AE9D0u, sub_000AE9D0); /* call 0x000AE9D0 */

loc_000113E4: ;
    PUSH32(esp, 0x000113E9u); RECOMP_ABI_CALL(0x00105770u, sub_00105770); /* call 0x00105770 */

loc_000113E9: ;
    PUSH32(esp, 0x000113EEu); RECOMP_ABI_CALL(0x00015B90u, sub_00015B90); /* call 0x00015B90 */

loc_000113EE: ;
    PUSH32(esp, 0x000113F3u); RECOMP_ABI_CALL(0x00078650u, sub_00078650); /* call 0x00078650 */

loc_000113F3: ;
    PUSH32(esp, 0x000113F8u); RECOMP_ABI_CALL(0x000C1BB0u, sub_000C1BB0); /* call 0x000C1BB0 */

loc_000113F8: ;
    PUSH32(esp, 0x000113FDu); RECOMP_ABI_CALL(0x00124C20u, sub_00124C20); /* call 0x00124C20 */

loc_000113FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011403u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_00011403: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011410
 * Original: 0x00011410 - 0x0001141A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011410: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011416u); RECOMP_ABI_CALL(0x00194DF0u, sub_00194DF0); /* call 0x00194DF0 */

loc_00011416: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00011420
 * Original: 0x00011420 - 0x00011426 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011420(void)
{

loc_00011420: ;
    eax = 0x3864D8;
    esp += 4; return; /* ret */

}

/**
 * sub_00011430
 * Original: 0x00011430 - 0x00011499 (105 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011430: ;
    eax = MEM32(0x372784);
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC00;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FE818);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011447u); RECOMP_ABI_CALL(0x002BDD96u, sub_002BDD96); /* call 0x002BDD96 */

loc_00011447: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x22F0);
    PUSH32(esp, 0x3864D8);
    PUSH32(esp, 0x0001145Bu); RECOMP_ABI_CALL(0x002BDEC0u, sub_002BDEC0); /* call 0x002BDEC0 */

loc_0001145B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011461u); RECOMP_ABI_CALL(0x002BDCE9u, sub_002BDCE9); /* call 0x002BDCE9 */

loc_00011461: ;
    esi = MEM32(esp + 0xC24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FE880);
    PUSH32(esp, 0x00011473u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00011473: ;
    SET_LO8(eax, MEM8(0x372780));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001148F; /* je: equal / zero */

loc_0001147F: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM8(esp + 0xC) = 1;
    PUSH32(esp, 0x0001148Fu); RECOMP_ABI_CALL(0x001ED307u, sub_001ED307); /* call 0x001ED307 */

loc_0001148F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC00;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000114A0
 * Original: 0x000114A0 - 0x00011553 (179 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000114A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000114A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3858C8);
    PUSH32(esp, 0x3858C0);
    esi = ecx;
    PUSH32(esp, 0x000114B3u); RECOMP_ABI_CALL(0x001ED42Au, sub_001ED42A); /* call 0x001ED42A */

loc_000114B3: ;
    SET_LO8(edx, MEM8(0x3858C8));
    edi = eax;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 8) = LO8(eax);
    eax = MEM32(0x3858C0);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001153D; /* je: equal / zero */

loc_000114CD: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0001151B; /* je: equal / zero */

loc_000114D2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000114F7; /* je: equal / zero */

loc_000114D5: ;
    PUSH32(esp, 0x2FE938);
    PUSH32(esp, 0x000114DFu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000114DF: ;
    ecx = MEM32(0x372784);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000114EEu); RECOMP_ABI_CALL(0x001ED06Cu, sub_001ED06C); /* call 0x001ED06C */

loc_000114EE: ;
    edx = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x18)); return; /* indirect tail jmp */

loc_000114F7: ;
    PUSH32(esp, 0x2FE910);
    PUSH32(esp, 0x00011501u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00011501: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x490) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x490 (32-bit) */
    ecx = esi;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00011515; /* je: equal / zero */

loc_0001150F: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000110D0(); return; /* tail jmp 0x000110D0 */

loc_00011515: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_0001151B: ;
    PUSH32(esp, 0x2FE8E8);
    PUSH32(esp, 0x00011525u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00011525: ;
    ecx = MEM32(0x372784);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00011534u); RECOMP_ABI_CALL(0x001ED06Cu, sub_001ED06C); /* call 0x001ED06C */

loc_00011534: ;
    edx = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x18)); return; /* indirect tail jmp */

loc_0001153D: ;
    PUSH32(esp, 0x2FE8C4);
    PUSH32(esp, 0x00011547u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00011547: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000111E0(); return; /* tail jmp 0x000111E0 */

}

/**
 * sub_00011560
 * Original: 0x00011560 - 0x000115E9 (137 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011560: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001156Eu); RECOMP_ABI_CALL(0x00151EF0u, sub_00151EF0); /* call 0x00151EF0 */

loc_0001156E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000115E4; /* je: equal / zero */

loc_00011575: ;
    PUSH32(esp, 0x2FE95C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011580u); RECOMP_ABI_CALL(0x002BE150u, sub_002BE150); /* call 0x002BE150 */

loc_00011580: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001158A; /* je: equal / zero */

loc_00011587: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0001158C;

loc_0001158A: ;
    eax = esi;

loc_0001158C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011592; /* jne: not equal / not zero */

loc_00011591: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00011592: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0001159Eu); RECOMP_ABI_CALL(0x000BFF30u, sub_000BFF30); /* call 0x000BFF30 */

loc_0001159E: ;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = 0x389F60;
    MEM8(esp + 0x26) = 0;
    MEM8(esp + 0x27) = 0;
    PUSH32(esp, 0x000115B9u); RECOMP_ABI_CALL(0x00137950u, sub_00137950); /* call 0x00137950 */

loc_000115B9: ;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = 0x389F60;
    PUSH32(esp, 0x000115CAu); RECOMP_ABI_CALL(0x00137950u, sub_00137950); /* call 0x00137950 */

loc_000115CA: ;
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x389F60;
    PUSH32(esp, 0x000115DBu); RECOMP_ABI_CALL(0x00137950u, sub_00137950); /* call 0x00137950 */

loc_000115DB: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000115E4u); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_000115E4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000115F0
 * Original: 0x000115F0 - 0x000115F9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000115F0(void)
{

loc_000115F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000115F7u); RECOMP_ABI_CALL(0x001BFB5Fu, sub_001BFB5F); /* call 0x001BFB5F */

loc_000115F7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00011600
 * Original: 0x00011600 - 0x00011623 (35 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011600: ;
    PUSH32(esp, 0x00011605u); RECOMP_ABI_CALL(0x001B6D68u, sub_001B6D68); /* call 0x001B6D68 */

loc_00011605: ;
    PUSH32(esp, 0x0001160Au); RECOMP_ABI_CALL(0x001B5A80u, sub_001B5A80); /* call 0x001B5A80 */

loc_0001160A: ;
    PUSH32(esp, 0x0001160Fu); RECOMP_ABI_CALL(0x001BFEC6u, sub_001BFEC6); /* call 0x001BFEC6 */

loc_0001160F: ;
    PUSH32(esp, 0x00011614u); RECOMP_ABI_CALL(0x001BFC76u, sub_001BFC76); /* call 0x001BFC76 */

loc_00011614: ;
    PUSH32(esp, 0x00011619u); RECOMP_ABI_CALL(0x001B347Fu, sub_001B347F); /* call 0x001B347F */

loc_00011619: ;
    PUSH32(esp, 0x0001161Eu); RECOMP_ABI_CALL(0x001B4520u, sub_001B4520); /* call 0x001B4520 */

loc_0001161E: ;
    g_seh_ebp = ebp; sub_001BFBED(); return; /* tail jmp 0x001BFBED */

}

/**
 * sub_00011630
 * Original: 0x00011630 - 0x00011756 (294 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011630: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011636u); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_00011636: ;
    PUSH32(esp, 0x2FE960);
    esi = eax;
    PUSH32(esp, 0x00011642u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_00011642: ;
    PUSH32(esp, 0x00011647u); RECOMP_ABI_CALL(0x00124C30u, sub_00124C30); /* call 0x00124C30 */

loc_00011647: ;
    PUSH32(esp, 0x0001164Cu); RECOMP_ABI_CALL(0x000C1BC0u, sub_000C1BC0); /* call 0x000C1BC0 */

loc_0001164C: ;
    PUSH32(esp, 0x00011651u); RECOMP_ABI_CALL(0x00077FB0u, sub_00077FB0); /* call 0x00077FB0 */

loc_00011651: ;
    PUSH32(esp, 0x00011656u); RECOMP_ABI_CALL(0x00015BD0u, sub_00015BD0); /* call 0x00015BD0 */

loc_00011656: ;
    PUSH32(esp, 0x0001165Bu); RECOMP_ABI_CALL(0x00105310u, sub_00105310); /* call 0x00105310 */

loc_0001165B: ;
    PUSH32(esp, 0x00011660u); RECOMP_ABI_CALL(0x000ADDB0u, sub_000ADDB0); /* call 0x000ADDB0 */

loc_00011660: ;
    PUSH32(esp, 0x00011665u); RECOMP_ABI_CALL(0x001599D0u, sub_001599D0); /* call 0x001599D0 */

loc_00011665: ;
    PUSH32(esp, 0x0001166Au); RECOMP_ABI_CALL(0x0012F240u, sub_0012F240); /* call 0x0012F240 */

loc_0001166A: ;
    PUSH32(esp, 0x0001166Fu); RECOMP_ABI_CALL(0x00110200u, sub_00110200); /* call 0x00110200 */

loc_0001166F: ;
    PUSH32(esp, 0x00011674u); RECOMP_ABI_CALL(0x0010EAC0u, sub_0010EAC0); /* call 0x0010EAC0 */

loc_00011674: ;
    PUSH32(esp, 0x00011679u); RECOMP_ABI_CALL(0x000ACDF0u, sub_000ACDF0); /* call 0x000ACDF0 */

loc_00011679: ;
    PUSH32(esp, 0x0001167Eu); RECOMP_ABI_CALL(0x000A5C40u, sub_000A5C40); /* call 0x000A5C40 */

loc_0001167E: ;
    PUSH32(esp, 0x00011683u); RECOMP_ABI_CALL(0x000BD560u, sub_000BD560); /* call 0x000BD560 */

loc_00011683: ;
    PUSH32(esp, 0x00011688u); RECOMP_ABI_CALL(0x000BCB70u, sub_000BCB70); /* call 0x000BCB70 */

loc_00011688: ;
    PUSH32(esp, 0x0001168Du); RECOMP_ABI_CALL(0x00157720u, sub_00157720); /* call 0x00157720 */

loc_0001168D: ;
    PUSH32(esp, 0x00011692u); RECOMP_ABI_CALL(0x000AD510u, sub_000AD510); /* call 0x000AD510 */

loc_00011692: ;
    PUSH32(esp, 0x00011697u); RECOMP_ABI_CALL(0x0018E860u, sub_0018E860); /* call 0x0018E860 */

loc_00011697: ;
    PUSH32(esp, 0x0001169Cu); RECOMP_ABI_CALL(0x0018EEC0u, sub_0018EEC0); /* call 0x0018EEC0 */

loc_0001169C: ;
    PUSH32(esp, 0x000116A1u); RECOMP_ABI_CALL(0x000A5D90u, sub_000A5D90); /* call 0x000A5D90 */

loc_000116A1: ;
    PUSH32(esp, 0x000116A6u); RECOMP_ABI_CALL(0x000BBA40u, sub_000BBA40); /* call 0x000BBA40 */

loc_000116A6: ;
    PUSH32(esp, 0x000116ABu); RECOMP_ABI_CALL(0x001851F0u, sub_001851F0); /* call 0x001851F0 */

loc_000116AB: ;
    PUSH32(esp, 0x000116B0u); RECOMP_ABI_CALL(0x00183C70u, sub_00183C70); /* call 0x00183C70 */

loc_000116B0: ;
    PUSH32(esp, 0x000116B5u); RECOMP_ABI_CALL(0x000F80E0u, sub_000F80E0); /* call 0x000F80E0 */

loc_000116B5: ;
    PUSH32(esp, 0x000116BAu); RECOMP_ABI_CALL(0x000E7230u, sub_000E7230); /* call 0x000E7230 */

loc_000116BA: ;
    PUSH32(esp, 0x000116BFu); RECOMP_ABI_CALL(0x000C02C0u, sub_000C02C0); /* call 0x000C02C0 */

loc_000116BF: ;
    PUSH32(esp, 0x000116C4u); RECOMP_ABI_CALL(0x0014EA90u, sub_0014EA90); /* call 0x0014EA90 */

loc_000116C4: ;
    PUSH32(esp, 0x000116C9u); RECOMP_ABI_CALL(0x0007C510u, sub_0007C510); /* call 0x0007C510 */

loc_000116C9: ;
    PUSH32(esp, 0x000116CEu); RECOMP_ABI_CALL(0x00071180u, sub_00071180); /* call 0x00071180 */

loc_000116CE: ;
    PUSH32(esp, 0x000116D3u); RECOMP_ABI_CALL(0x0018ADE0u, sub_0018ADE0); /* call 0x0018ADE0 */

loc_000116D3: ;
    PUSH32(esp, 0x000116D8u); RECOMP_ABI_CALL(0x0018E6B0u, sub_0018E6B0); /* call 0x0018E6B0 */

loc_000116D8: ;
    PUSH32(esp, 0x000116DDu); RECOMP_ABI_CALL(0x000C0820u, sub_000C0820); /* call 0x000C0820 */

loc_000116DD: ;
    PUSH32(esp, 0x000116E2u); RECOMP_ABI_CALL(0x000AA760u, sub_000AA760); /* call 0x000AA760 */

loc_000116E2: ;
    PUSH32(esp, 0x000116E7u); RECOMP_ABI_CALL(0x00187A20u, sub_00187A20); /* call 0x00187A20 */

loc_000116E7: ;
    PUSH32(esp, 0x000116ECu); RECOMP_ABI_CALL(0x00193C30u, sub_00193C30); /* call 0x00193C30 */

loc_000116EC: ;
    PUSH32(esp, 0x000116F1u); RECOMP_ABI_CALL(0x000F3050u, sub_000F3050); /* call 0x000F3050 */

loc_000116F1: ;
    PUSH32(esp, 0x000116F6u); RECOMP_ABI_CALL(0x000F3AD0u, sub_000F3AD0); /* call 0x000F3AD0 */

loc_000116F6: ;
    PUSH32(esp, 0x000116FBu); RECOMP_ABI_CALL(0x000E8930u, sub_000E8930); /* call 0x000E8930 */

loc_000116FB: ;
    PUSH32(esp, 0x00011700u); RECOMP_ABI_CALL(0x0013B6B0u, sub_0013B6B0); /* call 0x0013B6B0 */

loc_00011700: ;
    PUSH32(esp, 0x00011705u); RECOMP_ABI_CALL(0x0010D0B0u, sub_0010D0B0); /* call 0x0010D0B0 */

loc_00011705: ;
    PUSH32(esp, 0x0001170Au); RECOMP_ABI_CALL(0x000FD9E0u, sub_000FD9E0); /* call 0x000FD9E0 */

loc_0001170A: ;
    PUSH32(esp, 0x0001170Fu); RECOMP_ABI_CALL(0x000C90A0u, sub_000C90A0); /* call 0x000C90A0 */

loc_0001170F: ;
    PUSH32(esp, 0x00011714u); RECOMP_ABI_CALL(0x0014D210u, sub_0014D210); /* call 0x0014D210 */

loc_00011714: ;
    PUSH32(esp, 0x00011719u); RECOMP_ABI_CALL(0x000E4DD0u, sub_000E4DD0); /* call 0x000E4DD0 */

loc_00011719: ;
    PUSH32(esp, 0x0001171Eu); RECOMP_ABI_CALL(0x0014F720u, sub_0014F720); /* call 0x0014F720 */

loc_0001171E: ;
    PUSH32(esp, 0x00011723u); RECOMP_ABI_CALL(0x000E7230u, sub_000E7230); /* call 0x000E7230 */

loc_00011723: ;
    PUSH32(esp, 0x00011728u); RECOMP_ABI_CALL(0x0012FFE0u, sub_0012FFE0); /* call 0x0012FFE0 */

loc_00011728: ;
    PUSH32(esp, 0x0001172Du); RECOMP_ABI_CALL(0x001349E0u, sub_001349E0); /* call 0x001349E0 */

loc_0001172D: ;
    PUSH32(esp, 0x00011732u); RECOMP_ABI_CALL(0x0007E730u, sub_0007E730); /* call 0x0007E730 */

loc_00011732: ;
    PUSH32(esp, 0x00011737u); RECOMP_ABI_CALL(0x00053C20u, sub_00053C20); /* call 0x00053C20 */

loc_00011737: ;
    PUSH32(esp, 0x0001173Cu); RECOMP_ABI_CALL(0x0004FAE0u, sub_0004FAE0); /* call 0x0004FAE0 */

loc_0001173C: ;
    PUSH32(esp, 0x00011741u); RECOMP_ABI_CALL(0x000507F0u, sub_000507F0); /* call 0x000507F0 */

loc_00011741: ;
    PUSH32(esp, 0x00011746u); RECOMP_ABI_CALL(0x000F1930u, sub_000F1930); /* call 0x000F1930 */

loc_00011746: ;
    PUSH32(esp, 0x0001174Bu); RECOMP_ABI_CALL(0x00152740u, sub_00152740); /* call 0x00152740 */

loc_0001174B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011751u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_00011751: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011760
 * Original: 0x00011760 - 0x0001176F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011760: ;
    PUSH32(esp, 0x00011765u); RECOMP_ABI_CALL(0x00011630u, sub_00011630); /* call 0x00011630 */

loc_00011765: ;
    ecx = 0x3C2470;
    g_seh_ebp = ebp; sub_00077D50(); return; /* tail jmp 0x00077D50 */

}

/**
 * sub_00011770
 * Original: 0x00011770 - 0x00011B24 (948 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x38DB60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000117BA; /* jle: less or equal (signed <=) */

loc_00011789: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00011B1D; /* jge: greater or equal (signed >=) */

loc_00011792: ;
    PUSH32(esp, 0xFFFFFFFFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011799u); RECOMP_ABI_CALL(0x002D8A80u, sub_002D8A80); /* call 0x002D8A80 */

loc_00011799: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000117A3u); RECOMP_ABI_CALL(0x002D8A80u, sub_002D8A80); /* call 0x002D8A80 */

loc_000117A3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000117ADu); RECOMP_ABI_CALL(0x002D8AD0u, sub_002D8AD0); /* call 0x002D8AD0 */

loc_000117AD: ;
    MEM32(0x38DB60) = MEM32(0x38DB60) + 1;
    _fa = (uint32_t)(MEM32(0x38DB60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000117BA: ;
    MEM32(0x38DB60) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000117C9u); RECOMP_ABI_CALL(0x0007F5F0u, sub_0007F5F0); /* call 0x0007F5F0 */

loc_000117C9: ;
    eax = MEM32(0x3888C0);
    eax = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00011809; /* ja: above (unsigned >) */

loc_000117D8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x11B24); /* switch: 6 entries, 6 targets */
    if (_jt == 0x000117DFu) goto loc_000117DF;
    if (_jt == 0x000117E6u) goto loc_000117E6;
    if (_jt == 0x000117EDu) goto loc_000117ED;
    if (_jt == 0x000117F4u) goto loc_000117F4;
    if (_jt == 0x000117FBu) goto loc_000117FB;
    if (_jt == 0x00011802u) goto loc_00011802;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000117DF: ;
    esi = 0x3663F0;
    goto loc_0001180E;

loc_000117E6: ;
    esi = 0x3622C0;
    goto loc_0001180E;

loc_000117ED: ;
    esi = 0x355F30;
    goto loc_0001180E;

loc_000117F4: ;
    esi = 0x35E190;
    goto loc_0001180E;

loc_000117FB: ;
    esi = 0x36A520;
    goto loc_0001180E;

loc_00011802: ;
    esi = 0x36E650;
    goto loc_0001180E;

loc_00011809: ;
    esi = 0x35A060;

loc_0001180E: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x4130);
    PUSH32(esp, 0x2FE9A8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011822u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00011822: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x31164C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax;
    ecx = 0x104C;
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
    xmm6.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    xmm7.f[0] = (float)(int32_t)MEM32(0x38DC60); /* cvtsi2ss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, 0xFF);
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xA0) = LO8(ebx);
    MEM8(esp + 0xA1) = LO8(ebx);
    MEM8(esp + 0xA2) = LO8(ebx);
    MEM8(esp + 0xA3) = LO8(eax);
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm6.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xB8) = LO8(ebx);
    MEM8(esp + 0xB9) = LO8(ebx);
    MEM8(esp + 0xBA) = LO8(ebx);
    MEM8(esp + 0xBB) = LO8(eax);
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm6.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm7.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xD0) = LO8(ebx);
    MEM8(esp + 0xD1) = LO8(ebx);
    MEM8(esp + 0xD2) = LO8(ebx);
    MEM8(esp + 0xD3) = LO8(eax);
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xE0) = xmm7.f[0]; /* movss */
    MEMF(esp + 0xE4) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xE8) = LO8(ebx);
    MEM8(esp + 0xE9) = LO8(ebx);
    MEM8(esp + 0xEA) = LO8(ebx);
    MEM8(esp + 0xEB) = LO8(eax);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x40) = LO8(eax);
    MEM8(esp + 0x41) = LO8(eax);
    MEM8(esp + 0x42) = LO8(eax);
    MEM8(esp + 0x43) = LO8(eax);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x58) = LO8(eax);
    MEM8(esp + 0x59) = LO8(eax);
    MEM8(esp + 0x5A) = LO8(eax);
    MEM8(esp + 0x5B) = LO8(eax);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x2FE978);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x7C) = LO8(eax);
    MEM8(esp + 0x7D) = LO8(eax);
    MEM8(esp + 0x7E) = LO8(eax);
    MEM8(esp + 0x7F) = LO8(eax);
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x94) = LO8(eax);
    MEM8(esp + 0x95) = LO8(eax);
    MEM8(esp + 0x96) = LO8(eax);
    MEM8(esp + 0x97) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011A92u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00011A92: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011AA9; /* je: equal / zero */

loc_00011A99: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011AA5u); RECOMP_ABI_CALL(0x000BFEF0u, sub_000BFEF0); /* call 0x000BFEF0 */

loc_00011AA5: ;
    esi = eax;
    goto loc_00011AAB;

loc_00011AA9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011AAB: ;
    ecx = MEM32(0x37278C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00011AB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011AB3u); } /* indirect call */
    }

loc_00011AB6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011ABFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011ABCu); } /* indirect call */
    }

loc_00011ABF: ;
    PUSH32(esp, 5);
    eax = esp + 0x84;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011AD0u); RECOMP_ABI_CALL(0x000BFB00u, sub_000BFB00); /* call 0x000BFB00 */

loc_00011AD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011AE3u); RECOMP_ABI_CALL(0x000BF900u, sub_000BF900); /* call 0x000BF900 */

loc_00011AE3: ;
    RECOMP_UNIMPL("wbinvd", 0x00011AE3u); /* TODO: wbinvd */
    ecx = MEM32(0x37278C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00011AF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011AEDu); } /* indirect call */
    }

loc_00011AF0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011AF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011AF4u); } /* indirect call */
    }

loc_00011AF7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011AFCu); RECOMP_ABI_CALL(0x000804C0u, sub_000804C0); /* call 0x000804C0 */

loc_00011AFC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011B10; /* je: equal / zero */

loc_00011B00: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011B07u); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_00011B07: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011B0Du); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00011B0D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011B10: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00011B1Au); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_00011B1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011B1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00011B40
 * Original: 0x00011B40 - 0x00011B6C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011B40: ;
    PUSH32(esp, 0x00011B45u); RECOMP_ABI_CALL(0x001ED4D5u, sub_001ED4D5); /* call 0x001ED4D5 */

loc_00011B45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011B69; /* je: equal / zero */

loc_00011B4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011B69; /* je: equal / zero */

loc_00011B4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00011B56u); RECOMP_ABI_CALL(0x00149C40u, sub_00149C40); /* call 0x00149C40 */

loc_00011B56: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00011B5Fu); RECOMP_ABI_CALL(0x001BFFDBu, sub_001BFFDB); /* call 0x001BFFDB */

loc_00011B5F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011B62: ;
    PUSH32(esp, 0x00011B67u); RECOMP_ABI_CALL(0x00011770u, sub_00011770); /* call 0x00011770 */

loc_00011B67: ;
    goto loc_00011B62;

loc_00011B69: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00011B70
 * Original: 0x00011B70 - 0x00011BAE (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011B70: ;
    SET_LO8(eax, MEM8(esp + 4));
    edx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    MEM32(edx) = 0x2FE7F8;
    MEM32(edx + 4) = ecx;
    MEM8(edx + 8) = LO8(eax);
    MEM8(edx + 9) = LO8(ecx);
    MEM8(edx + 0xA) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00011BA9; /* jne: not equal / not zero */

loc_00011B8F: ;
    PUSH32(esp, edi);
    ecx = 0x8BC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x3864D8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x387348) = 0xFFFFFFFFu;
    POP32(esp, edi);

loc_00011BA9: ;
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011BB0
 * Original: 0x00011BB0 - 0x00011BF4 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011BB0: ;
    SET_LO8(eax, MEM8(esp + 4));
    edx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    MEM32(edx) = 0x2FE7F8;
    MEM32(edx + 4) = ecx;
    MEM8(edx + 8) = LO8(eax);
    MEM8(edx + 9) = LO8(ecx);
    MEM8(edx + 0xA) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00011BE9; /* jne: not equal / not zero */

loc_00011BCF: ;
    PUSH32(esp, edi);
    ecx = 0x8BC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x3864D8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x387348) = 0xFFFFFFFFu;
    POP32(esp, edi);

loc_00011BE9: ;
    MEM32(edx) = 0x2FE9CC;
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011C00
 * Original: 0x00011C00 - 0x00011CBF (191 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011C00: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011C09u); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_00011C09: ;
    PUSH32(esp, 0x2FE9E8);
    esi = eax;
    PUSH32(esp, 0x00011C15u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_00011C15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00011C21u); RECOMP_ABI_CALL(0x002F76D8u, sub_002F76D8); /* call 0x002F76D8 */

loc_00011C21: ;
    PUSH32(esp, 0x258);
    PUSH32(esp, 0x00011C2Bu); RECOMP_ABI_CALL(0x001ED701u, sub_001ED701); /* call 0x001ED701 */

loc_00011C2B: ;
    PUSH32(esp, 0x00011C30u); RECOMP_ABI_CALL(0x001C017Eu, sub_001C017E); /* call 0x001C017E */

loc_00011C30: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x00011C37u); RECOMP_ABI_CALL(0x001BFDC3u, sub_001BFDC3); /* call 0x001BFDC3 */

loc_00011C37: ;
    PUSH32(esp, 0x00011C3Cu); RECOMP_ABI_CALL(0x001BFEB1u, sub_001BFEB1); /* call 0x001BFEB1 */

loc_00011C3C: ;
    PUSH32(esp, 0x00011C41u); RECOMP_ABI_CALL(0x001BFA8Bu, sub_001BFA8B); /* call 0x001BFA8B */

loc_00011C41: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x00011C4Bu); RECOMP_ABI_CALL(0x001C1090u, sub_001C1090); /* call 0x001C1090 */

loc_00011C4B: ;
    PUSH32(esp, 0x00011C50u); RECOMP_ABI_CALL(0x001B33F7u, sub_001B33F7); /* call 0x001B33F7 */

loc_00011C50: ;
    PUSH32(esp, 0x1B31E2);
    PUSH32(esp, 0x00011C5Au); RECOMP_ABI_CALL(0x001BFB2Eu, sub_001BFB2E); /* call 0x001BFB2E */

loc_00011C5A: ;
    PUSH32(esp, 0x1551E0);
    PUSH32(esp, 0x155010);
    PUSH32(esp, 0x00011C69u); RECOMP_ABI_CALL(0x001B6152u, sub_001B6152); /* call 0x001B6152 */

loc_00011C69: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0x28;
    PUSH32(esp, 0x00011C7Bu); RECOMP_ABI_CALL(0x001B6E02u, sub_001B6E02); /* call 0x001B6E02 */

loc_00011C7B: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x11B40;
    MEM32(esp + 0x40) = 0xA;
    PUSH32(esp, 0x00011C95u); RECOMP_ABI_CALL(0x001B6E36u, sub_001B6E36); /* call 0x001B6E36 */

loc_00011C95: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5DC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00011CA3u); RECOMP_ABI_CALL(0x001B631Au, sub_001B631A); /* call 0x001B631A */

loc_00011CA3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00011CACu); RECOMP_ABI_CALL(0x001B69FDu, sub_001B69FD); /* call 0x001B69FD */

loc_00011CAC: ;
    PUSH32(esp, 0x00011CB1u); RECOMP_ABI_CALL(0x00136830u, sub_00136830); /* call 0x00136830 */

loc_00011CB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011CB7u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_00011CB7: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00011CC0
 * Original: 0x00011CC0 - 0x00011D34 (116 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011CC0: ;
    eax = MEM32(0x3864CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011D33; /* jne: not equal / not zero */

loc_00011CC9: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2FE9F4);
    PUSH32(esp, 0x00011CDAu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00011CDA: ;
    edx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011D1A; /* je: equal / zero */

loc_00011CE3: ;
    PUSH32(esp, edi);
    MEM32(edx + 4) = 0;
    MEM8(edx + 8) = 0;
    MEM8(edx + 9) = 0;
    MEM8(edx + 0xA) = 1;
    ecx = 0x8BC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x3864D8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x387348) = 0xFFFFFFFFu;
    MEM32(edx) = 0x2FE9CC;
    ecx = edx;
    POP32(esp, edi);
    goto loc_00011D1C;

loc_00011D1A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011D1C: ;
    MEM32(0x3864CC) = ecx;
    MEM8(0x372780) = 1;
    PUSH32(esp, 0x00011D2Eu); RECOMP_ABI_CALL(0x000114A0u, sub_000114A0); /* call 0x000114A0 */

loc_00011D2E: ;
    eax = MEM32(0x3864CC);

loc_00011D33: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011D40
 * Original: 0x00011D40 - 0x00011D45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011D40: ;
    g_seh_ebp = ebp; sub_00011CC0(); return; /* tail jmp 0x00011CC0 */

}

/**
 * sub_00011D50
 * Original: 0x00011D50 - 0x00011F8A (570 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011D50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011D57u); RECOMP_ABI_CALL(0x00011CC0u, sub_00011CC0); /* call 0x00011CC0 */

loc_00011D57: ;
    esi = eax;
    PUSH32(esp, 0x00011D5Eu); RECOMP_ABI_CALL(0x000D0040u, sub_000D0040); /* call 0x000D0040 */

loc_00011D5E: ;
    eax = MEM32(0x3888C0);
    ecx = eax + 0x1EE8;
    MEM32(0x3DA4A0) = ecx;
    SET_LO8(edx, MEM8(eax + 0x1ED4));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011F4B; /* je: equal / zero */

loc_00011D80: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011D98; /* jne: not equal / not zero */

loc_00011D85: ;
    _fa = (uint32_t)(MEM8(eax + 0x1ED5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED5), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011D98; /* je: equal / zero */

loc_00011D8E: ;
    PUSH32(esp, 0x00011D93u); RECOMP_ABI_CALL(0x00082400u, sub_00082400); /* call 0x00082400 */

loc_00011D93: ;
    eax = MEM32(0x3888C0);

loc_00011D98: ;
    _fa = (uint32_t)(MEM8(eax + 0x1FA1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1FA1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011E37; /* jne: not equal / not zero */

loc_00011DA5: ;
    MEM32(eax + 0x1FFC) = ebx;
    MEM32(eax + 0x2000) = ebx;
    MEM32(eax + 0x2004) = ebx;
    MEM32(eax + 0x2008) = ebx;
    _fb = (uint32_t)(0x1FFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1FFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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

loc_00011E37: ;
    _fa = (uint32_t)(MEM8(eax + 0x1ED5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED5), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011F4B; /* je: equal / zero */

loc_00011E44: ;
    _fa = (uint32_t)(MEM8(eax + 0x1FA1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1FA1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011EF9; /* jne: not equal / not zero */

loc_00011E50: ;
    _fa = (uint32_t)(MEM8(eax + 0x1FA2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1FA2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011EF9; /* jne: not equal / not zero */

loc_00011E5C: ;
    ecx = ZX8(MEM8(eax + 0x1FA0));
    edx = ecx + ecx * 4;
    PUSH32(esp, 3);
    eax = eax + edx * 4 + 0x1EEC;
    PUSH32(esp, eax);
    ecx = 0x3C2518;
    PUSH32(esp, 0x00011E7Au); RECOMP_ABI_CALL(0x00077CC0u, sub_00077CC0); /* call 0x00077CC0 */

loc_00011E7A: ;
    ecx = MEM32(0x3888C0);
    eax = ZX8(MEM8(ecx + 0x1FA0));
    edx = eax + eax * 4;
    eax = ecx + edx * 4 + 0x1EEC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011E97u); RECOMP_ABI_CALL(0x00194DF0u, sub_00194DF0); /* call 0x00194DF0 */

loc_00011E97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x3C2518;
    PUSH32(esp, 0x00011EA5u); RECOMP_ABI_CALL(0x00077D70u, sub_00077D70); /* call 0x00077D70 */

loc_00011EA5: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1FA0));
    ecx = ecx + ecx * 4;
    SET_LO8(edx, MEM8(eax + ecx * 4 + 0x1EF8));
    SET_LO8(ecx, MEM8(eax + 0x1359));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x1359) = LO8(ecx);
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1FA0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + ecx * 4;
    edx = MEM32(eax + ecx * 4 + 0x1EE8);
    MEM32(0x389418) = edx;
    MEM8(0x51FB59) = LO8(ebx);
    MEM8(0x51FB5A) = LO8(ebx);
    goto loc_00011F4B;

loc_00011EF9: ;
    MEM8(eax + 0x1FA2) = LO8(ebx);
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED4));
    SET_LO8(ecx, LO8(ecx) & 0xEF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 4);
    MEM8(eax + 0x1ED4) = LO8(ecx);
    PUSH32(esp, 0x2FEA1C);
    ecx = 0x3C2518;
    PUSH32(esp, 0x00011F24u); RECOMP_ABI_CALL(0x00077CC0u, sub_00077CC0); /* call 0x00077CC0 */

loc_00011F24: ;
    PUSH32(esp, 0x2FEA1C);
    PUSH32(esp, 0x00011F2Eu); RECOMP_ABI_CALL(0x00194DF0u, sub_00194DF0); /* call 0x00194DF0 */

loc_00011F2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x3C2518;
    PUSH32(esp, 0x00011F3Cu); RECOMP_ABI_CALL(0x00077D70u, sub_00077D70); /* call 0x00077D70 */

loc_00011F3C: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x00011F43u); RECOMP_ABI_CALL(0x00177C10u, sub_00177C10); /* call 0x00177C10 */

loc_00011F43: ;
    eax = MEM32(0x3888C0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011F4B: ;
    ecx = MEM32(0x3C2528);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F87; /* je: equal / zero */

loc_00011F55: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F7A; /* je: equal / zero */

loc_00011F5A: ;
    MEM8(0x3C250D) = LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00011F70; /* jne: not equal / not zero */

loc_00011F69: ;
    MEM8(eax + 0x1ED0) = 1;

loc_00011F70: ;
    POP32(esp, esi);
    MEM8(0x3785A5) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00011F7A: ;
    MEM8(0x3C250D) = 1;
    MEM8(0x3785A5) = LO8(ebx);

loc_00011F87: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00011F90
 * Original: 0x00011F90 - 0x00012092 (258 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011F90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00011F99u); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_00011F99: ;
    PUSH32(esp, 0x2FEA44);
    edi = eax;
    PUSH32(esp, 0x00011FA5u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_00011FA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00011FADu); RECOMP_ABI_CALL(0x00011CC0u, sub_00011CC0); /* call 0x00011CC0 */

loc_00011FAD: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00011FB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011FB3u); } /* indirect call */
    }

loc_00011FB5: ;
    PUSH32(esp, 0x00011FBAu); RECOMP_ABI_CALL(0x00011C00u, sub_00011C00); /* call 0x00011C00 */

loc_00011FBA: ;
    PUSH32(esp, 0x00011FBFu); RECOMP_ABI_CALL(0x001137D0u, sub_001137D0); /* call 0x001137D0 */

loc_00011FBF: ;
    PUSH32(esp, 0x00011FC4u); RECOMP_ABI_CALL(0x00013180u, sub_00013180); /* call 0x00013180 */

loc_00011FC4: ;
    ecx = 0x389FD0;
    PUSH32(esp, 0x00011FCEu); RECOMP_ABI_CALL(0x00013840u, sub_00013840); /* call 0x00013840 */

loc_00011FCE: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x389FD0;
    MEM8(esp + 0x10) = 0;
    MEM8(esp + 0x11) = 0;
    MEM8(esp + 0x12) = 0;
    MEM8(esp + 0x13) = 0xFF;
    PUSH32(esp, 0x00011FF1u); RECOMP_ABI_CALL(0x00013620u, sub_00013620); /* call 0x00013620 */

loc_00011FF1: ;
    PUSH32(esp, 0x00011FF6u); RECOMP_ABI_CALL(0x000F23E0u, sub_000F23E0); /* call 0x000F23E0 */

loc_00011FF6: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011FFEu); RECOMP_ABI_CALL(0x000E6FA0u, sub_000E6FA0); /* call 0x000E6FA0 */

loc_00011FFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012006u); RECOMP_ABI_CALL(0x001526E0u, sub_001526E0); /* call 0x001526E0 */

loc_00012006: ;
    edx = MEM32(0x3888C0);
    ebp = MEM32(edx + 0x135C);
    PUSH32(esp, 0x2FEA34);
    ecx = 0x3C2470;
    PUSH32(esp, 0x00012021u); RECOMP_ABI_CALL(0x00077A80u, sub_00077A80); /* call 0x00077A80 */

loc_00012021: ;
    PUSH32(esp, 0x2FEA24);
    PUSH32(esp, 0x0001202Bu); RECOMP_ABI_CALL(0x000C99A0u, sub_000C99A0); /* call 0x000C99A0 */

loc_0001202B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3C2538;
    PUSH32(esp, 0x00012038u); RECOMP_ABI_CALL(0x000774C0u, sub_000774C0); /* call 0x000774C0 */

loc_00012038: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001204A; /* je: equal / zero */

loc_0001203F: ;
    PUSH32(esp, ebp);
    ecx = 0x3C2518;
    PUSH32(esp, 0x0001204Au); RECOMP_ABI_CALL(0x00077D70u, sub_00077D70); /* call 0x00077D70 */

loc_0001204A: ;
    ecx = 0x3888C0;
    PUSH32(esp, 0x00012054u); RECOMP_ABI_CALL(0x0007B870u, sub_0007B870); /* call 0x0007B870 */

loc_00012054: ;
    ecx = 0x3C6600;
    PUSH32(esp, 0x0001205Eu); RECOMP_ABI_CALL(0x000C5F40u, sub_000C5F40); /* call 0x000C5F40 */

loc_0001205E: ;
    PUSH32(esp, 0x374440);
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0001206Fu); RECOMP_ABI_CALL(0x000C66A0u, sub_000C66A0); /* call 0x000C66A0 */

loc_0001206F: ;
    PUSH32(esp, 0x00012074u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00012074: ;
    eax = MEM32(0x37278C);
    PUSH32(esp, eax);
    ecx = 0x389F60;
    PUSH32(esp, 0x00012084u); RECOMP_ABI_CALL(0x00137520u, sub_00137520); /* call 0x00137520 */

loc_00012084: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001208Au); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0001208A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000120A0
 * Original: 0x000120A0 - 0x000120B4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120A0(void)
{

loc_000120A0: ;
    PUSH32(esp, 0x000120A5u); RECOMP_ABI_CALL(0x00011CC0u, sub_00011CC0); /* call 0x00011CC0 */

loc_000120A5: ;
    ecx = MEM32(0x372788);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000120B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000120B0u); } /* indirect call */
    }

loc_000120B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000120C0
 * Original: 0x000120C0 - 0x000120D7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000120C0: ;
    PUSH32(esp, 0x000120C5u); RECOMP_ABI_CALL(0x00011CC0u, sub_00011CC0); /* call 0x00011CC0 */

loc_000120C5: ;
    SET_LO8(ecx, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000120D6; /* je: equal / zero */

loc_000120CC: ;
    ecx = 0x3888C0;
    g_seh_ebp = ebp; sub_0007A190(); return; /* tail jmp 0x0007A190 */

loc_000120D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000120E0
 * Original: 0x000120E0 - 0x0001275A (1658 bytes, 426 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000120E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x284) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x284;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000120F4u); RECOMP_ABI_CALL(0x00011CC0u, sub_00011CC0); /* call 0x00011CC0 */

loc_000120F4: ;
    esi = eax;
    MEM32(esp + 0x14) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000120FFu); RECOMP_ABI_CALL(0x00011F90u, sub_00011F90); /* call 0x00011F90 */

loc_000120FF: ;
    SET_LO8(eax, MEM8(0x38DB6C));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012127; /* jne: not equal / not zero */

loc_0001210A: ;
    edi = MEM32(0x38DB6C);
    edi = edi | 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(0x38DB6C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001211Fu); RECOMP_ABI_CALL(0x001B99E8u, sub_001B99E8); /* call 0x001B99E8 */

loc_0001211F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x38DB68) = eax;

loc_00012127: ;
    SET_LO8(ecx, MEM8(0x38DB6C));
    eax = 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012152; /* jne: not equal / not zero */

loc_00012136: ;
    edi = MEM32(0x38DB6C);
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(0x38DB6C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001214Au); RECOMP_ABI_CALL(0x001B9993u, sub_001B9993); /* call 0x001B9993 */

loc_0001214A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x38DB64) = eax;

loc_00012152: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012157u); RECOMP_ABI_CALL(0x00011CC0u, sub_00011CC0); /* call 0x00011CC0 */

loc_00012157: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012166; /* je: equal / zero */

loc_0001215C: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012166u); RECOMP_ABI_CALL(0x0007A190u, sub_0007A190); /* call 0x0007A190 */

loc_00012166: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012170; /* jne: not equal / not zero */

loc_0001216B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012170u); RECOMP_ABI_CALL(0x000128D0u, sub_000128D0); /* call 0x000128D0 */

loc_00012170: ;
    MEM8(esp + 0x12) = LO8(ebx);

loc_00012174: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012179u); RECOMP_ABI_CALL(0x00011D50u, sub_00011D50); /* call 0x00011D50 */

loc_00012179: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001217Eu); RECOMP_ABI_CALL(0x000E6410u, sub_000E6410); /* call 0x000E6410 */

loc_0001217E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012183u); RECOMP_ABI_CALL(0x0007FC50u, sub_0007FC50); /* call 0x0007FC50 */

loc_00012183: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012188u); RECOMP_ABI_CALL(0x0007ECE0u, sub_0007ECE0); /* call 0x0007ECE0 */

loc_00012188: ;
    ecx = 0x389F60;
    MEM32(0x389FB8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012198u); RECOMP_ABI_CALL(0x00137560u, sub_00137560); /* call 0x00137560 */

loc_00012198: ;
    ecx = 0x389F60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000121A2u); RECOMP_ABI_CALL(0x00138250u, sub_00138250); /* call 0x00138250 */

loc_000121A2: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000121ACu); RECOMP_ABI_CALL(0x00079E20u, sub_00079E20); /* call 0x00079E20 */

loc_000121AC: ;
    PUSH32(esp, ebx);
    ecx = 0x3C250C;
    MEM8(0x3C250F) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000121BDu); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_000121BD: ;
    PUSH32(esp, 0x389F60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000121C7u); RECOMP_ABI_CALL(0x00081B30u, sub_00081B30); /* call 0x00081B30 */

loc_000121C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x389F60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000121D4u); RECOMP_ABI_CALL(0x00137450u, sub_00137450); /* call 0x00137450 */

loc_000121D4: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000121E8; /* je: equal / zero */

loc_000121DD: ;
    ecx = MEM32(0x3DEED8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000121E8u); RECOMP_ABI_CALL(0x0012CDC0u, sub_0012CDC0); /* call 0x0012CDC0 */

loc_000121E8: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000121F2u); RECOMP_ABI_CALL(0x00079820u, sub_00079820); /* call 0x00079820 */

loc_000121F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012200; /* je: equal / zero */

loc_000121F6: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012200u); RECOMP_ABI_CALL(0x0007A330u, sub_0007A330); /* call 0x0007A330 */

loc_00012200: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012205u); RECOMP_ABI_CALL(0x0007EFC0u, sub_0007EFC0); /* call 0x0007EFC0 */

loc_00012205: ;
    MEM8(esp + 0x13) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001220Eu); RECOMP_ABI_CALL(0x000ACE40u, sub_000ACE40); /* call 0x000ACE40 */

loc_0001220E: ;
    ecx = MEM32(0x373574);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012223u); RECOMP_ABI_CALL(0x000ABEE0u, sub_000ABEE0); /* call 0x000ABEE0 */

loc_00012223: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED4));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012273; /* je: equal / zero */

loc_00012236: ;
    edx = ZX8(MEM8(eax + 0x1FA0));
    ecx = eax + 0x1E90;
    edx = edx + edx * 4;
    SET_LO8(eax, MEM8(eax + edx * 4 + 0x1EF4));
    MEM8(ecx + 0x41) = LO8(eax);
    ecx = ZX8(MEM8(ecx + 0x42));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEAF8); /* mulss */
    ecx = MEM32(0x3888C0);
    MEMF(0x3864D0) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012273u); RECOMP_ABI_CALL(0x00079DB0u, sub_00079DB0); /* call 0x00079DB0 */

loc_00012273: ;
    _fa = (uint32_t)(MEM8(esp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x12), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012284; /* jne: not equal / not zero */

loc_00012279: ;
    PUSH32(esp, ebx);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012284u); RECOMP_ABI_CALL(0x0007A340u, sub_0007A340); /* call 0x0007A340 */

loc_00012284: ;
    ecx = 0x3C6600;
    MEM8(esp + 0x12) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012292u); RECOMP_ABI_CALL(0x000C60E0u, sub_000C60E0); /* call 0x000C60E0 */

loc_00012292: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012294: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000122A0u); RECOMP_ABI_CALL(0x000C6130u, sub_000C6130); /* call 0x000C6130 */

loc_000122A0: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000122B3u); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_000122B3: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000122C7u); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_000122C7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012294; /* jl: less (signed <) */

loc_000122CD: ;
    PUSH32(esp, 0x3F800000);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000122DCu); RECOMP_ABI_CALL(0x000C7280u, sub_000C7280); /* call 0x000C7280 */

loc_000122DC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000122E1u); RECOMP_ABI_CALL(0x0007E860u, sub_0007E860); /* call 0x0007E860 */

loc_000122E1: ;
    MEM8(0x3C250C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000122EDu); RECOMP_ABI_CALL(0x0007F020u, sub_0007F020); /* call 0x0007F020 */

loc_000122ED: ;
    eax = MEM32(0x3888C0);
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000122FFu); RECOMP_ABI_CALL(0x00148730u, sub_00148730); /* call 0x00148730 */

loc_000122FF: ;
    SET_LO8(eax, MEM8(0x3C250E));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012336; /* jne: not equal / not zero */

loc_0001230B: ;
    goto loc_00012310;

    /* nop */

loc_00012310: ;
    _fa = (uint32_t)(MEM8(0x3C250F)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3C250F), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012336; /* jne: not equal / not zero */

loc_00012318: ;
    _fa = (uint32_t)(MEM8(0x3C2510)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3C2510), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012336; /* jne: not equal / not zero */

loc_00012320: ;
    PUSH32(esp, 0x389F60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001232Au); RECOMP_ABI_CALL(0x00081190u, sub_00081190); /* call 0x00081190 */

loc_0001232A: ;
    SET_LO8(eax, MEM8(0x3C250E));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012310; /* je: equal / zero */

loc_00012336: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC60); /* cvtsi2ss */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012360u); RECOMP_ABI_CALL(0x00194D50u, sub_00194D50); /* call 0x00194D50 */

loc_00012360: ;
    ecx = MEM32(0x3C3580);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx, xmm1); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(ecx + 0x20, xmm1); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */
    edx = MEM32(eax + 0x40);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 0x44);
    MEM32(ecx + 0x44) = edx;
    edx = MEM32(eax + 0x48);
    MEM32(ecx + 0x48) = edx;
    edx = MEM32(eax + 0x4C);
    MEM32(ecx + 0x4C) = edx;
    edx = MEM32(eax + 0x50);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 0x54);
    MEM32(ecx + 0x54) = edx;
    edx = MEM32(eax + 0x58);
    MEM32(ecx + 0x58) = edx;
    edx = MEM32(eax + 0x5C);
    MEM32(ecx + 0x5C) = edx;
    edx = MEM32(eax + 0x60);
    MEM32(ecx + 0x60) = edx;
    SET_LO8(edx, MEM8(eax + 0x64));
    MEM8(ecx + 0x64) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x65));
    MEM8(ecx + 0x65) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x66));
    MEM8(ecx + 0x66) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0x67));
    MEM8(ecx + 0x67) = LO8(eax);
    ecx = MEM32(0x3C3580);
    PUSH32(esp, ecx);
    ecx = 0x389FD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000123E3u); RECOMP_ABI_CALL(0x000133F0u, sub_000133F0); /* call 0x000133F0 */

loc_000123E3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000123EAu); RECOMP_ABI_CALL(0x0018D5E0u, sub_0018D5E0); /* call 0x0018D5E0 */

loc_000123EA: ;
    PUSH32(esp, 1);
    ecx = 0x389FD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000123F6u); RECOMP_ABI_CALL(0x00013290u, sub_00013290); /* call 0x00013290 */

loc_000123F6: ;
    ecx = 0x389F60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012400u); RECOMP_ABI_CALL(0x00138100u, sub_00138100); /* call 0x00138100 */

loc_00012400: ;
    MEM8(0x3C250C) = LO8(ebx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012408: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012414u); RECOMP_ABI_CALL(0x000C6130u, sub_000C6130); /* call 0x000C6130 */

loc_00012414: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012427u); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_00012427: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001243Bu); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_0001243B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012408; /* jl: less (signed <) */

loc_00012441: ;
    PUSH32(esp, 0x3F800000);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012450u); RECOMP_ABI_CALL(0x000C7280u, sub_000C7280); /* call 0x000C7280 */

loc_00012450: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012455u); RECOMP_ABI_CALL(0x00084B70u, sub_00084B70); /* call 0x00084B70 */

loc_00012455: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001245Au); RECOMP_ABI_CALL(0x000B18E0u, sub_000B18E0); /* call 0x000B18E0 */

loc_0001245A: ;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x1358)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1358), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000124E0; /* jne: not equal / not zero */

loc_00012469: ;
    _fa = (uint32_t)(MEM8(0x3C250F)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3C250F), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000124E0; /* jne: not equal / not zero */

loc_00012471: ;
    eax = MEM32(0x373574);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012481u); RECOMP_ABI_CALL(0x000AC040u, sub_000AC040); /* call 0x000AC040 */

loc_00012481: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = 0x389FD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012490u); RECOMP_ABI_CALL(0x00013290u, sub_00013290); /* call 0x00013290 */

loc_00012490: ;
    ecx = 0x389F60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001249Au); RECOMP_ABI_CALL(0x00138100u, sub_00138100); /* call 0x00138100 */

loc_0001249A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001249Fu); RECOMP_ABI_CALL(0x0007FCA0u, sub_0007FCA0); /* call 0x0007FCA0 */

loc_0001249F: ;
    PUSH32(esp, ebx);
    ecx = 0x3C250C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000124AAu); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_000124AA: ;
    ecx = 0x3888C0;
    MEM8(0x3C2510) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000124BAu); RECOMP_ABI_CALL(0x000791E0u, sub_000791E0); /* call 0x000791E0 */

loc_000124BA: ;
    _fa = (uint32_t)(MEM8(0x3C2510)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3C2510), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000124CC; /* je: equal / zero */

loc_000124C2: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000124CCu); RECOMP_ABI_CALL(0x00079E20u, sub_00079E20); /* call 0x00079E20 */

loc_000124CC: ;
    ecx = 0x3C250C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000124D6u); RECOMP_ABI_CALL(0x00077890u, sub_00077890); /* call 0x00077890 */

loc_000124D6: ;
    MEM8(esp + 0x12) = 1;
    goto loc_00012205;

loc_000124E0: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000124EAu); RECOMP_ABI_CALL(0x00079210u, sub_00079210); /* call 0x00079210 */

loc_000124EA: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001250E; /* jne: not equal / not zero */

loc_000124F9: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012503u); RECOMP_ABI_CALL(0x000791D0u, sub_000791D0); /* call 0x000791D0 */

loc_00012503: ;
    PUSH32(esp, eax);
    ecx = 0x3C246A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001250Eu); RECOMP_ABI_CALL(0x00077120u, sub_00077120); /* call 0x00077120 */

loc_0001250E: ;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012575; /* je: equal / zero */

loc_0001251D: ;
    _fa = (uint32_t)(MEM8(0x388868)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x388868), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012575; /* je: equal / zero */

loc_00012525: ;
    eax = MEM32(0x373574);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(0x388868) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001253Bu); RECOMP_ABI_CALL(0x000AC040u, sub_000AC040); /* call 0x000AC040 */

loc_0001253B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = 0x389FD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001254Au); RECOMP_ABI_CALL(0x00013290u, sub_00013290); /* call 0x00013290 */

loc_0001254A: ;
    ecx = 0x389F60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012554u); RECOMP_ABI_CALL(0x00138100u, sub_00138100); /* call 0x00138100 */

loc_00012554: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012559u); RECOMP_ABI_CALL(0x0007FCA0u, sub_0007FCA0); /* call 0x0007FCA0 */

loc_00012559: ;
    PUSH32(esp, ebx);
    ecx = 0x3C250C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012564u); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_00012564: ;
    MEM8(0x3C2510) = LO8(ebx);
    MEM8(0x3C2F20) = LO8(ebx);
    MEM8(esp + 0x13) = 1;

loc_00012575: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001257Fu); RECOMP_ABI_CALL(0x00079350u, sub_00079350); /* call 0x00079350 */

loc_0001257F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012644; /* jne: not equal / not zero */

loc_00012587: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1358)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1358), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012644; /* je: equal / zero */

loc_0001259A: ;
    edx = MEM32(0x3C2528);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012644; /* je: equal / zero */

loc_000125A9: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = 0x3C2538;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000125BDu); RECOMP_ABI_CALL(0x000775F0u, sub_000775F0); /* call 0x000775F0 */

loc_000125BD: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000125D1u); RECOMP_ABI_CALL(0x0007A930u, sub_0007A930); /* call 0x0007A930 */

loc_000125D1: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000125DBu); RECOMP_ABI_CALL(0x0007AD70u, sub_0007AD70); /* call 0x0007AD70 */

loc_000125DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012638; /* jne: not equal / not zero */

loc_000125DF: ;
    esi = MEM32(0x3888C0);
    ecx = MEM32(esi + 0x1308);
    edx = MEM32(esi + 0x1304);
    _fb = (uint32_t)(0x1304) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1304;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012603u); RECOMP_ABI_CALL(0x00079AD0u, sub_00079AD0); /* call 0x00079AD0 */

loc_00012603: ;
    edi = eax;
    ecx = 0x14;
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
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012616u); RECOMP_ABI_CALL(0x0007AED0u, sub_0007AED0); /* call 0x0007AED0 */

loc_00012616: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012620u); RECOMP_ABI_CALL(0x00079B70u, sub_00079B70); /* call 0x00079B70 */

loc_00012620: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001262Au); RECOMP_ABI_CALL(0x0007ADD0u, sub_0007ADD0); /* call 0x0007ADD0 */

loc_0001262A: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x2044) = 1;
    goto loc_00012644;

loc_00012638: ;
    ecx = MEM32(0x3888C0);
    MEM8(ecx + 0x2044) = LO8(ebx);

loc_00012644: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012205; /* jne: not equal / not zero */

loc_0001264E: ;
    _fa = (uint32_t)(MEM8(0x3C250D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3C250D), LO8(ebx) (8-bit) */
    eax = MEM32(0x3888C0);
    if (CMP_NE(_fa, _fb)) goto loc_0001267F; /* jne: not equal / not zero */

loc_0001265B: ;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001267F; /* je: equal / zero */

loc_00012664: ;
    _fa = (uint32_t)(MEM8(eax + 0x1ED5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED5), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000126B8; /* je: equal / zero */

loc_0001266D: ;
    ecx = eax + 0x1EE8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012678u); RECOMP_ABI_CALL(0x00082520u, sub_00082520); /* call 0x00082520 */

loc_00012678: ;
    MEM32(0x3888C8) = eax;
    goto loc_000126AE;

loc_0001267F: ;
    edx = MEM32(eax + 0x135C);
    ecx = 0x5FB22CE7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001269D; /* je: equal / zero */

loc_0001268E: ;
    _fa = (uint32_t)(MEM8(eax + 0x1358)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1358), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001269D; /* je: equal / zero */

loc_00012697: ;
    MEM32(0x3888C8) = ecx;

loc_0001269D: ;
    edx = MEM32(0x3888C8);
    PUSH32(esp, edx);
    ecx = 0x3C2518;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000126AEu); RECOMP_ABI_CALL(0x00077D70u, sub_00077D70); /* call 0x00077D70 */

loc_000126AE: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000126B8u); RECOMP_ABI_CALL(0x00079110u, sub_00079110); /* call 0x00079110 */

loc_000126B8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000126BDu); RECOMP_ABI_CALL(0x000806B0u, sub_000806B0); /* call 0x000806B0 */

loc_000126BD: ;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 8) = 1;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000126DE; /* jne: not equal / not zero */

loc_000126D4: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000126DEu); RECOMP_ABI_CALL(0x0007B870u, sub_0007B870); /* call 0x0007B870 */

loc_000126DE: ;
    MEM8(0x3C250F) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000126E9u); RECOMP_ABI_CALL(0x000E5510u, sub_000E5510); /* call 0x000E5510 */

loc_000126E9: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000126EFu); RECOMP_ABI_CALL(0x001B99E8u, sub_001B99E8); /* call 0x001B99E8 */

loc_000126EF: ;
    PUSH32(esp, ebx);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000126F7u); RECOMP_ABI_CALL(0x001B9993u, sub_001B9993); /* call 0x001B9993 */

loc_000126F7: ;
    ecx = MEM32(0x38DB68);
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012728; /* jle: less or equal (signed <=) */

loc_0001270C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp + 0x98;
    PUSH32(esp, 0x2FEAA8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012720u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00012720: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00012174;

loc_00012728: ;
    ecx = MEM32(0x38DB64);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012174; /* jle: less or equal (signed <=) */

loc_0001273E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x198;
    PUSH32(esp, 0x2FEA50);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00012752u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00012752: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00012174;

}

/**
 * sub_00012760
 * Original: 0x00012760 - 0x0001278F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012760: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ecx;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax, xmm1); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012790
 * Original: 0x00012790 - 0x000127C0 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012790: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000127BD; /* js: sign (negative) */

loc_00012797: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 1;
    /* nop */

loc_000127B0: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x000127B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000127B2u); } /* indirect call */
    }

loc_000127B4: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000127B0; /* jne: not equal / not zero */

loc_000127B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000127BD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000127C0
 * Original: 0x000127C0 - 0x000127F1 (49 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000127C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000127C0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000127EC; /* js: sign (negative) */

loc_000127D8: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = eax + 1;

loc_000127E1: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x000127E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000127E5u); } /* indirect call */
    }

loc_000127E7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000127E1; /* jne: not equal / not zero */

loc_000127EA: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000127EC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00012800
 * Original: 0x00012800 - 0x0001287D (125 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ecx;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax, xmm1); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(ecx + 0x4C);
    MEM32(eax + 0x4C) = edx;
    edx = MEM32(ecx + 0x50);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(eax + 0x58) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(eax + 0x5C) = edx;
    edx = MEM32(ecx + 0x60);
    MEM32(eax + 0x60) = edx;
    SET_LO8(edx, MEM8(ecx + 0x64));
    MEM8(eax + 0x64) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x65));
    MEM8(eax + 0x65) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x66));
    MEM8(eax + 0x66) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 0x67));
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax + 0x67) = LO8(ecx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012880
 * Original: 0x00012880 - 0x0001289F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012880: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2FE7F8;
    if (TEST_Z(_fa, _fb)) goto loc_00012899; /* je: equal / zero */

loc_00012890: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012896u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00012896: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012899: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000128A0
 * Original: 0x000128A0 - 0x000128CB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000128A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000128A0: ;
    eax = MEM32(0x38DBF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000128CA; /* jne: not equal / not zero */

loc_000128A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 6;
    esi = 0x2FEB10;
    edi = 0x38DB70;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = 0x38DB70;
    POP32(esp, edi);
    MEM32(0x38DBF0) = eax;
    POP32(esp, esi);

loc_000128CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000128D0
 * Original: 0x000128D0 - 0x00012902 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000128D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000128D0: ;
    eax = MEM32(0x38DBF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000128FA; /* jne: not equal / not zero */

loc_000128D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 6;
    esi = 0x2FEB10;
    edi = 0x38DB70;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = 0x38DB70;
    POP32(esp, edi);
    MEM32(0x38DBF0) = eax;
    POP32(esp, esi);

loc_000128FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012900u); RECOMP_ABI_CALL(0x00011560u, sub_00011560); /* call 0x00011560 */

loc_00012900: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012910
 * Original: 0x00012910 - 0x00012937 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012910: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 4) = 0x4E;
    MEM32(eax + 8) = 2;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax) = 0x52;
    MEM8(eax + 1) = 0x54;
    MEM8(eax + 2) = 0x43;
    MEM8(eax + 3) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012940
 * Original: 0x00012940 - 0x00012969 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012940: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    PUSH32(esp, edi);
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012970
 * Original: 0x00012970 - 0x0001298D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012970: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001298A; /* jne: not equal / not zero */

loc_00012975: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    MEM32(ecx + 8) = edx;
    MEM8(ecx + 5) = LO8(eax);
    MEM8(ecx + 4) = LO8(eax);

loc_0001298A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012990
 * Original: 0x00012990 - 0x000129FF (111 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012990: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000129FD; /* je: equal / zero */

loc_00012999: ;
    SET_LO8(ecx, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000129CE; /* jne: not equal / not zero */

loc_000129A0: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000129CD; /* jle: less or equal (signed <=) */

loc_000129AA: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000129B0: ;
    eax = MEM32(esi);
    ecx = MEM32(ebx + eax + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000129BCu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000129BC: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000129B0; /* jl: less (signed <) */

loc_000129CC: ;
    POP32(esp, ebx);

loc_000129CD: ;
    POP32(esp, edi);

loc_000129CE: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000129EC; /* je: equal / zero */

loc_000129D5: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000129DAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000129D8u); } /* indirect call */
    }

loc_000129DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000129EC: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000129F4u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000129F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_000129FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012A00
 * Original: 0x00012A00 - 0x00012A05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012A00: ;
    g_seh_ebp = ebp; sub_00012990(); return; /* tail jmp 0x00012990 */

}

/**
 * sub_00012A10
 * Original: 0x00012A10 - 0x00012A58 (72 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012A10: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A57; /* je: equal / zero */

loc_00012A16: ;
    SET_LO8(edx, MEM8(ecx + 5));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A57; /* je: equal / zero */

loc_00012A1D: ;
    SET_LO8(edx, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A57; /* je: equal / zero */

loc_00012A24: ;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012A52; /* jle: less or equal (signed <=) */

loc_00012A2E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0x18;

loc_00012A35: ;
    eax = MEM32(ecx);
    ebx = MEM32(edi + eax + 4);
    edx = edi + eax + 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebx;
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012A35; /* jl: less (signed <) */

loc_00012A50: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00012A52: ;
    MEM8(ecx + 5) = 0;
    POP32(esp, esi);

loc_00012A57: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012A60
 * Original: 0x00012A60 - 0x00012A9F (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012A60: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A9A; /* je: equal / zero */

loc_00012A66: ;
    SET_LO8(eax, MEM8(ecx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012A9A; /* jne: not equal / not zero */

loc_00012A6D: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012A9A; /* jl: less (signed <) */

loc_00012A75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012A9A; /* jge: greater or equal (signed >=) */

loc_00012A7A: ;
    eax = eax + eax * 2 + 6;
    ecx = edx + eax * 4;
    eax = MEM32(ecx);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00012A9A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012AA0
 * Original: 0x00012AA0 - 0x00012AAD (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012AA0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012AAA; /* je: equal / zero */

loc_00012AA6: ;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

loc_00012AAA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012AB0
 * Original: 0x00012AB0 - 0x00012ABD (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012AB0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012ABA; /* je: equal / zero */

loc_00012AB6: ;
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

loc_00012ABA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012AC0
 * Original: 0x00012AC0 - 0x00012ACD (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012AC0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012ACA; /* je: equal / zero */

loc_00012AC6: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

loc_00012ACA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012AD0
 * Original: 0x00012AD0 - 0x00012B4B (123 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012B44; /* jne: not equal / not zero */

loc_00012ADC: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x400);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2FEB2C);
    PUSH32(esp, 0x00012AF1u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00012AF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B2F; /* je: equal / zero */

loc_00012AF8: ;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM8(eax + 3) = LO8(ebx);
    MEM8(eax + 4) = 0x4E;
    MEM32(eax + 8) = 2;
    MEM8(eax) = 0x52;
    MEM8(eax + 1) = 0x54;
    MEM8(eax + 2) = 0x43;
    ecx = eax;
    MEM32(esi) = ecx;
    MEM32(ecx + 0xC) = edi;
    SET_LO8(ecx, 1);
    POP32(esp, edi);
    MEM8(esi + 5) = LO8(ecx);
    MEM8(esi + 4) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012B2F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    MEM32(ecx + 0xC) = edi;
    SET_LO8(ecx, 1);
    POP32(esp, edi);
    MEM8(esi + 5) = LO8(ecx);
    MEM8(esi + 4) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012B44: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012B50
 * Original: 0x00012B50 - 0x00012C18 (200 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012C14; /* jne: not equal / not zero */

loc_00012B5E: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012C14; /* jne: not equal / not zero */

loc_00012B69: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ebp + ebp * 2 + 6;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012BA5; /* jne: not equal / not zero */

loc_00012B7D: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2FEB64);
    PUSH32(esp, 0x00012B8Du); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00012B8D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B9F; /* je: equal / zero */

loc_00012B94: ;
    ecx = eax;
    PUSH32(esp, 0x00012B9Bu); RECOMP_ABI_CALL(0x00012910u, sub_00012910); /* call 0x00012910 */

loc_00012B9B: ;
    MEM32(esi) = eax;
    goto loc_00012BD8;

loc_00012B9F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    goto loc_00012BD8;

loc_00012BA5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x14) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012C11; /* jle: less or equal (signed <=) */

loc_00012BAA: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2FEB48);
    PUSH32(esp, 0x00012BBAu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00012BBA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012BCB; /* je: equal / zero */

loc_00012BC1: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00012BC9u); RECOMP_ABI_CALL(0x00012940u, sub_00012940); /* call 0x00012940 */

loc_00012BC9: ;
    goto loc_00012BCD;

loc_00012BCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012BCD: ;
    PUSH32(esp, ebx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00012BD5u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_00012BD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012BD8: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x10);
    eax = ebp;
    MEM32(ecx + 0x14) = ebp;
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0xC) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00012C11; /* jle: less or equal (signed <=) */

loc_00012BED: ;
    esi = MEM32(esi);
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + edx * 2;
    edi = esi + edx * 4;
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

loc_00012C11: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00012C14: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012C20
 * Original: 0x00012C20 - 0x00012D31 (273 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012C20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012D2C; /* je: equal / zero */

loc_00012C30: ;
    SET_LO8(eax, MEM8(ebx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012D2C; /* jne: not equal / not zero */

loc_00012C3B: ;
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012D2C; /* jne: not equal / not zero */

loc_00012C46: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    MEM32(eax + 0x14) = ecx;
    esi = MEM32(ebx);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FEB80);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x00012C7Du); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00012C7D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C8E; /* je: equal / zero */

loc_00012C84: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00012C8Cu); RECOMP_ABI_CALL(0x00012940u, sub_00012940); /* call 0x00012940 */

loc_00012C8C: ;
    goto loc_00012C90;

loc_00012C8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012C90: ;
    MEM32(ebx) = eax;
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + ecx * 2;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = eax + edx * 4;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00012CFF; /* jle: less or equal (signed <=) */

loc_00012CAD: ;
    MEM32(esp + 0xC) = 0x18;
    PUSH32(esp, ebp);

loc_00012CB6: ;
    eax = MEM32(ebx);
    ecx = MEM32(esp + 0x10);
    esi = MEM32(eax + ecx + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 8);
    ebp = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
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
    ecx = ebp;
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
    ecx = MEM32(eax + 8);
    edi = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx);
    esi = MEM32(ecx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00012CB6; /* jl: less (signed <) */

loc_00012CFA: ;
    esi = MEM32(esp + 0x18);
    POP32(esp, ebp);

loc_00012CFF: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00012D1E; /* je: equal / zero */

loc_00012D07: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00012D09u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00012D07u); } /* indirect call */
    }

loc_00012D09: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 8) = 0;
    MEM8(ebx + 4) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00012D1E: ;
    PUSH32(esp, 0x00012D23u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_00012D23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(ebx + 4) = 1;
    POP32(esp, esi);

loc_00012D2C: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012D40
 * Original: 0x00012D40 - 0x00012E4C (268 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012D40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00012E42; /* je: equal / zero */

loc_00012D53: ;
    SET_LO8(eax, MEM8(ecx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012E42; /* jne: not equal / not zero */

loc_00012D5E: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012E42; /* jne: not equal / not zero */

loc_00012D69: ;
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(edi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = ebp + ebp * 2 + 6;
    edx = esp + 0x20;
    esi = edi + eax * 4;
    PUSH32(esp, edx);
    eax = edi + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012D89u); RECOMP_ABI_CALL(0x00012EB0u, sub_00012EB0); /* call 0x00012EB0 */

loc_00012D89: ;
    ebx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012D9E; /* je: equal / zero */

loc_00012D92: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012E42; /* je: equal / zero */

loc_00012D9E: ;
    edi = MEM32(edi + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012DD6; /* jne: not equal / not zero */

loc_00012DA5: ;
    esi = MEM32(esp + 0x10);
    edx = edi + edi;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00012DB4u); RECOMP_ABI_CALL(0x00012B50u, sub_00012B50); /* call 0x00012B50 */

loc_00012DB4: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    edx = esp + 0x18;
    esi = ecx + eax * 4;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012DD1u); RECOMP_ABI_CALL(0x00012F00u, sub_00012F00); /* call 0x00012F00 */

loc_00012DD1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_00012DD6: ;
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00012DE8u); RECOMP_ABI_CALL(0x0013F970u, sub_0013F970); /* call 0x0013F970 */

loc_00012DE8: ;
    ebp = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x400);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2FEB9C);
    MEM32(ebx) = edx;
    PUSH32(esp, 0x00012E02u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00012E02: ;
    esi = MEM32(esp + 0x3C);
    MEM32(ebx + 4) = eax;
    edi = eax;
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = MEM32(esp + 0x30);
    MEM32(ebx + 8) = ebp;
    eax = MEM32(ecx);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(eax + 0x10) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_00012E42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00012E50
 * Original: 0x00012E50 - 0x00012EAD (93 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012E50: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00012EA7; /* je: equal / zero */

loc_00012E59: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    ecx = MEM32(ecx);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = eax + eax * 2;
    edi = ecx + eax * 4;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012E83u); RECOMP_ABI_CALL(0x00012EB0u, sub_00012EB0); /* call 0x00012EB0 */

loc_00012E83: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00012EA7; /* je: equal / zero */

loc_00012E8B: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012EA7; /* jne: not equal / not zero */

loc_00012E91: ;
    edx = ecx;
    MEM32(esi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 8) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00012EA7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012EB0
 * Original: 0x00012EB0 - 0x00012F00 (80 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012EB0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012EFC; /* jle: less or equal (signed <=) */

loc_00012ECF: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax);

loc_00012ED7: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = eax + eax * 2;
    ebx = MEM32(esi + edx * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    edx = esi + edx * 4;
    if (CMP_GE(_fas, _fbs)) goto loc_00012EF4; /* jge: greater or equal (signed >=) */

loc_00012EE8: ;
    esi = edx + 0xC;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00012EF6;

loc_00012EF4: ;
    ecx = eax;

loc_00012EF6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00012ED7; /* jg: greater (signed >) */

loc_00012EFA: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00012EFC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012F00
 * Original: 0x00012F00 - 0x00012F1F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012F00: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012F1Bu); RECOMP_ABI_CALL(0x00012EB0u, sub_00012EB0); /* call 0x00012EB0 */

loc_00012F1B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012F20
 * Original: 0x00012F20 - 0x00012F7B (91 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012F20: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, MEM8(esp + 0x14));
    if (CMP_EQ(_fa, _fb)) goto loc_00012F34; /* je: equal / zero */

loc_00012F2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012F72; /* je: equal / zero */

loc_00012F30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012F72; /* jne: not equal / not zero */

loc_00012F34: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012F57; /* jne: not equal / not zero */

loc_00012F40: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012F48; /* je: equal / zero */

loc_00012F44: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012F72; /* je: equal / zero */

loc_00012F48: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012F75; /* je: equal / zero */

loc_00012F50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012F75; /* jne: not equal / not zero */

loc_00012F54: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00012F57: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012F66; /* jne: not equal / not zero */

loc_00012F5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012F75; /* jne: not equal / not zero */

loc_00012F63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00012F66: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x438) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x438 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012F75; /* jne: not equal / not zero */

loc_00012F6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012F75; /* jne: not equal / not zero */

loc_00012F72: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00012F75: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00012F80
 * Original: 0x00012F80 - 0x0001312F (431 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012F80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(0x38DC9C) = 0;
    PUSH32(esp, 0x00012F93u); RECOMP_ABI_CALL(0x001ED738u, sub_001ED738); /* call 0x001ED738 */

loc_00012F93: ;
    ecx = MEM32(0x3727D8);
    edx = MEM32(0x3727DC);
    esi = MEM32(0x3727E0);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x3727E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x38DCA0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00012FC0; /* je: equal / zero */

loc_00012FB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012FFA; /* je: equal / zero */

loc_00012FBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012FFA; /* jne: not equal / not zero */

loc_00012FC0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012FD8; /* jne: not equal / not zero */

loc_00012FC8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012FD0; /* je: equal / zero */

loc_00012FCC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012FFA; /* je: equal / zero */

loc_00012FD0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012FD8; /* je: equal / zero */

loc_00012FD4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012FFA; /* je: equal / zero */

loc_00012FD8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012FE4; /* jne: not equal / not zero */

loc_00012FE0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012FFA; /* je: equal / zero */

loc_00012FE4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x438) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x438 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012FF0; /* jne: not equal / not zero */

loc_00012FEC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012FFA; /* je: equal / zero */

loc_00012FF0: ;
    MEM32(0x38DC9C) = 0;

loc_00012FFA: ;
    edx = MEM32(0x3727E8);
    ecx = MEM32(0x3727F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(0x3727F0);
    MEM32(esp + 4) = edx;
    edx = MEM32(0x3727EC);
    if (CMP_EQ(_fa, _fb)) goto loc_00013022; /* je: equal / zero */

loc_0001301A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001305C; /* je: equal / zero */

loc_0001301E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001305C; /* jne: not equal / not zero */

loc_00013022: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001303A; /* jne: not equal / not zero */

loc_0001302A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013032; /* je: equal / zero */

loc_0001302E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001305C; /* je: equal / zero */

loc_00013032: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001303A; /* je: equal / zero */

loc_00013036: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001305C; /* je: equal / zero */

loc_0001303A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013046; /* jne: not equal / not zero */

loc_00013042: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001305C; /* je: equal / zero */

loc_00013046: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x438) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x438 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013052; /* jne: not equal / not zero */

loc_0001304E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001305C; /* je: equal / zero */

loc_00013052: ;
    MEM32(0x38DC9C) = 1;

loc_0001305C: ;
    ecx = MEM32(0x3727F8);
    edx = MEM32(0x3727FC);
    esi = MEM32(0x372800);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x372804);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013084; /* je: equal / zero */

loc_0001307C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000130BE; /* je: equal / zero */

loc_00013080: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000130BE; /* jne: not equal / not zero */

loc_00013084: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001309C; /* jne: not equal / not zero */

loc_0001308C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013094; /* je: equal / zero */

loc_00013090: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000130BE; /* je: equal / zero */

loc_00013094: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001309C; /* je: equal / zero */

loc_00013098: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000130BE; /* je: equal / zero */

loc_0001309C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000130A8; /* jne: not equal / not zero */

loc_000130A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000130BE; /* je: equal / zero */

loc_000130A8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x438) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x438 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000130B4; /* jne: not equal / not zero */

loc_000130B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000130BE; /* je: equal / zero */

loc_000130B4: ;
    MEM32(0x38DC9C) = 2;

loc_000130BE: ;
    edx = MEM32(0x372808);
    ecx = MEM32(0x372814);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(0x372810);
    MEM32(esp + 4) = edx;
    edx = MEM32(0x37280C);
    if (CMP_EQ(_fa, _fb)) goto loc_000130E6; /* je: equal / zero */

loc_000130DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013120; /* je: equal / zero */

loc_000130E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013120; /* jne: not equal / not zero */

loc_000130E6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000130FE; /* jne: not equal / not zero */

loc_000130EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000130F6; /* je: equal / zero */

loc_000130F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013120; /* je: equal / zero */

loc_000130F6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000130FE; /* je: equal / zero */

loc_000130FA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013120; /* je: equal / zero */

loc_000130FE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001310A; /* jne: not equal / not zero */

loc_00013106: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013120; /* je: equal / zero */

loc_0001310A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x438) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x438 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013116; /* jne: not equal / not zero */

loc_00013112: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013120; /* je: equal / zero */

loc_00013116: ;
    MEM32(0x38DC9C) = 3;

loc_00013120: ;
    PUSH32(esp, 0x00013125u); RECOMP_ABI_CALL(0x001ED70Fu, sub_001ED70F); /* call 0x001ED70F */

loc_00013125: ;
    MEM32(0x38DCA4) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013130
 * Original: 0x00013130 - 0x0001313C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013130: ;
    eax = MEM32(0x38DC8C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x38DC8C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00013140
 * Original: 0x00013140 - 0x00013143 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013150
 * Original: 0x00013150 - 0x0001317C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013150: ;
    MEM32(ecx) = 0x2FEBC0;
    _fa = (uint32_t)(MEM32(0x38DC88)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x38DC88), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013169; /* jne: not equal / not zero */

loc_0001315E: ;
    eax = MEM32(0x38DC68);
    MEM32(0x38DC88) = eax;
    esp += 4; return; /* ret */

loc_00013169: ;
    _fa = (uint32_t)(MEM32(0x38DC68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x38DC68), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001317B; /* jne: not equal / not zero */

loc_00013171: ;
    MEM32(0x38DC68) = 0;

loc_0001317B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013180
 * Original: 0x00013180 - 0x00013181 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013180(void)
{

loc_00013180: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013190
 * Original: 0x00013190 - 0x000131E3 (83 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013190: ;
    eax = MEM32(ecx + 0x18);
    MEM32(0x38DC64) = eax;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(0x38DC88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(0x38DC60) = edx;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x18); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC04); /* mulss */
    MEMF(0x38DC5C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x1C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC00); /* mulss */
    MEMF(0x38DC58) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000131D7; /* jne: not equal / not zero */

loc_000131D4: ;
    eax = ecx;
    esp += 4; return; /* ret */

loc_000131D7: ;
    MEM32(0x38DC68) = eax;
    MEM32(0x38DC88) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000131F0
 * Original: 0x000131F0 - 0x000131FA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000131F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000131F0: ;
    MEM8(0x38DC70) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013200
 * Original: 0x00013200 - 0x00013247 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013200(void)
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

loc_00013200: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, 1);

loc_00013203: ;
    _fa = (uint32_t)(MEM8(0x38DC70)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x38DC70), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013203; /* je: equal / zero */

loc_0001320B: ;
    edx = MEM32(0x38DC6C);
    PUSH32(esp, esi);
    esi = MEM32(0x38DC8C);
    eax = MEM32(0x38DC8C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 4) = esi;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(0x38DC6C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00013236; /* jge: greater or equal (signed >=) */

loc_00013230: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_00013236: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001323Fu); RECOMP_ABI_CALL(0x000ACE50u, sub_000ACE50); /* call 0x000ACE50 */

loc_0001323F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
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
 * sub_00013250
 * Original: 0x00013250 - 0x00013265 (21 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013250(void)
{

loc_00013250: ;
    MEM32(0x38DC8C) = 1;
    MEM32(0x38DC6C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00013270
 * Original: 0x00013270 - 0x00013276 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013270(void)
{

loc_00013270: ;
    eax = MEM32(0x38DC8C);
    esp += 4; return; /* ret */

}

/**
 * sub_00013280
 * Original: 0x00013280 - 0x0001328A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013280(void)
{

loc_00013280: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x71) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013290
 * Original: 0x00013290 - 0x0001329A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013290(void)
{

loc_00013290: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x71) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000132A0
 * Original: 0x000132A0 - 0x000132C3 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000132A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000132A0: ;
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000132BD; /* je: equal / zero */

loc_000132A8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000132B7; /* je: equal / zero */

loc_000132AB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000132B1; /* je: equal / zero */

loc_000132AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000132B1: ;
    eax = 0x7FFFFFFF;
    esp += 4; return; /* ret */

loc_000132B7: ;
    eax = 0x7FFFFF;
    esp += 4; return; /* ret */

loc_000132BD: ;
    eax = 0x7FFF;
    esp += 4; return; /* ret */

}

/**
 * sub_000132D0
 * Original: 0x000132D0 - 0x000132D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000132D0(void)
{

loc_000132D0: ;
    SET_LO8(eax, MEM8(ecx + 0x71));
    esp += 4; return; /* ret */

}

/**
 * sub_000132E0
 * Original: 0x000132E0 - 0x000132E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000132E0(void)
{

loc_000132E0: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000132F0
 * Original: 0x000132F0 - 0x000132F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000132F0(void)
{

loc_000132F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013300
 * Original: 0x00013300 - 0x00013309 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013300: ;
    eax = MEM32(0x38DC74);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013310
 * Original: 0x00013310 - 0x00013319 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013310: ;
    eax = MEM32(0x38DC78);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013320
 * Original: 0x00013320 - 0x00013329 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013320: ;
    eax = MEM32(0x38DC7C);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013330
 * Original: 0x00013330 - 0x00013339 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013330: ;
    eax = MEM32(0x38DC80);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013340
 * Original: 0x00013340 - 0x00013349 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013340: ;
    eax = MEM32(0x3727B8);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013350
 * Original: 0x00013350 - 0x00013359 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013350: ;
    eax = MEM32(0x3727BC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013360
 * Original: 0x00013360 - 0x00013361 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013360(void)
{

loc_00013360: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013370
 * Original: 0x00013370 - 0x00013380 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013370: ;
    PUSH32(esp, 0x2FEC0C);
    PUSH32(esp, 0x0001337Au); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0001337A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013380
 * Original: 0x00013380 - 0x00013398 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013380: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00013394u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00013394: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000133A0
 * Original: 0x000133A0 - 0x000133AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000133A0(void)
{

loc_000133A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000133AAu); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_000133AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000133B0
 * Original: 0x000133B0 - 0x000133B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000133B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000133B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000133C0
 * Original: 0x000133C0 - 0x000133E2 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000133C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000133C0: ;
    PUSH32(esp, 0x13380);
    PUSH32(esp, 0x000133CAu); RECOMP_ABI_CALL(0x001C1790u, sub_001C1790); /* call 0x001C1790 */

loc_000133CA: ;
    PUSH32(esp, 0x133A0);
    PUSH32(esp, 0x000133D4u); RECOMP_ABI_CALL(0x001C17A0u, sub_001C17A0); /* call 0x001C17A0 */

loc_000133D4: ;
    PUSH32(esp, 0x133B0);
    PUSH32(esp, 0x000133DEu); RECOMP_ABI_CALL(0x001C1670u, sub_001C1670); /* call 0x001C1670 */

loc_000133DE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000133F0
 * Original: 0x000133F0 - 0x000133F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000133F0(void)
{

loc_000133F0: ;
    eax = MEM32(ecx + 0x3B80);
    esp += 4; return; /* ret */

}

/**
 * sub_00013400
 * Original: 0x00013400 - 0x00013431 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013400: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x8C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013425; /* je: equal / zero */

loc_0001340F: ;
    ecx = MEM32(ecx + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001341Bu); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_0001341B: ;
    MEM32(esi + 0x8C4) = 0;

loc_00013425: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0001342Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001342Bu); } /* indirect call */
    }

loc_0001342D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013440
 * Original: 0x00013440 - 0x00013446 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013440(void)
{

loc_00013440: ;
    eax = 0x389FD0;
    esp += 4; return; /* ret */

}

/**
 * sub_00013450
 * Original: 0x00013450 - 0x000134F1 (161 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013450: ;
    xmm3.f[0] = (float)(int32_t)MEM32(ecx + 0x18); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x1C); /* cvtsi2ss */
    xmm4 = XMM_SCALAR(MEMF(0x2FEC48)); /* movss */
    PUSH32(esp, ebx);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    PUSH32(esp, esi);
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, edi);
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    edi = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    esi = (uint32_t)recomp_cvt_si32((double)xmm2.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = (uint32_t)recomp_cvt_si32((double)xmm4.f[0], g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    ebx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    MEMF(0x3727CC) = xmm0.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(ecx + 0x1C); /* cvtsi2ss */
    edi = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    MEMF(0x3727D0) = xmm1.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)MEM32(ecx + 0x18); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(0x38DC94) = xmm2.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(ecx + 0x1C); /* cvtsi2ss */
    POP32(esp, edi);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    POP32(esp, esi);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x38DC98) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013500
 * Original: 0x00013500 - 0x000135D5 (213 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013500(void)
{
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

loc_00013500: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0001350Bu); RECOMP_ABI_CALL(0x000B1A60u, sub_000B1A60); /* call 0x000B1A60 */

loc_0001350B: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x31BE80)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000135D0; /* jbe: below or equal (unsigned <=) */

loc_00013523: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000135D0; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_00013536: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0001353Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001353Au); } /* indirect call */
    }

loc_0001353D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00013546u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013543u); } /* indirect call */
    }

loc_00013546: ;
    ecx = MEM32(esi + 0x84);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00013554u); RECOMP_ABI_CALL(0x001C4010u, sub_001C4010); /* call 0x001C4010 */

loc_00013554: ;
    ecx = MEM32(0x38DC60);
    edx = MEM32(0x38DC64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0001356Cu); RECOMP_ABI_CALL(0x000C0090u, sub_000C0090); /* call 0x000C0090 */

loc_0001356C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEC4C)); /* fmul dword ptr [0x2fec4c] */
    MEM8(esp + 0x22) = 0;
    MEM8(esp + 0x23) = 0;
    PUSH32(esp, 0x00013585u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_00013585: ;
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x38DCB0) = eax;
    PUSH32(esp, 0x38DBF8);
    MEM32(0x38DCB4) = eax;
    PUSH32(esp, 0x38DCB0);
    MEM32(0x38DCB8) = eax;
    PUSH32(esp, 0x38DC18);
    ecx = esp + 0x14;
    MEM32(0x38DCBC) = eax;
    PUSH32(esp, 0x000135B9u); RECOMP_ABI_CALL(0x000BF670u, sub_000BF670); /* call 0x000BF670 */

loc_000135B9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000135C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000135BDu); } /* indirect call */
    }

loc_000135C0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000135C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000135C4u); } /* indirect call */
    }

loc_000135C7: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000135D0u); RECOMP_ABI_CALL(0x000C0180u, sub_000C0180); /* call 0x000C0180 */

loc_000135D0: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000135E0
 * Original: 0x000135E0 - 0x00013620 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000135E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000135E0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x2FEBC0;
    MEM8(eax + 0x10) = LO8(ecx);
    MEM8(eax + 0x11) = LO8(ecx);
    MEM8(eax + 0x12) = LO8(ecx);
    MEM8(eax + 0x13) = 0xFF;
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM8(eax + 0x70) = LO8(ecx);
    MEM8(eax + 0x71) = 1;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00013620
 * Original: 0x00013620 - 0x0001363E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013620(void)
{

loc_00013620: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 0x10) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx + 0x11) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(ecx + 0x12) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 3));
    MEM8(ecx + 0x13) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013640
 * Original: 0x00013640 - 0x000137B9 (377 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013640(void)
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

loc_00013640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000137B0; /* jne: not equal / not zero */

loc_00013658: ;
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00013678; /* je: equal / zero */

loc_00013660: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00013671; /* je: equal / zero */

loc_00013663: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0001366A; /* je: equal / zero */

loc_00013666: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001367D;

loc_0001366A: ;
    ecx = 0x7FFFFFFF;
    goto loc_0001367D;

loc_00013671: ;
    ecx = 0x7FFFFF;
    goto loc_0001367D;

loc_00013678: ;
    ecx = 0x7FFF;

loc_0001367D: ;
    eax = MEM32(edi + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(edi + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000136B5; /* jge: greater or equal (signed >=) */

loc_000136AF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_000136B5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEC58)); /* fmul dword ptr [0x2fec58] */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    esi = edi + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000136EBu); RECOMP_ABI_CALL(0x00265E50u, sub_00265E50); /* call 0x00265E50 */

loc_000136EB: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm1 = xmm0; /* movaps */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi); /* mulss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi + 0x28) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC50)); /* movss */
    MEMF(esi + 0x30) = xmm3.f[0]; /* movss */
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x64) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x70) = 1;

loc_000137B0: ;
    eax = edi + 0x30;
    POP32(esp, edi);
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
 * sub_000137C0
 * Original: 0x000137C0 - 0x00013832 (114 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000137C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000137C0: ;
    SET_LO8(eax, MEM8(0x38DC70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001380D; /* je: equal / zero */

loc_000137CC: ;
    PUSH32(esp, 0x000137D1u); RECOMP_ABI_CALL(0x00013500u, sub_00013500); /* call 0x00013500 */

loc_000137D1: ;
    eax = MEM32(0x38DC6C);
    ecx = MEM32(0x3727D4);
    /* nop */

loc_000137E0: ;
    edx = MEM32(0x38DC8C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000137E0; /* jb: below (unsigned <) */

loc_000137EC: ;
    ecx = MEM32(esi + 0x84);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000137F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000137F4u); } /* indirect call */
    }

loc_000137F7: ;
    MEM32(0x38DCA8) = MEM32(0x38DCA8) - 1;
    _fa = (uint32_t)(MEM32(0x38DCA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x84);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00013807u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013805u); } /* indirect call */
    }

loc_00013807: ;
    MEM32(0x38DCA8) = MEM32(0x38DCA8) + 1;
    _fa = (uint32_t)(MEM32(0x38DCA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0001380D: ;
    eax = MEM32(0x38DC8C);
    edx = MEM32(0x38DC6C);
    ecx = MEM32(0x38DC8C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(0x38DC6C) = ecx;
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_00013831; /* jge: greater or equal (signed >=) */

loc_0001382C: ;
    eax = 1;

loc_00013831: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013840
 * Original: 0x00013840 - 0x00013DD9 (1433 bytes, 331 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013840(void)
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

loc_00013840: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0001384Eu); RECOMP_ABI_CALL(0x00012F80u, sub_00012F80); /* call 0x00012F80 */

loc_0001384E: ;
    _fa = (uint32_t)(MEM32(0x38DCA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x38DCA4), 3 (32-bit) */
    ebp = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00013899; /* jne: not equal / not zero */

loc_0001385C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC98)); /* movss */
    MEM32(esi + 0x1C) = 0x210;
    MEMF(0x3727C4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC94)); /* movss */
    MEMF(0x3727C8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC90)); /* movss */
    MEMF(0x3727C0) = xmm0.f[0]; /* movss */
    MEM32(0x38DC90) = ebp;

loc_00013899: ;
    eax = MEM32(0x38DC9C);
    ecx = eax;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + 0x3727E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3727E0), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000138BD; /* jne: not equal / not zero */

loc_000138AB: ;
    edx = MEM32(0x3888C0);
    MEM8(edx + 0x203E) = 1;
    eax = MEM32(0x38DC9C);

loc_000138BD: ;
    ecx = eax;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + 0x3727E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3727E4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000138DC; /* jne: not equal / not zero */

loc_000138CA: ;
    edx = MEM32(0x3888C0);
    MEM8(edx + 0x203D) = 1;
    eax = MEM32(0x38DC9C);

loc_000138DC: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + 0x3727DC);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(0x38DC9C);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + 0x3727D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001392C; /* jg: greater (signed >) */

loc_000138FE: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00013925; /* je: equal / zero */

loc_00013900: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x140) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x140 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001391E; /* je: equal / zero */

loc_00013907: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013917; /* je: equal / zero */

loc_0001390E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x280) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x280 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001393A; /* jne: not equal / not zero */

loc_00013915: ;
    goto loc_0001394D;

loc_00013917: ;
    eax = 0x200;
    goto loc_0001394D;

loc_0001391E: ;
    eax = 0x140;
    goto loc_0001394D;

loc_00013925: ;
    eax = 0x2D0;
    goto loc_0001394D;

loc_0001392C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x500) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x500 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013948; /* je: equal / zero */

loc_00013933: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x780 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013941; /* je: equal / zero */

loc_0001393A: ;
    eax = 0x280;
    goto loc_0001394D;

loc_00013941: ;
    eax = 0x780;
    goto loc_0001394D;

loc_00013948: ;
    eax = 0x500;

loc_0001394D: ;
    MEM32(esi + 0x18) = eax;
    edx = MEM32(0x38DC9C);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edx + 0x3727D8);
    fp_push((double)SMEM32(edx + 0x3727D8)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001396F; /* jge: greater or equal (signed >=) */

loc_00013969: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_0001396F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x38DC28) = (float)fp_top(); /* fst */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    xmm4 = XMM_SCALAR(MEMF(0x2FEC48)); /* movss */
    MEMF(0x38DC38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x38DC18) = xmm0.f[0]; /* movss */
    MEMF(0x38DC1C) = xmm0.f[0]; /* movss */
    MEMF(0x38DC2C) = xmm0.f[0]; /* movss */
    MEMF(0x38DC20) = xmm1.f[0]; /* movss */
    MEMF(0x38DC24) = xmm1.f[0]; /* movss */
    MEMF(0x38DC30) = xmm1.f[0]; /* movss */
    MEMF(0x38DC34) = xmm1.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    MEMF(0x38DC48) = xmm0.f[0]; /* movss */
    MEMF(0x38DC3C) = xmm2.f[0]; /* movss */
    MEMF(0x38DC40) = xmm1.f[0]; /* movss */
    MEMF(0x38DC44) = xmm1.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    MEMF(0x38DC50) = xmm1.f[0]; /* movss */
    MEMF(0x38DC54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(0x38DBF8) = xmm0.f[0]; /* movss */
    MEMF(0x38DBFC) = xmm0.f[0]; /* movss */
    MEMF(0x38DC04) = xmm0.f[0]; /* movss */
    MEMF(0x38DC4C) = xmm2.f[0]; /* movss */
    MEMF(0x38DC00) = xmm1.f[0]; /* movss */
    MEMF(0x38DC08) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    MEMF(0x38DC10) = xmm0.f[0]; /* movss */
    MEMF(0x38DC0C) = xmm1.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    MEMF(0x38DC14) = xmm0.f[0]; /* movss */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x38DCB0) = eax;
    MEM32(0x38DCB4) = eax;
    MEM32(0x38DCB8) = eax;
    MEM32(0x38DCBC) = eax;
    xmm3.f[0] = (float)(int32_t)MEM32(esi + 0x18); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    edi = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = (uint32_t)recomp_cvt_si32((double)xmm4.f[0], g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)xmm2.f[0], g_mxcsr, 1); /* cvttss2si */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    ebx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    MEMF(0x3727CC) = xmm0.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    edi = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    MEMF(0x3727D0) = xmm1.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)MEM32(esi + 0x18); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(0x38DC94) = xmm2.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, 0x18);
    MEMF(0x38DC98) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x00013B10u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00013B0Au); } /* indirect call */
    }

loc_00013B10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013B20; /* je: equal / zero */

loc_00013B17: ;
    ecx = eax;
    PUSH32(esp, 0x00013B1Eu); RECOMP_ABI_CALL(0x001C6310u, sub_001C6310); /* call 0x001C6310 */

loc_00013B1E: ;
    goto loc_00013B22;

loc_00013B20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013B22: ;
    ecx = eax;
    MEM32(esi + 0x80) = eax;
    PUSH32(esp, 0x00013B2Fu); RECOMP_ABI_CALL(0x001C6180u, sub_001C6180); /* call 0x001C6180 */

loc_00013B2F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013B46; /* jne: not equal / not zero */

loc_00013B33: ;
    PUSH32(esp, 0x2FEC6C);
    PUSH32(esp, 0x00013B3Du); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00013B3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00013B46u); RECOMP_ABI_CALL(0x002BE46Bu, sub_002BE46B); /* call 0x002BE46B */

loc_00013B46: ;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, 0x00013B51u); RECOMP_ABI_CALL(0x001C1810u, sub_001C1810); /* call 0x001C1810 */

loc_00013B51: ;
    ecx = MEM32(esi + 0x80);
    MEM32(esi + 0x88) = eax;
    PUSH32(esp, 0x00013B62u); RECOMP_ABI_CALL(0x001C17D0u, sub_001C17D0); /* call 0x001C17D0 */

loc_00013B62: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x18); /* cvtsi2ss */
    ecx = eax;
    MEM32(esi + 0x84) = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013B87u); RECOMP_ABI_CALL(0x001C22C0u, sub_001C22C0); /* call 0x001C22C0 */

loc_00013B87: ;
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00013B94u); RECOMP_ABI_CALL(0x001C2310u, sub_001C2310); /* call 0x001C2310 */

loc_00013B94: ;
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00013BA1u); RECOMP_ABI_CALL(0x001C2330u, sub_001C2330); /* call 0x001C2330 */

loc_00013BA1: ;
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00013BAEu); RECOMP_ABI_CALL(0x001C2380u, sub_001C2380); /* call 0x001C2380 */

loc_00013BAE: ;
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00013BBAu); RECOMP_ABI_CALL(0x001C23D0u, sub_001C23D0); /* call 0x001C23D0 */

loc_00013BBA: ;
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00013BC6u); RECOMP_ABI_CALL(0x001C2460u, sub_001C2460); /* call 0x001C2460 */

loc_00013BC6: ;
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, 0x00013BD1u); RECOMP_ABI_CALL(0x001C2480u, sub_001C2480); /* call 0x001C2480 */

loc_00013BD1: ;
    ecx = MEM32(0x528690);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00013BDDu); RECOMP_ABI_CALL(0x00264220u, sub_00264220); /* call 0x00264220 */

loc_00013BDD: ;
    SET_LO8(eax, MEM8(0x38DCA0));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013C0A; /* je: equal / zero */

loc_00013BE9: ;
    edx = MEM32(0x38DC9C);
    ecx = MEM32(esi + 0x84);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx + 0x3727E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x3727E4), ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013C0Au); RECOMP_ABI_CALL(0x001C35C0u, sub_001C35C0); /* call 0x001C35C0 */

loc_00013C0A: ;
    PUSH32(esp, 0x00013C0Fu); RECOMP_ABI_CALL(0x00150FE0u, sub_00150FE0); /* call 0x00150FE0 */

loc_00013C0F: ;
    ecx = MEM32(esi + 0x84);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00013C24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013C21u); } /* indirect call */
    }

loc_00013C24: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ebp = esi + 0x3B10;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00013C3Du); RECOMP_ABI_CALL(0x00194BF0u, sub_00194BF0); /* call 0x00194BF0 */

loc_00013C3D: ;
    xmm0 = XMM_SCALAR(MEMF(0x306514)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edi = esi + 0x90;
    MEMF(edi + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC68)); /* movss */
    MEM8(edi + 0x192) = LO8(ebx);
    MEM8(edi + 0x193) = LO8(ebx);
    MEM8(edi + 0x194) = 1;
    MEMF(edi + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = edi;
    MEM8(edi + 0x192) = LO8(ebx);
    MEM8(edi + 0x193) = LO8(ebx);
    MEM8(edi + 0x194) = 1;
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00013CBAu); RECOMP_ABI_CALL(0x0018B4F0u, sub_0018B4F0); /* call 0x0018B4F0 */

loc_00013CBA: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00013CC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013CC0u); } /* indirect call */
    }

loc_00013CC3: ;
    ecx = esp + 0x10;
    MEM32(esi + 0x3B80) = eax;
    SET_LO8(eax, 0x80);
    PUSH32(esp, ecx);
    ecx = 0x378A90;
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x15) = LO8(eax);
    MEM8(esp + 0x16) = LO8(eax);
    MEM8(esp + 0x17) = LO8(eax);
    PUSH32(esp, 0x00013CEAu); RECOMP_ABI_CALL(0x0018EAA0u, sub_0018EAA0); /* call 0x0018EAA0 */

loc_00013CEA: ;
    PUSH32(esp, 0x42A00000);
    ecx = 0x378A90;
    PUSH32(esp, 0x00013CF9u); RECOMP_ABI_CALL(0x0018E900u, sub_0018E900); /* call 0x0018E900 */

loc_00013CF9: ;
    PUSH32(esp, 0x42C80000);
    ecx = 0x378A90;
    PUSH32(esp, 0x00013D08u); RECOMP_ABI_CALL(0x0018E960u, sub_0018E960); /* call 0x0018E960 */

loc_00013D08: ;
    PUSH32(esp, 1);
    ecx = 0x378A90;
    PUSH32(esp, 0x00013D14u); RECOMP_ABI_CALL(0x0018E8B0u, sub_0018E8B0); /* call 0x0018E8B0 */

loc_00013D14: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2FEC5C);
    PUSH32(esp, 0x00013D24u); RECOMP_ABI_CALL(0x00151FD0u, sub_00151FD0); /* call 0x00151FD0 */

loc_00013D24: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    ebp = eax;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x00013D2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013D29u); } /* indirect call */
    }

loc_00013D2F: ;
    edi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013D4D; /* je: equal / zero */

loc_00013D38: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00013D3Fu); RECOMP_ABI_CALL(0x001B9A32u, sub_001B9A32); /* call 0x001B9A32 */

loc_00013D3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00013D4Bu); RECOMP_ABI_CALL(0x001C60A0u, sub_001C60A0); /* call 0x001C60A0 */

loc_00013D4B: ;
    goto loc_00013D4F;

loc_00013D4D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013D4F: ;
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, 0x13130);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = eax;
    PUSH32(esp, 0x00013D68u); RECOMP_ABI_CALL(0x001C3E20u, sub_001C3E20); /* call 0x001C3E20 */

loc_00013D68: ;
    ecx = MEM32(esi + 0x84);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00013D72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013D70u); } /* indirect call */
    }

loc_00013D72: ;
    MEM32(0x38DCA8) = MEM32(0x38DCA8) + 1;
    _fa = (uint32_t)(MEM32(0x38DCA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x18);
    MEM32(0x38DC64) = eax;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(0x38DC88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x38DC60) = ecx;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x18); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC04); /* mulss */
    MEMF(0x38DC5C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC00); /* mulss */
    MEMF(0x38DC58) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00013DC6; /* jne: not equal / not zero */

loc_00013DBC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00013DC6: ;
    POP32(esp, edi);
    MEM32(0x38DC88) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x38DC68) = eax;
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
 * sub_00013DE0
 * Original: 0x00013DE0 - 0x00013EF1 (273 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013DE0(void)
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

loc_00013DE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x84);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013DF2u); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_00013DF2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EE7; /* je: equal / zero */

loc_00013DFC: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi + 0x58);
    ecx = MEM32(edi + 0x5C);
    edx = MEM32(edi + 0x40);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edi + 0x44);
    MEM32(esp + 0x10) = eax;
    eax = 0xFF000000u;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00013E2Au); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_00013E2A: ;
    PUSH32(esp, 0x40000000);
    ecx = esi;
    PUSH32(esp, 0x00013E36u); RECOMP_ABI_CALL(0x001C6840u, sub_001C6840); /* call 0x001C6840 */

loc_00013E36: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00013E3Fu); RECOMP_ABI_CALL(0x001C72A0u, sub_001C72A0); /* call 0x001C72A0 */

loc_00013E3F: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00013E61u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_00013E61: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x8D0);
    PUSH32(esp, 0x2FEC9C);
    PUSH32(esp, 0x00013E75u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00013E75: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EE3; /* je: equal / zero */

loc_00013E7C: ;
    ecx = MEM32(ebx + 0x24);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00013E9C; /* je: equal / zero */

loc_00013E84: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00013E95; /* je: equal / zero */

loc_00013E87: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00013E8E; /* je: equal / zero */

loc_00013E8A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00013EA1;

loc_00013E8E: ;
    edx = 0x7FFFFFFF;
    goto loc_00013EA1;

loc_00013E95: ;
    edx = 0x7FFFFF;
    goto loc_00013EA1;

loc_00013E9C: ;
    edx = 0x7FFF;

loc_00013EA1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00013EB3; /* jge: greater or equal (signed >=) */

loc_00013EAD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_00013EB3: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00013EC6u); RECOMP_ABI_CALL(0x0018E620u, sub_0018E620); /* call 0x0018E620 */

loc_00013EC6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013ED8; /* jne: not equal / not zero */

loc_00013ECC: ;
    ecx = MEM32(ebx + 0x84);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013ED8u); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_00013ED8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00013EE3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00013ECC;

loc_00013EE7: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
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
 * sub_00013F00
 * Original: 0x00013F00 - 0x00014011 (273 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013F00(void)
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

loc_00013F00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x88);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013F12u); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_00013F12: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014007; /* je: equal / zero */

loc_00013F1C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi + 0x58);
    ecx = MEM32(edi + 0x5C);
    edx = MEM32(edi + 0x40);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edi + 0x44);
    MEM32(esp + 0x10) = eax;
    eax = 0xFF000000u;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00013F4Au); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_00013F4A: ;
    PUSH32(esp, 0x40000000);
    ecx = esi;
    PUSH32(esp, 0x00013F56u); RECOMP_ABI_CALL(0x001C6840u, sub_001C6840); /* call 0x001C6840 */

loc_00013F56: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00013F5Fu); RECOMP_ABI_CALL(0x001C72A0u, sub_001C72A0); /* call 0x001C72A0 */

loc_00013F5F: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00013F81u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_00013F81: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x8D0);
    PUSH32(esp, 0x2FECBC);
    PUSH32(esp, 0x00013F95u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00013F95: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014003; /* je: equal / zero */

loc_00013F9C: ;
    ecx = MEM32(ebx + 0x24);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00013FBC; /* je: equal / zero */

loc_00013FA4: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00013FB5; /* je: equal / zero */

loc_00013FA7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00013FAE; /* je: equal / zero */

loc_00013FAA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00013FC1;

loc_00013FAE: ;
    edx = 0x7FFFFFFF;
    goto loc_00013FC1;

loc_00013FB5: ;
    edx = 0x7FFFFF;
    goto loc_00013FC1;

loc_00013FBC: ;
    edx = 0x7FFF;

loc_00013FC1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00013FD3; /* jge: greater or equal (signed >=) */

loc_00013FCD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_00013FD3: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00013FE6u); RECOMP_ABI_CALL(0x0018E620u, sub_0018E620); /* call 0x0018E620 */

loc_00013FE6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013FF8; /* jne: not equal / not zero */

loc_00013FEC: ;
    ecx = MEM32(ebx + 0x88);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013FF8u); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_00013FF8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00014003: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00013FEC;

loc_00014007: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
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
 * sub_00014020
 * Original: 0x00014020 - 0x000140B4 (148 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014020: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    MEM8(esi + 0x10) = LO8(ebx);
    MEM8(esi + 0x11) = LO8(ebx);
    MEM8(esi + 0x12) = LO8(ebx);
    MEM8(esi + 0x13) = 0xFF;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esi + 0x24) = ecx;
    ecx = esi + 0x90;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = 0x1C0;
    MEM32(esi + 0x20) = eax;
    MEM8(esi + 0x70) = LO8(ebx);
    MEM8(esi + 0x71) = 1;
    MEM32(esi) = 0x2FEFB8;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x8C) = ebx;
    PUSH32(esp, 0x0001407Du); RECOMP_ABI_CALL(0x000149F0u, sub_000149F0); /* call 0x000149F0 */

loc_0001407D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43600000);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi + 0x3B10;
    PUSH32(esp, 0x0001409Au); RECOMP_ABI_CALL(0x00194D50u, sub_00194D50); /* call 0x00194D50 */

loc_0001409A: ;
    POP32(esp, edi);
    MEM32(esi + 0x3B80) = ebx;
    MEM32(esi + 0x3B84) = ebx;
    MEM32(esi + 0x3B88) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000140C0
 * Original: 0x000140C0 - 0x00014128 (104 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000140C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000140C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3B80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000140DE; /* je: equal / zero */

loc_000140CE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000140D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000140D2u); } /* indirect call */
    }

loc_000140D4: ;
    MEM32(esi + 0x3B80) = 0;

loc_000140DE: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000140FE; /* je: equal / zero */

loc_000140E8: ;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000140F4u); RECOMP_ABI_CALL(0x001C1850u, sub_001C1850); /* call 0x001C1850 */

loc_000140F4: ;
    MEM32(esi + 0x84) = 0;

loc_000140FE: ;
    edi = MEM32(esi + 0x8C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014125; /* je: equal / zero */

loc_00014108: ;
    ecx = edi;
    PUSH32(esp, 0x0001410Fu); RECOMP_ABI_CALL(0x001C6150u, sub_001C6150); /* call 0x001C6150 */

loc_0001410F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x00014118u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00014112u); } /* indirect call */
    }

loc_00014118: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = 0;

loc_00014125: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014130
 * Original: 0x00014130 - 0x00014177 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014130: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2FEFB8;
    PUSH32(esp, 0x0001413Eu); RECOMP_ABI_CALL(0x000140C0u, sub_000140C0); /* call 0x000140C0 */

loc_0001413E: ;
    ecx = esi + 0x90;
    PUSH32(esp, 0x00014149u); RECOMP_ABI_CALL(0x0018B140u, sub_0018B140); /* call 0x0018B140 */

loc_00014149: ;
    MEM32(esi) = 0x2FEBC0;
    _fa = (uint32_t)(MEM32(0x38DC88)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x38DC88), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014163; /* jne: not equal / not zero */

loc_00014157: ;
    eax = MEM32(0x38DC68);
    MEM32(0x38DC88) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00014163: ;
    _fa = (uint32_t)(MEM32(0x38DC68)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x38DC68), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014175; /* jne: not equal / not zero */

loc_0001416B: ;
    MEM32(0x38DC68) = 0;

loc_00014175: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014180
 * Original: 0x00014180 - 0x0001419E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014180: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014188u); RECOMP_ABI_CALL(0x0012F080u, sub_0012F080); /* call 0x0012F080 */

loc_00014188: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014198; /* je: equal / zero */

loc_0001418F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014195u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00014195: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014198: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014188
 * Original: 0x00014188 - 0x0001419E (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014188(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014188: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014198; /* je: equal / zero */

loc_0001418F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014195u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00014195: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014198: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000141A0
 * Original: 0x000141A0 - 0x000141BF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000141A0(void)
{

loc_000141A0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 1));
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 3));
    MEM8(eax + 3) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000141C0
 * Original: 0x000141C0 - 0x00014205 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000141C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000141C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2FEBC0;
    _fa = (uint32_t)(MEM32(0x38DC88)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x38DC88), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000141DD; /* jne: not equal / not zero */

loc_000141D1: ;
    eax = MEM32(0x38DC68);
    MEM32(0x38DC88) = eax;
    goto loc_000141EF;

loc_000141DD: ;
    _fa = (uint32_t)(MEM32(0x38DC68)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x38DC68), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000141EF; /* jne: not equal / not zero */

loc_000141E5: ;
    MEM32(0x38DC68) = 0;

loc_000141EF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000141FF; /* je: equal / zero */

loc_000141F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000141FCu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000141FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000141FF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014210
 * Original: 0x00014210 - 0x0001422E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014218u); RECOMP_ABI_CALL(0x0012F6E0u, sub_0012F6E0); /* call 0x0012F6E0 */

loc_00014218: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014228; /* je: equal / zero */

loc_0001421F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014225u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00014225: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014228: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014230
 * Original: 0x00014230 - 0x0001424E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014230: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014238u); RECOMP_ABI_CALL(0x0012F740u, sub_0012F740); /* call 0x0012F740 */

loc_00014238: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014248; /* je: equal / zero */

loc_0001423F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014245u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00014245: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014248: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014250
 * Original: 0x00014250 - 0x00014258 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014250: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00014230(); return; /* tail jmp 0x00014230 */

}

/**
 * sub_00014260
 * Original: 0x00014260 - 0x00014366 (262 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014260: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x2FEC40;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x2FED00;
    MEM32(eax + 8) = 0x307CBC;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xAC) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00014288
 * Original: 0x00014288 - 0x00014366 (222 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014288(void)
{

loc_00014288: ;
    MEM32(eax + 8) = 0x307CBC;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xAC) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00014370
 * Original: 0x00014370 - 0x00014388 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014370(void)
{

loc_00014370: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014385
 * Original: 0x00014385 - 0x00014388 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014385(void)
{

loc_00014385: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014390
 * Original: 0x00014390 - 0x00014395 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014390: ;
    g_seh_ebp = ebp; sub_000143A0(); return; /* tail jmp 0x000143A0 */

}

/**
 * sub_000143A0
 * Original: 0x000143A0 - 0x000143C0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000143A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000143A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + 0x60);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x68);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000143C0
 * Original: 0x000143C0 - 0x000143D0 (16 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000143C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000143C0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000143D0
 * Original: 0x000143D0 - 0x000143D5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000143D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000143D0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000143E0
 * Original: 0x000143E0 - 0x000143E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000143E0(void)
{

loc_000143E0: ;
    eax = 0xFF;
    esp += 4; return; /* ret */

}

/**
 * sub_000143F0
 * Original: 0x000143F0 - 0x000143F5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000143F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000143F0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00014400
 * Original: 0x00014400 - 0x00014408 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014400: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00265060(); return; /* tail jmp 0x00265060 */

}

/**
 * sub_00014410
 * Original: 0x00014410 - 0x0001443C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014410(void)
{

loc_00014410: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00014420u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_00014420: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0001442Cu); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_0001442C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00014438u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_00014438: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00014440
 * Original: 0x00014440 - 0x00014454 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014440: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x30;
    PUSH32(esp, 0x0001444Bu); RECOMP_ABI_CALL(0x00265550u, sub_00265550); /* call 0x00265550 */

loc_0001444B: ;
    ecx = esi + 0x70;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00265550(); return; /* tail jmp 0x00265550 */

}

/**
 * sub_00014460
 * Original: 0x00014460 - 0x0001447E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014460: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014468u); RECOMP_ABI_CALL(0x00130500u, sub_00130500); /* call 0x00130500 */

loc_00014468: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014478; /* je: equal / zero */

loc_0001446F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014475u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00014475: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014478: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014480
 * Original: 0x00014480 - 0x00014488 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014480: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014490(); return; /* tail jmp 0x00014490 */

}

/**
 * sub_00014490
 * Original: 0x00014490 - 0x0001450C (124 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000144DCu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000144DC: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000144EDu); RECOMP_ABI_CALL(0x00264DC0u, sub_00264DC0); /* call 0x00264DC0 */

loc_000144ED: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000144F9u); RECOMP_ABI_CALL(0x00014510u, sub_00014510); /* call 0x00014510 */

loc_000144F9: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00014505u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00014505: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014510
 * Original: 0x00014510 - 0x00014555 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    eax = MEM32(ebp + 8);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(0x534370, xmm1); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    PUSH32(esp, 0x534370);
    PUSH32(esp, eax);
    XMM_STORE(0x534390, xmm1); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001454Fu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_0001454F: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014560
 * Original: 0x00014560 - 0x000148F2 (914 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014560(void)
{

loc_00014560: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014588
 * Original: 0x00014588 - 0x000148F2 (874 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014588(void)
{

loc_00014588: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014688
 * Original: 0x00014688 - 0x000148F2 (618 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014688(void)
{

loc_00014688: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001468D
 * Original: 0x0001468D - 0x000148F2 (613 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001468D(void)
{

loc_0001468D: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014900
 * Original: 0x00014900 - 0x00014943 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    eax = esp + 4;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001493Du); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_0001493D: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014950
 * Original: 0x00014950 - 0x00014994 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    eax = esp + 4;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001498Eu); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_0001498E: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000149A0
 * Original: 0x000149A0 - 0x000149E4 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000149A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000149A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    eax = esp + 4;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000149DEu); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000149DE: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000149F0
 * Original: 0x000149F0 - 0x00014B04 (276 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000149F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000149F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000149F8u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000149F8: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEFB4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEFB0)); /* movss */
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEMF(esi + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x2FEE58;
    MEM32(esi + 8) = 0x2FEE4C;
    MEMF(esi + 0xD0) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x108) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10C) = xmm1.f[0]; /* movss */
    SET_LO8(ecx, 1);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x191) = LO8(ecx);
    MEM8(esi + 0x194) = LO8(ecx);
    ecx = esi + 0x424;
    MEM8(esi + 0x192) = LO8(eax);
    MEM8(esi + 0x193) = LO8(eax);
    MEM32(esi + 0x420) = eax;
    PUSH32(esp, 0x00014AF5u); RECOMP_ABI_CALL(0x00159110u, sub_00159110); /* call 0x00159110 */

loc_00014AF5: ;
    ecx = esi + 0x39F0;
    PUSH32(esp, 0x00014B00u); RECOMP_ABI_CALL(0x0018C1F0u, sub_0018C1F0); /* call 0x0018C1F0 */

loc_00014B00: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014B10
 * Original: 0x00014B10 - 0x00014B2E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014B18u); RECOMP_ABI_CALL(0x0018B140u, sub_0018B140); /* call 0x0018B140 */

loc_00014B18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014B28; /* je: equal / zero */

loc_00014B1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014B25u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00014B25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014B28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014B30
 * Original: 0x00014B30 - 0x00014B38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014B30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00014B10(); return; /* tail jmp 0x00014B10 */

}

/**
 * sub_00014B40
 * Original: 0x00014B40 - 0x00014B9B (91 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2FEFB8;
    PUSH32(esp, 0x00014B4Eu); RECOMP_ABI_CALL(0x000140C0u, sub_000140C0); /* call 0x000140C0 */

loc_00014B4E: ;
    ecx = esi + 0x90;
    PUSH32(esp, 0x00014B59u); RECOMP_ABI_CALL(0x0018B140u, sub_0018B140); /* call 0x0018B140 */

loc_00014B59: ;
    MEM32(esi) = 0x2FEBC0;
    _fa = (uint32_t)(MEM32(0x38DC88)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x38DC88), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014B73; /* jne: not equal / not zero */

loc_00014B67: ;
    eax = MEM32(0x38DC68);
    MEM32(0x38DC88) = eax;
    goto loc_00014B85;

loc_00014B73: ;
    _fa = (uint32_t)(MEM32(0x38DC68)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x38DC68), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014B85; /* jne: not equal / not zero */

loc_00014B7B: ;
    MEM32(0x38DC68) = 0;

loc_00014B85: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014B95; /* je: equal / zero */

loc_00014B8C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014B92u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00014B92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014B95: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014B85
 * Original: 0x00014B85 - 0x00014B9B (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014B85(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014B85: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014B95; /* je: equal / zero */

loc_00014B8C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014B92u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00014B92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014B95: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014BA0
 * Original: 0x00014BA0 - 0x00014BB4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014BA0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x2FF008;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014BC0
 * Original: 0x00014BC0 - 0x00014BD4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014BC0: ;
    MEM32(ecx) = 0x2FF008;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014BD3; /* je: equal / zero */

loc_00014BCD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00014BD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014BD1u); } /* indirect call */
    }

loc_00014BD3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014BE0
 * Original: 0x00014BE0 - 0x00014BEA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014BE0(void)
{

loc_00014BE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014BF0
 * Original: 0x00014BF0 - 0x00014C18 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x70;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x90));
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    edx = esi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014C0Du); RECOMP_ABI_CALL(0x00060920u, sub_00060920); /* call 0x00060920 */

loc_00014C0D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x94) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014C20
 * Original: 0x00014C20 - 0x00014C5A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014C20: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    MEM32(esi + 0x50) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00014C3A; /* jne: not equal / not zero */

loc_00014C33: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00014C3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014C37u); } /* indirect call */
    }

loc_00014C3A: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x4C) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00014C4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014C4Bu); } /* indirect call */
    }

loc_00014C4E: ;
    ecx = eax;
    PUSH32(esp, 0x00014C55u); RECOMP_ABI_CALL(0x0001F960u, sub_0001F960); /* call 0x0001F960 */

loc_00014C55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00014C60
 * Original: 0x00014C60 - 0x00014C65 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C60(void)
{

loc_00014C60: ;
    MEM8(ecx + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00014C70
 * Original: 0x00014C70 - 0x00014C84 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014C70: ;
    eax = MEM32(ecx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014C81; /* je: equal / zero */

loc_00014C77: ;
    eax = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014C81; /* je: equal / zero */

loc_00014C7E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00014C81: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00014C83
 * Original: 0x00014C83 - 0x00014C84 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C83(void)
{

loc_00014C83: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014C90
 * Original: 0x00014C90 - 0x00014D56 (198 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C90(void)
{
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

loc_00014C90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEM32(esp) = ecx;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
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
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00014CF9; /* jnp: not parity */

loc_00014CCD: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_00014CF9: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x00014D02u); RECOMP_ABI_CALL(0x002BE484u, sub_002BE484); /* call 0x002BE484 */

loc_00014D02: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x2FF024)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00014D2C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00014D21: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    goto loc_00014D32;

loc_00014D2C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_00014D32: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00014D4A; /* jp: parity */

loc_00014D3B: ;
    eax = MEM32(esp + 0x10);
    xmm0 = xmm2; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00014D4A: ;
    ecx = MEM32(esp + 0x10);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_00014D60
 * Original: 0x00014D60 - 0x00014DC5 (101 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014D60: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM32(esi) = 0x2FF034;
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(ebx);
    PUSH32(esp, edi);
    edi = esi + 0x10;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(edi) = 0x2FF02C;
    if (CMP_EQ(_fa, _fb)) goto loc_00014D9B; /* je: equal / zero */

loc_00014D95: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00014D9Bu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00014D9B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edi + 4) = ebx;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014DD0
 * Original: 0x00014DD0 - 0x00014E0D (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    MEM32(esi) = 0x2FF034;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00014DF0; /* je: equal / zero */

loc_00014DEA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00014DF0u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00014DF0: ;
    MEM32(edi + 4) = 0;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi) = 0x2FF008;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00014E0C; /* je: equal / zero */

loc_00014E06: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00014E0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014E0Au); } /* indirect call */
    }

loc_00014E0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014E10
 * Original: 0x00014E10 - 0x00014F04 (244 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014E10(void)
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

loc_00014E10: ;
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
    esi = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00014E25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014E22u); } /* indirect call */
    }

loc_00014E25: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014EDB; /* je: equal / zero */

loc_00014E30: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00014E3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014E34u); } /* indirect call */
    }

loc_00014E3A: ;
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = eax + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00014E46u); RECOMP_ABI_CALL(0x0002EA50u, sub_0002EA50); /* call 0x0002EA50 */

loc_00014E46: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_push(MEMF(esi + 0x28)); /* fld float */
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
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00014E8C; /* jbe: below or equal (unsigned <=) */

loc_00014E73: ;
    eax = MEM32(edi);
    MEM32(esi + 0x20) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x28) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00014E8C: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x20); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x24); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x28); /* subss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esi + 0x20) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00014EDB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
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
 * sub_00014F10
 * Original: 0x00014F10 - 0x0001502A (282 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014F10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00014F21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014F1Eu); } /* indirect call */
    }

loc_00014F21: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00014F2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014F25u); } /* indirect call */
    }

loc_00014F2B: ;
    edx = MEM32(eax);
    ecx = eax;
    ebx = eax + 0x14C0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00014F3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014F35u); } /* indirect call */
    }

loc_00014F3B: ;
    ebp = eax;
    ecx = ebp;
    PUSH32(esp, 0x00014F44u); RECOMP_ABI_CALL(0x00042940u, sub_00042940); /* call 0x00042940 */

loc_00014F44: ;
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014F4Du); RECOMP_ABI_CALL(0x0005DDA0u, sub_0005DDA0); /* call 0x0005DDA0 */

loc_00014F4D: ;
    ecx = eax;
    PUSH32(esp, 0x00014F54u); RECOMP_ABI_CALL(0x0005EC80u, sub_0005EC80); /* call 0x0005EC80 */

loc_00014F54: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014F9E; /* jne: not equal / not zero */

loc_00014F5B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00014F62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014F5Fu); } /* indirect call */
    }

loc_00014F62: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00014F6Du); RECOMP_ABI_CALL(0x0001F5C0u, sub_0001F5C0); /* call 0x0001F5C0 */

loc_00014F6D: ;
    ecx = MEM32(esi + 0x94);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00014F86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014F83u); } /* indirect call */
    }

loc_00014F86: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00014F8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014F8Au); } /* indirect call */
    }

loc_00014F8D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00014F97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014F91u); } /* indirect call */
    }

loc_00014F97: ;
    MEM8(eax + 0x24F4) = 1;

loc_00014F9E: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00014FABu); RECOMP_ABI_CALL(0x00014E10u, sub_00014E10); /* call 0x00014E10 */

loc_00014FAB: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x94);
    if (CMP_EQ(_fa, _fb)) goto loc_00014FD0; /* je: equal / zero */

loc_00014FB8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00014FBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014FBCu); } /* indirect call */
    }

loc_00014FBF: ;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(ecx);
    edx = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00014FCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014FCBu); } /* indirect call */
    }

loc_00014FCE: ;
    goto loc_00014FD7;

loc_00014FD0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00014FD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014FD4u); } /* indirect call */
    }

loc_00014FD7: ;
    ecx = MEM32(esi + 0x94);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00014FF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014FF4u); } /* indirect call */
    }

loc_00014FF7: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015015; /* je: equal / zero */

loc_00014FFD: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00015007u); RECOMP_ABI_CALL(0x0005FED0u, sub_0005FED0); /* call 0x0005FED0 */

loc_00015007: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015015; /* je: equal / zero */

loc_0001500B: ;
    ecx = esi;
    PUSH32(esp, 0x00015012u); RECOMP_ABI_CALL(0x0005FE90u, sub_0005FE90); /* call 0x0005FE90 */

loc_00015012: ;
    MEM32(ebp + 8) = eax;

loc_00015015: ;
    ecx = ebp;
    PUSH32(esp, 0x0001501Cu); RECOMP_ABI_CALL(0x00042990u, sub_00042990); /* call 0x00042990 */

loc_0001501C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015030
 * Original: 0x00015030 - 0x000150B2 (130 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    ebx = esi + 0x40;
    MEM32(esi) = 0x2FF06C;
    MEM32(ebx) = 0x2FF05C;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0001504Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015049u); } /* indirect call */
    }

loc_0001504C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001506F; /* je: equal / zero */

loc_00015052: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0001505Du); RECOMP_ABI_CALL(0x0001F5A0u, sub_0001F5A0); /* call 0x0001F5A0 */

loc_0001505D: ;
    SET_LO8(eax, MEM8(esi + 0x55));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001506F; /* je: equal / zero */

loc_00015064: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0001506Fu); RECOMP_ABI_CALL(0x0001F5C0u, sub_0001F5C0); /* call 0x0001F5C0 */

loc_0001506F: ;
    ecx = ebx;
    PUSH32(esp, 0x00015076u); RECOMP_ABI_CALL(0x0012F6E0u, sub_0012F6E0); /* call 0x0012F6E0 */

loc_00015076: ;
    edi = esi + 0x10;
    MEM32(esi) = 0x2FF034;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00015092; /* je: equal / zero */

loc_0001508C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00015092u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00015092: ;
    MEM32(edi + 4) = 0;
    MEM32(esi) = 0x2FF008;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000150AE; /* je: equal / zero */

loc_000150A6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000150AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000150ACu); } /* indirect call */
    }

loc_000150AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000150C0
 * Original: 0x000150C0 - 0x00015460 (928 bytes, 287 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000150C0(void)
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

loc_000150C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000150DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000150D8u); } /* indirect call */
    }

loc_000150DB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x000150E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000150DFu); } /* indirect call */
    }

loc_000150E5: ;
    MEM32(esp + 0x1C) = eax;
    edi = eax + 0x14C0;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000150F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000150F3u); } /* indirect call */
    }

loc_000150F6: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015110; /* je: equal / zero */

loc_000150FD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0xD));
    MEM8(esi + 0xC) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00015110u); RECOMP_ABI_CALL(0x000F8C60u, sub_000F8C60); /* call 0x000F8C60 */

loc_00015110: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001512D; /* je: equal / zero */

loc_00015117: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000151D1; /* je: equal / zero */

loc_00015122: ;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000151D1; /* jne: not equal / not zero */

loc_0001512D: ;
    MEM8(esi + 0x54) = 1;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00015138u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015135u); } /* indirect call */
    }

loc_00015138: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00015145u); RECOMP_ABI_CALL(0x0001F5C0u, sub_0001F5C0); /* call 0x0001F5C0 */

loc_00015145: ;
    edx = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x48);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001515Cu); RECOMP_ABI_CALL(0x00054B60u, sub_00054B60); /* call 0x00054B60 */

loc_0001515C: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00015164u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015161u); } /* indirect call */
    }

loc_00015164: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4CC9A9C1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4CC9A9C1 (32-bit) */
    ecx = MEM32(esi + 0x50);
    if (CMP_NE(_fa, _fb)) goto loc_00015174; /* jne: not equal / not zero */

loc_0001516E: ;
    MEM32(esp + 0x18) = ecx;
    goto loc_000151A9;

loc_00015174: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00015179u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015176u); } /* indirect call */
    }

loc_00015179: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB6817D76u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB6817D76u (32-bit) */
    ecx = MEM32(esi + 0x50);
    if (CMP_NE(_fa, _fb)) goto loc_0001518B; /* jne: not equal / not zero */

loc_00015183: ;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 1);
    goto loc_000151AB;

loc_0001518B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00015190u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001518Du); } /* indirect call */
    }

loc_00015190: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF324EEDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBF324EEDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000151A2; /* jne: not equal / not zero */

loc_00015197: ;
    ecx = MEM32(esi + 0x50);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0);
    goto loc_000151AB;

loc_000151A2: ;
    eax = MEM32(esi + 0x50);
    MEM32(esp + 0x18) = eax;

loc_000151A9: ;
    PUSH32(esp, 3);

loc_000151AB: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000151B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000151B4u); } /* indirect call */
    }

loc_000151B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000151C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000151C6u); } /* indirect call */
    }

loc_000151C9: ;
    ecx = edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000151D1u); RECOMP_ABI_CALL(0x00054240u, sub_00054240); /* call 0x00054240 */

loc_000151D1: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000151DDu); RECOMP_ABI_CALL(0x00014E10u, sub_00014E10); /* call 0x00014E10 */

loc_000151DD: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001520E; /* je: equal / zero */

loc_000151E4: ;
    ecx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(ecx + 0x26B0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001521B; /* je: equal / zero */

loc_000151F2: ;
    ebx = edi + 0xFA0;
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00015201u); RECOMP_ABI_CALL(0x00051890u, sub_00051890); /* call 0x00051890 */

loc_00015201: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001520Cu); RECOMP_ABI_CALL(0x000519F0u, sub_000519F0); /* call 0x000519F0 */

loc_0001520C: ;
    goto loc_0001521B;

loc_0001520E: ;
    PUSH32(esp, 0);
    ecx = edi + 0xFA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001521Bu); RECOMP_ABI_CALL(0x00051890u, sub_00051890); /* call 0x00051890 */

loc_0001521B: ;
    ebx = MEM32(esp + 0x1C);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00015226u); RECOMP_ABI_CALL(0x000F8560u, sub_000F8560); /* call 0x000F8560 */

loc_00015226: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0001524B; /* je: equal / zero */

loc_0001522C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00015231u); RECOMP_ABI_CALL(0x00054200u, sub_00054200); /* call 0x00054200 */

loc_00015231: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001523Du); RECOMP_ABI_CALL(0x000F8D80u, sub_000F8D80); /* call 0x000F8D80 */

loc_0001523D: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00015249u); RECOMP_ABI_CALL(0x00054220u, sub_00054220); /* call 0x00054220 */

loc_00015249: ;
    goto loc_00015250;

loc_0001524B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00015250u); RECOMP_ABI_CALL(0x00054210u, sub_00054210); /* call 0x00054210 */

loc_00015250: ;
    SET_LO8(eax, MEM8(esi + 0x56));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000153EC; /* je: equal / zero */

loc_0001525B: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000153EC; /* je: equal / zero */

loc_00015266: ;
    edx = MEM32(ecx);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00015270u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001526Du); } /* indirect call */
    }

loc_00015270: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0001527Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001527Au); } /* indirect call */
    }

loc_0001527D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    ecx = esp + 0x40;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000152BCu); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000152BC: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    ecx = esp + 0x18;
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001538Eu); RECOMP_ABI_CALL(0x00014C90u, sub_00014C90); /* call 0x00014C90 */

loc_0001538E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x70;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000153ADu); RECOMP_ABI_CALL(0x00265DA0u, sub_00265DA0); /* call 0x00265DA0 */

loc_000153AD: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000153BBu); RECOMP_ABI_CALL(0x00265060u, sub_00265060); /* call 0x00265060 */

loc_000153BB: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    eax = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000153C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000153C5u); } /* indirect call */
    }

loc_000153C8: ;
    ebx = MEM32(esi + 0x50);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000153D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000153D1u); } /* indirect call */
    }

loc_000153D4: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000153E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000153E1u); } /* indirect call */
    }

loc_000153E4: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000153ECu); RECOMP_ABI_CALL(0x00054240u, sub_00054240); /* call 0x00054240 */

loc_000153EC: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0xB0);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000153FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000153FCu); } /* indirect call */
    }

loc_000153FF: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x18);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi + 0x1024;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00015419u); RECOMP_ABI_CALL(0x00060210u, sub_00060210); /* call 0x00060210 */

loc_00015419: ;
    SET_LO8(eax, MEM8(esi + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015442; /* je: equal / zero */

loc_00015420: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00015455; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00015437: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00015442: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015455; /* jne: not equal / not zero */

loc_00015449: ;
    SET_LO8(eax, MEM8(esi + 0x54));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00015455: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
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
 * sub_00015460
 * Original: 0x00015460 - 0x000154B2 (82 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015460: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x60);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015485; /* je: equal / zero */

loc_0001546D: ;
    /* nop */

loc_00015470: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015479u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00015479: ;
    esi = MEM32(esi);
    eax = MEM32(edi + 0x60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015470; /* jne: not equal / not zero */

loc_00015485: ;
    eax = MEM32(edi + 0x60);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154A4; /* je: equal / zero */

loc_0001548E: ;
    edi = edi;

loc_00015490: ;
    eax = esi;
    esi = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001549Au); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0001549A: ;
    eax = MEM32(edi + 0x60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015490; /* jne: not equal / not zero */

loc_000154A4: ;
    eax = MEM32(edi + 0x60);
    MEM32(eax) = eax;
    edi = MEM32(edi + 0x60);
    MEM32(edi + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000154C0
 * Original: 0x000154C0 - 0x00015518 (88 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000154C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000154C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000154C8u); RECOMP_ABI_CALL(0x00014D60u, sub_00014D60); /* call 0x00014D60 */

loc_000154C8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x40) = 0x2FF04C;
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM8(esi + 0x55) = LO8(eax);
    MEM8(esi + 0x56) = LO8(eax);
    MEM8(esi + 0x5C) = LO8(eax);
    MEM8(esi + 0x64) = LO8(eax);
    MEM32(esi) = 0x2FF06C;
    MEM32(esi + 0x40) = 0x2FF05C;
    MEM8(esi + 0x54) = 1;
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015520
 * Original: 0x00015520 - 0x000155D6 (182 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015520: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00015528u); RECOMP_ABI_CALL(0x00014D60u, sub_00014D60); /* call 0x00014D60 */

loc_00015528: ;
    eax = MEM32(esp + 8);
    MEM32(esi) = 0x2FF088;
    ecx = MEM32(eax);
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x44) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0x48) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0x50) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0x54) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x58) = edx;
    SET_LO8(ecx, MEM8(eax + 0x1C));
    MEM8(esi + 0x5C) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x1D));
    MEM8(esi + 0x5D) = LO8(edx);
    PUSH32(esp, 0xC);
    MEM32(esi + 0x60) = 0;
    PUSH32(esp, 0x0001556Fu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0001556F: ;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    MEM32(esi + 0x60) = eax;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    MEM32(esi + 0x70) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x74) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0x78) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0x80) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0x84) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x88) = edx;
    SET_LO8(ecx, MEM8(eax + 0x1C));
    MEM8(esi + 0x8C) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x1D));
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM8(esi + 0x8D) = LO8(edx);
    MEM8(esi + 0x90) = LO8(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x94) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000155E0
 * Original: 0x000155E0 - 0x00015640 (96 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000155E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000155E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x2FF088;
    PUSH32(esp, 0x000155EFu); RECOMP_ABI_CALL(0x00015460u, sub_00015460); /* call 0x00015460 */

loc_000155EF: ;
    ecx = MEM32(esi + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000155FF; /* je: equal / zero */

loc_000155F9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000155FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000155FDu); } /* indirect call */
    }

loc_000155FF: ;
    ecx = esi + 0x60;
    PUSH32(esp, 0x00015607u); RECOMP_ABI_CALL(0x0004FAF0u, sub_0004FAF0); /* call 0x0004FAF0 */

loc_00015607: ;
    edi = esi + 0x10;
    MEM32(esi) = 0x2FF034;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00015623; /* je: equal / zero */

loc_0001561D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00015623u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00015623: ;
    MEM32(edi + 4) = 0;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi) = 0x2FF008;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0001563F; /* je: equal / zero */

loc_00015639: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0001563Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001563Du); } /* indirect call */
    }

loc_0001563F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015640
 * Original: 0x00015640 - 0x000156AA (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015640: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x2FF0A4);
    esi = ecx;
    PUSH32(esp, 0x00015655u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00015655: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015680; /* je: equal / zero */

loc_0001565C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    SET_LO8(ecx, MEM8(ecx + 0x14));
    MEM8(eax + 0x14) = LO8(ecx);
    edi = eax;
    goto loc_00015682;

loc_00015680: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00015682: ;
    esi = MEM32(esi + 0x60);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0001568Cu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0001568C: ;
    ecx = eax + 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015698; /* je: equal / zero */

loc_00015696: ;
    MEM32(ecx) = edi;

loc_00015698: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000156B0
 * Original: 0x000156B0 - 0x000156DB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000156B0(void)
{

loc_000156B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000156E0
 * Original: 0x000156E0 - 0x00015701 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000156E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000156E0: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
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
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00015710
 * Original: 0x00015710 - 0x00015778 (104 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015710(void)
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

loc_00015710: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
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
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x3210B0)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00015776; /* jnp: not parity */

loc_00015746: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp); /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */

loc_00015776: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00015780
 * Original: 0x00015780 - 0x000157AC (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015780: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x2FF008;
    if (CMP_EQ(_fa, _fb)) goto loc_00015796; /* je: equal / zero */

loc_00015790: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00015796u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015794u); } /* indirect call */
    }

loc_00015796: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000157A6; /* je: equal / zero */

loc_0001579D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000157A3u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000157A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000157A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000157B0
 * Original: 0x000157B0 - 0x000157E5 (53 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000157B0(void)
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

loc_000157B0: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
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
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000157E2; /* jbe: below or equal (unsigned <=) */

loc_000157DC: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000157E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000157F0
 * Original: 0x000157F0 - 0x000157F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000157F0(void)
{

loc_000157F0: ;
    eax = 0x53544154;
    esp += 4; return; /* ret */

}

/**
 * sub_00015800
 * Original: 0x00015800 - 0x00015804 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015800(void)
{

loc_00015800: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_00015810
 * Original: 0x00015810 - 0x00015827 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015810: ;
    SET_LO8(eax, MEM8(ecx + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015821; /* jne: not equal / not zero */

loc_00015817: ;
    SET_LO8(eax, MEM8(ecx + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015821; /* jne: not equal / not zero */

loc_0001581E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00015821: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015830
 * Original: 0x00015830 - 0x00015838 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015830: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000158A0(); return; /* tail jmp 0x000158A0 */

}

/**
 * sub_00015840
 * Original: 0x00015840 - 0x00015891 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    MEM32(esi) = 0x2FF034;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00015860; /* je: equal / zero */

loc_0001585A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00015860u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00015860: ;
    MEM32(edi + 4) = 0;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x2FF008;
    if (CMP_EQ(_fa, _fb)) goto loc_0001587A; /* je: equal / zero */

loc_00015874: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0001587Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015878u); } /* indirect call */
    }

loc_0001587A: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001588A; /* je: equal / zero */

loc_00015881: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015887u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00015887: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001588A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001588E
 * Original: 0x0001588E - 0x00015891 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001588E(void)
{

loc_0001588E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000158A0
 * Original: 0x000158A0 - 0x000158BE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000158A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000158A8u); RECOMP_ABI_CALL(0x00015030u, sub_00015030); /* call 0x00015030 */

loc_000158A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000158B8; /* je: equal / zero */

loc_000158AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000158B5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000158B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000158B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000158C0
 * Original: 0x000158C0 - 0x000158C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158C0(void)
{

loc_000158C0: ;
    eax = 0x4C4F434F;
    esp += 4; return; /* ret */

}

/**
 * sub_000158D0
 * Original: 0x000158D0 - 0x000158EE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000158D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000158D8u); RECOMP_ABI_CALL(0x000155E0u, sub_000155E0); /* call 0x000155E0 */

loc_000158D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000158E8; /* je: equal / zero */

loc_000158DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000158E5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000158E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000158E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000158F0
 * Original: 0x000158F0 - 0x0001594D (93 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000158F0: ;
    eax = ecx;
    MEM32(eax) = 0x2FF0D0;
    MEM32(eax + 0x68) = 0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00015950
 * Original: 0x00015950 - 0x00015961 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015950: ;
    eax = MEM32(ecx + 0x68);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 4) = edx;
    MEM32(ecx + 0x68) = MEM32(ecx + 0x68) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015970
 * Original: 0x00015970 - 0x0001598E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015970: ;
    eax = MEM32(ecx + 0x68);
    ecx = MEM32(ecx + eax * 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015989; /* je: equal / zero */

loc_0001597D: ;
    /* nop */

loc_00015980: ;
    ecx = eax;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015980; /* jne: not equal / not zero */

loc_00015989: ;
    g_seh_ebp = ebp; sub_00014BE0(); return; /* tail jmp 0x00014BE0 */

}

/**
 * sub_00015990
 * Original: 0x00015990 - 0x000159DA (74 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015990: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000159D8; /* jle: less or equal (signed <=) */

loc_0001599A: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000159AB; /* je: equal / zero */

loc_000159A5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000159ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000159A9u); } /* indirect call */
    }

loc_000159AB: ;
    edx = MEM32(esi + 0x68);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000159C8; /* jle: less or equal (signed <=) */

loc_000159B5: ;
    eax = edi;

loc_000159B7: ;
    edx = MEM32(eax + 4);
    MEM32(eax) = edx;
    edx = MEM32(esi + 0x68);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000159B7; /* jl: less (signed <) */

loc_000159C8: ;
    eax = MEM32(esi + 0x68);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x68) = eax;
    MEM32(esi + eax * 4 + 4) = 0;
    POP32(esp, edi);

loc_000159D8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000159E0
 * Original: 0x000159E0 - 0x00015A19 (57 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000159E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000159E0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x68);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00015A0F; /* jle: less or equal (signed <=) */

loc_000159ED: ;
    PUSH32(esp, esi);
    esi = ebx + 4;

loc_000159F1: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000159FD; /* je: equal / zero */

loc_000159F7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000159FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000159FBu); } /* indirect call */
    }

loc_000159FD: ;
    MEM32(esi) = 0;
    eax = MEM32(ebx + 0x68);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000159F1; /* jl: less (signed <) */

loc_00015A0E: ;
    POP32(esp, esi);

loc_00015A0F: ;
    POP32(esp, edi);
    MEM32(ebx + 0x68) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00015A20
 * Original: 0x00015A20 - 0x00015A2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015A20: ;
    MEM32(ecx) = 0x2FF0D0;
    g_seh_ebp = ebp; sub_000159E0(); return; /* tail jmp 0x000159E0 */

}

/**
 * sub_00015A30
 * Original: 0x00015A30 - 0x00015A9E (110 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015A30: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00015A9C; /* jle: less or equal (signed <=) */

loc_00015A3A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00015A47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015A44u); } /* indirect call */
    }

loc_00015A47: ;
    edi = esi;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00015A8D; /* je: equal / zero */

loc_00015A52: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00015A59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015A56u); } /* indirect call */
    }

loc_00015A59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015A84; /* jne: not equal / not zero */

loc_00015A5D: ;
    SET_LO8(eax, MEM8(esi + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015A66; /* je: equal / zero */

loc_00015A64: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00015A66: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00015A71u); RECOMP_ABI_CALL(0x00014BE0u, sub_00014BE0); /* call 0x00014BE0 */

loc_00015A71: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00015A7Au); RECOMP_ABI_CALL(0x00014BE0u, sub_00014BE0); /* call 0x00014BE0 */

loc_00015A7A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00015A82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015A80u); } /* indirect call */
    }

loc_00015A82: ;
    esi = edi;

loc_00015A84: ;
    edi = esi;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015A52; /* jne: not equal / not zero */

loc_00015A8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00015A9C; /* jne: not equal / not zero */

loc_00015A94: ;
    ecx = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00015990(); return; /* tail jmp 0x00015990 */

loc_00015A9C: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00015AA0
 * Original: 0x00015AA0 - 0x00015B34 (148 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015AA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00015B30; /* jle: less or equal (signed <=) */

loc_00015AAF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00015AC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015AC4u); } /* indirect call */
    }

loc_00015AC7: ;
    MEM8(esi + 8) = 1;
    edi = esi;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x1C) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00015B1C; /* je: equal / zero */

loc_00015AD8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00015AE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015ADEu); } /* indirect call */
    }

loc_00015AE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 8) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00015B13; /* jne: not equal / not zero */

loc_00015AE9: ;
    SET_LO8(eax, MEM8(esi + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015AF5; /* je: equal / zero */

loc_00015AF0: ;
    MEM8(esp + 0x1C) = 0;

loc_00015AF5: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00015B00u); RECOMP_ABI_CALL(0x00014BE0u, sub_00014BE0); /* call 0x00014BE0 */

loc_00015B00: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00015B09u); RECOMP_ABI_CALL(0x00014BE0u, sub_00014BE0); /* call 0x00014BE0 */

loc_00015B09: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00015B11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015B0Fu); } /* indirect call */
    }

loc_00015B11: ;
    esi = edi;

loc_00015B13: ;
    edi = esi;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015AD8; /* jne: not equal / not zero */

loc_00015B1C: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00015B30; /* jne: not equal / not zero */

loc_00015B28: ;
    ecx = MEM32(esp);
    PUSH32(esp, 0x00015B30u); RECOMP_ABI_CALL(0x00015990u, sub_00015990); /* call 0x00015990 */

loc_00015B30: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015B40
 * Original: 0x00015B40 - 0x00015B52 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015B40: ;
    eax = MEM32(ecx + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00015B4F; /* jle: less or equal (signed <=) */

loc_00015B47: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

loc_00015B4F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015B60
 * Original: 0x00015B60 - 0x00015B84 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2FF0D0;
    PUSH32(esp, 0x00015B6Eu); RECOMP_ABI_CALL(0x000159E0u, sub_000159E0); /* call 0x000159E0 */

loc_00015B6E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015B7E; /* je: equal / zero */

loc_00015B75: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015B7Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00015B7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015B7E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015B90
 * Original: 0x00015B90 - 0x00015BC4 (52 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015B90: ;
    PUSH32(esp, 0x00015B95u); RECOMP_ABI_CALL(0x00022010u, sub_00022010); /* call 0x00022010 */

loc_00015B95: ;
    PUSH32(esp, 0x00015B9Au); RECOMP_ABI_CALL(0x000161E0u, sub_000161E0); /* call 0x000161E0 */

loc_00015B9A: ;
    PUSH32(esp, 0x00015B9Fu); RECOMP_ABI_CALL(0x0002D0D0u, sub_0002D0D0); /* call 0x0002D0D0 */

loc_00015B9F: ;
    PUSH32(esp, 0x00015BA4u); RECOMP_ABI_CALL(0x0002D7D0u, sub_0002D7D0); /* call 0x0002D7D0 */

loc_00015BA4: ;
    PUSH32(esp, 0x00015BA9u); RECOMP_ABI_CALL(0x000309A0u, sub_000309A0); /* call 0x000309A0 */

loc_00015BA9: ;
    PUSH32(esp, 0x00015BAEu); RECOMP_ABI_CALL(0x00025640u, sub_00025640); /* call 0x00025640 */

loc_00015BAE: ;
    PUSH32(esp, 0x00015BB3u); RECOMP_ABI_CALL(0x0001E440u, sub_0001E440); /* call 0x0001E440 */

loc_00015BB3: ;
    PUSH32(esp, 0x00015BB8u); RECOMP_ABI_CALL(0x00032180u, sub_00032180); /* call 0x00032180 */

loc_00015BB8: ;
    PUSH32(esp, 0x00015BBDu); RECOMP_ABI_CALL(0x000304F0u, sub_000304F0); /* call 0x000304F0 */

loc_00015BBD: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00030550(); return; /* tail jmp 0x00030550 */

}

/**
 * sub_00015BD0
 * Original: 0x00015BD0 - 0x00015BFA (42 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015BD0: ;
    PUSH32(esp, 0x00015BD5u); RECOMP_ABI_CALL(0x000304F0u, sub_000304F0); /* call 0x000304F0 */

loc_00015BD5: ;
    ecx = eax;
    PUSH32(esp, 0x00015BDCu); RECOMP_ABI_CALL(0x00030560u, sub_00030560); /* call 0x00030560 */

loc_00015BDC: ;
    PUSH32(esp, 0x00015BE1u); RECOMP_ABI_CALL(0x0002D800u, sub_0002D800); /* call 0x0002D800 */

loc_00015BE1: ;
    PUSH32(esp, 0x00015BE6u); RECOMP_ABI_CALL(0x000201D0u, sub_000201D0); /* call 0x000201D0 */

loc_00015BE6: ;
    PUSH32(esp, 0x00015BEBu); RECOMP_ABI_CALL(0x0001DD70u, sub_0001DD70); /* call 0x0001DD70 */

loc_00015BEB: ;
    PUSH32(esp, 0x00015BF0u); RECOMP_ABI_CALL(0x00032110u, sub_00032110); /* call 0x00032110 */

loc_00015BF0: ;
    PUSH32(esp, 0x00015BF5u); RECOMP_ABI_CALL(0x000160B0u, sub_000160B0); /* call 0x000160B0 */

loc_00015BF5: ;
    g_seh_ebp = ebp; sub_0002CEC0(); return; /* tail jmp 0x0002CEC0 */

}

/**
 * sub_00015C00
 * Original: 0x00015C00 - 0x00015C4E (78 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015C00: ;
    PUSH32(esp, 0x00015C05u); RECOMP_ABI_CALL(0x00018400u, sub_00018400); /* call 0x00018400 */

loc_00015C05: ;
    ecx = eax;
    PUSH32(esp, 0x00015C0Cu); RECOMP_ABI_CALL(0x00018AF0u, sub_00018AF0); /* call 0x00018AF0 */

loc_00015C0C: ;
    PUSH32(esp, 0x00015C11u); RECOMP_ABI_CALL(0x00025640u, sub_00025640); /* call 0x00025640 */

loc_00015C11: ;
    ecx = eax;
    PUSH32(esp, 0x00015C18u); RECOMP_ABI_CALL(0x00025370u, sub_00025370); /* call 0x00025370 */

loc_00015C18: ;
    PUSH32(esp, 0x00015C1Du); RECOMP_ABI_CALL(0x0001C7F0u, sub_0001C7F0); /* call 0x0001C7F0 */

loc_00015C1D: ;
    ecx = eax;
    PUSH32(esp, 0x00015C24u); RECOMP_ABI_CALL(0x0001C6B0u, sub_0001C6B0); /* call 0x0001C6B0 */

loc_00015C24: ;
    PUSH32(esp, 0x00015C29u); RECOMP_ABI_CALL(0x000F03F0u, sub_000F03F0); /* call 0x000F03F0 */

loc_00015C29: ;
    PUSH32(esp, 0x00015C2Eu); RECOMP_ABI_CALL(0x0002D790u, sub_0002D790); /* call 0x0002D790 */

loc_00015C2E: ;
    PUSH32(esp, 0x00015C33u); RECOMP_ABI_CALL(0x00032130u, sub_00032130); /* call 0x00032130 */

loc_00015C33: ;
    PUSH32(esp, 0x00015C38u); RECOMP_ABI_CALL(0x000160D0u, sub_000160D0); /* call 0x000160D0 */

loc_00015C38: ;
    PUSH32(esp, 0x00015C3Du); RECOMP_ABI_CALL(0x0002CEE0u, sub_0002CEE0); /* call 0x0002CEE0 */

loc_00015C3D: ;
    PUSH32(esp, 0x00015C42u); RECOMP_ABI_CALL(0x000304F0u, sub_000304F0); /* call 0x000304F0 */

loc_00015C42: ;
    ecx = eax;
    PUSH32(esp, 0x00015C49u); RECOMP_ABI_CALL(0x00030330u, sub_00030330); /* call 0x00030330 */

loc_00015C49: ;
    g_seh_ebp = ebp; sub_0001DD90(); return; /* tail jmp 0x0001DD90 */

}

/**
 * sub_00015C50
 * Original: 0x00015C50 - 0x00015CA8 (88 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015C50: ;
    PUSH32(esp, 0x00015C55u); RECOMP_ABI_CALL(0x000304F0u, sub_000304F0); /* call 0x000304F0 */

loc_00015C55: ;
    ecx = eax;
    PUSH32(esp, 0x00015C5Cu); RECOMP_ABI_CALL(0x00030410u, sub_00030410); /* call 0x00030410 */

loc_00015C5C: ;
    PUSH32(esp, 0x00015C61u); RECOMP_ABI_CALL(0x00025640u, sub_00025640); /* call 0x00025640 */

loc_00015C61: ;
    ecx = eax;
    PUSH32(esp, 0x00015C68u); RECOMP_ABI_CALL(0x00025390u, sub_00025390); /* call 0x00025390 */

loc_00015C68: ;
    PUSH32(esp, 0x00015C6Du); RECOMP_ABI_CALL(0x0001C7F0u, sub_0001C7F0); /* call 0x0001C7F0 */

loc_00015C6D: ;
    ecx = eax;
    PUSH32(esp, 0x00015C74u); RECOMP_ABI_CALL(0x0001C6C0u, sub_0001C6C0); /* call 0x0001C6C0 */

loc_00015C74: ;
    PUSH32(esp, 0x00015C79u); RECOMP_ABI_CALL(0x00018400u, sub_00018400); /* call 0x00018400 */

loc_00015C79: ;
    ecx = eax;
    PUSH32(esp, 0x00015C80u); RECOMP_ABI_CALL(0x00018440u, sub_00018440); /* call 0x00018440 */

loc_00015C80: ;
    PUSH32(esp, 0x00015C85u); RECOMP_ABI_CALL(0x000EFA30u, sub_000EFA30); /* call 0x000EFA30 */

loc_00015C85: ;
    PUSH32(esp, 0x00015C8Au); RECOMP_ABI_CALL(0x000307E0u, sub_000307E0); /* call 0x000307E0 */

loc_00015C8A: ;
    PUSH32(esp, 0x00015C8Fu); RECOMP_ABI_CALL(0x000201F0u, sub_000201F0); /* call 0x000201F0 */

loc_00015C8F: ;
    PUSH32(esp, 0x00015C94u); RECOMP_ABI_CALL(0x0002D7B0u, sub_0002D7B0); /* call 0x0002D7B0 */

loc_00015C94: ;
    PUSH32(esp, 0x00015C99u); RECOMP_ABI_CALL(0x0001DDA0u, sub_0001DDA0); /* call 0x0001DDA0 */

loc_00015C99: ;
    PUSH32(esp, 0x00015C9Eu); RECOMP_ABI_CALL(0x00032140u, sub_00032140); /* call 0x00032140 */

loc_00015C9E: ;
    PUSH32(esp, 0x00015CA3u); RECOMP_ABI_CALL(0x000160E0u, sub_000160E0); /* call 0x000160E0 */

loc_00015CA3: ;
    g_seh_ebp = ebp; sub_0002CEF0(); return; /* tail jmp 0x0002CEF0 */

}

/**
 * sub_00015CB0
 * Original: 0x00015CB0 - 0x00015D0D (93 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015CB0: ;
    PUSH32(esp, 0x00015CB5u); RECOMP_ABI_CALL(0x000304F0u, sub_000304F0); /* call 0x000304F0 */

loc_00015CB5: ;
    ecx = eax;
    PUSH32(esp, 0x00015CBCu); RECOMP_ABI_CALL(0x00030490u, sub_00030490); /* call 0x00030490 */

loc_00015CBC: ;
    PUSH32(esp, 0x00015CC1u); RECOMP_ABI_CALL(0x00032150u, sub_00032150); /* call 0x00032150 */

loc_00015CC1: ;
    PUSH32(esp, 0x00015CC6u); RECOMP_ABI_CALL(0x0002D7A0u, sub_0002D7A0); /* call 0x0002D7A0 */

loc_00015CC6: ;
    PUSH32(esp, 0x00015CCBu); RECOMP_ABI_CALL(0x0001DDB0u, sub_0001DDB0); /* call 0x0001DDB0 */

loc_00015CCB: ;
    PUSH32(esp, 0x00015CD0u); RECOMP_ABI_CALL(0x00022140u, sub_00022140); /* call 0x00022140 */

loc_00015CD0: ;
    PUSH32(esp, 0x00015CD5u); RECOMP_ABI_CALL(0x000EFEF0u, sub_000EFEF0); /* call 0x000EFEF0 */

loc_00015CD5: ;
    PUSH32(esp, 0x00015CDAu); RECOMP_ABI_CALL(0x000307F0u, sub_000307F0); /* call 0x000307F0 */

loc_00015CDA: ;
    PUSH32(esp, 0x00015CDFu); RECOMP_ABI_CALL(0x00025640u, sub_00025640); /* call 0x00025640 */

loc_00015CDF: ;
    ecx = eax;
    PUSH32(esp, 0x00015CE6u); RECOMP_ABI_CALL(0x000253B0u, sub_000253B0); /* call 0x000253B0 */

loc_00015CE6: ;
    PUSH32(esp, 0x00015CEBu); RECOMP_ABI_CALL(0x0001C7F0u, sub_0001C7F0); /* call 0x0001C7F0 */

loc_00015CEB: ;
    ecx = eax;
    PUSH32(esp, 0x00015CF2u); RECOMP_ABI_CALL(0x0001C6F0u, sub_0001C6F0); /* call 0x0001C6F0 */

loc_00015CF2: ;
    PUSH32(esp, 0x00015CF7u); RECOMP_ABI_CALL(0x00018400u, sub_00018400); /* call 0x00018400 */

loc_00015CF7: ;
    ecx = eax;
    PUSH32(esp, 0x00015CFEu); RECOMP_ABI_CALL(0x00018470u, sub_00018470); /* call 0x00018470 */

loc_00015CFE: ;
    PUSH32(esp, 0x00015D03u); RECOMP_ABI_CALL(0x0001DDB0u, sub_0001DDB0); /* call 0x0001DDB0 */

loc_00015D03: ;
    PUSH32(esp, 0x00015D08u); RECOMP_ABI_CALL(0x000160F0u, sub_000160F0); /* call 0x000160F0 */

loc_00015D08: ;
    g_seh_ebp = ebp; sub_0002CF00(); return; /* tail jmp 0x0002CF00 */

}

/**
 * sub_00015D10
 * Original: 0x00015D10 - 0x00015D47 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015D10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015D1Bu); RECOMP_ABI_CALL(0x00025640u, sub_00025640); /* call 0x00025640 */

loc_00015D1B: ;
    ecx = eax;
    PUSH32(esp, 0x00015D22u); RECOMP_ABI_CALL(0x000253D0u, sub_000253D0); /* call 0x000253D0 */

loc_00015D22: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015D28u); RECOMP_ABI_CALL(0x00018400u, sub_00018400); /* call 0x00018400 */

loc_00015D28: ;
    ecx = eax;
    PUSH32(esp, 0x00015D2Fu); RECOMP_ABI_CALL(0x000182C0u, sub_000182C0); /* call 0x000182C0 */

loc_00015D2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015D35u); RECOMP_ABI_CALL(0x0002D7C0u, sub_0002D7C0); /* call 0x0002D7C0 */

loc_00015D35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015D3Eu); RECOMP_ABI_CALL(0x000304F0u, sub_000304F0); /* call 0x000304F0 */

loc_00015D3E: ;
    ecx = eax;
    PUSH32(esp, 0x00015D45u); RECOMP_ABI_CALL(0x000304A0u, sub_000304A0); /* call 0x000304A0 */

loc_00015D45: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015D50
 * Original: 0x00015D50 - 0x00015D69 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015D50: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = eax;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015D70
 * Original: 0x00015D70 - 0x00015D76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015D70: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015D80
 * Original: 0x00015D80 - 0x00015FF9 (633 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D80(void)
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

loc_00015D80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x00015D8Fu); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_00015D8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFDE92222u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFDE92222u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00015EEF; /* jg: greater (signed >) */

loc_00015D9A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00015EDB; /* je: equal / zero */

loc_00015DA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC5EB9F4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBC5EB9F4u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00015E65; /* jg: greater (signed >) */

loc_00015DAB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00015E51; /* je: equal / zero */

loc_00015DB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5C6D292u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA5C6D292u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00015E12; /* jg: greater (signed >) */

loc_00015DB8: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00015DF9; /* je: equal / zero */

loc_00015DBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x83AD3D94u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x83AD3D94u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015DE5; /* je: equal / zero */

loc_00015DC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94BB8E51u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x94BB8E51u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FF4; /* jne: not equal / not zero */

loc_00015DCC: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015DD5u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00015DD5: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM8(ecx + 0xF) = LO8(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015DE5: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015DEEu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00015DEE: ;
    edx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEMF(edx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015DF9: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015E02u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00015E02: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM8(ecx + 0xC) = LO8(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015E12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB69E07BBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB69E07BBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E3D; /* je: equal / zero */

loc_00015E19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC3435E0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBC3435E0u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FF4; /* jne: not equal / not zero */

loc_00015E24: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015E2Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00015E2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi + 0x10);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM8(eax + 0xE) = LO8(edx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015E3D: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015E46u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00015E46: ;
    ecx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015E51: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015E5Au); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00015E5A: ;
    edx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEM32(edx + 4) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015E65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCD4F3ED3u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCD4F3ED3u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00015EBC; /* jg: greater (signed >) */

loc_00015E6C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00015EA8; /* je: equal / zero */

loc_00015E6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFA002CDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBFA002CDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E94; /* je: equal / zero */

loc_00015E75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC514D0A5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC514D0A5u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FF4; /* jne: not equal / not zero */

loc_00015E80: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015E89u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00015E89: ;
    ecx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015E94: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015E9Du); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00015E9D: ;
    edx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEMF(edx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015EA8: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015EB1u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00015EB1: ;
    eax = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015EBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF06FC472u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF06FC472u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FF4; /* jne: not equal / not zero */

loc_00015EC7: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015ED0u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00015ED0: ;
    ecx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015EDB: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015EE4u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00015EE4: ;
    edx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEMF(edx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015EEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6AEB798E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6AEB798E (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00015F8B; /* jg: greater (signed >) */

loc_00015EFA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00015F77; /* je: equal / zero */

loc_00015EFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3401CBB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3401CBB4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00015F58; /* jg: greater (signed >) */

loc_00015F03: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00015F44; /* je: equal / zero */

loc_00015F05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80CF4ED) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80CF4ED (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F30; /* je: equal / zero */

loc_00015F0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C78FDFC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C78FDFC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FF4; /* jne: not equal / not zero */

loc_00015F17: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015F20u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00015F20: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM8(ecx + 0xD) = LO8(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015F30: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015F39u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00015F39: ;
    edx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEM32(edx + 0x18) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015F44: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015F4Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00015F4D: ;
    ecx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEM32(ecx + 0x14) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015F58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6A3361D5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6A3361D5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FF4; /* jne: not equal / not zero */

loc_00015F63: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015F6Cu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00015F6C: ;
    edx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEMF(edx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015F77: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015F80u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00015F80: ;
    eax = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015F8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DFC09BE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6DFC09BE (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00015FDE; /* jg: greater (signed >) */

loc_00015F92: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00015FCA; /* je: equal / zero */

loc_00015F94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6AF953F6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6AF953F6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015FB6; /* je: equal / zero */

loc_00015F9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6BFA4FD4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6BFA4FD4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FF4; /* jne: not equal / not zero */

loc_00015FA2: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015FABu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00015FAB: ;
    ecx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015FB6: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015FBFu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00015FBF: ;
    edx = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEM32(edx + 0x44) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015FCA: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015FD3u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00015FD3: ;
    eax = MEM32(esi + 0x10);
    POP32(esp, edi);
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015FDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F3410F9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6F3410F9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FF4; /* jne: not equal / not zero */

loc_00015FE5: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00015FEEu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00015FEE: ;
    ecx = MEM32(esi + 0x10);
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00015FF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00016000
 * Original: 0x00016000 - 0x00016001 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016000(void)
{

loc_00016000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00016010
 * Original: 0x00016010 - 0x0001603A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016010: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016038; /* je: equal / zero */

loc_0001601A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016020u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_00016020: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x10) = 0;

loc_00016038: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016040
 * Original: 0x00016040 - 0x00016041 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016040(void)
{

loc_00016040: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00016050
 * Original: 0x00016050 - 0x00016085 (53 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016050: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00016071; /* jle: less or equal (signed <=) */

loc_0001605C: ;
    edi = MEM32(ecx + 8);
    ebx = MEM32(esp + 0x10);
    edx = edi;

loc_00016065: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001607A; /* je: equal / zero */

loc_00016069: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x4C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00016065; /* jl: less (signed <) */

loc_00016071: ;
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0001607A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00016090
 * Original: 0x00016090 - 0x00016099 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016090(void)
{

loc_00016090: ;
    eax = ecx;
    MEM32(eax) = 0x2FF0FC;
    esp += 4; return; /* ret */

}

/**
 * sub_000160A0
 * Original: 0x000160A0 - 0x000160A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160A0(void)
{

loc_000160A0: ;
    MEM32(ecx) = 0x2FF0FC;
    esp += 4; return; /* ret */

}

/**
 * sub_000160B0
 * Original: 0x000160B0 - 0x000160CD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000160B0: ;
    ecx = MEM32(0x38DCC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000160C0; /* je: equal / zero */

loc_000160BA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000160C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000160BEu); } /* indirect call */
    }

loc_000160C0: ;
    MEM32(0x38DCC0) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000160BE
 * Original: 0x000160BE - 0x000160CD (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160BE(void)
{

loc_000160BE: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000160C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000160BEu); } /* indirect call */
    }

loc_000160C0: ;
    MEM32(0x38DCC0) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000160D0
 * Original: 0x000160D0 - 0x000160D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160D0(void)
{

loc_000160D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000160E0
 * Original: 0x000160E0 - 0x000160E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160E0(void)
{

loc_000160E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000160F0
 * Original: 0x000160F0 - 0x00016122 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000160F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x38DCC0);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_0001611F; /* je: equal / zero */

loc_00016102: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016108u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_00016108: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;
    MEM32(edi + 0xC) = 0;
    MEM32(edi + 0x10) = 0;

loc_0001611F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016130
 * Original: 0x00016130 - 0x00016136 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016130(void)
{

loc_00016130: ;
    eax = MEM32(0x38DCC0);
    esp += 4; return; /* ret */

}

/**
 * sub_00016140
 * Original: 0x00016140 - 0x00016146 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016140(void)
{

loc_00016140: ;
    eax = MEM32(0x38DCC0);
    esp += 4; return; /* ret */

}

/**
 * sub_00016150
 * Original: 0x00016150 - 0x00016167 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016150(void)
{

loc_00016150: ;
    eax = ecx;
    MEM32(eax + 4) = 0x2FF0D4;
    MEM32(eax) = 0x2FF12C;
    MEM32(eax + 4) = 0x2FF104;
    esp += 4; return; /* ret */

}

/**
 * sub_00016170
 * Original: 0x00016170 - 0x00016185 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016170(void)
{

loc_00016170: ;
    MEM32(ecx + 4) = 0x2FF104;
    MEM32(ecx + 4) = 0x2FF0D4;
    MEM32(ecx) = 0x2FF0FC;
    esp += 4; return; /* ret */

}

/**
 * sub_00016190
 * Original: 0x00016190 - 0x000161DB (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016190: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FF134);
    PUSH32(esp, 0x000161B0u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000161B0: ;
    ecx = MEM32(esi + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 4) = edi;
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
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000161E0
 * Original: 0x000161E0 - 0x0001624C (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000161E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000161E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x2FF170);
    PUSH32(esp, 0x000161F3u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000161F3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016218; /* je: equal / zero */

loc_000161FA: ;
    ecx = eax + 4;
    MEM32(ecx) = 0x2FF0D4;
    MEM32(eax) = 0x2FF12C;
    MEM32(ecx) = 0x2FF104;
    MEM32(0x38DCC0) = eax;
    esi = ecx;
    goto loc_00016224;

loc_00016218: ;
    MEM32(0x38DCC0) = 0;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016224: ;
    PUSH32(esp, 0x2FF160);
    ecx = esp + 8;
    PUSH32(esp, 0x00016232u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_00016232: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016239u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_00016239: ;
    ecx = MEM32(0x38DCC0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016250
 * Original: 0x00016250 - 0x00016255 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016250(void)
{

loc_00016250: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00016260
 * Original: 0x00016260 - 0x00016268 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016260: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00016290(); return; /* tail jmp 0x00016290 */

}

/**
 * sub_00016270
 * Original: 0x00016270 - 0x0001628F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016270: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2FF0FC;
    if (TEST_Z(_fa, _fb)) goto loc_00016289; /* je: equal / zero */

loc_00016280: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016286u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00016286: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016289: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016290
 * Original: 0x00016290 - 0x000162BD (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016290: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = 0x2FF104;
    MEM32(esi + 4) = 0x2FF0D4;
    MEM32(esi) = 0x2FF0FC;
    if (TEST_Z(_fa, _fb)) goto loc_000162B7; /* je: equal / zero */

loc_000162AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000162B4u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000162B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000162B7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000162C0
 * Original: 0x000162C0 - 0x00016426 (358 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000162C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000162C0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8EDA8DE5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x8EDA8DE5u (32-bit) */
    eax = 9;
    if (CMP_A(_fa, _fb)) goto loc_00016382; /* ja: above (unsigned >) */

loc_000162D5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0001637B; /* je: equal / zero */

loc_000162DB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6B301E8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x6B301E8B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00016341; /* ja: above (unsigned >) */

loc_000162E3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00016337; /* je: equal / zero */

loc_000162E5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x380F1CA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x380F1CA5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00016321; /* ja: above (unsigned >) */

loc_000162ED: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00016317; /* je: equal / zero */

loc_000162EF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28C8B22E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x28C8B22E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001630D; /* je: equal / zero */

loc_000162F7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36069D24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x36069D24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163FC; /* jne: not equal / not zero */

loc_00016303: ;
    eax = 0x11;
    goto loc_000163FC;

loc_0001630D: ;
    eax = 7;
    goto loc_000163FC;

loc_00016317: ;
    eax = 2;
    goto loc_000163FC;

loc_00016321: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66090953) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x66090953 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163FC; /* jne: not equal / not zero */

loc_0001632D: ;
    eax = 5;
    goto loc_000163FC;

loc_00016337: ;
    eax = 0xF;
    goto loc_000163FC;

loc_00016341: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6B47B0D4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x6B47B0D4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016371; /* je: equal / zero */

loc_00016349: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7403062E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7403062E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016367; /* je: equal / zero */

loc_00016351: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E0C3B4Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x8E0C3B4Du (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163FC; /* jne: not equal / not zero */

loc_0001635D: ;
    eax = 6;
    goto loc_000163FC;

loc_00016367: ;
    eax = 3;
    goto loc_000163FC;

loc_00016371: ;
    eax = 0xD;
    goto loc_000163FC;

loc_0001637B: ;
    eax = 0x14;
    goto loc_000163FC;

loc_00016382: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFED3C6Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xBFED3C6Au (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000163D1; /* ja: above (unsigned >) */

loc_0001638A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000163CA; /* je: equal / zero */

loc_0001638C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C063430u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x9C063430u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000163BB; /* ja: above (unsigned >) */

loc_00016394: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000163B4; /* je: equal / zero */

loc_00016396: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x913F23E8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x913F23E8u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000163AD; /* je: equal / zero */

loc_0001639E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91488DB7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x91488DB7u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163FC; /* jne: not equal / not zero */

loc_000163A6: ;
    eax = 0x10;
    goto loc_000163FC;

loc_000163AD: ;
    eax = 0x12;
    goto loc_000163FC;

loc_000163B4: ;
    eax = 8;
    goto loc_000163FC;

loc_000163BB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C800FD7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x9C800FD7u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163FC; /* jne: not equal / not zero */

loc_000163C3: ;
    eax = 0x13;
    goto loc_000163FC;

loc_000163CA: ;
    eax = 1;
    goto loc_000163FC;

loc_000163D1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCC09A047u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xCC09A047u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000163F7; /* je: equal / zero */

loc_000163D9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD2C78F4Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD2C78F4Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000163F0; /* je: equal / zero */

loc_000163E1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDE46B4D6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xDE46B4D6u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163FC; /* jne: not equal / not zero */

loc_000163E9: ;
    eax = 0xC;
    goto loc_000163FC;

loc_000163F0: ;
    eax = 4;
    goto loc_000163FC;

loc_000163F7: ;
    eax = 0xE;

loc_000163FC: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001641D; /* jne: not equal / not zero */

loc_00016403: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016413; /* jne: not equal / not zero */

loc_00016408: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x24) = eax;
    esp += 12; return; /* ret 8 */

loc_00016413: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001641D; /* jne: not equal / not zero */

loc_00016418: ;
    eax = 0x13;

loc_0001641D: ;
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x24) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00016430
 * Original: 0x00016430 - 0x0001647F (79 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00016430: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FF19C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0001644E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00016443: ;
    eax = 3;
    MEM32(ecx + 0x20) = eax;
    esp += 12; return; /* ret 8 */

loc_0001644E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FF1A0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016462; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2FF1A0)) */

loc_00016457: ;
    eax = 2;
    MEM32(ecx + 0x20) = eax;
    esp += 12; return; /* ret 8 */

loc_00016462: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016474; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_0001646C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x20) = eax;
    esp += 12; return; /* ret 8 */

loc_00016474: ;
    eax = 1;
    MEM32(ecx + 0x20) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00016480
 * Original: 0x00016480 - 0x000164E7 (103 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi + 4) = ebx;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001649A; /* je: equal / zero */

loc_00016494: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001649Au); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0001649A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edi + 4) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM8(esi + 0x44) = LO8(ebx);
    MEM8(esi + 0x45) = LO8(ebx);
    MEM8(esi + 0x46) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x38) = 1;
    MEM32(esi + 0x2C) = 0xFFFFFFFFu;
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000164F0
 * Original: 0x000164F0 - 0x00016569 (121 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000164F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000164F0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 8;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x18) = 0;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00016517; /* je: equal / zero */

loc_00016511: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00016517u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00016517: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00016563; /* je: equal / zero */

loc_00016522: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0001652Au); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_0001652A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x00016531u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001652Eu); } /* indirect call */
    }

loc_00016531: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0001654E; /* je: equal / zero */

loc_0001653B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00016543u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001653Du); } /* indirect call */
    }

loc_00016543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001654E; /* je: equal / zero */

loc_00016547: ;
    eax = 1;
    goto loc_00016550;

loc_0001654E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016550: ;
    MEM8(esi + 0x44) = LO8(eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x0001655Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016557u); } /* indirect call */
    }

loc_0001655D: ;
    ecx = ZX8(LO8(eax));
    MEM32(esi + 0x28) = ecx;

loc_00016563: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00016570
 * Original: 0x00016570 - 0x000165A9 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016570: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x18) = 0;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016596; /* je: equal / zero */

loc_00016590: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016596u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00016596: ;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    MEM32(esi + 0x18) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000165B0
 * Original: 0x000165B0 - 0x000166FD (333 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000165B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000165B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000165D0u); RECOMP_ABI_CALL(0x000164F0u, sub_000164F0); /* call 0x000164F0 */

loc_000165D0: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ecx + 0xE4);
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x18) = 2;
    eax = MEM32(eax + 0x1C);
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0x50) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x54) = edx;
    eax = MEM32(eax + 0x18);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esi + 0x58) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001660Bu); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_0001660B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    eax = esp + 0x30;
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016638u); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_00016638: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016644u); RECOMP_ABI_CALL(0x00131360u, sub_00131360); /* call 0x00131360 */

loc_00016644: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(0x2FF19C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016699; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_00016689: ;
    eax = 3;
    MEM32(esi + 0x20) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_00016699: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FF1A0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000166B2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2FF1A0)) */

loc_000166A2: ;
    eax = 2;
    MEM32(esi + 0x20) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_000166B2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000166ED; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000166E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_000166ED: ;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x20) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00016700
 * Original: 0x00016700 - 0x0001682A (298 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00016700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016720u); RECOMP_ABI_CALL(0x000164F0u, sub_000164F0); /* call 0x000164F0 */

loc_00016720: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x18) = 2;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016765u); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_00016765: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016771u); RECOMP_ABI_CALL(0x00131360u, sub_00131360); /* call 0x00131360 */

loc_00016771: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(0x2FF19C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000167C6; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000167B6: ;
    eax = 3;
    MEM32(esi + 0x20) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_000167C6: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FF1A0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000167DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2FF1A0)) */

loc_000167CF: ;
    eax = 2;
    MEM32(esi + 0x20) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_000167DF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0001681A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0001680D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_0001681A: ;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x20) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00016830
 * Original: 0x00016830 - 0x00016875 (69 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001684Fu); RECOMP_ABI_CALL(0x000164F0u, sub_000164F0); /* call 0x000164F0 */

loc_0001684F: ;
    eax = MEM32(ebp + 0x14);
    MEM8(esi + 0x45) = 1;
    ecx = MEM32(eax);
    MEM32(esi + 0x50) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x54) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x18) = 3;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00016880
 * Original: 0x00016880 - 0x000168DC (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001689Fu); RECOMP_ABI_CALL(0x000164F0u, sub_000164F0); /* call 0x000164F0 */

loc_0001689F: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x18) = 4;
    MEM32(esi + 0x2C) = 0x19;
    ecx = MEM32(eax);
    MEM32(esi + 0x50) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x54) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax);
    MEM32(esi + 0x60) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x64) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x68) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000168E0
 * Original: 0x000168E0 - 0x000168FE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000168E0(void)
{

loc_000168E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000168F3u); RECOMP_ABI_CALL(0x000164F0u, sub_000164F0); /* call 0x000164F0 */

loc_000168F3: ;
    MEM32(esi + 0x18) = 5;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00016900
 * Original: 0x00016900 - 0x00016939 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016900: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x18) = 0;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016926; /* je: equal / zero */

loc_00016920: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016926u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00016926: ;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    MEM32(esi + 0x18) = 6;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016940
 * Original: 0x00016940 - 0x00016974 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016940: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x18) = 0;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016963; /* je: equal / zero */

loc_0001695D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016963u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00016963: ;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    MEM32(esi + 0x18) = 7;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016980
 * Original: 0x00016980 - 0x000169B4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016980: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x18) = 0;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000169A3; /* je: equal / zero */

loc_0001699D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000169A3u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000169A3: ;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    MEM32(esi + 0x18) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000169C0
 * Original: 0x000169C0 - 0x000169E4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000169C0(void)
{

loc_000169C0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000169D9u); RECOMP_ABI_CALL(0x000164F0u, sub_000164F0); /* call 0x000164F0 */

loc_000169D9: ;
    MEM32(esi + 0x18) = 9;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000169F0
 * Original: 0x000169F0 - 0x00016A8C (156 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000169F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000169F0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2FF1D0;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(edi) = 0x2FF02C;
    if (CMP_EQ(_fa, _fb)) goto loc_00016A1F; /* je: equal / zero */

loc_00016A19: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016A1Fu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00016A1F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edi + 4) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM8(esi + 0x44) = LO8(ebx);
    MEM8(esi + 0x45) = LO8(ebx);
    MEM8(esi + 0x46) = LO8(ebx);
    MEM32(esi + 0x2C) = 0xFFFFFFFFu;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x38) = 1;
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016A90
 * Original: 0x00016A90 - 0x00016AAE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016A90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00016A98u); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_00016A98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016AA8; /* je: equal / zero */

loc_00016A9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016AA5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00016AA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016AA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016AB0
 * Original: 0x00016AB0 - 0x00016AD4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2FF1B8;
    PUSH32(esp, 0x00016ABEu); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_00016ABE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016ACE; /* je: equal / zero */

loc_00016AC5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016ACBu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00016ACB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016ACE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016AE0
 * Original: 0x00016AE0 - 0x00016B22 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x2FF02C;
    if (CMP_EQ(_fa, _fb)) goto loc_00016B0B; /* je: equal / zero */

loc_00016B05: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016B0Bu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00016B0B: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00016B1C; /* je: equal / zero */

loc_00016B16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016B1Cu); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_00016B1C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016B30
 * Original: 0x00016B30 - 0x00016B36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016B30(void)
{

loc_00016B30: ;
    eax = 0xD0D20092u;
    esp += 4; return; /* ret */

}

/**
 * sub_00016B40
 * Original: 0x00016B40 - 0x00016B6E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    PUSH32(esp, 0x00016B4Bu); RECOMP_ABI_CALL(0x000BC9E0u, sub_000BC9E0); /* call 0x000BC9E0 */

loc_00016B4B: ;
    ecx = esi;
    MEM32(esi) = 0x2FF1B8;
    PUSH32(esp, 0x00016B58u); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_00016B58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016B68; /* je: equal / zero */

loc_00016B5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016B65u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00016B65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016B68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016B70
 * Original: 0x00016B70 - 0x00016B82 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00016B70: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00016B79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016B76u); } /* indirect call */
    }

loc_00016B79: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016B90
 * Original: 0x00016B90 - 0x00016BC2 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016B90: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x18);
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00016BBD; /* ja: above (unsigned >) */

loc_00016B9F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x16BC4); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00016BA6u) goto loc_00016BA6;
    if (_jt == 0x00016BABu) goto loc_00016BAB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00016BA6: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00016BAB: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00016BB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016BB1u); } /* indirect call */
    }

loc_00016BB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 12; return; /* ret 8 */

loc_00016BBD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00016BE0
 * Original: 0x00016BE0 - 0x00016CEB (267 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00016BE0: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x9C); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x98); /* comiss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016C12; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x98)) */

loc_00016C08: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    goto loc_00016C1A;

loc_00016C12: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016C1A; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00016C17: ;
    xmm0 = xmm2; /* movaps */

loc_00016C1A: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esi + 0x98); /* divss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016C48; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00016C3A: ;
    MEM32(esi + 0x88) = 3;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00016C48: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FF1EC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016CC2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00016C55: ;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x88), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C68; /* je: equal / zero */

loc_00016C5E: ;
    MEM32(esi + 0x88) = 1;

loc_00016C68: ;
    _fa = (uint32_t)(MEM8(esi + 0x8C)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x8C), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016CE7; /* je: equal / zero */

loc_00016C71: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016CE7; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00016C76: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00016C7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016C7Cu); } /* indirect call */
    }

loc_00016C7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016CE7; /* je: equal / zero */

loc_00016C83: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00016C8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016C87u); } /* indirect call */
    }

loc_00016C8A: ;
    ecx = eax;
    PUSH32(esp, 0x00016C91u); RECOMP_ABI_CALL(0x0001EF20u, sub_0001EF20); /* call 0x0001EF20 */

loc_00016C91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016CA3; /* je: equal / zero */

loc_00016C95: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00016C9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016C99u); } /* indirect call */
    }

loc_00016C9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016CE7; /* je: equal / zero */

loc_00016CA3: ;
    eax = MEM32(esi + 0x8C);
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x88) = 2;
    MEM32(esi + 0x8C) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00016CC2: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FF1E8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016CDD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00016CCF: ;
    MEM32(esi + 0x88) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00016CDD: ;
    MEM32(esi + 0x88) = 0;

loc_00016CE7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00016CE8
 * Original: 0x00016CE8 - 0x00016CEB (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016CE8(void)
{

loc_00016CE8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00016CF0
 * Original: 0x00016CF0 - 0x00016D2B (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    PUSH32(esp, 0x00016CFFu); RECOMP_ABI_CALL(0x000172D0u, sub_000172D0); /* call 0x000172D0 */

loc_00016CFF: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = esi + 8;
    MEM32(edi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00016D15; /* je: equal / zero */

loc_00016D0F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016D15u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00016D15: ;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF1B8;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B350(); return; /* tail jmp 0x0014B350 */

}

/**
 * sub_00016D30
 * Original: 0x00016D30 - 0x00016D6A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016D30: ;
    eax = MEM32(ecx + 0x8C);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = MEM32(esp + 0xC);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x8C) = eax;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEMF(ecx + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    MEMF(ecx + 0x9C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00016D67u); RECOMP_ABI_CALL(0x00016BE0u, sub_00016BE0); /* call 0x00016BE0 */

loc_00016D67: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00016D70
 * Original: 0x00016D70 - 0x00016D89 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016D70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x84) = edx;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00016BE0(); return; /* tail jmp 0x00016BE0 */

}

/**
 * sub_00016D90
 * Original: 0x00016D90 - 0x00016DDC (76 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016D90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00016D98u); RECOMP_ABI_CALL(0x000169F0u, sub_000169F0); /* call 0x000169F0 */

loc_00016D98: ;
    ecx = esi + 0x80;
    PUSH32(esp, 0x00016DA3u); RECOMP_ABI_CALL(0x000172B0u, sub_000172B0); /* call 0x000172B0 */

loc_00016DA3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016DE0
 * Original: 0x00016DE0 - 0x00016E96 (182 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00016DE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E3A; /* je: equal / zero */

loc_00016DEF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00016DF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016DF1u); } /* indirect call */
    }

loc_00016DF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E3A; /* je: equal / zero */

loc_00016DF8: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00016E04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016DFEu); } /* indirect call */
    }

loc_00016E04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016E3A; /* jne: not equal / not zero */

loc_00016E08: ;
    ecx = MEM32(esi + 0x90);
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FE99C); /* addss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x90) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00016E35u); RECOMP_ABI_CALL(0x000171C0u, sub_000171C0); /* call 0x000171C0 */

loc_00016E35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00016E3A: ;
    eax = MEM32(esi + 0x8C);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, ~LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016E91; /* je: equal / zero */

loc_00016E49: ;
    ecx = MEM32(esi + 0x90);
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FE99C); /* addss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x90) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00016E76u); RECOMP_ABI_CALL(0x000171C0u, sub_000171C0); /* call 0x000171C0 */

loc_00016E76: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FF1F8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016E91; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x2FF1F8)) */

loc_00016E87: ;
    MEM32(esi + 0x8C) = MEM32(esi + 0x8C) | 0x100;
    _fa = (uint32_t)(MEM32(esi + 0x8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00016E91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00016EA0
 * Original: 0x00016EA0 - 0x00016FFE (350 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016EA0(void)
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

loc_00016EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    ebx = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F66; /* je: equal / zero */

loc_00016EC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00016EE1; /* jle: less or equal (signed <=) */

loc_00016EC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00016EE1; /* jg: greater (signed >) */

loc_00016ECE: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x9C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00016F84;

loc_00016EE1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00016EE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016EE5u); } /* indirect call */
    }

loc_00016EE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F19; /* je: equal / zero */

loc_00016EEC: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016FF8; /* je: equal / zero */

loc_00016EF7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00016EFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016EF9u); } /* indirect call */
    }

loc_00016EFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016FF8; /* je: equal / zero */

loc_00016F04: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00016F0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016F08u); } /* indirect call */
    }

loc_00016F0B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00016F12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016F0Fu); } /* indirect call */
    }

loc_00016F12: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00016F19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016F16u); } /* indirect call */
    }

loc_00016F19: ;
    eax = MEM32(ebx + 0x8C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00016FB6; /* jne: not equal / not zero */

loc_00016F27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016F46; /* je: equal / zero */

loc_00016F2B: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F46; /* je: equal / zero */

loc_00016F32: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00016F37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016F34u); } /* indirect call */
    }

loc_00016F37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016F46; /* jne: not equal / not zero */

loc_00016F3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00016F44u); RECOMP_ABI_CALL(0x00016DE0u, sub_00016DE0); /* call 0x00016DE0 */

loc_00016F44: ;
    goto loc_00016FB6;

loc_00016F46: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00016F4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016F4Au); } /* indirect call */
    }

loc_00016F4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016F5B; /* jne: not equal / not zero */

loc_00016F52: ;
    _fa = (uint32_t)(MEM8(ebx + 0x8C)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x8C), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016FB6; /* je: equal / zero */

loc_00016F5B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00016F64u); RECOMP_ABI_CALL(0x00016DE0u, sub_00016DE0); /* call 0x00016DE0 */

loc_00016F64: ;
    goto loc_00016F92;

loc_00016F66: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00016F6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016F6Au); } /* indirect call */
    }

loc_00016F6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016FF8; /* jne: not equal / not zero */

loc_00016F75: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x9C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00016F92; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebx + 0x9C)) */

loc_00016F84: ;
    MEM32(ebx + 0x90) = MEM32(ebx + 0x90) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016F92u); RECOMP_ABI_CALL(0x000171C0u, sub_000171C0); /* call 0x000171C0 */

loc_00016F92: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00016FB6; /* jnp: not parity */

loc_00016FA4: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    ecx = ebx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00016FB6u); RECOMP_ABI_CALL(0x00016BE0u, sub_00016BE0); /* call 0x00016BE0 */

loc_00016FB6: ;
    edi = MEM32(edi + 0x18);
    eax = edi + -6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00016FF8; /* ja: above (unsigned >) */

loc_00016FC1: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x17000); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00016FC8u) goto loc_00016FC8;
    if (_jt == 0x00016FD9u) goto loc_00016FD9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00016FC8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00016FCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016FCCu); } /* indirect call */
    }

loc_00016FCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016FF8; /* je: equal / zero */

loc_00016FD9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00016FE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016FDFu); } /* indirect call */
    }

loc_00016FE5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00016FF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016FEBu); } /* indirect call */
    }

loc_00016FF1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00016FF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016FF5u); } /* indirect call */
    }

loc_00016FF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00017010
 * Original: 0x00017010 - 0x0001705D (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017010: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0001701Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001701Cu); } /* indirect call */
    }

loc_0001701F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5156CE44) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5156CE44 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001703F; /* je: equal / zero */

loc_00017026: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD0D20092u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD0D20092u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017058; /* jne: not equal / not zero */

loc_0001702D: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0001703Au); RECOMP_ABI_CALL(0x00016EA0u, sub_00016EA0); /* call 0x00016EA0 */

loc_0001703A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0001703F: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esp + 0x10);
    MEM32(edi + 0x84) = edx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00017058u); RECOMP_ABI_CALL(0x00016BE0u, sub_00016BE0); /* call 0x00016BE0 */

loc_00017058: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00017060
 * Original: 0x00017060 - 0x0001718C (300 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00017060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000170A0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00017085: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000170A0; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00017096: ;
    MEM32(esi + 0x8C) = MEM32(esi + 0x8C) & 0xFFFFFEFFu;
    _fa = (uint32_t)(MEM32(esi + 0x8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000170A0: ;
    eax = MEM32(esi + 0x88);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00017176; /* jne: not equal / not zero */

loc_000170AF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF1F4); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FF1F0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xA0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00017146; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xA0)) */

loc_000170DA: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000170E3u); RECOMP_ABI_CALL(0x000169F0u, sub_000169F0); /* call 0x000169F0 */

loc_000170E3: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000170F1u); RECOMP_ABI_CALL(0x00016570u, sub_00016570); /* call 0x00016570 */

loc_000170F1: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00017101u); RECOMP_ABI_CALL(0x00017010u, sub_00017010); /* call 0x00017010 */

loc_00017101: ;
    ecx = MEM32(esp + 0x2C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x28) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_0001711D; /* je: equal / zero */

loc_00017113: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001711Du); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0001711D: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x20) = 0x2FF1B8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00017132u); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_00017132: ;
    MEM32(esi + 0x90) = edi;
    MEM32(esi + 0x94) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00017146: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001714Fu); RECOMP_ABI_CALL(0x000172B0u, sub_000172B0); /* call 0x000172B0 */

loc_0001714F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001715Du); RECOMP_ABI_CALL(0x000172A0u, sub_000172A0); /* call 0x000172A0 */

loc_0001715D: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001716Du); RECOMP_ABI_CALL(0x00017010u, sub_00017010); /* call 0x00017010 */

loc_0001716D: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00017176u); RECOMP_ABI_CALL(0x000172D0u, sub_000172D0); /* call 0x000172D0 */

loc_00017176: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x90) = edi;
    MEM32(esi + 0x94) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00017190
 * Original: 0x00017190 - 0x000171C0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017190: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = edi + 8;
    MEM32(esi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_000171AA; /* je: equal / zero */

loc_000171A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171AAu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000171AA: ;
    MEM32(esi + 4) = 0;
    MEM32(edi) = 0x2FF1B8;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B350(); return; /* tail jmp 0x0014B350 */

}

/**
 * sub_000171C0
 * Original: 0x000171C0 - 0x00017294 (212 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000171C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000171C0: ;
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
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 4);
    esi = ecx;
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(edi + 0xC);
    ebx = esi + 8;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000171F0; /* je: equal / zero */

loc_000171E6: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000171ECu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000171EC: ;
    eax = MEM32(esp + 0xC);

loc_000171F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000171FF; /* je: equal / zero */

loc_000171F7: ;
    PUSH32(esp, ebx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000171FFu); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_000171FF: ;
    ecx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = eax;
    ecx = MEM32(edi + 0x24);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(edi + 0x28);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(edi + 0x30);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(edi + 0x34);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(edi + 0x38);
    MEM32(esi + 0x38) = eax;
    ecx = MEM32(edi + 0x3C);
    MEM32(esi + 0x3C) = ecx;
    edx = MEM32(edi + 0x40);
    MEM32(esi + 0x40) = edx;
    SET_LO8(eax, MEM8(edi + 0x44));
    MEM8(esi + 0x44) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x45));
    MEM8(esi + 0x45) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x46));
    MEM8(esi + 0x46) = LO8(edx);
    eax = MEM32(edi + 0x50);
    MEM32(esi + 0x50) = eax;
    ecx = MEM32(edi + 0x54);
    MEM32(esi + 0x54) = ecx;
    edx = MEM32(edi + 0x58);
    MEM32(esi + 0x58) = edx;
    eax = MEM32(edi + 0x60);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(edi + 0x64);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(edi + 0x68);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(edi + 0x70);
    MEM32(esi + 0x70) = eax;
    ecx = MEM32(edi + 0x74);
    MEM32(esi + 0x74) = ecx;
    edx = MEM32(edi + 0x78);
    POP32(esp, edi);
    MEM32(esi + 0x78) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000172A0
 * Original: 0x000172A0 - 0x000172AE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000172A0(void)
{

loc_000172A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000172B0
 * Original: 0x000172B0 - 0x000172C1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000172B0(void)
{

loc_000172B0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x2FF200;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000172D0
 * Original: 0x000172D0 - 0x000172DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000172D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000172D0: ;
    MEM32(ecx) = 0x2FF1B8;
    g_seh_ebp = ebp; sub_0014B350(); return; /* tail jmp 0x0014B350 */

}

/**
 * sub_000172E0
 * Original: 0x000172E0 - 0x000172E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000172E0(void)
{

loc_000172E0: ;
    eax = 0x5156CE44;
    esp += 4; return; /* ret */

}

/**
 * sub_000172F0
 * Original: 0x000172F0 - 0x000172F9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000172F0(void)
{

loc_000172F0: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}
