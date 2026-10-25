/**
 * Medal of Honor European Assault - Recompiled code chunk 79
 * Functions: 250 (0x002CE600 - 0x002CFC20)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002CE600
 * Original: 0x002CE600 - 0x002CE60F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE600: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE60Bu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CE60B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE60F
 * Original: 0x002CE60F - 0x002CE617 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE60F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE60F: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CE617
 * Original: 0x002CE617 - 0x002CE621 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE617(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE617: ;
    eax = 0x354BEC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CE630
 * Original: 0x002CE630 - 0x002CE63F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE630: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE63Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE63B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE63F
 * Original: 0x002CE63F - 0x002CE64E (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE63F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE63F: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE64Au); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE64A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE64E
 * Original: 0x002CE64E - 0x002CE65D (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE64E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE64E: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE659u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE659: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE65D
 * Original: 0x002CE65D - 0x002CE66C (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE65D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE65D: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE668u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE668: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE66C
 * Original: 0x002CE66C - 0x002CE67B (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE66C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE66C: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE677u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE677: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE67B
 * Original: 0x002CE67B - 0x002CE68A (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE67B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE67B: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE686u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE686: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE68A
 * Original: 0x002CE68A - 0x002CE699 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE68A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE68A: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE695u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE695: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE699
 * Original: 0x002CE699 - 0x002CE6A8 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE699(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE699: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE6A4u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE6A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE6A8
 * Original: 0x002CE6A8 - 0x002CE6B7 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE6A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE6A8: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE6B3u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE6B3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE6B7
 * Original: 0x002CE6B7 - 0x002CE6C6 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE6B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE6B7: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE6C2u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE6C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE6C6
 * Original: 0x002CE6C6 - 0x002CE6D5 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE6C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE6C6: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE6D1u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE6D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE6D5
 * Original: 0x002CE6D5 - 0x002CE6E4 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE6D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE6D5: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE6E0u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE6E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE6E4
 * Original: 0x002CE6E4 - 0x002CE6F3 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE6E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE6E4: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE6EFu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE6EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE6F3
 * Original: 0x002CE6F3 - 0x002CE702 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE6F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE6F3: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE6FEu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE6FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE702
 * Original: 0x002CE702 - 0x002CE711 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE702(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE702: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE70Du); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE70D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE711
 * Original: 0x002CE711 - 0x002CE720 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE711(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE711: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE71Cu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE71C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE720
 * Original: 0x002CE720 - 0x002CE72F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE720: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE72Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE72B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE72F
 * Original: 0x002CE72F - 0x002CE73E (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE72F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE72F: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE73Au); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE73A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE73E
 * Original: 0x002CE73E - 0x002CE74D (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE73E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE73E: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE749u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE749: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE74D
 * Original: 0x002CE74D - 0x002CE75C (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE74D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE74D: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE758u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE758: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE75C
 * Original: 0x002CE75C - 0x002CE76B (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE75C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE75C: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE767u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE767: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE76B
 * Original: 0x002CE76B - 0x002CE77A (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE76B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE76B: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE776u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE776: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE77A
 * Original: 0x002CE77A - 0x002CE789 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE77A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE77A: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE785u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE785: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE789
 * Original: 0x002CE789 - 0x002CE798 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE789(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE789: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE794u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE794: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE798
 * Original: 0x002CE798 - 0x002CE7A7 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE798(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE798: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE7A3u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE7A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE7A7
 * Original: 0x002CE7A7 - 0x002CE7B6 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE7A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE7A7: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE7B2u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE7B2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE7B6
 * Original: 0x002CE7B6 - 0x002CE7C5 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE7B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE7B6: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE7C1u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE7C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE7C5
 * Original: 0x002CE7C5 - 0x002CE7D4 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE7C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE7C5: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE7D0u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE7D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE7D4
 * Original: 0x002CE7D4 - 0x002CE7E3 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE7D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE7D4: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE7DFu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE7DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE7E3
 * Original: 0x002CE7E3 - 0x002CE7F2 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE7E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE7E3: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE7EEu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE7EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE7F2
 * Original: 0x002CE7F2 - 0x002CE801 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE7F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE7F2: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE7FDu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE7FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE801
 * Original: 0x002CE801 - 0x002CE810 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE801(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE801: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE80Cu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE80C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE810
 * Original: 0x002CE810 - 0x002CE81F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE810: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE81Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE81B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE81F
 * Original: 0x002CE81F - 0x002CE82E (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE81F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE81F: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE82Au); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE82A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE82E
 * Original: 0x002CE82E - 0x002CE83D (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE82E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE82E: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE839u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE839: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE83D
 * Original: 0x002CE83D - 0x002CE84C (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE83D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE83D: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE848u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE848: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE84C
 * Original: 0x002CE84C - 0x002CE85B (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE84C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE84C: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE857u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE857: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE85B
 * Original: 0x002CE85B - 0x002CE865 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE85B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE85B: ;
    eax = 0x354D30;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CE870
 * Original: 0x002CE870 - 0x002CE878 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE870: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CE878
 * Original: 0x002CE878 - 0x002CE880 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE878(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE878: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CE880
 * Original: 0x002CE880 - 0x002CE88A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE880: ;
    eax = 0x354D5C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CE890
 * Original: 0x002CE890 - 0x002CE898 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE890: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CE898
 * Original: 0x002CE898 - 0x002CE8A0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE898(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE898: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CE8A0
 * Original: 0x002CE8A0 - 0x002CE8AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE8A0: ;
    eax = 0x354D88;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CE8B0
 * Original: 0x002CE8B0 - 0x002CE8B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE8B0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277D80(); return; /* tail jmp 0x00277D80 */

}

/**
 * sub_002CE8B8
 * Original: 0x002CE8B8 - 0x002CE8C0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE8B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE8B8: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CE8C0
 * Original: 0x002CE8C0 - 0x002CE8CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE8C0: ;
    eax = 0x354DB4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CE8D0
 * Original: 0x002CE8D0 - 0x002CE8D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE8D0: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CE8D8
 * Original: 0x002CE8D8 - 0x002CE8E0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE8D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE8D8: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CE8E0
 * Original: 0x002CE8E0 - 0x002CE8EF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE8E0: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE8EBu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CE8EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE8EF
 * Original: 0x002CE8EF - 0x002CE8F9 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE8EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE8EF: ;
    eax = 0x354DE8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CE900
 * Original: 0x002CE900 - 0x002CE908 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE900: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CE908
 * Original: 0x002CE908 - 0x002CE912 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE908(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE908: ;
    eax = 0x354E0C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CE920
 * Original: 0x002CE920 - 0x002CE92F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE920: ;
    PUSH32(esp, 0x2C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE92Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE92B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE92F
 * Original: 0x002CE92F - 0x002CE939 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE92F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE92F: ;
    eax = 0x354E30;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CE940
 * Original: 0x002CE940 - 0x002CE94F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE940: ;
    PUSH32(esp, 0x2C);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE94Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE94B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE94F
 * Original: 0x002CE94F - 0x002CE959 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE94F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE94F: ;
    eax = 0x354E54;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CE960
 * Original: 0x002CE960 - 0x002CE96F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE960: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE96Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE96B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE96F
 * Original: 0x002CE96F - 0x002CE97E (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE96F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE96F: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE97Au); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE97A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE97E
 * Original: 0x002CE97E - 0x002CE98D (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE97E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE97E: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE989u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE989: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE98D
 * Original: 0x002CE98D - 0x002CE99C (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE98D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE98D: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE998u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE998: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE99C
 * Original: 0x002CE99C - 0x002CE9AB (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE99C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE99C: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE9A7u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE9A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE9AB
 * Original: 0x002CE9AB - 0x002CE9BA (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE9AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE9AB: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE9B6u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE9B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE9BA
 * Original: 0x002CE9BA - 0x002CE9C9 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE9BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE9BA: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE9C5u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE9C5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE9C9
 * Original: 0x002CE9C9 - 0x002CE9D8 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE9C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE9C9: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE9D4u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE9D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE9D8
 * Original: 0x002CE9D8 - 0x002CE9E7 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE9D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE9D8: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE9E3u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE9E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE9E7
 * Original: 0x002CE9E7 - 0x002CE9F6 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE9E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE9E7: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CE9F2u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CE9F2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CE9F6
 * Original: 0x002CE9F6 - 0x002CEA05 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE9F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CE9F6: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEA01u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CEA01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEA05
 * Original: 0x002CEA05 - 0x002CEA14 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEA05: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEA10u); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CEA10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEA14
 * Original: 0x002CEA14 - 0x002CEA1E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEA14: ;
    eax = 0x354ED0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEA20
 * Original: 0x002CEA20 - 0x002CEA28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEA20: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEA28
 * Original: 0x002CEA28 - 0x002CEA32 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEA28: ;
    eax = 0x354EF4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEA40
 * Original: 0x002CEA40 - 0x002CEA4F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEA40: ;
    PUSH32(esp, 0x64);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEA4Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CEA4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEA4F
 * Original: 0x002CEA4F - 0x002CEA59 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEA4F: ;
    eax = 0x354F18;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEA60
 * Original: 0x002CEA60 - 0x002CEA6F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEA60: ;
    PUSH32(esp, 4);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEA6Bu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CEA6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEA6F
 * Original: 0x002CEA6F - 0x002CEA79 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEA6F: ;
    eax = 0x354F3C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEA80
 * Original: 0x002CEA80 - 0x002CEA88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEA80: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002A91A0(); return; /* tail jmp 0x002A91A0 */

}

/**
 * sub_002CEA88
 * Original: 0x002CEA88 - 0x002CEA92 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEA88: ;
    eax = 0x354F60;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEAA0
 * Original: 0x002CEAA0 - 0x002CEAAF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEAA0: ;
    PUSH32(esp, 0x30);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEAABu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CEAAB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEAAF
 * Original: 0x002CEAAF - 0x002CEABE (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEAAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEAAF: ;
    PUSH32(esp, 0x24);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEABAu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CEABA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEABE
 * Original: 0x002CEABE - 0x002CEACD (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEABE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEABE: ;
    PUSH32(esp, 0x78);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEAC9u); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CEAC9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEACD
 * Original: 0x002CEACD - 0x002CEAD5 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEACD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEACD: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEAD5
 * Original: 0x002CEAD5 - 0x002CEADD (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEAD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEAD5: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEADD
 * Original: 0x002CEADD - 0x002CEAE7 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEADD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEADD: ;
    eax = 0x354FA4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEAF0
 * Original: 0x002CEAF0 - 0x002CEAF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEAF0: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEAF8
 * Original: 0x002CEAF8 - 0x002CEB00 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEAF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEAF8: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEB00
 * Original: 0x002CEB00 - 0x002CEB08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB00: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEB08
 * Original: 0x002CEB08 - 0x002CEB10 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB08: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEB10
 * Original: 0x002CEB10 - 0x002CEB1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB10: ;
    eax = 0x354FE0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEB20
 * Original: 0x002CEB20 - 0x002CEB28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB20: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEB28
 * Original: 0x002CEB28 - 0x002CEB30 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB28: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEB30
 * Original: 0x002CEB30 - 0x002CEB3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB30: ;
    eax = 0x35500C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEB40
 * Original: 0x002CEB40 - 0x002CEB4F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB40: ;
    PUSH32(esp, 0x14);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEB4Bu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CEB4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEB4F
 * Original: 0x002CEB4F - 0x002CEB59 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB4F: ;
    eax = 0x355030;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEB60
 * Original: 0x002CEB60 - 0x002CEB68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB60: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEB68
 * Original: 0x002CEB68 - 0x002CEB70 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB68: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEB70
 * Original: 0x002CEB70 - 0x002CEB7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB70: ;
    eax = 0x35505C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEB80
 * Original: 0x002CEB80 - 0x002CEB8F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB80: ;
    PUSH32(esp, 0x48);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEB8Bu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CEB8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEB8F
 * Original: 0x002CEB8F - 0x002CEB99 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEB8F: ;
    eax = 0x355080;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEBA0
 * Original: 0x002CEBA0 - 0x002CEBA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEBA0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CEBA8
 * Original: 0x002CEBA8 - 0x002CEBB3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEBA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEBA8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEBB3
 * Original: 0x002CEBB3 - 0x002CEBBD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEBB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEBB3: ;
    eax = 0x3550AC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEBC0
 * Original: 0x002CEBC0 - 0x002CEBCF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEBC0: ;
    PUSH32(esp, 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEBCBu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CEBCB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEBCF
 * Original: 0x002CEBCF - 0x002CEBD9 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEBCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEBCF: ;
    eax = 0x3550D0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEBE0
 * Original: 0x002CEBE0 - 0x002CEBEF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEBE0: ;
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEBEBu); RECOMP_ABI_CALL(0x00277940u, sub_00277940); /* call 0x00277940 */

loc_002CEBEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEBEF
 * Original: 0x002CEBEF - 0x002CEBF7 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEBEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEBEF: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEBF7
 * Original: 0x002CEBF7 - 0x002CEC01 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEBF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEBF7: ;
    eax = 0x3550FC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEC10
 * Original: 0x002CEC10 - 0x002CEC18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEC10: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEC18
 * Original: 0x002CEC18 - 0x002CEC20 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEC18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEC18: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEC20
 * Original: 0x002CEC20 - 0x002CEC28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEC20: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEC28
 * Original: 0x002CEC28 - 0x002CEC30 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEC28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEC28: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEC30
 * Original: 0x002CEC30 - 0x002CEC3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEC30: ;
    eax = 0x355138;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEC40
 * Original: 0x002CEC40 - 0x002CEC4F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEC40: ;
    PUSH32(esp, 0x14);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEC4Bu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CEC4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEC4F
 * Original: 0x002CEC4F - 0x002CEC5E (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEC4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEC4F: ;
    PUSH32(esp, 0x14);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEC5Au); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CEC5A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEC5E
 * Original: 0x002CEC5E - 0x002CEC68 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEC5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEC5E: ;
    eax = 0x355164;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEC70
 * Original: 0x002CEC70 - 0x002CEC7F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEC70: ;
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEC7Bu); RECOMP_ABI_CALL(0x002A8320u, sub_002A8320); /* call 0x002A8320 */

loc_002CEC7B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CEC7F
 * Original: 0x002CEC7F - 0x002CEC87 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEC7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEC7F: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00277430(); return; /* tail jmp 0x00277430 */

}

/**
 * sub_002CEC87
 * Original: 0x002CEC87 - 0x002CEC91 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEC87(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEC87: ;
    eax = 0x355190;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CECA0
 * Original: 0x002CECA0 - 0x002CECA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CECA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CECA0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277970(); return; /* tail jmp 0x00277970 */

}

/**
 * sub_002CECA8
 * Original: 0x002CECA8 - 0x002CECB2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CECA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CECA8: ;
    eax = 0x3551B4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CECC0
 * Original: 0x002CECC0 - 0x002CECC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CECC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CECC0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CECC8
 * Original: 0x002CECC8 - 0x002CECD2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CECC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CECC8: ;
    eax = 0x3551D8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CECE0
 * Original: 0x002CECE0 - 0x002CECE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CECE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CECE0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001FF100(); return; /* tail jmp 0x001FF100 */

}

/**
 * sub_002CECE8
 * Original: 0x002CECE8 - 0x002CECF2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CECE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CECE8: ;
    eax = 0x3551FC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CED00
 * Original: 0x002CED00 - 0x002CED08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CED00: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002B42C0(); return; /* tail jmp 0x002B42C0 */

}

/**
 * sub_002CED08
 * Original: 0x002CED08 - 0x002CED12 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CED08: ;
    eax = 0x355220;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CED20
 * Original: 0x002CED20 - 0x002CED28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CED20: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CED28
 * Original: 0x002CED28 - 0x002CED32 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CED28: ;
    eax = 0x355244;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CED40
 * Original: 0x002CED40 - 0x002CED48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CED40: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001F6550(); return; /* tail jmp 0x001F6550 */

}

/**
 * sub_002CED48
 * Original: 0x002CED48 - 0x002CED52 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CED48: ;
    eax = 0x355268;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CED60
 * Original: 0x002CED60 - 0x002CED68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CED60: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CED68
 * Original: 0x002CED68 - 0x002CED72 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CED68: ;
    eax = 0x35528C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CED80
 * Original: 0x002CED80 - 0x002CED88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CED80: ;
    ecx = MEM32(ebp + -52);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CED88
 * Original: 0x002CED88 - 0x002CED93 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CED88: ;
    ecx = MEM32(ebp + -52);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CED93
 * Original: 0x002CED93 - 0x002CEDA9 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CED93: ;
    PUSH32(esp, 0x224500);
    PUSH32(esp, 3);
    PUSH32(esp, 0xC);
    eax = MEM32(ebp + -52);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEDA8u); RECOMP_ABI_CALL(0x002C1A86u, sub_002C1A86); /* call 0x002C1A86 */

loc_002CEDA8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CEDA9
 * Original: 0x002CEDA9 - 0x002CEDB3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEDA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEDA9: ;
    eax = 0x3552C0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEDC0
 * Original: 0x002CEDC0 - 0x002CEDC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEDC0: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_002B43A0(); return; /* tail jmp 0x002B43A0 */

}

/**
 * sub_002CEDC8
 * Original: 0x002CEDC8 - 0x002CEDD2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEDC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEDC8: ;
    eax = 0x3552E4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEDE0
 * Original: 0x002CEDE0 - 0x002CEDE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEDE0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_002B43A0(); return; /* tail jmp 0x002B43A0 */

}

/**
 * sub_002CEDE8
 * Original: 0x002CEDE8 - 0x002CEDF2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEDE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEDE8: ;
    eax = 0x355308;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEE00
 * Original: 0x002CEE00 - 0x002CEE08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE00: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_002B43A0(); return; /* tail jmp 0x002B43A0 */

}

/**
 * sub_002CEE08
 * Original: 0x002CEE08 - 0x002CEE12 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE08: ;
    eax = 0x35532C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEE20
 * Original: 0x002CEE20 - 0x002CEE28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE20: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_002B4620(); return; /* tail jmp 0x002B4620 */

}

/**
 * sub_002CEE28
 * Original: 0x002CEE28 - 0x002CEE30 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE28: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_002B43A0(); return; /* tail jmp 0x002B43A0 */

}

/**
 * sub_002CEE30
 * Original: 0x002CEE30 - 0x002CEE38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE30: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_002246F0(); return; /* tail jmp 0x002246F0 */

}

/**
 * sub_002CEE38
 * Original: 0x002CEE38 - 0x002CEE42 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE38: ;
    eax = 0x355360;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEE50
 * Original: 0x002CEE50 - 0x002CEE58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE50: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_002B47F0(); return; /* tail jmp 0x002B47F0 */

}

/**
 * sub_002CEE58
 * Original: 0x002CEE58 - 0x002CEE63 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE58: ;
    ecx = ebp + -156;
    g_seh_ebp = ebp; sub_002B43A0(); return; /* tail jmp 0x002B43A0 */

}

/**
 * sub_002CEE63
 * Original: 0x002CEE63 - 0x002CEE6D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE63: ;
    eax = 0x35538C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEE70
 * Original: 0x002CEE70 - 0x002CEE78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE70: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_002B47F0(); return; /* tail jmp 0x002B47F0 */

}

/**
 * sub_002CEE78
 * Original: 0x002CEE78 - 0x002CEE82 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE78: ;
    eax = 0x3553B0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEE90
 * Original: 0x002CEE90 - 0x002CEE9B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE90: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEE99u); RECOMP_ABI_CALL(0x002B29C0u, sub_002B29C0); /* call 0x002B29C0 */

loc_002CEE99: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CEE9B
 * Original: 0x002CEE9B - 0x002CEEA5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEE9B: ;
    eax = 0x3553D4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEEB0
 * Original: 0x002CEEB0 - 0x002CEEB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEEB0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CEEB8
 * Original: 0x002CEEB8 - 0x002CEEC3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEEB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEEB8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CEEC3
 * Original: 0x002CEEC3 - 0x002CEED9 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEEC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEEC3: ;
    PUSH32(esp, 0x224500);
    PUSH32(esp, 3);
    PUSH32(esp, 0xC);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEED8u); RECOMP_ABI_CALL(0x002C1A86u, sub_002C1A86); /* call 0x002C1A86 */

loc_002CEED8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CEED9
 * Original: 0x002CEED9 - 0x002CEEE3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEED9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEED9: ;
    eax = 0x355408;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEEF0
 * Original: 0x002CEEF0 - 0x002CEEF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEEF0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_002B43A0(); return; /* tail jmp 0x002B43A0 */

}

/**
 * sub_002CEEF8
 * Original: 0x002CEEF8 - 0x002CEF02 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEEF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEEF8: ;
    eax = 0x35542C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEF10
 * Original: 0x002CEF10 - 0x002CEF18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEF10: ;
    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_002B43A0(); return; /* tail jmp 0x002B43A0 */

}

/**
 * sub_002CEF18
 * Original: 0x002CEF18 - 0x002CEF20 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEF18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEF18: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_002B44E0(); return; /* tail jmp 0x002B44E0 */

}

/**
 * sub_002CEF20
 * Original: 0x002CEF20 - 0x002CEF28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEF20: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_002B44E0(); return; /* tail jmp 0x002B44E0 */

}

/**
 * sub_002CEF28
 * Original: 0x002CEF28 - 0x002CEF30 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEF28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEF28: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_002B44E0(); return; /* tail jmp 0x002B44E0 */

}

/**
 * sub_002CEF30
 * Original: 0x002CEF30 - 0x002CEF38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEF30: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_002B44E0(); return; /* tail jmp 0x002B44E0 */

}

/**
 * sub_002CEF38
 * Original: 0x002CEF38 - 0x002CEF42 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEF38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEF38: ;
    eax = 0x355470;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEF50
 * Original: 0x002CEF50 - 0x002CEF5B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEF50: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CEF59u); RECOMP_ABI_CALL(0x002BDA60u, sub_002BDA60); /* call 0x002BDA60 */

loc_002CEF59: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CEF5B
 * Original: 0x002CEF5B - 0x002CEF65 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEF5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEF5B: ;
    eax = 0x355494;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CEF70
 * Original: 0x002CEF70 - 0x002CEF86 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEF70(void)
{

loc_002CEF70: ;
    ecx = 0x3864D8;
    PUSH32(esp, 0x002CEF7Au); RECOMP_ABI_CALL(0x0007B390u, sub_0007B390); /* call 0x0007B390 */

loc_002CEF7A: ;
    PUSH32(esp, 0x2D5FA0);
    PUSH32(esp, 0x002CEF84u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CEF84: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CEF90
 * Original: 0x002CEF90 - 0x002CEFB1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEF90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CEF90: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3887C8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CEFC0
 * Original: 0x002CEFC0 - 0x002CEFD6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEFC0(void)
{

loc_002CEFC0: ;
    ecx = 0x3887D0;
    PUSH32(esp, 0x002CEFCAu); RECOMP_ABI_CALL(0x0015C580u, sub_0015C580); /* call 0x0015C580 */

loc_002CEFCA: ;
    PUSH32(esp, 0x2D5F60);
    PUSH32(esp, 0x002CEFD4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CEFD4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CEFE0
 * Original: 0x002CEFE0 - 0x002CEFF6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEFE0(void)
{

loc_002CEFE0: ;
    ecx = 0x3888C0;
    PUSH32(esp, 0x002CEFEAu); RECOMP_ABI_CALL(0x0007B5B0u, sub_0007B5B0); /* call 0x0007B5B0 */

loc_002CEFEA: ;
    PUSH32(esp, 0x2D5F90);
    PUSH32(esp, 0x002CEFF4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CEFF4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF000
 * Original: 0x002CF000 - 0x002CF016 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF000(void)
{

loc_002CF000: ;
    ecx = 0x389F60;
    PUSH32(esp, 0x002CF00Au); RECOMP_ABI_CALL(0x001373B0u, sub_001373B0); /* call 0x001373B0 */

loc_002CF00A: ;
    PUSH32(esp, 0x2D5F70);
    PUSH32(esp, 0x002CF014u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF014: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF020
 * Original: 0x002CF020 - 0x002CF03F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF020(void)
{

loc_002CF020: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x280);
    ecx = 0x389FD0;
    PUSH32(esp, 0x002CF033u); RECOMP_ABI_CALL(0x00014020u, sub_00014020); /* call 0x00014020 */

loc_002CF033: ;
    PUSH32(esp, 0x2D5F80);
    PUSH32(esp, 0x002CF03Du); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF03D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF040
 * Original: 0x002CF040 - 0x002CF061 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF040(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF040: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x38DCC4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF070
 * Original: 0x002CF070 - 0x002CF07C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF070(void)
{

loc_002CF070: ;
    PUSH32(esp, 0x2D5FF0);
    PUSH32(esp, 0x002CF07Au); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF07A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF080
 * Original: 0x002CF080 - 0x002CF0BC (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CF080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x38DD4D;
    ebp = 0x5FF;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002CF090: ;
    edi = esi + -45;
    ecx = edi;
    PUSH32(esp, 0x002CF09Au); RECOMP_ABI_CALL(0x000172F0u, sub_000172F0); /* call 0x000172F0 */

loc_002CF09A: ;
    MEM32(esi + -37) = ebx;
    MEM8(esi) = LO8(ebx);
    MEM8(esi + -1) = LO8(ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = ebx;
    if ((_fa != 0)) goto loc_002CF090; /* jne: not equal / not zero */

loc_002CF0AA: ;
    PUSH32(esp, 0x2D6000);
    PUSH32(esp, 0x002CF0B4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF0B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF0C0
 * Original: 0x002CF0C0 - 0x002CF0E1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF0C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF0C0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A00F8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF0F0
 * Original: 0x002CF0F0 - 0x002CF107 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF0F0(void)
{

loc_002CF0F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CD80);
    PUSH32(esp, 0xAF9854F);
    ecx = 0x3A00FC;
    PUSH32(esp, 0x002CF106u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002CF106: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CF110
 * Original: 0x002CF110 - 0x002CF131 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF110(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF110: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A010C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF140
 * Original: 0x002CF140 - 0x002CF161 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF140(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF140: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A0110) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF170
 * Original: 0x002CF170 - 0x002CF187 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF170(void)
{

loc_002CF170: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D3E0);
    PUSH32(esp, 0x1C4F382F);
    ecx = 0x3A0114;
    PUSH32(esp, 0x002CF186u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002CF186: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CF190
 * Original: 0x002CF190 - 0x002CF1B1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF190(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF190: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A0128) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF1C0
 * Original: 0x002CF1C0 - 0x002CF1D7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF1C0(void)
{

loc_002CF1C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1E300);
    PUSH32(esp, 0x507D0D05);
    ecx = 0x3A012C;
    PUSH32(esp, 0x002CF1D6u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002CF1D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CF1E0
 * Original: 0x002CF1E0 - 0x002CF201 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF1E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF1E0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A013C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF210
 * Original: 0x002CF210 - 0x002CF231 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF210(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF210: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A0144) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF240
 * Original: 0x002CF240 - 0x002CF261 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF240(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF240: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A0148) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF270
 * Original: 0x002CF270 - 0x002CF284 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF270(void)
{

loc_002CF270: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE11D0E3);
    ecx = 0x3A014C;
    PUSH32(esp, 0x002CF283u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002CF283: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CF290
 * Original: 0x002CF290 - 0x002CF2B1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF290(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF290: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A015C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF2C0
 * Original: 0x002CF2C0 - 0x002CF2E1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF2C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF2C0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A0180) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF2F0
 * Original: 0x002CF2F0 - 0x002CF306 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF2F0(void)
{

loc_002CF2F0: ;
    ecx = 0x3A0190;
    PUSH32(esp, 0x002CF2FAu); RECOMP_ABI_CALL(0x000EEFF0u, sub_000EEFF0); /* call 0x000EEFF0 */

loc_002CF2FA: ;
    PUSH32(esp, 0x2D6060);
    PUSH32(esp, 0x002CF304u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF304: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF310
 * Original: 0x002CF310 - 0x002CF325 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF310(void)
{

loc_002CF310: ;
    PUSH32(esp, 0x256A0);
    PUSH32(esp, 0x300640);
    ecx = 0x3A01C0;
    PUSH32(esp, 0x002CF324u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002CF324: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CF330
 * Original: 0x002CF330 - 0x002CF351 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF330(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF330: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A01D0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF360
 * Original: 0x002CF360 - 0x002CF381 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF360(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF360: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A01D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF390
 * Original: 0x002CF390 - 0x002CF3B1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF390(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF390: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A020C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF3C0
 * Original: 0x002CF3C0 - 0x002CF3E1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF3C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF3C0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A022C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF3F0
 * Original: 0x002CF3F0 - 0x002CF3FC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF3F0(void)
{

loc_002CF3F0: ;
    PUSH32(esp, 0x2D60B0);
    PUSH32(esp, 0x002CF3FAu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF3FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF400
 * Original: 0x002CF400 - 0x002CF421 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF400(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF400: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A024C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF430
 * Original: 0x002CF430 - 0x002CF451 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF430(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF430: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A0258) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF460
 * Original: 0x002CF460 - 0x002CF477 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF460(void)
{

loc_002CF460: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x328C0);
    PUSH32(esp, 0xB6862049u);
    ecx = 0x3A0260;
    PUSH32(esp, 0x002CF476u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002CF476: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CF480
 * Original: 0x002CF480 - 0x002CF497 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF480(void)
{

loc_002CF480: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x32BC0);
    PUSH32(esp, 0xD3204AAFu);
    ecx = 0x3A0270;
    PUSH32(esp, 0x002CF496u); RECOMP_ABI_CALL(0x00035780u, sub_00035780); /* call 0x00035780 */

loc_002CF496: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CF4A0
 * Original: 0x002CF4A0 - 0x002CF4C1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF4A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF4A0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A02A0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF4D0
 * Original: 0x002CF4D0 - 0x002CF4DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF4D0(void)
{

loc_002CF4D0: ;
    PUSH32(esp, 0x2D60D0);
    PUSH32(esp, 0x002CF4DAu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF4DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF4E0
 * Original: 0x002CF4E0 - 0x002CF51C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CF4E0: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002CF4E7u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CF4E7: ;
    MEM32(0x3A02E0) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A02E4) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A02E0);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A02E0);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A02E0);
    PUSH32(esp, 0x2D60E0);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CF518u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF518: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CF520
 * Original: 0x002CF520 - 0x002CF55C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CF520: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002CF527u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CF527: ;
    MEM32(0x3A0304) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A0308) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A0304);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A0304);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A0304);
    PUSH32(esp, 0x2D6160);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CF558u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF558: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CF560
 * Original: 0x002CF560 - 0x002CF59C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CF560: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002CF567u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CF567: ;
    MEM32(0x3A0310) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A0314) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A0310);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A0310);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A0310);
    PUSH32(esp, 0x2D61C0);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CF598u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF598: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CF5A0
 * Original: 0x002CF5A0 - 0x002CF5AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF5A0(void)
{

loc_002CF5A0: ;
    PUSH32(esp, 0x2D6140);
    PUSH32(esp, 0x002CF5AAu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF5AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF5B0
 * Original: 0x002CF5B0 - 0x002CF5D1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF5B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF5B0: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A04D0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF5E0
 * Original: 0x002CF5E0 - 0x002CF5EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF5E0(void)
{

loc_002CF5E0: ;
    PUSH32(esp, 0x2D6220);
    PUSH32(esp, 0x002CF5EAu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF5EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF5F0
 * Original: 0x002CF5F0 - 0x002CF5FC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF5F0(void)
{

loc_002CF5F0: ;
    PUSH32(esp, 0x2D6230);
    PUSH32(esp, 0x002CF5FAu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF5FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF600
 * Original: 0x002CF600 - 0x002CF60C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF600(void)
{

loc_002CF600: ;
    PUSH32(esp, 0x2D6240);
    PUSH32(esp, 0x002CF60Au); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF60A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF610
 * Original: 0x002CF610 - 0x002CF631 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF610(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF610: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A6568) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF640
 * Original: 0x002CF640 - 0x002CF64C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF640(void)
{

loc_002CF640: ;
    PUSH32(esp, 0x2D6260);
    PUSH32(esp, 0x002CF64Au); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF64A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF650
 * Original: 0x002CF650 - 0x002CF68C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CF650: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x002CF657u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CF657: ;
    MEM32(0x3A657C) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A6580) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A657C);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A657C);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A657C);
    PUSH32(esp, 0x2D62E0);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CF688u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF688: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CF690
 * Original: 0x002CF690 - 0x002CF6CC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CF690: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x002CF697u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CF697: ;
    MEM32(0x3A6588) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A658C) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A6588);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A6588);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A6588);
    PUSH32(esp, 0x2D6280);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CF6C8u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF6C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CF6D0
 * Original: 0x002CF6D0 - 0x002CF6DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF6D0(void)
{

loc_002CF6D0: ;
    PUSH32(esp, 0x2D6350);
    PUSH32(esp, 0x002CF6DAu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF6DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF6E0
 * Original: 0x002CF6E0 - 0x002CF704 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF6E0(void)
{

loc_002CF6E0: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 6);
    ecx = 0x3A65A8;
    PUSH32(esp, 0x002CF6EEu); RECOMP_ABI_CALL(0x001567B0u, sub_001567B0); /* call 0x001567B0 */

loc_002CF6EE: ;
    PUSH32(esp, 0x2D6340);
    MEM32(0x3A65A8) = 0x3082A4;
    PUSH32(esp, 0x002CF702u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF702: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF710
 * Original: 0x002CF710 - 0x002CF725 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF710(void)
{

loc_002CF710: ;
    PUSH32(esp, 0x3D460);
    PUSH32(esp, 0x30294C);
    ecx = 0x3A65C4;
    PUSH32(esp, 0x002CF724u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002CF724: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CF730
 * Original: 0x002CF730 - 0x002CF751 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF730(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002CF730: ;
    fp_push(MEMD(0x2FEB08)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEB00)); /* fmul dword ptr [0x2feb00] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    MEMF(0x3A65D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002CF760
 * Original: 0x002CF760 - 0x002CF775 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF760(void)
{

loc_002CF760: ;
    PUSH32(esp, 0x3E100);
    PUSH32(esp, 0x30365C);
    ecx = 0x3A65D8;
    PUSH32(esp, 0x002CF774u); RECOMP_ABI_CALL(0x0003AB80u, sub_0003AB80); /* call 0x0003AB80 */

loc_002CF774: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CF780
 * Original: 0x002CF780 - 0x002CF7A0 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF780(void)
{

loc_002CF780: ;
    PUSH32(esp, 0x4970);
    PUSH32(esp, 0x3037FC);
    ecx = 0x3A6670;
    PUSH32(esp, 0x002CF794u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CF794: ;
    PUSH32(esp, 0x2D6370);
    PUSH32(esp, 0x002CF79Eu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF79E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF7A0
 * Original: 0x002CF7A0 - 0x002CF7C0 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF7A0(void)
{

loc_002CF7A0: ;
    PUSH32(esp, 0xBC0);
    PUSH32(esp, 0x3038B8);
    ecx = 0x3A6694;
    PUSH32(esp, 0x002CF7B4u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CF7B4: ;
    PUSH32(esp, 0x2D6380);
    PUSH32(esp, 0x002CF7BEu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF7BE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF7C0
 * Original: 0x002CF7C0 - 0x002CF7E0 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF7C0(void)
{

loc_002CF7C0: ;
    PUSH32(esp, 0xC80);
    PUSH32(esp, 0x3039F0);
    ecx = 0x3A66B8;
    PUSH32(esp, 0x002CF7D4u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CF7D4: ;
    PUSH32(esp, 0x2D6390);
    PUSH32(esp, 0x002CF7DEu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF7DE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF7E0
 * Original: 0x002CF7E0 - 0x002CF800 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF7E0(void)
{

loc_002CF7E0: ;
    PUSH32(esp, 0x4FB0);
    PUSH32(esp, 0x303A48);
    ecx = 0x3A66DC;
    PUSH32(esp, 0x002CF7F4u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CF7F4: ;
    PUSH32(esp, 0x2D63A0);
    PUSH32(esp, 0x002CF7FEu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF7FE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF800
 * Original: 0x002CF800 - 0x002CF849 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CF800: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x372E70);
    ecx = esp + 4;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 4) = 0x303AE8;
    { uint32_t _icall_target = MEM32(0x303AF0); PUSH32(esp, 0x002CF83Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CF839u); } /* indirect call */
    }

loc_002CF83F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CF845u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CF845: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CF850
 * Original: 0x002CF850 - 0x002CF870 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF850(void)
{

loc_002CF850: ;
    PUSH32(esp, 0xABE0);
    PUSH32(esp, 0x303B30);
    ecx = 0x3A6700;
    PUSH32(esp, 0x002CF864u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CF864: ;
    PUSH32(esp, 0x2D63B0);
    PUSH32(esp, 0x002CF86Eu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF86E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF870
 * Original: 0x002CF870 - 0x002CF890 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF870(void)
{

loc_002CF870: ;
    PUSH32(esp, 0x168);
    PUSH32(esp, 0x303BA8);
    ecx = 0x3A6738;
    PUSH32(esp, 0x002CF884u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CF884: ;
    PUSH32(esp, 0x2D63C0);
    PUSH32(esp, 0x002CF88Eu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF88E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF890
 * Original: 0x002CF890 - 0x002CF8D0 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CF890: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002CF897u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CF897: ;
    MEM32(0x3A675C) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A6760) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A675C);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A675C);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A675C);
    PUSH32(esp, 0x2D63D0);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CF8C8u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF8C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CF8D0
 * Original: 0x002CF8D0 - 0x002CF8F0 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF8D0(void)
{

loc_002CF8D0: ;
    PUSH32(esp, 0x5200);
    PUSH32(esp, 0x303E00);
    ecx = 0x3A75BC;
    PUSH32(esp, 0x002CF8E4u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CF8E4: ;
    PUSH32(esp, 0x2D6430);
    PUSH32(esp, 0x002CF8EEu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF8EE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF8F0
 * Original: 0x002CF8F0 - 0x002CF930 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF8F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CF8F0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x002CF8F7u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CF8F7: ;
    MEM32(0x3A75E8) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A75EC) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A75E8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A75E8);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A75E8);
    PUSH32(esp, 0x2D6440);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CF928u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF928: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CF930
 * Original: 0x002CF930 - 0x002CF946 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF930(void)
{

loc_002CF930: ;
    ecx = 0x3A75FC;
    PUSH32(esp, 0x002CF93Au); RECOMP_ABI_CALL(0x000658C0u, sub_000658C0); /* call 0x000658C0 */

loc_002CF93A: ;
    PUSH32(esp, 0x2D64A0);
    PUSH32(esp, 0x002CF944u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF944: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF950
 * Original: 0x002CF950 - 0x002CF966 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF950(void)
{

loc_002CF950: ;
    ecx = 0x3A7628;
    PUSH32(esp, 0x002CF95Au); RECOMP_ABI_CALL(0x000658C0u, sub_000658C0); /* call 0x000658C0 */

loc_002CF95A: ;
    PUSH32(esp, 0x2D64B0);
    PUSH32(esp, 0x002CF964u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF964: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF970
 * Original: 0x002CF970 - 0x002CF986 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF970(void)
{

loc_002CF970: ;
    ecx = 0x3A7654;
    PUSH32(esp, 0x002CF97Au); RECOMP_ABI_CALL(0x000658C0u, sub_000658C0); /* call 0x000658C0 */

loc_002CF97A: ;
    PUSH32(esp, 0x2D64C0);
    PUSH32(esp, 0x002CF984u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF984: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF990
 * Original: 0x002CF990 - 0x002CF9A6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF990(void)
{

loc_002CF990: ;
    ecx = 0x3A7680;
    PUSH32(esp, 0x002CF99Au); RECOMP_ABI_CALL(0x000658C0u, sub_000658C0); /* call 0x000658C0 */

loc_002CF99A: ;
    PUSH32(esp, 0x2D64D0);
    PUSH32(esp, 0x002CF9A4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF9A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF9B0
 * Original: 0x002CF9B0 - 0x002CF9C6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF9B0(void)
{

loc_002CF9B0: ;
    ecx = 0x3A76AC;
    PUSH32(esp, 0x002CF9BAu); RECOMP_ABI_CALL(0x000658C0u, sub_000658C0); /* call 0x000658C0 */

loc_002CF9BA: ;
    PUSH32(esp, 0x2D64E0);
    PUSH32(esp, 0x002CF9C4u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF9C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF9D0
 * Original: 0x002CF9D0 - 0x002CF9F0 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF9D0(void)
{

loc_002CF9D0: ;
    PUSH32(esp, 0x708);
    PUSH32(esp, 0x305508);
    ecx = 0x3A7828;
    PUSH32(esp, 0x002CF9E4u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CF9E4: ;
    PUSH32(esp, 0x2D6520);
    PUSH32(esp, 0x002CF9EEu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CF9EE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF9F0
 * Original: 0x002CF9F0 - 0x002CFA20 (48 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF9F0(void)
{

loc_002CF9F0: ;
    eax = MEM32(0x372FB8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x305514);
    ecx = 0x3A784C;
    PUSH32(esp, 0x002CFA05u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CFA05: ;
    PUSH32(esp, 0x2D6530);
    PUSH32(esp, 0x002CFA0Fu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CFA0F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CFA20
 * Original: 0x002CFA20 - 0x002CFA40 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFA20(void)
{

loc_002CFA20: ;
    PUSH32(esp, 0x9D80);
    PUSH32(esp, 0x3055CC);
    ecx = 0x3A7878;
    PUSH32(esp, 0x002CFA34u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CFA34: ;
    PUSH32(esp, 0x2D6540);
    PUSH32(esp, 0x002CFA3Eu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CFA3E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CFA40
 * Original: 0x002CFA40 - 0x002CFA60 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFA40(void)
{

loc_002CFA40: ;
    xmm0 = XMM_SCALAR(MEMF(0x372FC0)); /* movss */
    MEMF(0x3A789C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFA60
 * Original: 0x002CFA60 - 0x002CFAA5 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFA60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFA60: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x372FC4);
    ecx = esp + 4;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 4) = 0x3055E8;
    { uint32_t _icall_target = MEM32(0x3055F0); PUSH32(esp, 0x002CFA9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFA95u); } /* indirect call */
    }

loc_002CFA9B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFAA1u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFAA1: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFAB0
 * Original: 0x002CFAB0 - 0x002CFADD (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFAB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x372FC8);
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0x305620;
    { uint32_t _icall_target = MEM32(0x305628); PUSH32(esp, 0x002CFAD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFACDu); } /* indirect call */
    }

loc_002CFAD3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFAD9u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFAD9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFAE0
 * Original: 0x002CFAE0 - 0x002CFB11 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFAE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x372FCC);
    ecx = esp + 4;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 4) = 0x305658;
    { uint32_t _icall_target = MEM32(0x305660); PUSH32(esp, 0x002CFB07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFB01u); } /* indirect call */
    }

loc_002CFB07: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFB0Du); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFB0D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFB20
 * Original: 0x002CFB20 - 0x002CFB5C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFB20: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x002CFB27u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_002CFB27: ;
    MEM32(0x3A78C4) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3A78C8) = ecx;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x3A78C4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x3A78C4);
    MEM32(eax + 8) = eax;
    eax = MEM32(0x3A78C4);
    PUSH32(esp, 0x2D6590);
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x002CFB58u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CFB58: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFB60
 * Original: 0x002CFB60 - 0x002CFB80 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFB60(void)
{

loc_002CFB60: ;
    PUSH32(esp, 0xB00);
    PUSH32(esp, 0x30569C);
    ecx = 0x3A78D0;
    PUSH32(esp, 0x002CFB74u); RECOMP_ABI_CALL(0x00065970u, sub_00065970); /* call 0x00065970 */

loc_002CFB74: ;
    PUSH32(esp, 0x2D65F0);
    PUSH32(esp, 0x002CFB7Eu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_002CFB7E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CFB80
 * Original: 0x002CFB80 - 0x002CFBB0 (48 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFB80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x372FD8);
    ecx = esp + 4;
    MEM32(esp + 4) = 0x305734;
    { uint32_t _icall_target = MEM32(0x30573C); PUSH32(esp, 0x002CFB98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFB92u); } /* indirect call */
    }

loc_002CFB98: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFB9Eu); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFB9E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFBB0
 * Original: 0x002CFBB0 - 0x002CFBE5 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFBB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFBB0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x372FDC);
    ecx = esp + 4;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0x305774;
    { uint32_t _icall_target = MEM32(0x30577C); PUSH32(esp, 0x002CFBDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFBD5u); } /* indirect call */
    }

loc_002CFBDB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFBE1u); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFBE1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFBF0
 * Original: 0x002CFBF0 - 0x002CFC12 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFBF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFBF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x372FE0);
    ecx = esp + 4;
    MEM32(esp + 4) = 0x3057B4;
    { uint32_t _icall_target = MEM32(0x3057BC); PUSH32(esp, 0x002CFC08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFC02u); } /* indirect call */
    }

loc_002CFC08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFC0Eu); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFC0E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CFC20
 * Original: 0x002CFC20 - 0x002CFC42 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CFC20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002CFC20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x372FE4);
    ecx = esp + 4;
    MEM32(esp + 4) = 0x3057F0;
    { uint32_t _icall_target = MEM32(0x3057F8); PUSH32(esp, 0x002CFC38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002CFC32u); } /* indirect call */
    }

loc_002CFC38: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CFC3Eu); RECOMP_ABI_CALL(0x001531E0u, sub_001531E0); /* call 0x001531E0 */

loc_002CFC3E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
