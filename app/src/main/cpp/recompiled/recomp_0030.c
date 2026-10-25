/**
 * Medal of Honor European Assault - Recompiled code chunk 30
 * Functions: 250 (0x000FD570 - 0x001065F0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000FD570
 * Original: 0x000FD570 - 0x000FD57E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD570(void)
{

loc_000FD570: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000FD578u); RECOMP_ABI_CALL(0x000FCCE0u, sub_000FCCE0); /* call 0x000FCCE0 */

loc_000FD578: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FD580
 * Original: 0x000FD580 - 0x000FD585 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD580: ;
    g_seh_ebp = ebp; sub_000F44E0(); return; /* tail jmp 0x000F44E0 */

}

/**
 * sub_000FD590
 * Original: 0x000FD590 - 0x000FD595 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD590: ;
    g_seh_ebp = ebp; sub_001890B0(); return; /* tail jmp 0x001890B0 */

}

/**
 * sub_000FD5A0
 * Original: 0x000FD5A0 - 0x000FD5FE (94 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD5A0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD5FC; /* je: equal / zero */

loc_000FD5A9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD5FB; /* je: equal / zero */

loc_000FD5B2: ;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FD5C4; /* jl: less (signed <) */

loc_000FD5BC: ;
    eax = esi + 0x8C;
    goto loc_000FD5C6;

loc_000FD5C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FD5C6: ;
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000FD5D9u); RECOMP_ABI_CALL(0x000FC380u, sub_000FC380); /* call 0x000FC380 */

loc_000FD5D9: ;
    edx = MEM32(esi + 0xF4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000FD5E7u); RECOMP_ABI_CALL(0x000FC3B0u, sub_000FC3B0); /* call 0x000FC3B0 */

loc_000FD5E7: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000FD5FBu); RECOMP_ABI_CALL(0x000FC650u, sub_000FC650); /* call 0x000FC650 */

loc_000FD5FB: ;
    POP32(esp, esi);

loc_000FD5FC: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD600
 * Original: 0x000FD600 - 0x000FD61D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD600: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD61C; /* je: equal / zero */

loc_000FD608: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD61C; /* je: equal / zero */

loc_000FD610: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FD61Cu); RECOMP_ABI_CALL(0x000FC380u, sub_000FC380); /* call 0x000FC380 */

loc_000FD61C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FD620
 * Original: 0x000FD620 - 0x000FD668 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD620: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD667; /* je: equal / zero */

loc_000FD628: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD667; /* je: equal / zero */

loc_000FD630: ;
    edx = MEM32(eax + 0x3C);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x48);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x40);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x4C);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0x50);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x54);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ecx + 0x10) = LO8(edx);
    edx = MEM32(eax + 0x44);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 0xEC);
    MEM32(ecx + 0x20) = eax;

loc_000FD667: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FD670
 * Original: 0x000FD670 - 0x000FD6C8 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD670: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD6C7; /* je: equal / zero */

loc_000FD678: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD6C7; /* je: equal / zero */

loc_000FD680: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x90);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x98);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0x9C);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x94);
    MEM32(ecx + 0x18) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x128)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xED497BEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x128), 0xED497BEAu (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x20) = edx;

loc_000FD6C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FD6D0
 * Original: 0x000FD6D0 - 0x000FD70A (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD6D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD708; /* je: equal / zero */

loc_000FD6D9: ;
    eax = MEM32(0x3864D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FD6FC; /* jle: less or equal (signed <=) */

loc_000FD6E2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x154); PUSH32(esp, 0x000FD6ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD6E6u); } /* indirect call */
    }

loc_000FD6EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3173C8);
    PUSH32(esp, 0x000FD6F9u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000FD6F9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FD6FC: ;
    ecx = esi + 0xB0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000EF330(); return; /* tail jmp 0x000EF330 */

loc_000FD708: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD710
 * Original: 0x000FD710 - 0x000FD713 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD710: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FD720
 * Original: 0x000FD720 - 0x000FD734 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD720: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD731; /* je: equal / zero */

loc_000FD728: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014DB60(); return; /* tail jmp 0x0014DB60 */

loc_000FD731: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FD740
 * Original: 0x000FD740 - 0x000FD7F6 (182 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD740: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780A2792) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x780A2792 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000FD7A3; /* ja: above (unsigned >) */

loc_000FD74B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FD79D; /* je: equal / zero */

loc_000FD74D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4FBDD114) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4FBDD114 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000FD783; /* ja: above (unsigned >) */

loc_000FD754: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FD77D; /* je: equal / zero */

loc_000FD756: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x71D3027) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x71D3027 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD777; /* je: equal / zero */

loc_000FD75D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x203DD629) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x203DD629 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD771; /* je: equal / zero */

loc_000FD764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x211FE820) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x211FE820 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD7E7; /* jne: not equal / not zero */

loc_000FD76B: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_000FD771: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_000FD777: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000FD77D: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_000FD783: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x651F5F95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x651F5F95 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD797; /* je: equal / zero */

loc_000FD78A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E9FA2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E9FA2D0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD7E7; /* jne: not equal / not zero */

loc_000FD791: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_000FD797: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_000FD79D: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_000FD7A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC9E6368Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC9E6368Eu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000FD7D9; /* ja: above (unsigned >) */

loc_000FD7AA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FD7D3; /* je: equal / zero */

loc_000FD7AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0D5BB89u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0D5BB89u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD7CD; /* je: equal / zero */

loc_000FD7B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA55DDA2Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA55DDA2Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD7C7; /* je: equal / zero */

loc_000FD7BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB711E87Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB711E87Fu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD7E7; /* jne: not equal / not zero */

loc_000FD7C1: ;
    eax = 9;
    esp += 4; return; /* ret */

loc_000FD7C7: ;
    eax = 0xB;
    esp += 4; return; /* ret */

loc_000FD7CD: ;
    eax = 0xD;
    esp += 4; return; /* ret */

loc_000FD7D3: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_000FD7D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xECB9B42Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xECB9B42Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD7F0; /* je: equal / zero */

loc_000FD7E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF4A6B7D5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF4A6B7D5u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD7EA; /* je: equal / zero */

loc_000FD7E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000FD7EA: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_000FD7F0: ;
    eax = 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000FD800
 * Original: 0x000FD800 - 0x000FD81B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD800: ;
    ecx = MEM32(0x3DB8F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD810; /* je: equal / zero */

loc_000FD80A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FD810u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD80Eu); } /* indirect call */
    }

loc_000FD810: ;
    MEM32(0x3DB8F0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000FD820
 * Original: 0x000FD820 - 0x000FD821 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD820(void)
{

loc_000FD820: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FD830
 * Original: 0x000FD830 - 0x000FD84E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD830: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FD844; /* jge: greater or equal (signed >=) */

loc_000FD840: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000FD844: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000FD850
 * Original: 0x000FD850 - 0x000FD851 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD850(void)
{

loc_000FD850: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FD860
 * Original: 0x000FD860 - 0x000FD863 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD860: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FD870
 * Original: 0x000FD870 - 0x000FD875 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD870: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000FD880
 * Original: 0x000FD880 - 0x000FD885 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD880(void)
{

loc_000FD880: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000FD890
 * Original: 0x000FD890 - 0x000FD896 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD890: ;
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FD8A0
 * Original: 0x000FD8A0 - 0x000FD923 (131 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD8A0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x74) = ecx;
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0x84) = ecx;
    MEM32(eax + 0xEC) = ecx;
    MEM32(eax + 0xF0) = ecx;
    MEM32(eax + 0xF4) = ecx;
    MEMF(eax + 0xF8) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x58) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FD930
 * Original: 0x000FD930 - 0x000FD9D9 (169 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD930: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000FD95B; /* jne: not equal / not zero */

loc_000FD945: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x3DB930;
    PUSH32(esp, 0x000FD954u); RECOMP_ABI_CALL(0x000FE510u, sub_000FE510); /* call 0x000FE510 */

loc_000FD954: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD971; /* jne: not equal / not zero */

loc_000FD958: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000FD95B: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3DB960;
    PUSH32(esp, 0x000FD96Au); RECOMP_ABI_CALL(0x000FE510u, sub_000FE510); /* call 0x000FE510 */

loc_000FD96A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD971; /* jne: not equal / not zero */

loc_000FD96E: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000FD971: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edi + 0x6C); /* cvtsi2ss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEMF(esi + 0x204) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, MEM8(esi + 0x248));
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) << 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 8);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x248) = LO8(ecx);
    eax = MEM32(edi + 0x60);
    MEM32(esi + 0x208) = eax;
    ecx = MEM32(edi + 0x5C);
    MEM32(esi + 0x20C) = ecx;
    edx = MEM32(edi + 0x70);
    MEM32(esi + 0x210) = edx;
    eax = MEM32(edi + 0xF8);
    MEM32(esi + 0x200) = eax;
    ecx = MEM32(edi + 0x58);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000FD9D3u); RECOMP_ABI_CALL(0x000FE800u, sub_000FE800); /* call 0x000FE800 */

loc_000FD9D3: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD9E0
 * Original: 0x000FD9E0 - 0x000FD9FB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD9E0: ;
    ecx = MEM32(0x3DB8F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD9F0; /* je: equal / zero */

loc_000FD9EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FD9F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FD9EEu); } /* indirect call */
    }

loc_000FD9F0: ;
    MEM32(0x3DB8F0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000FDA00
 * Original: 0x000FDA00 - 0x000FDA01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDA00(void)
{

loc_000FDA00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FDA10
 * Original: 0x000FDA10 - 0x000FDA2E (30 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FDA10: ;
    ecx = 0x3DB900;
    PUSH32(esp, 0x000FDA1Au); RECOMP_ABI_CALL(0x000EF3E0u, sub_000EF3E0); /* call 0x000EF3E0 */

loc_000FDA1A: ;
    ecx = 0x3DB930;
    PUSH32(esp, 0x000FDA24u); RECOMP_ABI_CALL(0x000EF3E0u, sub_000EF3E0); /* call 0x000EF3E0 */

loc_000FDA24: ;
    ecx = 0x3DB960;
    g_seh_ebp = ebp; sub_000EF3E0(); return; /* tail jmp 0x000EF3E0 */

}

/**
 * sub_000FDA30
 * Original: 0x000FDA30 - 0x000FDA44 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDA30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x3173F8;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000FDA50
 * Original: 0x000FDA50 - 0x000FDA62 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDA50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDA50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx) = 0x2FF0D4;
    esp += 4; return; /* ret */

}

/**
 * sub_000FDA70
 * Original: 0x000FDA70 - 0x000FDAD1 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDA70: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3DB8F0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDAB1; /* jne: not equal / not zero */

loc_000FDA7D: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x317434);
    PUSH32(esp, 0x000FDA8Eu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000FDA8E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDAAB; /* je: equal / zero */

loc_000FDA95: ;
    MEM32(eax) = 0x3173F8;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(0x3DB8F0) = eax;
    goto loc_000FDAB1;

loc_000FDAAB: ;
    MEM32(0x3DB8F0) = esi;

loc_000FDAB1: ;
    PUSH32(esp, 0x317420);
    ecx = esp + 8;
    PUSH32(esp, 0x000FDABFu); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000FDABF: ;
    PUSH32(esp, eax);
    eax = MEM32(0x3DB8F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FDACBu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000FDACB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FDAE0
 * Original: 0x000FDAE0 - 0x000FDE69 (905 bytes, 313 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDAE0(void)
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

loc_000FDAE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xFC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000FDAFEu); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000FDAFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD93CA11Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD93CA11Du (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FDCC4; /* jg: greater (signed >) */

loc_000FDB09: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FDC87; /* je: equal / zero */

loc_000FDB0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA7D3C1DBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA7D3C1DBu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FDBD2; /* jg: greater (signed >) */

loc_000FDB1A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FDBC0; /* je: equal / zero */

loc_000FDB20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95FF1BB2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x95FF1BB2u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FDB8A; /* jg: greater (signed >) */

loc_000FDB27: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FDB78; /* je: equal / zero */

loc_000FDB29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x83DDFA1Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x83DDFA1Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDB66; /* je: equal / zero */

loc_000FDB30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8641DC6Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8641DC6Eu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDB54; /* je: equal / zero */

loc_000FDB37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x879FB252u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x879FB252u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDE63; /* jne: not equal / not zero */

loc_000FDB42: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDB4Bu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000FDB4B: ;
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDB54: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDB5Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDB5D: ;
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDB66: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDB6Fu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDB6F: ;
    POP32(esp, edi);
    MEM32(esi + 0x30) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDB78: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDB81u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDB81: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDB8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9CBBAB2Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9CBBAB2Eu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDBAE; /* je: equal / zero */

loc_000FDB91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9FE9E228u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9FE9E228u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDE63; /* jne: not equal / not zero */

loc_000FDB9C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDBA5u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDBA5: ;
    POP32(esp, edi);
    MEM32(esi + 0x40) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDBAE: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDBB7u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDBB7: ;
    POP32(esp, edi);
    MEM32(esi + 0x44) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDBC0: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDBC9u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000FDBC9: ;
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDBD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCC31F458u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCC31F458u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FDC51; /* jg: greater (signed >) */

loc_000FDBD9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FDC3C; /* je: equal / zero */

loc_000FDBDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB1C12D50u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB1C12D50u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDC2A; /* je: equal / zero */

loc_000FDBE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB92CD2C7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB92CD2C7u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDC06; /* je: equal / zero */

loc_000FDBE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBCCA393Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBCCA393Fu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDE63; /* jne: not equal / not zero */

loc_000FDBF4: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDBFDu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDBFD: ;
    POP32(esp, edi);
    MEM32(esi + 0x68) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDC06: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDE63; /* je: equal / zero */

loc_000FDC18: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDC21u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDC21: ;
    POP32(esp, edi);
    MEM32(esi + 0x48) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDC2A: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDC33u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDC33: ;
    POP32(esp, edi);
    MEM32(esi + 0x74) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDC3C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDC45u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000FDC45: ;
    MEMF(esi + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDC51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCC67BE18u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCC67BE18u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDC75; /* je: equal / zero */

loc_000FDC58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD21E3D30u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD21E3D30u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDE63; /* jne: not equal / not zero */

loc_000FDC63: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDC6Cu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDC6C: ;
    POP32(esp, edi);
    MEM32(esi + 0x38) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDC75: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDC7Eu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDC7E: ;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDC87: ;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x000FDC98u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDC98: ;
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(esi + 0x7C) = eax;
    PUSH32(esp, 0x000FDCA4u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDCA4: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(esi + 0x80) = eax;
    PUSH32(esp, 0x000FDCB5u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000FDCB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xF4) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDCC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24FEC0D9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24FEC0D9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FDD9A; /* jg: greater (signed >) */

loc_000FDCCF: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FDD88; /* je: equal / zero */

loc_000FDCD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78DDDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78DDDDA (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FDD52; /* jg: greater (signed >) */

loc_000FDCDC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FDD40; /* je: equal / zero */

loc_000FDCDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE1EC2CC8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE1EC2CC8u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDC18; /* je: equal / zero */

loc_000FDCE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEB7A7A5Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEB7A7A5Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDD2E; /* je: equal / zero */

loc_000FDCF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF252A4DEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF252A4DEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDE63; /* jne: not equal / not zero */

loc_000FDCFB: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x000FDD0Eu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000FDD0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDE63; /* je: equal / zero */

loc_000FDD19: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FDD1Fu); RECOMP_ABI_CALL(0x000FD720u, sub_000FD720); /* call 0x000FD720 */

loc_000FDD1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xF0) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDD2E: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDD37u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000FDD37: ;
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDD40: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDD49u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDD49: ;
    POP32(esp, edi);
    MEM32(esi + 0x58) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDD52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93C1813) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x93C1813 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDD76; /* je: equal / zero */

loc_000FDD59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22FA65C8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x22FA65C8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDE63; /* jne: not equal / not zero */

loc_000FDD64: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDD6Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDD6D: ;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDD76: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDD7Fu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDD7F: ;
    POP32(esp, edi);
    MEM32(esi + 0x34) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDD88: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDD91u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDD91: ;
    POP32(esp, edi);
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDD9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5BEAE6DF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5BEAE6DF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FDE37; /* jg: greater (signed >) */

loc_000FDDA5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FDE25; /* je: equal / zero */

loc_000FDDA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34097209) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34097209 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDE10; /* je: equal / zero */

loc_000FDDAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x415D9568) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x415D9568 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDDD2; /* je: equal / zero */

loc_000FDDB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x548813A6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x548813A6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDE63; /* jne: not equal / not zero */

loc_000FDDC0: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDDC9u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDDC9: ;
    POP32(esp, edi);
    MEM32(esi + 0x4C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDDD2: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDDE6; /* jne: not equal / not zero */

loc_000FDDDC: ;
    MEM32(esi + 0x84) = 1;

loc_000FDDE6: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x000FDDF9u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000FDDF9: ;
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + ecx * 4 + 0xC) = eax;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebx + 4) = eax;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDE10: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDE19u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDE19: ;
    POP32(esp, edi);
    MEM32(esi + 0x84) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDE25: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDE2Eu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000FDE2E: ;
    POP32(esp, edi);
    MEM32(esi + 0x54) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDE37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5EB98BEC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5EB98BEC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDE57; /* je: equal / zero */

loc_000FDE3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6FC1DC98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6FC1DC98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDE63; /* jne: not equal / not zero */

loc_000FDE45: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDE4Eu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000FDE4E: ;
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000FDE57: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000FDE60u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000FDE60: ;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FDE63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FDE70
 * Original: 0x000FDE70 - 0x000FDEA5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDE70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDE70: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esi + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000FDE89u); RECOMP_ABI_CALL(0x000FD8A0u, sub_000FD8A0); /* call 0x000FD8A0 */

loc_000FDE89: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(ecx);
    MEM32(edx + 4) = eax;
    MEM32(esi + 4) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FDEB0
 * Original: 0x000FDEB0 - 0x000FDF2B (123 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDEB0: ;
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xFC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x108);
    PUSH32(esp, 0xFD830);
    PUSH32(esp, 0xFC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0xA4) = 0xFFFFFFFFu;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x000FDEEAu); RECOMP_ABI_CALL(0x002BECF0u, sub_002BECF0); /* call 0x002BECF0 */

loc_000FDEEA: ;
    esi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDF01; /* jne: not equal / not zero */

loc_000FDEF3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x31563C);
    PUSH32(esp, 0x000FDEFEu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000FDEFE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FDF01: ;
    eax = MEM32(esp + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FDF1E; /* jl: less (signed <) */

loc_000FDF0C: ;
    eax = MEM32(esp + 0x94);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x98;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FDF1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FDF1Cu); } /* indirect call */
    }

loc_000FDF1E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FDF30
 * Original: 0x000FDF30 - 0x000FDF41 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDF30(void)
{

loc_000FDF30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x3DB8F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FDF40u); RECOMP_ABI_CALL(0x000FDEB0u, sub_000FDEB0); /* call 0x000FDEB0 */

loc_000FDF40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FDF50
 * Original: 0x000FDF50 - 0x000FDF89 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDF50: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    ecx = 0x3DB900;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x000FDF67u); RECOMP_ABI_CALL(0x000FE590u, sub_000FE590); /* call 0x000FE590 */

loc_000FDF67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDF84; /* jne: not equal / not zero */

loc_000FDF6B: ;
    PUSH32(esp, 0x000FDF70u); RECOMP_ABI_CALL(0x00039820u, sub_00039820); /* call 0x00039820 */

loc_000FDF70: ;
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = 0x3DB900;
    PUSH32(esp, 0x000FDF7Eu); RECOMP_ABI_CALL(0x000FE590u, sub_000FE590); /* call 0x000FE590 */

loc_000FDF7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDF84; /* jne: not equal / not zero */

loc_000FDF82: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000FDF84: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FDF90
 * Original: 0x000FDF90 - 0x000FDFC9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDF90: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    ecx = 0x3DB900;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x000FDFA7u); RECOMP_ABI_CALL(0x000FE590u, sub_000FE590); /* call 0x000FE590 */

loc_000FDFA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDFC4; /* jne: not equal / not zero */

loc_000FDFAB: ;
    PUSH32(esp, 0x000FDFB0u); RECOMP_ABI_CALL(0x00039820u, sub_00039820); /* call 0x00039820 */

loc_000FDFB0: ;
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = 0x3DB900;
    PUSH32(esp, 0x000FDFBEu); RECOMP_ABI_CALL(0x000FE590u, sub_000FE590); /* call 0x000FE590 */

loc_000FDFBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDFC4; /* jne: not equal / not zero */

loc_000FDFC2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000FDFC4: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FDFD0
 * Original: 0x000FDFD0 - 0x000FDFEB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDFD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x3DB8F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FDFE0u); RECOMP_ABI_CALL(0x000FDEB0u, sub_000FDEB0); /* call 0x000FDEB0 */

loc_000FDFE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDFE8; /* je: equal / zero */

loc_000FDFE4: ;
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

loc_000FDFE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FDFF0
 * Original: 0x000FDFF0 - 0x000FE017 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDFF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x3DB8F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FE000u); RECOMP_ABI_CALL(0x000FDEB0u, sub_000FDEB0); /* call 0x000FDEB0 */

loc_000FE000: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE014; /* je: equal / zero */

loc_000FE004: ;
    ecx = MEM32(eax + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FE014; /* jl: less (signed <) */

loc_000FE00E: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FE014: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FE000
 * Original: 0x000FE000 - 0x000FE017 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE000: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE014; /* je: equal / zero */

loc_000FE004: ;
    ecx = MEM32(eax + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FE014; /* jl: less (signed <) */

loc_000FE00E: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FE014: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FE020
 * Original: 0x000FE020 - 0x000FE03C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE020: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x3DB8F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FE030u); RECOMP_ABI_CALL(0x000FDEB0u, sub_000FDEB0); /* call 0x000FDEB0 */

loc_000FE030: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE035; /* jne: not equal / not zero */

loc_000FE034: ;
    esp += 4; return; /* ret */

loc_000FE035: ;
    eax = MEM32(eax + 0xF0);
    esp += 4; return; /* ret */

}

/**
 * sub_000FE040
 * Original: 0x000FE040 - 0x000FE045 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE040: ;
    g_seh_ebp = ebp; sub_000FDA70(); return; /* tail jmp 0x000FDA70 */

}

/**
 * sub_000FE050
 * Original: 0x000FE050 - 0x000FE0A6 (86 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE050: ;
    ecx = MEM32(0x3DB8F0);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FE064u); RECOMP_ABI_CALL(0x000FDEB0u, sub_000FDEB0); /* call 0x000FDEB0 */

loc_000FE064: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE07B; /* je: equal / zero */

loc_000FE068: ;
    ecx = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE096; /* je: equal / zero */

loc_000FE070: ;
    eax = MEM32(eax + 0xEC);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FE07B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FE081u); RECOMP_ABI_CALL(0x000F44E0u, sub_000F44E0); /* call 0x000F44E0 */

loc_000FE081: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE09F; /* je: equal / zero */

loc_000FE088: ;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000FE093u); RECOMP_ABI_CALL(0x000FD670u, sub_000FD670); /* call 0x000FD670 */

loc_000FE093: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FE096: ;
    eax = MEM32(esp + 0x24);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FE09F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FE0B0
 * Original: 0x000FE0B0 - 0x000FE11C (108 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE0B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    MEM32(ebx + 0xC) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_000FE110; /* jle: less or equal (signed <=) */

loc_000FE0C1: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x317464);
    PUSH32(esp, 0x000FE0DDu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000FE0DD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE10A; /* je: equal / zero */

loc_000FE0E4: ;
    PUSH32(esp, 0xFE580);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0xFC);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x000FE0FAu); RECOMP_ABI_CALL(0x00012790u, sub_00012790); /* call 0x00012790 */

loc_000FE0FA: ;
    MEM32(ebx + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x10) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000FE10A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 8) = edi;
    POP32(esp, edi);

loc_000FE110: ;
    POP32(esp, esi);
    MEM32(ebx + 0x10) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FE120
 * Original: 0x000FE120 - 0x000FE205 (229 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE120: ;
    ecx = MEM32(0x3DB8F0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000FE135u); RECOMP_ABI_CALL(0x000FDEB0u, sub_000FDEB0); /* call 0x000FDEB0 */

loc_000FE135: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE179; /* je: equal / zero */

loc_000FE13B: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = ecx; /* cmovg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000FE154; /* je: equal / zero */

loc_000FE14D: ;
    PUSH32(esp, 0x000FE152u); RECOMP_ABI_CALL(0x000FD930u, sub_000FD930); /* call 0x000FD930 */

loc_000FE152: ;
    goto loc_000FE159;

loc_000FE154: ;
    PUSH32(esp, 0x000FE159u); RECOMP_ABI_CALL(0x000FDF50u, sub_000FDF50); /* call 0x000FDF50 */

loc_000FE159: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FE165u); RECOMP_ABI_CALL(0x000FD5A0u, sub_000FD5A0); /* call 0x000FD5A0 */

loc_000FE165: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FE170u); RECOMP_ABI_CALL(0x000FD620u, sub_000FD620); /* call 0x000FD620 */

loc_000FE170: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FE179: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FE180u); RECOMP_ABI_CALL(0x000F44E0u, sub_000F44E0); /* call 0x000F44E0 */

loc_000FE180: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE1C3; /* je: equal / zero */

loc_000FE189: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000FE190u); RECOMP_ABI_CALL(0x000FDF90u, sub_000FDF90); /* call 0x000FDF90 */

loc_000FE190: ;
    esi = eax;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE1AE; /* je: equal / zero */

loc_000FE19C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE1AE; /* je: equal / zero */

loc_000FE1A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000FE1AEu); RECOMP_ABI_CALL(0x000FC380u, sub_000FC380); /* call 0x000FC380 */

loc_000FE1AE: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000FE1B9u); RECOMP_ABI_CALL(0x000FD670u, sub_000FD670); /* call 0x000FD670 */

loc_000FE1B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FE1BC: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FE1C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FE1C9u); RECOMP_ABI_CALL(0x001890B0u, sub_001890B0); /* call 0x001890B0 */

loc_000FE1C9: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE1FE; /* je: equal / zero */

loc_000FE1D2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000FE1D9u); RECOMP_ABI_CALL(0x000FDF90u, sub_000FDF90); /* call 0x000FDF90 */

loc_000FE1D9: ;
    esi = eax;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE1BC; /* je: equal / zero */

loc_000FE1E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE1BC; /* je: equal / zero */

loc_000FE1E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000FE1F7u); RECOMP_ABI_CALL(0x000FC380u, sub_000FC380); /* call 0x000FC380 */

loc_000FE1F7: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FE1FE: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FE210
 * Original: 0x000FE210 - 0x000FE232 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE210: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000FE22Eu); RECOMP_ABI_CALL(0x000FE120u, sub_000FE120); /* call 0x000FE120 */

loc_000FE22E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FE240
 * Original: 0x000FE240 - 0x000FE27A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE240: ;
    eax = MEM32(0x3DB8F0);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE253; /* je: equal / zero */

loc_000FE24C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000FE253u); RECOMP_ABI_CALL(0x000FE630u, sub_000FE630); /* call 0x000FE630 */

loc_000FE253: ;
    ecx = MEM32(0x3DB8F0);
    MEM32(ecx + 8) = 0;
    edx = MEM32(0x3DB8F0);
    MEM32(edx + 0xC) = 0;
    eax = MEM32(0x3DB8F0);
    MEM32(eax + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000FE280
 * Original: 0x000FE280 - 0x000FE2D7 (87 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE280: ;
    eax = MEM32(0x3DB8F0);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE293; /* je: equal / zero */

loc_000FE28C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000FE293u); RECOMP_ABI_CALL(0x000FE630u, sub_000FE630); /* call 0x000FE630 */

loc_000FE293: ;
    ecx = MEM32(0x3DB8F0);
    MEM32(ecx + 8) = 0;
    edx = MEM32(0x3DB8F0);
    MEM32(edx + 0xC) = 0;
    eax = MEM32(0x3DB8F0);
    ecx = 0x3DB900;
    MEM32(eax + 0x10) = 0;
    PUSH32(esp, 0x000FE2C3u); RECOMP_ABI_CALL(0x000EF3F0u, sub_000EF3F0); /* call 0x000EF3F0 */

loc_000FE2C3: ;
    ecx = 0x3DB930;
    PUSH32(esp, 0x000FE2CDu); RECOMP_ABI_CALL(0x000EF3F0u, sub_000EF3F0); /* call 0x000EF3F0 */

loc_000FE2CD: ;
    ecx = 0x3DB960;
    g_seh_ebp = ebp; sub_000EF3F0(); return; /* tail jmp 0x000EF3F0 */

}

/**
 * sub_000FE2E0
 * Original: 0x000FE2E0 - 0x000FE326 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE2E0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000FE31D; /* je: equal / zero */

loc_000FE2EB: ;
    SET_LO8(ecx, 1);
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(eax + 0x15) = LO8(ecx);
    MEM8(eax + 0x16) = LO8(ecx);
    MEM32(eax) = 0x310C84;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x54) = edx;
    ecx = 0xFFFFFFFFu;
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_0014EF90(); return; /* tail jmp 0x0014EF90 */

loc_000FE31D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    g_seh_ebp = ebp; sub_0014EF90(); return; /* tail jmp 0x0014EF90 */

}

/**
 * sub_000FE330
 * Original: 0x000FE330 - 0x000FE34E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE330: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FE34B; /* jg: greater (signed >) */

loc_000FE337: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE34B; /* je: equal / zero */

loc_000FE341: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FE34Bu); RECOMP_ABI_CALL(0x000FE2E0u, sub_000FE2E0); /* call 0x000FE2E0 */

loc_000FE34B: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000FE350
 * Original: 0x000FE350 - 0x000FE3D1 (129 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE350: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE3BB; /* je: equal / zero */

loc_000FE35C: ;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x84), 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FE377; /* jg: greater (signed >) */

loc_000FE365: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE377; /* je: equal / zero */

loc_000FE36B: ;
    PUSH32(esp, eax);
    ecx = esi + 0x88;
    PUSH32(esp, 0x000FE377u); RECOMP_ABI_CALL(0x000FE2E0u, sub_000FE2E0); /* call 0x000FE2E0 */

loc_000FE377: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE399; /* je: equal / zero */

loc_000FE37E: ;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FE390; /* jl: less (signed <) */

loc_000FE388: ;
    ecx = esi + 0x8C;
    goto loc_000FE392;

loc_000FE390: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FE392: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000FE399u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FE396u); } /* indirect call */
    }

loc_000FE399: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE3BB; /* je: equal / zero */

loc_000FE3A0: ;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FE3B2; /* jl: less (signed <) */

loc_000FE3AA: ;
    ecx = esi + 0x8C;
    goto loc_000FE3B4;

loc_000FE3B2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FE3B4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000FE3BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FE3B8u); } /* indirect call */
    }

loc_000FE3BB: ;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FE3C4u); RECOMP_ABI_CALL(0x000FD740u, sub_000FD740); /* call 0x000FD740 */

loc_000FE3C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xEC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FE3E0
 * Original: 0x000FE3E0 - 0x000FE40F (47 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE3E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FE40C; /* jle: less or equal (signed <=) */

loc_000FE3ED: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FE3F0: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000FE3FDu); RECOMP_ABI_CALL(0x000FE350u, sub_000FE350); /* call 0x000FE350 */

loc_000FE3FD: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FE3F0; /* jl: less (signed <) */

loc_000FE40B: ;
    POP32(esp, ebx);

loc_000FE40C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FE410
 * Original: 0x000FE410 - 0x000FE474 (100 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE410: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3DB8F0);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE439; /* je: equal / zero */

loc_000FE41D: ;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0xFD830);
    PUSH32(esp, 0xFC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000FE431u); RECOMP_ABI_CALL(0x002BEF20u, sub_002BEF20); /* call 0x002BEF20 */

loc_000FE431: ;
    eax = MEM32(0x3DB8F0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FE439: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    ebx = eax + 0xC;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000FE470; /* jle: less or equal (signed <=) */

loc_000FE44B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = eax + 8;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FE452: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x000FE461u); RECOMP_ABI_CALL(0x000FE350u, sub_000FE350); /* call 0x000FE350 */

loc_000FE461: ;
    eax = MEM32(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FE452; /* jl: less (signed <) */

loc_000FE46E: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000FE470: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FE480
 * Original: 0x000FE480 - 0x000FE503 (131 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE480: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FE48Bu); RECOMP_ABI_CALL(0x000FE410u, sub_000FE410); /* call 0x000FE410 */

loc_000FE48B: ;
    PUSH32(esp, 0x000FE490u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_000FE490: ;
    ebx = eax;
    PUSH32(esp, 0x000FE497u); RECOMP_ABI_CALL(0x0007C580u, sub_0007C580); /* call 0x0007C580 */

loc_000FE497: ;
    esi = eax;
    ecx = 7;
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
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x260);
    PUSH32(esp, 0x3174B4);
    ecx = 0x3DB960;
    PUSH32(esp, 0x000FE4C2u); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_000FE4C2: ;
    ecx = MEM32(ebx + 0xF8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C0);
    PUSH32(esp, 0x3174A4);
    ecx = 0x3DB900;
    PUSH32(esp, 0x000FE4DFu); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_000FE4DF: ;
    edx = MEM32(ebx + 0xFC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x260);
    PUSH32(esp, 0x317494);
    ecx = 0x3DB930;
    PUSH32(esp, 0x000FE4FCu); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_000FE4FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FE510
 * Original: 0x000FE510 - 0x000FE57B (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE510: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FE575; /* jge: greater or equal (signed >=) */

loc_000FE51B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000FE53Au); RECOMP_ABI_CALL(0x000EF230u, sub_000EF230); /* call 0x000EF230 */

loc_000FE53A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE547; /* je: equal / zero */

loc_000FE53E: ;
    ecx = eax;
    PUSH32(esp, 0x000FE545u); RECOMP_ABI_CALL(0x000FE880u, sub_000FE880); /* call 0x000FE880 */

loc_000FE545: ;
    goto loc_000FE549;

loc_000FE547: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FE549: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000FE556; /* je: equal / zero */

loc_000FE54F: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000FE558;

loc_000FE556: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FE558: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000FE565u); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_000FE565: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000FE575; /* je: equal / zero */

loc_000FE56C: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000FE575: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FE580
 * Original: 0x000FE580 - 0x000FE58D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE580(void)
{

loc_000FE580: ;
    eax = ecx;
    MEM32(eax + 0x88) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000FE590
 * Original: 0x000FE590 - 0x000FE5FB (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE590: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FE5F5; /* jge: greater or equal (signed >=) */

loc_000FE59B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000FE5BAu); RECOMP_ABI_CALL(0x000EF230u, sub_000EF230); /* call 0x000EF230 */

loc_000FE5BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE5C7; /* je: equal / zero */

loc_000FE5BE: ;
    ecx = eax;
    PUSH32(esp, 0x000FE5C5u); RECOMP_ABI_CALL(0x000FD160u, sub_000FD160); /* call 0x000FD160 */

loc_000FE5C5: ;
    goto loc_000FE5C9;

loc_000FE5C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FE5C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000FE5D6; /* je: equal / zero */

loc_000FE5CF: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000FE5D8;

loc_000FE5D6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FE5D8: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000FE5E5u); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_000FE5E5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000FE5F5; /* je: equal / zero */

loc_000FE5EC: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000FE5F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FE600
 * Original: 0x000FE600 - 0x000FE62A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE600: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x2FF0D4;
    if (TEST_Z(_fa, _fb)) goto loc_000FE624; /* je: equal / zero */

loc_000FE61B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FE621u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000FE621: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FE624: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FE630
 * Original: 0x000FE630 - 0x000FE6D6 (166 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE630: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000FE69D; /* je: equal / zero */

loc_000FE63D: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, ebp);
    ebp = esi + -4;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000FE687; /* js: sign (negative) */

loc_000FE651: ;
    PUSH32(esp, edi);
    esi = eax + 0x88;
    edi = ecx + 1;
    goto loc_000FE660;

    /* nop */

loc_000FE660: ;
    eax = MEM32(esi + -252);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xFC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FE67D; /* jl: less (signed <) */

loc_000FE670: ;
    ecx = esi + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE67D; /* je: equal / zero */

loc_000FE677: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FE67Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FE67Bu); } /* indirect call */
    }

loc_000FE67D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0xFFFFFFFFu;
    if ((_fa != 0)) goto loc_000FE660; /* jne: not equal / not zero */

loc_000FE686: ;
    POP32(esp, edi);

loc_000FE687: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE695; /* je: equal / zero */

loc_000FE68C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000FE692u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000FE692: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FE695: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000FE69D: ;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FE6B7; /* jl: less (signed <) */

loc_000FE6A7: ;
    ecx = esi + 0x8C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE6B7; /* je: equal / zero */

loc_000FE6B1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FE6B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FE6B5u); } /* indirect call */
    }

loc_000FE6B7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(esi + 0x88) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_000FE6CF; /* je: equal / zero */

loc_000FE6C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FE6CCu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000FE6CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FE6CF: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FE6E0
 * Original: 0x000FE6E0 - 0x000FE6E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE6E0(void)
{

loc_000FE6E0: ;
    MEM32(ecx) = 0x3174D4;
    esp += 4; return; /* ret */

}

/**
 * sub_000FE6F0
 * Original: 0x000FE6F0 - 0x000FE6F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE6F0(void)
{

loc_000FE6F0: ;
    MEM8(ecx + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FE700
 * Original: 0x000FE700 - 0x000FE764 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FE700: ;
    eax = MEM32(ecx + 0x254);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000FE73A; /* je: equal / zero */

loc_000FE70B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000FE761; /* jne: not equal / not zero */

loc_000FE710: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3174D0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE761; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3174D0)) */

loc_000FE71F: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000FE734u); RECOMP_ABI_CALL(0x00149650u, sub_00149650); /* call 0x00149650 */

loc_000FE734: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000FE73A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3174D0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE761; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3174D0)) */

loc_000FE749: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FE75Eu); RECOMP_ABI_CALL(0x00149650u, sub_00149650); /* call 0x00149650 */

loc_000FE75E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FE761: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000FE770
 * Original: 0x000FE770 - 0x000FE77E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE770: ;
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000FE77Cu); RECOMP_ABI_CALL(0x0003BEF0u, sub_0003BEF0); /* call 0x0003BEF0 */

loc_000FE77C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FE780
 * Original: 0x000FE780 - 0x000FE783 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE780(void)
{

loc_000FE780: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FE790
 * Original: 0x000FE790 - 0x000FE7B1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE790: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x248)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x248), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE7AD; /* jne: not equal / not zero */

loc_000FE79C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FE7A6u); RECOMP_ABI_CALL(0x000FCB70u, sub_000FCB70); /* call 0x000FCB70 */

loc_000FE7A6: ;
    MEM8(esi + 0x248) = MEM8(esi + 0x248) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x248)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_000FE7AD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FE7C0
 * Original: 0x000FE7C0 - 0x000FE7D6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE7C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE7C0: ;
    SET_LO8(eax, MEM8(ecx + 0x248));
    SET_LO8(eax, LO8(eax) & 0xDF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    MEM8(ecx + 0x248) = LO8(eax);
    PUSH32(esp, 0x000FE7D4u); RECOMP_ABI_CALL(0x00037800u, sub_00037800); /* call 0x00037800 */

loc_000FE7D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FE7E0
 * Original: 0x000FE7E0 - 0x000FE7FC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE7E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE7E0: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x248));
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x248) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FE800
 * Original: 0x000FE800 - 0x000FE850 (80 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE800: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA17EC151u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA17EC151u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000FE828; /* ja: above (unsigned >) */

loc_000FE80B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FE843; /* je: equal / zero */

loc_000FE80D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18991A24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18991A24 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE843; /* je: equal / zero */

loc_000FE814: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D06EB90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D06EB90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE836; /* jne: not equal / not zero */

loc_000FE81B: ;
    MEM32(ecx + 0x254) = 2;
    esp += 8; return; /* ret 4 */

loc_000FE828: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAA46EAA9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAA46EAA9u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE843; /* je: equal / zero */

loc_000FE82F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF07E6DFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF07E6DFCu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE843; /* je: equal / zero */

loc_000FE836: ;
    MEM32(ecx + 0x254) = 1;
    esp += 8; return; /* ret 4 */

loc_000FE843: ;
    MEM32(ecx + 0x254) = 3;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FE850
 * Original: 0x000FE850 - 0x000FE87D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE850: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi) = 0x3174D4;
    PUSH32(esp, 0x000FE866u); RECOMP_ABI_CALL(0x00222F40u, sub_00222F40); /* call 0x00222F40 */

loc_000FE866: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edi + 0x5C) = LO16(eax);
    MEM8(esi + 4) = LO8(eax);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FE880
 * Original: 0x000FE880 - 0x000FE8DB (91 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE880: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000FE888u); RECOMP_ABI_CALL(0x000FD160u, sub_000FD160); /* call 0x000FD160 */

loc_000FE888: ;
    ecx = esi + 0x1C0;
    MEM32(esi) = 0x3174F8;
    MEM32(esi + 8) = 0x3174EC;
    MEM32(esi + 0xB0) = 0x3174E4;
    PUSH32(esp, 0x000FE8AAu); RECOMP_ABI_CALL(0x0003B8B0u, sub_0003B8B0); /* call 0x0003B8B0 */

loc_000FE8AA: ;
    SET_LO8(eax, MEM8(esi + 0x248));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, LO8(eax) & 0xCF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x248) = LO8(eax);
    MEMF(esi + 0x200) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x258) = 0;
    MEM32(esi + 0x254) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FE8E0
 * Original: 0x000FE8E0 - 0x000FE944 (100 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE8E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x3174F8;
    MEM32(esi + 8) = 0x3174EC;
    MEM32(esi + 0xB0) = 0x3174E4;
    if (CMP_EQ(_fa, _fb)) goto loc_000FE931; /* je: equal / zero */

loc_000FE904: ;
    eax = MEM32(esi + 0x258);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE931; /* je: equal / zero */

loc_000FE90E: ;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FE916u); RECOMP_ABI_CALL(0x00222E10u, sub_00222E10); /* call 0x00222E10 */

loc_000FE916: ;
    ecx = MEM32(esi + 0x258);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE927; /* je: equal / zero */

loc_000FE920: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000FE927u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FE924u); } /* indirect call */
    }

loc_000FE927: ;
    MEM32(esi + 0x258) = 0;

loc_000FE931: ;
    ecx = esi + 0x1C0;
    PUSH32(esp, 0x000FE93Cu); RECOMP_ABI_CALL(0x0003BF10u, sub_0003BF10); /* call 0x0003BF10 */

loc_000FE93C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000FCCE0(); return; /* tail jmp 0x000FCCE0 */

}

/**
 * sub_000FE950
 * Original: 0x000FE950 - 0x000FEA04 (180 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FE950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FE962u); RECOMP_ABI_CALL(0x000FC730u, sub_000FC730); /* call 0x000FC730 */

loc_000FE962: ;
    SET_LO8(eax, MEM8(esi + 0x248));
    SET_LO8(eax, LO8(eax) & 0x89);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xCC);
    edx = esp + 0x24;
    MEM8(esi + 0x248) = LO8(eax);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esi + 0x24C) = edi;
    MEM32(esi + 0x250) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FE99Au); RECOMP_ABI_CALL(0x0014DDC0u, sub_0014DDC0); /* call 0x0014DDC0 */

loc_000FE99A: ;
    MEM32(esi + 0x244) = edi;
    PUSH32(esp, 2);
    edi = esi + 0x1C0;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FE9B0u); RECOMP_ABI_CALL(0x0003B6B0u, sub_0003B6B0); /* call 0x0003B6B0 */

loc_000FE9B0: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FE9B6u); RECOMP_ABI_CALL(0x0003BEB0u, sub_0003BEB0); /* call 0x0003BEB0 */

loc_000FE9B6: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000FE9C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FE9BFu); } /* indirect call */
    }

loc_000FE9C2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x238) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x234) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x230) = xmm0.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x200); /* comiss */
    MEMF(esi + 0x240) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE9FE; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x200)) */

loc_000FE9EE: ;
    xmm0 = XMM_SCALAR(MEMF(0x30075C)); /* movss */
    MEMF(esi + 0x200) = xmm0.f[0]; /* movss */

loc_000FE9FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FEA10
 * Original: 0x000FEA10 - 0x000FEAA4 (148 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEA10(void)
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

loc_000FEA10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEA25u); RECOMP_ABI_CALL(0x001306D0u, sub_001306D0); /* call 0x001306D0 */

loc_000FEA25: ;
    SET_LO8(eax, MEM8(esi + 0x248));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FEA9D; /* jne: not equal / not zero */

loc_000FEA2F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x204)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FEA71; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000FEA40: ;
    eax = MEM32(esi + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEA9D; /* je: equal / zero */

loc_000FEA4A: ;
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(eax + 0x40, xmm1); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000FEA71: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000FEA97; /* je: equal / zero */

loc_000FEA77: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEA7Cu); RECOMP_ABI_CALL(0x000FC6C0u, sub_000FC6C0); /* call 0x000FC6C0 */

loc_000FEA7C: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000FEA9D; /* jb: below (unsigned <) */

loc_000FEA88: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FEA90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FEA8Eu); } /* indirect call */
    }

loc_000FEA90: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000FEA97: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FEA9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FEA9Bu); } /* indirect call */
    }

loc_000FEA9D: ;
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
 * sub_000FEAB0
 * Original: 0x000FEAB0 - 0x000FEAE3 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEAB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0xF0) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xF4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0xF8) = eax;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x24C) = 1;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FEAF0
 * Original: 0x000FEAF0 - 0x000FEB3F (79 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEAF0(void)
{

loc_000FEAF0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xF4); /* addss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xF8); /* addss */
    MEMF(ecx + 0xF8) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x24C) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FEB40
 * Original: 0x000FEB40 - 0x000FEB70 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEB40: ;
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
    ecx = MEM32(esi + 0xC4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEB5Cu); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_000FEB5C: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000FEB6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FEB65u); } /* indirect call */
    }

loc_000FEB6B: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FEB70
 * Original: 0x000FEB70 - 0x000FEBD1 (97 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FEB70: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x250)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x250), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEBCF; /* jne: not equal / not zero */

loc_000FEB7C: ;
    eax = MEM32(ebp + 0xC4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x317678);
    PUSH32(esp, 0x000FEB97u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000FEB97: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEBC5; /* je: equal / zero */

loc_000FEBA0: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi) = 0x3174D4;
    PUSH32(esp, 0x000FEBAEu); RECOMP_ABI_CALL(0x00222F40u, sub_00222F40); /* call 0x00222F40 */

loc_000FEBAE: ;
    MEM16(edi + 0x5C) = 0;
    MEM32(esi + 8) = ebp;
    MEM8(esi + 4) = 0;
    POP32(esp, edi);
    MEM32(ebp + 0x258) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FEBC5: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ebp + 0x258) = esi;
    POP32(esp, esi);

loc_000FEBCF: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FEBE0
 * Original: 0x000FEBE0 - 0x000FECB9 (217 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEBE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000FECB1; /* je: equal / zero */

loc_000FEBFA: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FECB1; /* jne: not equal / not zero */

loc_000FEC05: ;
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEC2B; /* je: equal / zero */

loc_000FEC13: ;
    esi = eax;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEC41; /* je: equal / zero */

loc_000FEC1C: ;
    /* nop */

loc_000FEC20: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEC20; /* jne: not equal / not zero */

loc_000FEC29: ;
    goto loc_000FEC41;

loc_000FEC2B: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ecx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000FEC41; /* je: equal / zero */

loc_000FEC38: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEC38; /* jne: not equal / not zero */

loc_000FEC41: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FECB1; /* je: equal / zero */

loc_000FEC48: ;
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x48), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FECB1; /* jne: not equal / not zero */

loc_000FEC4E: ;
    PUSH32(esp, 3);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEC5Au); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_000FEC5A: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEC72; /* je: equal / zero */

loc_000FEC62: ;
    ecx = ZX16(MEM16(eax + esi * 8 + 6));
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEC6Du); RECOMP_ABI_CALL(0x00070810u, sub_00070810); /* call 0x00070810 */

loc_000FEC6D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000FEC74;

loc_000FEC72: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FEC74: ;
    ecx = MEM32(edi + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    ecx = MEM32(edi + 0x1C);
    esi = MEM32(esp + 0xC);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FECADu); RECOMP_ABI_CALL(0x000FE700u, sub_000FE700); /* call 0x000FE700 */

loc_000FECAD: ;
    MEM8(esi + 4) = 1;

loc_000FECB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FECC0
 * Original: 0x000FECC0 - 0x000FEE5D (413 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FECC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FECC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x248)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x248), 0x10 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_000FEE55; /* jne: not equal / not zero */

loc_000FECDA: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FECE3u); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_000FECE3: ;
    ecx = MEM32(esi + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FECF3; /* je: equal / zero */

loc_000FECED: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000FECF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FECF0u); } /* indirect call */
    }

loc_000FECF3: ;
    eax = MEM32(esi + 0x24C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEE55; /* je: equal / zero */

loc_000FED01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEE2E; /* jne: not equal / not zero */

loc_000FED0A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x204)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FED5E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000FED1F: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x204) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FED5E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FED30: ;
    _fa = (uint32_t)(MEM8(esi + 0x248)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x248), 0x40 (8-bit) */
    MEMF(esi + 0x204) = xmm1.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000FED5E; /* je: equal / zero */

loc_000FED41: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    ecx = esi;
    MEM32(esi + 0x24C) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FED59u); RECOMP_ABI_CALL(0x000FC680u, sub_000FC680); /* call 0x000FC680 */

loc_000FED59: ;
    xmm3 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */

loc_000FED5E: ;
    eax = MEM32(esi + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x2FF020); /* mulss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000FEE1A; /* jne: not equal / not zero */

loc_000FED7A: ;
    _fa = (uint32_t)(MEM8(esi + 0x248)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x248), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FED9B; /* je: equal / zero */

loc_000FED83: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3176A4); /* subss */
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */

loc_000FED9B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xF4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xF8)); /* movss */
    edx = MEM32(esi);
    eax = esp + 0x10;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FEDE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FEDDAu); } /* indirect call */
    }

loc_000FEDE0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x240)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FEE55; /* jnp: not parity */

loc_000FEDF5: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esi + 0x230;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x000FEE12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FEE0Cu); } /* indirect call */
    }

loc_000FEE12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000FEE1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEE55; /* jne: not equal / not zero */

loc_000FEE1F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEE26u); RECOMP_ABI_CALL(0x000FEB40u, sub_000FEB40); /* call 0x000FEB40 */

loc_000FEE26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000FEE2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEE55; /* jne: not equal / not zero */

loc_000FEE33: ;
    ecx = MEM32(esi + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEE55; /* je: equal / zero */

loc_000FEE3D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEE55u); RECOMP_ABI_CALL(0x0012FBD0u, sub_0012FBD0); /* call 0x0012FBD0 */

loc_000FEE55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FEE60
 * Original: 0x000FEE60 - 0x000FEF8E (302 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEE60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = 1;
    MEM32(esi + 0x250) = eax;
    MEM32(esi + 0x24C) = eax;
    eax = MEM32(esi + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000FEF88; /* jne: not equal / not zero */

loc_000FEE8C: ;
    edi = MEM32(esi + 0xCC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEEBA; /* je: equal / zero */

loc_000FEE96: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEEA2u); RECOMP_ABI_CALL(0x0014DD80u, sub_0014DD80); /* call 0x0014DD80 */

loc_000FEEA2: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEEB8u); RECOMP_ABI_CALL(0x0014DDC0u, sub_0014DDC0); /* call 0x0014DDC0 */

loc_000FEEB8: ;
    goto loc_000FEF0D;

loc_000FEEBA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3174D0)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */

loc_000FEF0D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x200)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20C)); /* movss */
    PUSH32(esp, 0x400);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x208)); /* movss */
    PUSH32(esp, 8);
    PUSH32(esp, 0x3176A8);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEF4Du); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000FEF4D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEF5D; /* je: equal / zero */

loc_000FEF54: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEF5Bu); RECOMP_ABI_CALL(0x00110220u, sub_00110220); /* call 0x00110220 */

loc_000FEF5B: ;
    goto loc_000FEF5F;

loc_000FEF5D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FEF5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 0xC4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEF7Fu); RECOMP_ABI_CALL(0x001129B0u, sub_001129B0); /* call 0x001129B0 */

loc_000FEF7F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000FEF88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FEF85u); } /* indirect call */
    }

loc_000FEF88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FEF90
 * Original: 0x000FEF90 - 0x000FEFA0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FEF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000FEF98u); RECOMP_ABI_CALL(0x000FEE60u, sub_000FEE60); /* call 0x000FEE60 */

loc_000FEF98: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000FEB70(); return; /* tail jmp 0x000FEB70 */

}

/**
 * sub_000FEFA0
 * Original: 0x000FEFA0 - 0x000FF08C (236 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEFA0: ;
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
    _fa = (uint32_t)(MEM32(edi + 0x250)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x250), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF084; /* jne: not equal / not zero */

loc_000FEFBA: ;
    ecx = MEM32(edi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEFD9; /* jne: not equal / not zero */

loc_000FEFC4: ;
    PUSH32(esp, 0x3176D8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEFCEu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000FEFCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000FEFD9: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    esi = MEM32(ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF037u); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_000FF037: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF049; /* jne: not equal / not zero */

loc_000FF03B: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF049; /* je: equal / zero */

loc_000FF042: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF049u); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_000FF049: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x000FF056u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF053u); } /* indirect call */
    }

loc_000FF056: ;
    eax = MEM32(edi + 0xC4);
    esi = MEM32(eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF065u); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_000FF065: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF077; /* jne: not equal / not zero */

loc_000FF069: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF077; /* je: equal / zero */

loc_000FF070: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF077u); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_000FF077: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000FF084u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF081u); } /* indirect call */
    }

loc_000FF084: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FF090
 * Original: 0x000FF090 - 0x000FF25B (459 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF090(void)
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

loc_000FF090: ;
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
    edi = MEM32(ebp + 8);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x000FF0AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF0A4u); } /* indirect call */
    }

loc_000FF0AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF253; /* je: equal / zero */

loc_000FF0B2: ;
    eax = MEM32(esi + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF17C; /* jne: not equal / not zero */

loc_000FF0C0: ;
    edx = MEM32(edi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x000FF0CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF0C9u); } /* indirect call */
    }

loc_000FF0CF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x210)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(esi + 0x254)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x254), 2 (32-bit) */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEM32(esi + 0x24C) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000FF253; /* jne: not equal / not zero */

loc_000FF15A: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF171u); RECOMP_ABI_CALL(0x00149650u, sub_00149650); /* call 0x00149650 */

loc_000FF171: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000FF17C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF253; /* jne: not equal / not zero */

loc_000FF185: ;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x164); PUSH32(esp, 0x000FF194u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF18Eu); } /* indirect call */
    }

loc_000FF194: ;
    xmm3 = XMM_SCALAR(MEMF(0x317728)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esp + 0x20;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF1E7u); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000FF1E7: ;
    fp_pop(); /* fstp st(0) */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm5 = xmm3; /* movaps */
    edx = esp + 0x20;
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x3174CC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF253u); RECOMP_ABI_CALL(0x000FEFA0u, sub_000FEFA0); /* call 0x000FEFA0 */

loc_000FF253: ;
    POP32(esp, edi);
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
 * sub_000FF260
 * Original: 0x000FF260 - 0x000FF27F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF260: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3174D4;
    if (TEST_Z(_fa, _fb)) goto loc_000FF279; /* je: equal / zero */

loc_000FF270: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FF276u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000FF276: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF279: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FF280
 * Original: 0x000FF280 - 0x000FF291 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF280: ;
    eax = MEM32(ecx + -176);
    _fb = (uint32_t)(0xFFFFFF50u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFF50u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FF290u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF28Eu); } /* indirect call */
    }

loc_000FF290: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FF2A0
 * Original: 0x000FF2A0 - 0x000FF2A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF2A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000FF2C0(); return; /* tail jmp 0x000FF2C0 */

}

/**
 * sub_000FF2B0
 * Original: 0x000FF2B0 - 0x000FF2BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF2B0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000FF2C0(); return; /* tail jmp 0x000FF2C0 */

}

/**
 * sub_000FF2C0
 * Original: 0x000FF2C0 - 0x000FF2CE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF2C0(void)
{

loc_000FF2C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000FF2C8u); RECOMP_ABI_CALL(0x000FE8E0u, sub_000FE8E0); /* call 0x000FE8E0 */

loc_000FF2C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FF2D0
 * Original: 0x000FF2D0 - 0x000FF2ED (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF2D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    edx = ecx;
    PUSH32(esp, edi);
    ecx = 0x144;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FF2F0
 * Original: 0x000FF2F0 - 0x000FF2FE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF2F0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

}

/**
 * sub_000FF300
 * Original: 0x000FF300 - 0x000FF36F (111 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF300(void)
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

loc_000FF300: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000FF333; /* jbe: below or equal (unsigned <=) */

loc_000FF328: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    esp += 20; return; /* ret 16 */

loc_000FF333: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FF358; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FF341: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    esp += 20; return; /* ret 16 */

loc_000FF358: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF370
 * Original: 0x000FF370 - 0x000FF381 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF370(void)
{

loc_000FF370: ;
    xmm0 = XMM_SCALAR(MEMF(0x317750)); /* movss */
    MEMF(ecx + 0xB90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000FF390
 * Original: 0x000FF390 - 0x000FF397 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF390(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000FF390: ;
    fp_push(MEMF(ecx + 0x608)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF3A0
 * Original: 0x000FF3A0 - 0x000FF3B5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF3A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000FF3A0: ;
    fp_push(MEMF(ecx + 0xB78)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE99C)); /* fadd dword ptr [0x2fe99c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x317730)); /* fmul dword ptr [0x317730] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF3C0
 * Original: 0x000FF3C0 - 0x000FF3C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF3C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000FF3C0: ;
    fp_push(MEMF(0x317730)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF3D0
 * Original: 0x000FF3D0 - 0x000FF3D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF3D0: ;
    g_seh_ebp = ebp; sub_00103620(); return; /* tail jmp 0x00103620 */

}

/**
 * sub_000FF3E0
 * Original: 0x000FF3E0 - 0x000FF451 (113 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FF3E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x678); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FF44D; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x678)) */

loc_000FF3F4: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x670)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x5BC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FF44D; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(esi + 0x5BC)) */

loc_000FF405: ;
    SET_LO8(ecx, MEM8(esi + 0x571));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x5BC); /* addss */
    MEMF(esi + 0x5BC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000FF44D; /* jne: not equal / not zero */

loc_000FF41F: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FF433; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000FF424: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x000FF433u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF42Du); } /* indirect call */
    }

loc_000FF433: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5BC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x674); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FF44B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x674)) */

loc_000FF444: ;
    ecx = esi;
    PUSH32(esp, 0x000FF44Bu); RECOMP_ABI_CALL(0x001037B0u, sub_001037B0); /* call 0x001037B0 */

loc_000FF44B: ;
    SET_LO8(eax, 1);

loc_000FF44D: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000FF460
 * Original: 0x000FF460 - 0x000FF46A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF460: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FF466u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000FF466: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FF470
 * Original: 0x000FF470 - 0x000FF4D1 (97 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FF470: ;
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
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF486u); RECOMP_ABI_CALL(0x0022AEC0u, sub_0022AEC0); /* call 0x0022AEC0 */

loc_000FF486: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x317764;
    MEM32(esi + 8) = 0x317754;
    eax = MEM32(edi + 0x3C);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FF4B3; /* jnp: not parity */

loc_000FF4A7: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_000FF4B3: ;
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(ecx); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    POP32(esp, edi);
    XMM_STORE(esi + 0x20, xmm2); /* movaps */
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FF4E0
 * Original: 0x000FF4E0 - 0x000FF511 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF4E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x18);
    ecx = esi;
    PUSH32(esp, 0x000FF4EEu); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_000FF4EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF500; /* jne: not equal / not zero */

loc_000FF4F2: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF500; /* je: equal / zero */

loc_000FF4F9: ;
    ecx = esi;
    PUSH32(esp, 0x000FF500u); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_000FF500: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000FF50Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF509u); } /* indirect call */
    }

loc_000FF50C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FF520
 * Original: 0x000FF520 - 0x000FF563 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FF520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x3C);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FF549; /* jnp: not parity */

loc_000FF53D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_000FF549: ;
    eax = MEM32(ebp + 8);
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx + 0x20, xmm2); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FF570
 * Original: 0x000FF570 - 0x000FF5CB (91 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF570: ;
    edx = MEM32(ecx + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(ecx + 0x1C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000FF585; /* jne: not equal / not zero */

loc_000FF57E: ;
    MEM32(ecx + 0x1C) = 0;

loc_000FF585: ;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x3C);
    eax = MEM32(ecx + 0x1C);
    xmm0 = XMM_MEM(edx + 0x40); /* movaps */
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    XMM_STORE(eax + ecx + 0x20, xmm0); /* movaps */
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x18);
    edx = MEM32(edx + 0x3C);
    xmm0 = XMM_MEM(edx + 0x50); /* movaps */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    XMM_STORE(eax + ecx, xmm0); /* movaps */
    eax = MEM32(ecx + 0x1C);
    edx = eax + eax * 2;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + ecx + 0x40) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FF5D0
 * Original: 0x000FF5D0 - 0x000FF5EB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF5D0: ;
    MEM32(ecx) = 0x317780;
    ecx = MEM32(ecx + 8);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF5EA; /* jne: not equal / not zero */

loc_000FF5E4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FF5EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF5E8u); } /* indirect call */
    }

loc_000FF5EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FF5F0
 * Original: 0x000FF5F0 - 0x000FF67E (142 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF5F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, ebp);
    MEM32(eax + 0x10) = 0;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    edx = esi;
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000FF619; /* je: equal / zero */

loc_000FF60F: ;
    /* nop */

loc_000FF610: ;
    edx = eax;
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF610; /* jne: not equal / not zero */

loc_000FF619: ;
    edx = MEM32(edx + 0x20);
    SET_LO8(eax, MEM8(edx + 0x48));
    SET_LO8(ecx, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF678; /* jne: not equal / not zero */

loc_000FF625: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0xC);
    edx = edi;
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF63B; /* je: equal / zero */

loc_000FF632: ;
    edx = eax;
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF632; /* jne: not equal / not zero */

loc_000FF63B: ;
    eax = MEM32(edx + 0x20);
    _fa = (uint32_t)(MEM8(eax + 0x48)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x48), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF677; /* jne: not equal / not zero */

loc_000FF643: ;
    edx = esi;
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF659; /* je: equal / zero */

loc_000FF64C: ;
    /* nop */

loc_000FF650: ;
    edx = eax;
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF650; /* jne: not equal / not zero */

loc_000FF659: ;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF665; /* jne: not equal / not zero */

loc_000FF661: ;
    eax = MEM32(esi);
    goto loc_000FF667;

loc_000FF665: ;
    eax = MEM32(edi);

loc_000FF667: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF671; /* je: equal / zero */

loc_000FF66C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF677; /* jne: not equal / not zero */

loc_000FF671: ;
    edx = MEM32(ebx + 0x18);
    MEM32(edx + 0x10) = eax;

loc_000FF677: ;
    POP32(esp, edi);

loc_000FF678: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FF680
 * Original: 0x000FF680 - 0x000FF7EE (366 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF680: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000FF689u); RECOMP_ABI_CALL(0x00103B10u, sub_00103B10); /* call 0x00103B10 */

loc_000FF689: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    MEM32(esi) = 0x317828;
    MEM32(esi + 8) = 0x317820;
    MEM32(esi + 0xB0) = 0x317818;
    MEM32(esi + 0xB8) = 0x317800;
    MEM32(esi + 0xC0) = 0x3177FC;
    MEM32(esi + 0xC4) = 0x3177B8;
    MEM32(esi + 0x1C0) = 0x317790;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x600;
    edi = edx;
    ecx = 0x144;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x5FC) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0xB60;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = esi + 0xB78;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(esi + 0xB94) = eax;
    MEMF(esi + 0xB90) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBD0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xBA0) = eax;
    MEMF(esi + 0xBB8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBB4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBB0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xBA4) = eax;
    MEMF(esi + 0xBC8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBC4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBC0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x5F0) = eax;
    MEM32(esi + 0x5F4) = eax;
    MEMF(esi + 0x5D0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5D4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5D8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5DC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5E0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5E4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5E8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5EC) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x5C0) = eax;
    MEM32(esi + 0x5C8) = eax;
    MEM8(esi + 0x5C4) = LO8(eax);
    MEM8(esi + 0x5CC) = LO8(eax);
    MEM32(esi + 0xB98) = eax;
    MEM8(esi + 0xB9C) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FF7F0
 * Original: 0x000FF7F0 - 0x000FF93B (331 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF7F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x5FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x317828;
    MEM32(esi + 8) = 0x317820;
    MEM32(esi + 0xB0) = 0x317818;
    MEM32(esi + 0xB8) = 0x317800;
    MEM32(esi + 0xC0) = 0x3177FC;
    MEM32(esi + 0xC4) = 0x3177B8;
    MEM32(esi + 0x1C0) = 0x317790;
    if (CMP_EQ(_fa, _fb)) goto loc_000FF86A; /* je: equal / zero */

loc_000FF83C: ;
    PUSH32(esp, 0x000FF841u); RECOMP_ABI_CALL(0x001032A0u, sub_001032A0); /* call 0x001032A0 */

loc_000FF841: ;
    ecx = MEM32(esi + 0x5FC);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000FF84Fu); RECOMP_ABI_CALL(0x00222E10u, sub_00222E10); /* call 0x00222E10 */

loc_000FF84F: ;
    ecx = MEM32(esi + 0x5FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF860; /* je: equal / zero */

loc_000FF859: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000FF860u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF85Du); } /* indirect call */
    }

loc_000FF860: ;
    MEM32(esi + 0x5FC) = 0;

loc_000FF86A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0xBA0;
    ebx = 2;

loc_000FF877: ;
    PUSH32(esp, 0x000FF87Cu); RECOMP_ABI_CALL(0x000C14A0u, sub_000C14A0); /* call 0x000C14A0 */

loc_000FF87C: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000FF886u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF883u); } /* indirect call */
    }

loc_000FF886: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FF877; /* jne: not equal / not zero */

loc_000FF88C: ;
    edi = MEM32(0x3DEA20);
    edx = MEM32(esi + 0xB54);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000FF8A0u); RECOMP_ABI_CALL(0x00223590u, sub_00223590); /* call 0x00223590 */

loc_000FF8A0: ;
    eax = MEM32(esi + 0xB58);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000FF8AEu); RECOMP_ABI_CALL(0x00223590u, sub_00223590); /* call 0x00223590 */

loc_000FF8AE: ;
    ecx = MEM32(esi + 0xB5C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000FF8BCu); RECOMP_ABI_CALL(0x00223590u, sub_00223590); /* call 0x00223590 */

loc_000FF8BC: ;
    ecx = MEM32(esi + 0xB54);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000FF8D5; /* jne: not equal / not zero */

loc_000FF8CF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FF8D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF8D3u); } /* indirect call */
    }

loc_000FF8D5: ;
    ecx = MEM32(esi + 0xB58);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF8EC; /* jne: not equal / not zero */

loc_000FF8E6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FF8ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF8EAu); } /* indirect call */
    }

loc_000FF8EC: ;
    ecx = MEM32(esi + 0xB5C);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF903; /* jne: not equal / not zero */

loc_000FF8FD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FF903u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF901u); } /* indirect call */
    }

loc_000FF903: ;
    eax = MEM32(esi + 0xB94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF916; /* je: equal / zero */

loc_000FF90D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FF913u); RECOMP_ABI_CALL(0x0018AC20u, sub_0018AC20); /* call 0x0018AC20 */

loc_000FF913: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF916: ;
    eax = MEM32(esi + 0xB98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF933; /* je: equal / zero */

loc_000FF920: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FF926u); RECOMP_ABI_CALL(0x0010D0E0u, sub_0010D0E0); /* call 0x0010D0E0 */

loc_000FF926: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB98) = 0;

loc_000FF933: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00103CB0(); return; /* tail jmp 0x00103CB0 */

}

/**
 * sub_000FF940
 * Original: 0x000FF940 - 0x000FF99F (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF940: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000FF94Eu); RECOMP_ABI_CALL(0x001032F0u, sub_001032F0); /* call 0x001032F0 */

loc_000FF94E: ;
    eax = MEM32(esi + 0x280);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x822450A9u);
    ecx = eax + 8;
    MEMF(esi + 0x5BC) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x571) = 0;
    PUSH32(esp, 0x000FF973u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000FF973: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FF979u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_000FF979: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF987; /* jne: not equal / not zero */

loc_000FF980: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF99A; /* je: equal / zero */

loc_000FF987: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FF991u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_000FF991: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB98) = eax;

loc_000FF99A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FF9A0
 * Original: 0x000FF9A0 - 0x000FFB40 (416 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF9A0(void)
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

loc_000FF9A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x214;
    if (CMP_EQ(_fa, _fb)) goto loc_000FFB37; /* je: equal / zero */

loc_000FF9C2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x000FF9CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF9C4u); } /* indirect call */
    }

loc_000FF9CA: ;
    fp_push(MEMF(esi + 0x270)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000FFAFC; /* jbe: below or equal (unsigned <=) */

loc_000FF9DC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_000FF9E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FFA3D; /* jne: not equal / not zero */

loc_000FF9E4: ;
    xmm0 = XMM_MEM(esi + 0xBE0); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    ecx = esp + 0x20;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esi + 0xBE0); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x55); /* shufps */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esi + 0xBE0); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    eax = esp + 0x18;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    goto loc_000FFA95;

loc_000FFA3D: ;
    ecx = edi + 0xC0;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(ecx + esi); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    eax = ecx + esi;
    edx = esp + 0x2C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x55); /* shufps */
    ecx = esp + 0x28;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = esp + 0x24;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */

loc_000FFA95: ;
    eax = MEM32(esi);
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x218); PUSH32(esp, 0x000FFAAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FFAA4u); } /* indirect call */
    }

loc_000FFAAA: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFAB8u); RECOMP_ABI_CALL(0x00264FC0u, sub_00264FC0); /* call 0x00264FC0 */

loc_000FFAB8: ;
    ecx = MEM32(esi + edi * 4 + 0x214);
    eax = MEM32(ecx);
    edx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x000FFACCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FFAC6u); } /* indirect call */
    }

loc_000FFACC: ;
    SET_LO8(eax, MEM8(esi + 0xB9C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FFAE2; /* jne: not equal / not zero */

loc_000FFAD6: ;
    ecx = MEM32(esi + edi * 4 + 0x214);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFAE2u); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_000FFAE2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF9E0; /* jl: less (signed <) */

loc_000FFAEC: ;
    MEM8(esi + 0xB9C) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000FFAFC: ;
    SET_LO8(eax, MEM8(esi + 0xB9C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFB37; /* je: equal / zero */

loc_000FFB06: ;
    ebx = 2;
    goto loc_000FFB10;

    /* nop */

loc_000FFB10: ;
    eax = MEM32(edi);
    ecx = eax + 0xB0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000FFB1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FFB1Au); } /* indirect call */
    }

loc_000FFB1D: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFB2Au); RECOMP_ABI_CALL(0x0003CB80u, sub_0003CB80); /* call 0x0003CB80 */

loc_000FFB2A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FFB10; /* jne: not equal / not zero */

loc_000FFB30: ;
    MEM8(esi + 0xB9C) = 0;

loc_000FFB37: ;
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
 * sub_000FFB40
 * Original: 0x000FFB40 - 0x000FFBA7 (103 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFB40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x565E0520);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000FFB57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FFB54u); } /* indirect call */
    }

loc_000FFB57: ;
    SET_LO8(ecx, MEM8(0x3DB9A0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFB9E; /* jne: not equal / not zero */

loc_000FFB66: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    ecx = MEM32(0x3DB9A0);
    MEMF(0x3DB990) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(0x3DB994) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEM32(0x3DB9A0) = ecx;
    MEMF(0x3DB998) = xmm0.f[0]; /* movss */

loc_000FFB9E: ;
    eax = 0x3DB990;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FFBB0
 * Original: 0x000FFBB0 - 0x000FFC86 (214 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFBB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x5C4));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000FFC7F; /* jne: not equal / not zero */

loc_000FFBD1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0x5C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0xC) = 0x2FF9EC;
    MEM32(esp + 0x2C) = ebx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x34) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000FFC24; /* je: equal / zero */

loc_000FFC1A: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFC24u); RECOMP_ABI_CALL(0x00149E90u, sub_00149E90); /* call 0x00149E90 */

loc_000FFC24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x38) = LO8(ebx);
    ecx = 0x1F;
    edi = esp + 0x39;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esi + 0x59C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x317A44);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFC4Eu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_000FFC4E: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFC58u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000FFC58: ;
    MEM32(esp + 0x3C) = eax;
    eax = esi + 0x574;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFC72u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_000FFC72: ;
    MEM32(esi + 0x5C0) = eax;
    MEM8(esi + 0x5C4) = 1;

loc_000FFC7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FFC90
 * Original: 0x000FFC90 - 0x000FFD6C (220 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFC90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x5C4));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000FFD63; /* je: equal / zero */

loc_000FFCB1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0x5C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0xC) = 0x2FF9EC;
    MEM32(esp + 0x2C) = ebx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x34) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000FFD0A; /* je: equal / zero */

loc_000FFCFA: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFD04u); RECOMP_ABI_CALL(0x00149E90u, sub_00149E90); /* call 0x00149E90 */

loc_000FFD04: ;
    MEM32(esi + 0x5C0) = ebx;

loc_000FFD0A: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFD5D; /* je: equal / zero */

loc_000FFD0F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x38) = LO8(ebx);
    ecx = 0x1F;
    edi = esp + 0x39;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esi + 0x59C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x317A5C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFD39u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_000FFD39: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFD43u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000FFD43: ;
    MEM32(esp + 0x3C) = eax;
    eax = esi + 0x574;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFD5Du); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_000FFD5D: ;
    MEM8(esi + 0x5C4) = LO8(ebx);

loc_000FFD63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FFD70
 * Original: 0x000FFD70 - 0x000FFE46 (214 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFD70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x5CC));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000FFE3F; /* jne: not equal / not zero */

loc_000FFD91: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0x5C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0xC) = 0x2FF9EC;
    MEM32(esp + 0x2C) = ebx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x34) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000FFDE4; /* je: equal / zero */

loc_000FFDDA: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFDE4u); RECOMP_ABI_CALL(0x00149E90u, sub_00149E90); /* call 0x00149E90 */

loc_000FFDE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x38) = LO8(ebx);
    ecx = 0x1F;
    edi = esp + 0x39;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esi + 0x59C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x317A70);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFE0Eu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_000FFE0E: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFE18u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000FFE18: ;
    MEM32(esp + 0x3C) = eax;
    eax = esi + 0x574;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFE32u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_000FFE32: ;
    MEM32(esi + 0x5C8) = eax;
    MEM8(esi + 0x5CC) = 1;

loc_000FFE3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FFE50
 * Original: 0x000FFE50 - 0x000FFF26 (214 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFE50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x5CC));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000FFF1D; /* je: equal / zero */

loc_000FFE71: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0x5C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0xC) = 0x2FF9EC;
    MEM32(esp + 0x2C) = ebx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x34) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000FFEC4; /* je: equal / zero */

loc_000FFEBA: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFEC4u); RECOMP_ABI_CALL(0x00149E90u, sub_00149E90); /* call 0x00149E90 */

loc_000FFEC4: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFF17; /* je: equal / zero */

loc_000FFEC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x38) = LO8(ebx);
    ecx = 0x1F;
    edi = esp + 0x39;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esi + 0x59C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x317A80);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFEF3u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_000FFEF3: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFEFDu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000FFEFD: ;
    MEM32(esp + 0x3C) = eax;
    eax = esi + 0x574;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF17u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_000FFF17: ;
    MEM8(esi + 0x5CC) = LO8(ebx);

loc_000FFF1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FFF30
 * Original: 0x000FFF30 - 0x000FFF5E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFF30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x30); /* movaps */
    eax = MEM32(ebp + 8);
    XMM_STORE(eax, xmm1); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x60); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FFF60
 * Original: 0x000FFF60 - 0x001007EA (2186 bytes, 532 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFF60(void)
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

loc_000FFF60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x104));
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x000FFF79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FFF73u); } /* indirect call */
    }

loc_000FFF79: ;
    esi = eax;
    MEM32(esp + 0x5C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF84u); RECOMP_ABI_CALL(0x00065CB0u, sub_00065CB0); /* call 0x00065CB0 */

loc_000FFF84: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x54) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF92u); RECOMP_ABI_CALL(0x00066160u, sub_00066160); /* call 0x00066160 */

loc_000FFF92: ;
    eax = MEM32(edi + 0x234);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF9Eu); RECOMP_ABI_CALL(0x00105870u, sub_00105870); /* call 0x00105870 */

loc_000FFF9E: ;
    ebx = eax;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x54) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010011B; /* je: equal / zero */

loc_000FFFB3: ;
    fp_push(MEMF(edi + 0xB80)); /* fld float */
    edx = MEM32(esp + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    esi = eax + eax * 2;
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(esi + edx + 0x18)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm1 = XMM_SCALAR(MEMF(esi + edx + 0x14)); /* movss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    xmm2 = XMM_SCALAR(MEMF(esi + edx + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + edx + 0x1C)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100041u); RECOMP_ABI_CALL(0x00266D00u, sub_00266D00); /* call 0x00266D00 */

loc_00100041: ;
    SET_LO8(eax, MEM8(edi + 0x571));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001000EF; /* je: equal / zero */

loc_0010004F: ;
    fp_push(MEMD(0x317AB8)); /* fld double */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x317AB8)); /* fld double */
    edx = MEM32(esp + 0x20);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010009Fu); RECOMP_ABI_CALL(0x00266D00u, sub_00266D00); /* call 0x00266D00 */

loc_0010009F: ;
    fp_push(MEMD(0x317AB0)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x317AB0)); /* fld double */
    edx = MEM32(esp + 0x20);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001000EFu); RECOMP_ABI_CALL(0x00266D00u, sub_00266D00); /* call 0x00266D00 */

loc_001000EF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_0010011B: ;
    esi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0010020D; /* je: equal / zero */

loc_00100127: ;
    ecx = MEM32(esp + 0x4C);
    SET_LO8(eax, MEM8(edi + 0x571));
    esi = esi + esi * 2;
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(esi + ecx + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + ecx + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + ecx + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + ecx + 0x1C)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xB84)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    ecx = esp;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001001AB; /* je: equal / zero */

loc_00100197: ;
    fp_push(MEMD(0x317AA8)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x317AA8)); /* fld double */
    goto loc_001001B7;

loc_001001AB: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_001001B7: ;
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    edx = MEM32(esp + 0x20);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001001E1u); RECOMP_ABI_CALL(0x00266D00u, sub_00266D00); /* call 0x00266D00 */

loc_001001E1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_0010020D: ;
    esi = MEM32(ebx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0010032D; /* je: equal / zero */

loc_00100219: ;
    fp_push(MEMF(edi + 0xB88)); /* fld float */
    edx = MEM32(esp + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    esi = esi + esi * 2;
    fp_push(MEMF(edi + 0xB8C)); /* fld float */
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    xmm0 = XMM_SCALAR(MEMF(esi + edx + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + edx + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + edx + 0x10)); /* movss */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esi + edx + 0x1C)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001002B7u); RECOMP_ABI_CALL(0x00266D00u, sub_00266D00); /* call 0x00266D00 */

loc_001002B7: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100301u); RECOMP_ABI_CALL(0x00266D00u, sub_00266D00); /* call 0x00266D00 */

loc_00100301: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_0010032D: ;
    fp_push(MEMF(edi + 0xB90)); /* fld float */
    fp_push(MEMD(0x30FE50)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00100390; /* jnp: not parity */

loc_00100343: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00100390; /* je: equal / zero */

loc_0010034B: ;
    ecx = MEM32(esp + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(edi + 0xB90)); /* movss */
    eax = eax + eax * 2;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x317740); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010037A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x317740)) */

loc_00100368: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x317AA0); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x317A9C); /* subss */
    goto loc_00100382;

loc_0010037A: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x317A98); /* mulss */

loc_00100382: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */

loc_00100390: ;
    edx = MEM32(edi + 0xC4);
    ecx = edi + 0xC4;
    eax = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001003A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001003A4u); } /* indirect call */
    }

loc_001003A7: ;
    ecx = edi + 0xB40;
    PUSH32(esp, ecx);
    ecx = esp + 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001003BAu); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_001003BA: ;
    fp_push(MEMF(0x317A94)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00100591; /* jbe: below or equal (unsigned <=) */

loc_001003CC: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x178); PUSH32(esp, 0x001003D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001003D0u); } /* indirect call */
    }

loc_001003D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00100591; /* je: equal / zero */

loc_001003DE: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001003E5u); RECOMP_ABI_CALL(0x00139910u, sub_00139910); /* call 0x00139910 */

loc_001003E5: ;
    fp_push(MEMF(0x317730)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00100591; /* jbe: below or equal (unsigned <=) */

loc_001003F5: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001003FCu); RECOMP_ABI_CALL(0x001032A0u, sub_001032A0); /* call 0x001032A0 */

loc_001003FC: ;
    eax = MEM32(eax + 0x3C);
    xmm0 = XMM_MEM(eax + 0x80); /* movaps */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80)) >> 32) & 1);
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0xD0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esp + 0xE0, xmm0); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(esp + 0xF0, xmm2); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    eax = MEM32(ebx + 0x14);
    XMM_STORE(esp + 0x100, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    xmm1 = xmm0; /* movaps */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    if (CMP_LE(_fas, _fbs)) goto loc_00100591; /* jle: less or equal (signed <=) */

loc_00100456: ;
    eax = MEM32(esp + 0x54);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x317A90)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    ebx = edi + 0xB20;
    MEM32(esp + 0x2C) = eax;

loc_001004A1: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    edx = esp + 0xD4;
    PUSH32(esp, edx);
    ecx = esp + 0x68;
    MEM8(esp + 0x88) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001004BFu); RECOMP_ABI_CALL(0x002327D0u, sub_002327D0); /* call 0x002327D0 */

loc_001004BF: ;
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(esp + 0x10)); /* addps */
    eax = esp + 0xA0;
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(esp + 0x30)); /* addps */
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DEA20);
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC8) = 0;
    MEM8(esp + 0x88) = 1;
    MEM32(esp + 0x8C) = 0x13;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010051Fu); RECOMP_ABI_CALL(0x002236B0u, sub_002236B0); /* call 0x002236B0 */

loc_0010051F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FE9A0); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF504); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x317A8C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    eax = esp + 0x50;
    if ((_fca > _fcb)) goto loc_00100554; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010054F: ;
    eax = 0x317A8C;

loc_00100554: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x317A90)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    eax = esp + 0x58;
    if ((_fca > _fcb)) goto loc_00100573; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010056F: ;
    eax = esp + 0x50;

loc_00100573: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x2C)) + (uint64_t)(0x10)) >> 32) & 1);
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 0x10;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x54);
    MEM32(ebx) = edx;
    ecx = MEM32(eax + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001004A1; /* jl: less (signed <) */

loc_0010058F: ;
    ebx = eax;

loc_00100591: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x2C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001005E2; /* jle: less or equal (signed <=) */

loc_001005A0: ;
    esi = MEM32(esp + 0x4C);
    ecx = edi + 0xB20;
    edx = ebx + 0x18;
    /* nop */

loc_001005B0: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001005CE; /* je: equal / zero */

loc_001005B7: ;
    eax = eax + eax * 2;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(eax + esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */

loc_001005CE: ;
    eax = MEM32(esp + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x2C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001005B0; /* jl: less (signed <) */

loc_001005E2: ;
    eax = MEM32(ebx + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x50) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001007D3; /* jle: less or equal (signed <=) */

loc_001005F8: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x9C)) >> 32) & 1);
    ebx = ebx + 0x9C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_00100600: ;
    eax = MEM32(ebx + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001007B5; /* je: equal / zero */

loc_0010060C: ;
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(ebx);
    esi = eax + eax * 2;
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(esi + edx + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + edx + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + edx + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + edx + 0x1C)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    fp_push(MEMF(edi + ecx * 4 + 0xB18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebx + -4)); /* fdiv dword ptr [ebx - 4] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3075DC)); /* fmul dword ptr [0x3075dc] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001006A0u); RECOMP_ABI_CALL(0x00266D00u, sub_00266D00); /* call 0x00266D00 */

loc_001006A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0010077B; /* jl: less (signed <) */

loc_001006DD: ;
    ecx = edx + -4;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ecx;
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx + 0x14;
    MEM32(esp + 0x58) = ecx;

loc_001006F2: ;
    ecx = MEM32(eax + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0010070F; /* je: equal / zero */

loc_001006FA: ;
    xmm1 = XMM_SCALAR(MEMF(edi + ecx * 4 + 0xB20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + -8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */

loc_0010070F: ;
    ecx = MEM32(eax + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0010072B; /* je: equal / zero */

loc_00100717: ;
    xmm1 = XMM_SCALAR(MEMF(edi + ecx * 4 + 0xB20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */

loc_0010072B: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00100748; /* je: equal / zero */

loc_00100733: ;
    xmm1 = XMM_SCALAR(MEMF(edi + ecx * 4 + 0xB20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */

loc_00100748: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00100765; /* je: equal / zero */

loc_00100750: ;
    xmm1 = XMM_SCALAR(MEMF(edi + ecx * 4 + 0xB20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */

loc_00100765: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ecx;
    if ((_fa != 0)) goto loc_001006F2; /* jne: not equal / not zero */

loc_00100777: ;
    ecx = MEM32(esp + 0x58);

loc_0010077B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001007A7; /* jge: greater or equal (signed >=) */

loc_0010077F: ;
    eax = ebx + ecx * 8 + 8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00100785: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001007A1; /* je: equal / zero */

loc_0010078C: ;
    xmm1 = XMM_SCALAR(MEMF(edi + ecx * 4 + 0xB20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */

loc_001007A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00100785; /* jne: not equal / not zero */

loc_001007A7: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */

loc_001007B5: ;
    eax = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    ecx = MEM32(edx + 0x90);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x20)) >> 32) & 1);
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x50) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00100600; /* jl: less (signed <) */

loc_001007D3: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001007E3u); RECOMP_ABI_CALL(0x000664D0u, sub_000664D0); /* call 0x000664D0 */

loc_001007E3: ;
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
 * sub_001007F0
 * Original: 0x001007F0 - 0x001008A6 (182 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001007F0(void)
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

loc_001007F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00100802u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001007FCu); } /* indirect call */
    }

loc_00100802: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = MEM32(esi);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0010081A; /* jne: not equal / not zero */

loc_0010080A: ;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x00100815u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010080Fu); } /* indirect call */
    }

loc_00100815: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0010081A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x00100821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010081Bu); } /* indirect call */
    }

loc_00100821: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00100897; /* je: equal / zero */

loc_00100829: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x00100833u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010082Du); } /* indirect call */
    }

loc_00100833: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C0); PUSH32(esp, 0x0010084Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00100846u); } /* indirect call */
    }

loc_0010084C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00100856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00100850u); } /* indirect call */
    }

loc_00100856: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100897; /* je: equal / zero */

loc_0010085A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x00100864u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010085Eu); } /* indirect call */
    }

loc_00100864: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0010086Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00100868u); } /* indirect call */
    }

loc_0010086E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100897; /* je: equal / zero */

loc_00100872: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100897; /* jne: not equal / not zero */

loc_00100880: ;
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00100890u); RECOMP_ABI_CALL(0x000791D0u, sub_000791D0); /* call 0x000791D0 */

loc_00100890: ;
    ecx = eax;
    PUSH32(esp, 0x00100897u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_00100897: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001008A0u); RECOMP_ABI_CALL(0x00139F10u, sub_00139F10); /* call 0x00139F10 */

loc_001008A0: ;
    POP32(esp, ebx);
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
 * sub_001008B0
 * Original: 0x001008B0 - 0x0010095D (173 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001008B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001008B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x290);
    esi = edi + 0x290;
    ecx = esi;
    MEM8(edi + 0x571) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001008CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001008CAu); } /* indirect call */
    }

loc_001008CD: ;
    MEM8(eax + 0x268) = MEM8(eax + 0x268) & 0xEF;
    _fa = (uint32_t)(MEM8(eax + 0x268)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001008DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001008D8u); } /* indirect call */
    }

loc_001008DB: ;
    MEM8(eax + 0x268) = MEM8(eax + 0x268) & 0xDF;
    _fa = (uint32_t)(MEM8(eax + 0x268)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001008E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001008E6u); } /* indirect call */
    }

loc_001008E9: ;
    MEM8(eax + 0x268) = MEM8(eax + 0x268) & 0xBF;
    _fa = (uint32_t)(MEM8(eax + 0x268)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(edi + 0x5C4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100906; /* je: equal / zero */

loc_001008FA: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20C); PUSH32(esp, 0x00100906u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00100900u); } /* indirect call */
    }

loc_00100906: ;
    SET_LO8(eax, MEM8(edi + 0x5CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010091C; /* je: equal / zero */

loc_00100910: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x214); PUSH32(esp, 0x0010091Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00100916u); } /* indirect call */
    }

loc_0010091C: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00100928u); RECOMP_ABI_CALL(0x001039A0u, sub_001039A0); /* call 0x001039A0 */

loc_00100928: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100957; /* jne: not equal / not zero */

loc_00100937: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100957; /* je: equal / zero */

loc_0010093B: ;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00100946u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00100943u); } /* indirect call */
    }

loc_00100946: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00100957u); RECOMP_ABI_CALL(0x00079250u, sub_00079250); /* call 0x00079250 */

loc_00100957: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00100960
 * Original: 0x00100960 - 0x00100A90 (304 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x5F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00100992; /* je: equal / zero */

loc_0010096F: ;
    ecx = MEM32(esi + 0x5D0);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x5D4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x5D8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x5DC);
    MEM32(eax + 0xC) = edx;

loc_00100992: ;
    eax = MEM32(esi + 0x5F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001009BF; /* je: equal / zero */

loc_0010099C: ;
    ecx = MEM32(esi + 0x5E0);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x5E4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x5E8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x5EC);
    MEM32(eax + 0xC) = edx;

loc_001009BF: ;
    SET_LO8(eax, MEM8(esi + 0x571));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100A32; /* je: equal / zero */

loc_001009CB: ;
    eax = MEM32(esi + 0x6B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001009FC; /* jle: less or equal (signed <=) */

loc_001009D5: ;
    ebx = esi + 0x6B8;
    goto loc_001009E0;

    /* nop */

loc_001009E0: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + 0x1B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001009EEu); RECOMP_ABI_CALL(0x00048C10u, sub_00048C10); /* call 0x00048C10 */

loc_001009EE: ;
    eax = MEM32(esi + 0x6B4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001009E0; /* jl: less (signed <) */

loc_001009FC: ;
    eax = MEM32(esi + 0x738);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00100A8C; /* jle: less or equal (signed <=) */

loc_00100A0C: ;
    ebx = esi + 0x73C;

loc_00100A12: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1B4);
    PUSH32(esp, 0x00100A20u); RECOMP_ABI_CALL(0x00048BE0u, sub_00048BE0); /* call 0x00048BE0 */

loc_00100A20: ;
    eax = MEM32(esi + 0x738);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00100A12; /* jl: less (signed <) */

loc_00100A2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00100A32: ;
    eax = MEM32(esi + 0x738);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00100A5E; /* jle: less or equal (signed <=) */

loc_00100A3C: ;
    ebx = esi + 0x73C;

loc_00100A42: ;
    edx = MEM32(ebx);
    ecx = MEM32(esi + 0x1B4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00100A50u); RECOMP_ABI_CALL(0x00048C10u, sub_00048C10); /* call 0x00048C10 */

loc_00100A50: ;
    eax = MEM32(esi + 0x738);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00100A42; /* jl: less (signed <) */

loc_00100A5E: ;
    eax = MEM32(esi + 0x6B4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00100A8C; /* jle: less or equal (signed <=) */

loc_00100A6A: ;
    ebx = esi + 0x6B8;

loc_00100A70: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + 0x1B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00100A7Eu); RECOMP_ABI_CALL(0x00048BE0u, sub_00048BE0); /* call 0x00048BE0 */

loc_00100A7E: ;
    eax = MEM32(esi + 0x6B4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00100A70; /* jl: less (signed <) */

loc_00100A8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00100A90
 * Original: 0x00100A90 - 0x00100AE0 (80 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100A90: ;
    eax = MEM32(ecx + 0x5F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00100AB8; /* je: equal / zero */

loc_00100AA5: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */

loc_00100AB8: ;
    eax = MEM32(ecx + 0x5F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100AD5; /* je: equal / zero */

loc_00100AC2: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */

loc_00100AD5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00100AE0
 * Original: 0x00100AE0 - 0x00100B15 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100AE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00100AEEu); RECOMP_ABI_CALL(0x0022AEC0u, sub_0022AEC0); /* call 0x0022AEC0 */

loc_00100AEE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x20;
    MEM32(esi) = 0x317AD0;
    MEM32(esi + 8) = 0x317AC0;
    MEM32(esi + 0x1C) = 0;
    ecx = 0x30;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00100B20
 * Original: 0x00100B20 - 0x00100B97 (119 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm2 = XMM_MEM(esp); /* movaps */
    eax = ecx + 0x40;
    ecx = 4;
    /* nop */

loc_00100B50: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_MEM(eax + -32); /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0); /* shufps */
    xmm0 = xmm0; /* movaps */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm4 = XMM_MUL(xmm4, xmm3); /* mulps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm2 = XMM_ADD(xmm2, xmm4); /* addps */
    xmm1 = xmm0; /* movaps */
    if ((_fa != 0)) goto loc_00100B50; /* jne: not equal / not zero */

loc_00100B75: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00100BA0
 * Original: 0x00100BA0 - 0x00100C17 (119 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100BA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm2 = XMM_MEM(esp); /* movaps */
    eax = ecx + 0x40;
    ecx = 4;
    /* nop */

loc_00100BD0: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_MEM(eax + -16); /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0); /* shufps */
    xmm0 = xmm0; /* movaps */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm4 = XMM_MUL(xmm4, xmm3); /* mulps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm2 = XMM_ADD(xmm2, xmm4); /* addps */
    xmm1 = xmm0; /* movaps */
    if ((_fa != 0)) goto loc_00100BD0; /* jne: not equal / not zero */

loc_00100BF5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00100C20
 * Original: 0x00100C20 - 0x00100CCD (173 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100C20(void)
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

loc_00100C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100C35u); RECOMP_ABI_CALL(0x00100B20u, sub_00100B20); /* call 0x00100B20 */

loc_00100C35: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100C41u); RECOMP_ABI_CALL(0x00100BA0u, sub_00100BA0); /* call 0x00100BA0 */

loc_00100C41: ;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    eax = esp + 8;
    MEMF(eax) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31BE80)); /* fmul dword ptr [0x31be80] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
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
 * sub_00100CD0
 * Original: 0x00100CD0 - 0x00100D71 (161 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi) = 0x317780;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100CFAu); RECOMP_ABI_CALL(0x00222F40u, sub_00222F40); /* call 0x00222F40 */

loc_00100CFA: ;
    ecx = MEM32(0x530EB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0xE0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00100D0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00100D09u); } /* indirect call */
    }

loc_00100D0C: ;
    ebx = eax;
    MEM16(ebx + 4) = 0xE0;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100D1Fu); RECOMP_ABI_CALL(0x0022AEC0u, sub_0022AEC0); /* call 0x0022AEC0 */

loc_00100D1F: ;
    MEM32(ebx) = 0x317AD0;
    MEM32(ebx + 8) = 0x317AC0;
    MEM32(ebx + 0x1C) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x30;
    edi = ebx + 0x20;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 8) = ebx;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100D4Eu); RECOMP_ABI_CALL(0x002250A0u, sub_002250A0); /* call 0x002250A0 */

loc_00100D4E: ;
    edx = MEM32(esi + 4);
    MEM16(edx + 0x5C) = 0;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    MEM8(esi + 0xC) = 0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00100D80
 * Original: 0x00100D80 - 0x001011BB (1083 bytes, 323 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100D80(void)
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

loc_00100D80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 0x3C);
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xA8); /* comiss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fca > _fcb)) goto loc_001011B2; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0xA8)) */

loc_00100DA7: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax);
    eax = MEM32(edx);
    edx = MEM32(eax + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00100E03; /* jle: less or equal (signed <=) */

loc_00100DC8: ;
    goto loc_00100DD0;

loc_00100DCA: ;
    ecx = MEM32(esp + 0x2C);
    edi = edi;

loc_00100DD0: ;
    eax = MEM32(eax);
    eax = MEM32(esi + eax + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00100DDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00100DD9u); } /* indirect call */
    }

loc_00100DDC: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100DEA; /* jne: not equal / not zero */

loc_00100DE4: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00100DEE;

loc_00100DEA: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00100DEE: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00100DCA; /* jl: less (signed <) */

loc_00100E01: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00100E03: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), esi (32-bit) */
    MEM32(esp + 0x24) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00100E1D; /* jle: less or equal (signed <=) */

loc_00100E0D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100E12u); RECOMP_ABI_CALL(0x002BE66Cu, sub_002BE66C); /* call 0x002BE66C */

loc_00100E12: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x14))); }
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = edx;

loc_00100E1D: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    MEM32(esp + 0x28) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00100E37; /* jle: less or equal (signed <=) */

loc_00100E27: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100E2Cu); RECOMP_ABI_CALL(0x002BE66Cu, sub_002BE66C); /* call 0x002BE66C */

loc_00100E2C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x10))); }
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = edx;

loc_00100E37: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00100E59; /* jne: not equal / not zero */

loc_00100E4D: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x20);
    MEM32(esp + 0x1C) = edx;
    goto loc_00100E5D;

loc_00100E59: ;
    MEM32(esp + 0x1C) = eax;

loc_00100E5D: ;
    ecx = MEM32(ebx + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100E65u); RECOMP_ABI_CALL(0x00100C20u, sub_00100C20); /* call 0x00100C20 */

loc_00100E65: ;
    fp_push(MEMF(0x315C78)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00100F11; /* ja: above (unsigned >) */

loc_00100E77: ;
    xmm0 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2FF460)); /* movss */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    eax = esp + 0x18;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00100F11; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00100EC6: ;
    xmm0 = XMM_MEM(ebx + 0x30); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    ecx = esp + 0x18;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001011B2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00100F11: ;
    eax = MEM32(ebp + 8);
    MEM8(ebx + 0xC) = 0;
    edx = MEM32(eax + 0xC);
    edx = MEM32(edx);
    esi = MEM32(edx + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001011B2; /* jle: less or equal (signed <=) */

loc_00100F2E: ;
    MEM32(esp + 0x20) = ecx;

loc_00100F32: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x2C);
    esi = edx + eax;
    eax = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00100F4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00100F4Au); } /* indirect call */
    }

loc_00100F4D: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010118B; /* je: equal / zero */

loc_00100F58: ;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100F7B; /* jne: not equal / not zero */

loc_00100F5F: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100F75; /* je: equal / zero */

loc_00100F69: ;
    eax = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    goto loc_0010118B;

loc_00100F75: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00100F9A;

loc_00100F7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100F9A; /* jne: not equal / not zero */

loc_00100F80: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100F96; /* je: equal / zero */

loc_00100F8A: ;
    eax = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    goto loc_0010118B;

loc_00100F96: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00100F9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    eax = ebx + 0x20;
    if (CMP_EQ(_fa, _fb)) goto loc_00100FA4; /* je: equal / zero */

loc_00100FA1: ;
    eax = ebx + 0x30;

loc_00100FA4: ;
    ecx = MEM32(ebx + 4);
    edi = MEM32(ecx + 0x3C);
    PUSH32(esp, eax);
    edx = edi + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100FB8u); RECOMP_ABI_CALL(0x001030E0u, sub_001030E0); /* call 0x001030E0 */

loc_00100FB8: ;
    eax = MEM32(edi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00100FC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00100FC2u); } /* indirect call */
    }

loc_00100FC5: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx + 0x3C);
    xmm1 = XMM_MEM(esp + 0x70); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    eax = MEM32(ecx);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    PUSH32(esp, esi);
    XMM_STORE(esp + 0x98, xmm0); /* movaps */
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00100FECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00100FE9u); } /* indirect call */
    }

loc_00100FEC: ;
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    xmm1 = XMM_MEM(esp + 0x90); /* movaps */
    xmm2 = XMM_MEM(esi + 0x10); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    edi = MEM32(ebx + 4);
    ecx = MEM32(edi + 0x3C);
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm3); /* subps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    eax = esp + 0x4C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(ecx + 0xA0); /* movaps */
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FEC94); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010118B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2FEC94)) */

loc_0010108F: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x3C);
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x30075C); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm2, 0); /* shufps */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001010E5; /* jp: parity */

loc_001010E0: ;
    xmm3 = xmm2; /* movaps */
    goto loc_001010F1;

loc_001010E5: ;
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm1.f[0]; /* divss */

loc_001010F1: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm0); /* mulps */
    XMM_STORE(esp + 0x80, xmm3); /* movaps */
    ecx = MEM32(edi + 0x3C);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101127; /* jnp: not parity */

loc_0010111B: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */

loc_00101127: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm2, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    ecx = edi;
    XMM_STORE(esp + 0x60, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010113Du); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_0010113D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010114F; /* jne: not equal / not zero */

loc_00101141: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010114F; /* je: equal / zero */

loc_00101148: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010114Fu); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_0010114F: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0010115Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010115Au); } /* indirect call */
    }

loc_0010115D: ;
    edi = MEM32(esp + 0x1C);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101168u); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_00101168: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010117A; /* jne: not equal / not zero */

loc_0010116C: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010117A; /* je: equal / zero */

loc_00101173: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010117Au); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_0010117A: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0010118Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101188u); } /* indirect call */
    }

loc_0010118B: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x20);
    edx = MEM32(edx);
    esi = MEM32(edx + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00100F32; /* jl: less (signed <) */

loc_001011B2: ;
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
 * sub_001011C0
 * Original: 0x001011C0 - 0x0010184A (1674 bytes, 387 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001011C0(void)
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

loc_001011C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001011E0u); RECOMP_ABI_CALL(0x00102E60u, sub_00102E60); /* call 0x00102E60 */

loc_001011E0: ;
    eax = MEM32(edi + 0x84);
    MEM32(esi + 0x308) = eax;
    ecx = MEM32(edi + 0x88);
    MEM32(esi + 0x30C) = ecx;
    edx = MEM32(edi + 0x8C);
    MEM32(esi + 0x310) = edx;
    eax = MEM32(edi + 0x90);
    MEM32(esi + 0x314) = eax;
    ecx = MEM32(edi + 0x94);
    MEM32(esi + 0x318) = ecx;
    edx = MEM32(edi + 0x98);
    MEM32(esi + 0x31C) = edx;
    eax = MEM32(edi + 0x9C);
    MEM32(esi + 0x320) = eax;
    ecx = MEM32(0x3DEA20);
    MEM32(esp + 0x44) = ecx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101245u); RECOMP_ABI_CALL(0x001032A0u, sub_001032A0); /* call 0x001032A0 */

loc_00101245: ;
    ebx = MEM32(eax + 0xC);
    edx = MEM32(ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x4C) = ecx;
    ecx = ebx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x48) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00101261u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010125Eu); } /* indirect call */
    }

loc_00101261: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x2C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001012E7; /* jle: less or equal (signed <=) */

loc_00101271: ;
    goto loc_00101280;

loc_00101273: ;
    ebx = MEM32(esp + 0x48);
    goto loc_00101280;

    /* nop */

loc_00101280: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(esp + 0x2C);
    ebx = MEM32(eax + ecx * 8);
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00101291u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010128Eu); } /* indirect call */
    }

loc_00101291: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00101299; /* jne: not equal / not zero */

loc_00101296: ;
    ebx = MEM32(ebx + 0xC);

loc_00101299: ;
    eax = MEM32(ebx + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D033852) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D033852 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001012C0; /* je: equal / zero */

loc_001012A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC80009B9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC80009B9u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001012C0; /* je: equal / zero */

loc_001012AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADEC2B90u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADEC2B90u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001012BA; /* je: equal / zero */

loc_001012B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67B219AB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67B219AB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001012C6; /* jne: not equal / not zero */

loc_001012BA: ;
    MEM32(esp + 0x4C) = ebx;
    goto loc_001012D6;

loc_001012C0: ;
    MEM32(esp + 0x24) = ebx;
    goto loc_001012D6;

loc_001012C6: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001012D6u); RECOMP_ABI_CALL(0x001F96C0u, sub_001F96C0); /* call 0x001F96C0 */

loc_001012D6: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00101273; /* jl: less (signed <) */

loc_001012E7: ;
    ebx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001012F7u); RECOMP_ABI_CALL(0x00225FF0u, sub_00225FF0); /* call 0x00225FF0 */

loc_001012F7: ;
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001012FEu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_001012FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00101319; /* je: equal / zero */

loc_00101305: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101317u); RECOMP_ABI_CALL(0x00100CD0u, sub_00100CD0); /* call 0x00100CD0 */

loc_00101317: ;
    goto loc_0010131B;

loc_00101319: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010131B: ;
    MEM32(esi + 0x5FC) = eax;
    ebx = esi + 0xBA0;
    MEM32(esp + 0x24) = 2;
    /* nop */

loc_00101330: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101335u); RECOMP_ABI_CALL(0x000C14A0u, sub_000C14A0); /* call 0x000C14A0 */

loc_00101335: ;
    ecx = MEM32(esi + 0x27C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00101343u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101340u); } /* indirect call */
    }

loc_00101343: ;
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_00101330; /* jne: not equal / not zero */

loc_00101353: ;
    ecx = MEM32(0x530EB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x30);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00101362u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010135Fu); } /* indirect call */
    }

loc_00101362: ;
    ecx = MEM32(esp + 0x28);
    ebx = eax;
    MEM16(ebx + 4) = 0x30;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x650)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x654)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x658)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001013A9u); RECOMP_ABI_CALL(0x0022AEC0u, sub_0022AEC0); /* call 0x0022AEC0 */

loc_001013A9: ;
    edx = MEM32(esp + 0x28);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ebx) = 0x317764;
    MEM32(ebx + 8) = 0x317754;
    eax = MEM32(edx + 0x3C);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001013DA; /* jnp: not parity */

loc_001013CE: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_001013DA: ;
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ebx + 0x20, xmm2); /* movaps */
    MEM32(esi + 0xB54) = ebx;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001013FFu); RECOMP_ABI_CALL(0x002250A0u, sub_002250A0); /* call 0x002250A0 */

loc_001013FF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(0x530EB4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21);
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, 0x50);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0010144Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101449u); } /* indirect call */
    }

loc_0010144C: ;
    MEM16(eax + 4) = 0x50;
    ecx = MEM32(esi + 0x664);
    edx = MEM32(esi + 0x660);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101476u); RECOMP_ABI_CALL(0x00259260u, sub_00259260); /* call 0x00259260 */

loc_00101476: ;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esi + 0xB58) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101484u); RECOMP_ABI_CALL(0x002250A0u, sub_002250A0); /* call 0x002250A0 */

loc_00101484: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(0x530EB4);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21);
    XMM_STORE(esp + 0x54, xmm0); /* movaps */
    edx = MEM32(ecx);
    PUSH32(esp, 0x50);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001014C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001014BDu); } /* indirect call */
    }

loc_001014C0: ;
    MEM16(eax + 4) = 0x50;
    ecx = MEM32(esi + 0x66C);
    edx = MEM32(esi + 0x668);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001014EAu); RECOMP_ABI_CALL(0x00259260u, sub_00259260); /* call 0x00259260 */

loc_001014EA: ;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esi + 0xB5C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001014F8u); RECOMP_ABI_CALL(0x002250A0u, sub_002250A0); /* call 0x002250A0 */

loc_001014F8: ;
    ebx = MEM32(esi);
    edx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x317B34);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x184); PUSH32(esp, 0x00101509u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101503u); } /* indirect call */
    }

loc_00101509: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x154); PUSH32(esp, 0x00101512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010150Cu); } /* indirect call */
    }

loc_00101512: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ebx = MEM32(esi);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x317B1C);
    ecx = esi;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x184); PUSH32(esp, 0x00101546u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101540u); } /* indirect call */
    }

loc_00101546: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x154); PUSH32(esp, 0x0010154Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101549u); } /* indirect call */
    }

loc_0010154F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ebx = MEM32(esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x317B04);
    ecx = esi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x184); PUSH32(esp, 0x00101584u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010157Eu); } /* indirect call */
    }

loc_00101584: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x154); PUSH32(esp, 0x0010158Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101587u); } /* indirect call */
    }

loc_0010158D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ebx = MEM32(esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x317AEC);
    ecx = esi;
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x184); PUSH32(esp, 0x001015CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001015C5u); } /* indirect call */
    }

loc_001015CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x154); PUSH32(esp, 0x001015D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001015CEu); } /* indirect call */
    }

loc_001015D4: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ecx = MEM32(esi + 0xBA0);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0010160Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101609u); } /* indirect call */
    }

loc_0010160F: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm5 = XMM_MEM(esp + 0x10); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esi + 0xC00, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    XMM_STORE(esi + 0xBE0, xmm5); /* movaps */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    ecx = MEM32(esi + 0xBA4);
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm5 = XMM_MEM(esp + 0x10); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esi + 0xC20, xmm5); /* movaps */
    XMM_STORE(esi + 0xC40, xmm0); /* movaps */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x0010170Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101708u); } /* indirect call */
    }

loc_0010170E: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    ecx = MEM32(esi + 0x1B4);
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm5 = XMM_MEM(esp + 0x10); /* movaps */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esi + 0xC10, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    XMM_STORE(esi + 0xBF0, xmm5); /* movaps */
    xmm5 = XMM_MEM(esp + 0x10); /* movaps */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esi + 0xBE0); /* movaps */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esi + 0xC50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xC20); /* movaps */
    edx = edi + 0x1BC;
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    PUSH32(esp, edx);
    XMM_STORE(esi + 0xC30, xmm5); /* movaps */
    XMM_STORE(esi + 0xC60, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101817u); RECOMP_ABI_CALL(0x00048930u, sub_00048930); /* call 0x00048930 */

loc_00101817: ;
    ecx = MEM32(esi + 0x1B4);
    MEM32(esi + 0x5F0) = eax;
    eax = edi + 0x1D4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010182Fu); RECOMP_ABI_CALL(0x00048930u, sub_00048930); /* call 0x00048930 */

loc_0010182F: ;
    MEM32(esi + 0x5F4) = eax;
    ecx = MEM32(edi + 0x1EC);
    POP32(esp, edi);
    MEM32(esi + 0x5F8) = ecx;
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
 * sub_00101850
 * Original: 0x00101850 - 0x00101A4B (507 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00101850: ;
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
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x00101866u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101860u); } /* indirect call */
    }

loc_00101866: ;
    PUSH32(esp, 0);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010186Fu); RECOMP_ABI_CALL(0x00066460u, sub_00066460); /* call 0x00066460 */

loc_0010186F: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 0x1F0);
    ebx = MEM32(ebp + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00101933; /* jle: less or equal (signed <=) */

loc_00101888: ;
    edx = ebx + 0x30;
    eax = ebx + 0x18;
    _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1F4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;

loc_001018A0: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x001018B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001018ABu); } /* indirect call */
    }

loc_001018B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 0x18);
    MEM32(edx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00101900; /* je: equal / zero */

loc_001018BC: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x001018C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001018C1u); } /* indirect call */
    }

loc_001018C7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */

loc_00101900: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001018A0; /* jl: less (signed <) */

loc_00101930: ;
    ecx = MEM32(ebp + 0xC);

loc_00101933: ;
    eax = MEM32(ecx + 0x20C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x90) = eax;
    MEM32(esp + 0x28) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00101A42; /* jle: less or equal (signed <=) */

loc_0010194F: ;
    esi = ebx + 0xA0;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x218;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x18) = ecx;

loc_00101963: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(edi);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00101977u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101971u); } /* indirect call */
    }

loc_00101977: ;
    MEM32(esi + -12) = eax;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + -4);
    MEM32(esi + -8) = ecx;
    edx = MEM32(eax);
    MEM32(esi + -4) = edx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = ecx;
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00101A1D; /* jle: less or equal (signed <=) */

loc_0010199E: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x2C) = eax;
    goto loc_001019C2;

loc_001019BE: ;
    eax = MEM32(esp + 0x2C);

loc_001019C2: ;
    eax = MEM32(eax + esi);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x001019D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001019CAu); } /* indirect call */
    }

loc_001019D0: ;
    MEM32(esi) = 0xFFFFFFFFu;
    edx = MEM32(ebx + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001019F1; /* jle: less or equal (signed <=) */

loc_001019DF: ;
    edx = ebx + 0x18;

loc_001019E2: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001019E8; /* jne: not equal / not zero */

loc_001019E6: ;
    MEM32(esi) = ecx;

loc_001019E8: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x14) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001019E2; /* jl: less (signed <) */

loc_001019F1: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 4) = edx;
    edx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001019BE; /* jl: less (signed <) */

loc_00101A17: ;
    eax = MEM32(esp + 0x18);
    esi = ecx;

loc_00101A1D: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx + 0x90);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x1C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00101963; /* jl: less (signed <) */

loc_00101A42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00101A50
 * Original: 0x00101A50 - 0x00101DB9 (873 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101A50(void)
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

loc_00101A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xD4));
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x00101A69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101A63u); } /* indirect call */
    }

loc_00101A69: ;
    fp_push(MEMF(0x2FF460)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00101D95; /* jbe: below or equal (unsigned <=) */

loc_00101A7B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101A82u); RECOMP_ABI_CALL(0x001032A0u, sub_001032A0); /* call 0x001032A0 */

loc_00101A82: ;
    eax = MEM32(eax + 0x3C);
    xmm0 = XMM_MEM(eax + 0x80); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80)) >> 32) & 1);
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esp + 0xB0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(esp + 0xD0, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101AE7u); RECOMP_ABI_CALL(0x001032A0u, sub_001032A0); /* call 0x001032A0 */

loc_00101AE7: ;
    edx = MEM32(eax + 0x3C);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x30)) >> 32) & 1);
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101AFCu); RECOMP_ABI_CALL(0x001030E0u, sub_001030E0); /* call 0x001030E0 */

loc_00101AFC: ;
    xmm0 = XMM_MEM(esp + 0x70); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    eax = esp + 0x1C;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = esp + 0x14;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = esp + 0x18;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = esi;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101B56u); RECOMP_ABI_CALL(0x001032A0u, sub_001032A0); /* call 0x001032A0 */

loc_00101B56: ;
    edx = MEM32(eax + 0x3C);
    ecx = esi + 0xC60;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x30)) >> 32) & 1);
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101B6Du); RECOMP_ABI_CALL(0x001030E0u, sub_001030E0); /* call 0x001030E0 */

loc_00101B6D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101B74u); RECOMP_ABI_CALL(0x001032A0u, sub_001032A0); /* call 0x001032A0 */

loc_00101B74: ;
    eax = MEM32(eax + 0x3C);
    xmm1 = XMM_MEM(eax + 0x40); /* movaps */
    xmm0 = XMM_MEM(esp + 0x70); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xBD0)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x14;
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00101BD2; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00101BB7: ;
    edi = esi + 0xBA0;
    ebx = 2;

loc_00101BC2: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x00101BCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101BC6u); } /* indirect call */
    }

loc_00101BCC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00101BC2; /* jne: not equal / not zero */

loc_00101BD2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esi + 0xBD0) = xmm0.f[0]; /* movss */
    edi = esi + 0xBA0;
    _fb = (uint32_t)(0xBB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xBB8)) >> 32) & 1);
    esi = esi + 0xBB8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 2;

loc_00101BF1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00101C21; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_00101BFB: ;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    ecx = esp + 0x98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101C13u); RECOMP_ABI_CALL(0x002327D0u, sub_002327D0); /* call 0x002327D0 */

loc_00101C13: ;
    edx = esi + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    goto loc_00101C48;

loc_00101C21: ;
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    ecx = esp + 0x98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101C39u); RECOMP_ABI_CALL(0x002327D0u, sub_002327D0); /* call 0x002327D0 */

loc_00101C39: ;
    eax = esi + 0x88;
    PUSH32(esp, eax);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);

loc_00101C48: ;
    ecx = esp + 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101C54u); RECOMP_ABI_CALL(0x002327D0u, sub_002327D0); /* call 0x002327D0 */

loc_00101C54: ;
    xmm0 = XMM_MEM(esp + 0x90); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    edx = esp + 0x44;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    ecx = esp + 0x1C;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = esp + 0x18;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x80); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    edx = esp + 0x40;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    ecx = esp + 0x48;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    eax = esp + 0x4C;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    edx = esp + 0x20;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101D2Eu); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00101D2E: ;
    fp_push(MEMF(0x2FE99C)); /* fld float */
    ecx = MEM32(edi);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edx);
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00101D79; /* jbe: below or equal (unsigned <=) */

loc_00101D51: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x00101D57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101D51u); } /* indirect call */
    }

loc_00101D57: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    goto loc_00101D7F;

loc_00101D79: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x154); PUSH32(esp, 0x00101D7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101D79u); } /* indirect call */
    }

loc_00101D7F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00101BF1; /* jne: not equal / not zero */

loc_00101D8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00101D95: ;
    _fb = (uint32_t)(0xBA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xBA0)) >> 32) & 1);
    esi = esi + 0xBA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 2;

loc_00101DA0: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00101DAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101DA4u); } /* indirect call */
    }

loc_00101DAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00101DA0; /* jne: not equal / not zero */

loc_00101DB0: ;
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
 * sub_00101DC0
 * Original: 0x00101DC0 - 0x001021AB (1003 bytes, 257 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101DC0(void)
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

loc_00101DC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x7C));
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x1EC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x31BE80)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00101DFC; /* jbe: below or equal (unsigned <=) */

loc_00101DE8: ;
    SET_LO8(eax, MEM8(esi + 0x5C4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00101DFC; /* jne: not equal / not zero */

loc_00101DF2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x00101DFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101DF4u); } /* indirect call */
    }

loc_00101DFA: ;
    goto loc_00101E21;

loc_00101DFC: ;
    xmm0 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00101E21; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_00101E0B: ;
    SET_LO8(eax, MEM8(esi + 0x5C4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00101E21; /* je: equal / zero */

loc_00101E15: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20C); PUSH32(esp, 0x00101E21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101E1Bu); } /* indirect call */
    }

loc_00101E21: ;
    fp_push(MEMF(esi + 0x1F0)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x317738)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00101E5B; /* jbe: below or equal (unsigned <=) */

loc_00101E37: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1F0); PUSH32(esp, 0x00101E41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101E3Bu); } /* indirect call */
    }

loc_00101E41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00101E5B; /* jne: not equal / not zero */

loc_00101E45: ;
    SET_LO8(eax, MEM8(esi + 0x5CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00101E5B; /* jne: not equal / not zero */

loc_00101E4F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x210); PUSH32(esp, 0x00101E59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101E53u); } /* indirect call */
    }

loc_00101E59: ;
    goto loc_00101E93;

loc_00101E5B: ;
    fp_push(MEMF(esi + 0x1EC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x317738)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (!(_fa & 1u) /* fcompi */) goto loc_00101E7D; /* jae: above or equal (unsigned >=) */

loc_00101E6F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1F0); PUSH32(esp, 0x00101E79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101E73u); } /* indirect call */
    }

loc_00101E79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00101E93; /* je: equal / zero */

loc_00101E7D: ;
    SET_LO8(eax, MEM8(esi + 0x5CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00101E93; /* je: equal / zero */

loc_00101E87: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x214); PUSH32(esp, 0x00101E93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00101E8Du); } /* indirect call */
    }

loc_00101E93: ;
    eax = MEM32(esi + 0x1E4);
    ecx = MEM32(esi + 0x1E8);
    edx = MEM32(esi + 0x1EC);
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB7C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi + 0xB64) = eax;
    eax = MEM32(esi + 0x1F0);
    MEM32(esi + 0xB60) = ecx;
    ecx = MEM32(esi + 0x1F4);
    MEM32(esi + 0xB68) = edx;
    edx = MEM32(esi + 0x1F8);
    MEM32(esi + 0xB6C) = eax;
    MEM32(esi + 0xB70) = ecx;
    MEM32(esi + 0xB74) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00101EF8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00101EF3: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00101F10;

loc_00101EF8: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x61C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xB7C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x2FE99C); /* addss */

loc_00101F10: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xB7C); /* comiss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xB78)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_00101F49; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0xB7C)) */

loc_00101F35: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 0x61C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0xB7C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */

loc_00101F49: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0xB78)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xB78)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm2 = xmm3; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00101F7F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00101F72: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00101F7A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_00101F77: ;
    xmm2 = xmm0; /* movaps */

loc_00101F7A: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    goto loc_00101F8A;

loc_00101F7F: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00101F87; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_00101F84: ;
    xmm2 = xmm0; /* movaps */

loc_00101F87: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_00101F8A: ;
    MEMF(esi + 0xB10) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_00101F9A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00101F97: ;
    xmm2 = xmm0; /* movaps */

loc_00101F9A: ;
    eax = MEM32(esi + 0x5FC);
    MEMF(esi + 0xB14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(eax + 0x20, xmm2); /* movaps */
    ecx = MEM32(esi + 0x5FC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */
    SET_LO8(eax, MEM8(esi + 0x520));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001021A4; /* jne: not equal / not zero */

loc_00101FFE: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102005u); RECOMP_ABI_CALL(0x001032A0u, sub_001032A0); /* call 0x001032A0 */

loc_00102005: ;
    esi = eax;
    eax = MEM32(esi + 0x3C);
    xmm0 = XMM_MEM(eax + 0x80); /* movaps */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80)) >> 32) & 1);
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010206Cu); RECOMP_ABI_CALL(0x002327D0u, sub_002327D0); /* call 0x002327D0 */

loc_0010206C: ;
    ecx = MEM32(esi + 0x3C);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00102085; /* jp: parity */

loc_00102080: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00102091;

loc_00102085: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */

loc_00102091: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001020C2u); RECOMP_ABI_CALL(0x002328A0u, sub_002328A0); /* call 0x002328A0 */

loc_001020C2: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001020C9u); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_001020C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001020DB; /* jne: not equal / not zero */

loc_001020CD: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001020DB; /* je: equal / zero */

loc_001020D4: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001020DBu); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_001020DB: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001020EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001020EAu); } /* indirect call */
    }

loc_001020ED: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102123u); RECOMP_ABI_CALL(0x002327D0u, sub_002327D0); /* call 0x002327D0 */

loc_00102123: ;
    eax = MEM32(esi + 0x3C);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0010213C; /* jp: parity */

loc_00102137: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00102148;

loc_0010213C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */

loc_00102148: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102179u); RECOMP_ABI_CALL(0x002328A0u, sub_002328A0); /* call 0x002328A0 */

loc_00102179: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102180u); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_00102180: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00102192; /* jne: not equal / not zero */

loc_00102184: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00102192; /* je: equal / zero */

loc_0010218B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102192u); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_00102192: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001021A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001021A1u); } /* indirect call */
    }

loc_001021A4: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001021B0
 * Original: 0x001021B0 - 0x00102350 (416 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001021B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001021B0: ;
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
    SET_LO8(eax, MEM8(esi + 0x571));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010234B; /* jne: not equal / not zero */

loc_001021CD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xF4767B76u);
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
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00102249u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102246u); } /* indirect call */
    }

loc_00102249: ;
    ecx = MEM32(esi + 0xB94);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x0010225Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102256u); } /* indirect call */
    }

loc_0010225C: ;
    eax = MEM32(esi + 0xB94);
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    XMM_STORE(esp + 0x50, xmm1); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    xmm1 = XMM_MEM(eax + 0x50); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    XMM_STORE(esp + 0x70, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(eax + 0x1F0) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x1F4) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x1F8) = xmm4.f[0]; /* movss */
    eax = MEM32(esi + 0xB94);
    ecx = MEM32(eax + 0x210);
    MEM32(eax + 0x220) = ecx;
    edx = MEM32(eax + 0x214);
    MEM32(eax + 0x224) = edx;
    ecx = MEM32(eax + 0x218);
    MEM32(eax + 0x228) = ecx;
    MEMF(eax + 0x210) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x214) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x218) = xmm2.f[0]; /* movss */
    eax = MEM32(esi + 0xB98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102334; /* je: equal / zero */

loc_0010231A: ;
    ecx = eax;
    edx = MEM32(ecx);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00102329u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102323u); } /* indirect call */
    }

loc_00102329: ;
    ecx = MEM32(esi + 0xB98);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102334u); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_00102334: ;
    ecx = MEM32(esi + 0xB94);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x42FE0000);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010234Bu); RECOMP_ABI_CALL(0x00187DC0u, sub_00187DC0); /* call 0x00187DC0 */

loc_0010234B: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00102350
 * Original: 0x00102350 - 0x001023B0 (96 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102350(void)
{

loc_00102350: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0x317B7C);
    { uint32_t _icall_target = MEM32(eax + 0x184); PUSH32(esp, 0x00102361u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010235Bu); } /* indirect call */
    }

loc_00102361: ;
    edi = MEM32(esp + 0xC);
    MEM32(edi + 4) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x317B6C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x184); PUSH32(esp, 0x00102377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102371u); } /* indirect call */
    }

loc_00102377: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x317B5C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x184); PUSH32(esp, 0x00102389u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102383u); } /* indirect call */
    }

loc_00102389: ;
    MEM32(edi + 0xC) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x317B50);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x184); PUSH32(esp, 0x0010239Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102395u); } /* indirect call */
    }

loc_0010239B: ;
    MEM32(edi + 0x10) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001023ABu); RECOMP_ABI_CALL(0x00101850u, sub_00101850); /* call 0x00101850 */

loc_001023AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001023B0
 * Original: 0x001023B0 - 0x00102A74 (1732 bytes, 399 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001023B0(void)
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

loc_001023B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, edi);
    ecx = esi + 0xC4;
    edx = esi + 0xB40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x001023D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001023D4u); } /* indirect call */
    }

loc_001023D7: ;
    eax = MEM32(esi + 0xB94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010242D; /* jne: not equal / not zero */

loc_001023E1: ;
    ecx = MEM32(esi + 0x230);
    eax = MEM32(esi + 0x274);
    PUSH32(esp, ecx);
    ecx = MEM32(0x523510);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001023FBu); RECOMP_ABI_CALL(0x0018ACA0u, sub_0018ACA0); /* call 0x0018ACA0 */

loc_001023FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xB94) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0010242D; /* je: equal / zero */

loc_00102405: ;
    PUSH32(esp, 0xF4767B76u);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102414u); RECOMP_ABI_CALL(0x00131F90u, sub_00131F90); /* call 0x00131F90 */

loc_00102414: ;
    edx = MEM32(esi + 0xB94);
    MEM32(edx + 0x2C0) = esi;
    ecx = MEM32(esi + 0xB94);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010242Du); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_0010242D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = MEM32(ebp + 8);
    edi = esi + 0xB60;
    PUSH32(esp, ebx);
    ecx = esi;
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB64) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010244Du); RECOMP_ABI_CALL(0x00104810u, sub_00104810); /* call 0x00104810 */

loc_0010244D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = esp + 0x10;
    if ((_fca > _fcb)) goto loc_00102466; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi)) */

loc_00102464: ;
    eax = edi;

loc_00102466: ;
    eax = MEM32(eax);
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(edi) = eax;
    _fca = xmm3.f[0]; _fcb = MEMF(edi); /* comiss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    eax = edi;
    if ((_fca > _fcb)) goto loc_00102483; /* ja: above (unsigned >) (xmm3.f[0] vs MEMF(edi)) */

loc_0010247F: ;
    eax = esp + 0x10;

loc_00102483: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    SET_LO8(eax, MEM8(esi + 0x571));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0010249D; /* je: equal / zero */

loc_00102498: ;
    xmm0 = xmm2; /* movaps */
    goto loc_001024BC;

loc_0010249D: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001024B0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x3210B0)) */

loc_001024A6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x608)); /* movss */
    goto loc_001024B8;

loc_001024B0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60C)); /* movss */

loc_001024B8: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */

loc_001024BC: ;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xB78); /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001024D9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001024CF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x614)); /* movss */
    goto loc_001024E1;

loc_001024D9: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x610)); /* movss */

loc_001024E1: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF020)); /* fmul dword ptr [0x2ff020] */
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xB78);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102511u); RECOMP_ABI_CALL(0x000FF300u, sub_000FF300); /* call 0x000FF300 */

loc_00102511: ;
    MEMF(esi + 0xB78) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x618);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xB7C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xB64);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102534u); RECOMP_ABI_CALL(0x000FF300u, sub_000FF300); /* call 0x000FF300 */

loc_00102534: ;
    MEMF(esi + 0xB7C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001025D8; /* jne: not equal / not zero */

loc_00102548: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB68)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x628); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB80)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x634); /* mulss */
    MEMF(esi + 0xB80) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB84)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB70)); /* movss */
    MEMF(esi + 0xB84) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB74)); /* movss */
    MEMF(esi + 0xB88) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB8C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0xB8C) = xmm1.f[0]; /* movss */

loc_001025D8: ;
    SET_LO8(eax, MEM8(esi + 0x620));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010261C; /* je: equal / zero */

loc_001025E2: ;
    ecx = esi + 0x624;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xB80); /* comiss */
    eax = esi + 0xB80;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = esp + 0x10;
    if ((_fca > _fcb)) goto loc_0010260A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0xB80)) */

loc_00102608: ;
    edx = eax;

loc_0010260A: ;
    edx = MEM32(edx);
    MEM32(eax) = edx;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca > _fcb)) ecx = eax; /* cmova */
    ecx = MEM32(ecx);
    MEM32(eax) = ecx;

loc_0010261C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB84)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x630); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00102642; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x630)) */

loc_0010262D: ;
    edx = MEM32(esi + 0x630);
    MEM8(esi + 0xB50) = 1;
    MEM32(esi + 0xB84) = edx;
    goto loc_00102649;

loc_00102642: ;
    MEM8(esi + 0xB50) = 0;

loc_00102649: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x62C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xB84); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010266F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xB84)) */

loc_0010265A: ;
    eax = MEM32(esi + 0x62C);
    MEM8(esi + 0xB50) = 1;
    MEM32(esi + 0xB84) = eax;
    goto loc_00102676;

loc_0010266F: ;
    MEM8(esi + 0xB50) = 0;

loc_00102676: ;
    ecx = esi + 0x638;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xB88); /* comiss */
    eax = esi + 0xB88;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = esp + 0x10;
    if ((_fca > _fcb)) goto loc_0010269E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0xB88)) */

loc_0010269C: ;
    edx = eax;

loc_0010269E: ;
    edx = MEM32(edx);
    MEM32(eax) = edx;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca > _fcb)) ecx = eax; /* cmova */
    ecx = MEM32(ecx);
    MEM32(eax) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x640)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xB8C); /* comiss */
    eax = esi + 0xB8C;
    ecx = esi + 0x640;
    if ((_fca > _fcb)) ecx = eax; /* cmova */
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x63C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB90)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    ecx = esi + 0x63C;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMD(0x30FE50)); /* fld double */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) ecx = eax; /* cmovbe */
    ecx = MEM32(ecx);
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = ecx;
    MEMF(esi + 0xB90) = xmm0.f[0]; /* movss */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0010271D; /* jbe: below or equal (unsigned <=) */

loc_00102715: ;
    MEMF(esi + 0xB90) = xmm2.f[0]; /* movss */

loc_0010271D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xB18)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xB18) = xmm4.f[0]; /* movss */
    MEMF(esi + 0xB1C) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x5D4;
    edx = esi + 0x5F0;

loc_00102777: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001027D3; /* je: equal / zero */

loc_0010277C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + ecx * 4 + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x5F8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001027B3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0010279E: ;
    edi = edi;

loc_001027A0: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1 = xmm0; /* movaps */
    if ((_fca > _fcb)) goto loc_001027A0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_001027AF: ;
    MEMF(eax) = xmm1.f[0]; /* movss */

loc_001027B3: ;
    _fca = xmm2.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001027D3; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(eax)) */

loc_001027B8: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    /* nop */

loc_001027C0: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001027C0; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_001027CF: ;
    MEMF(eax) = xmm1.f[0]; /* movss */

loc_001027D3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00102777; /* jl: less (signed <) */

loc_001027DF: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001027E7u); RECOMP_ABI_CALL(0x00101A50u, sub_00101A50); /* call 0x00101A50 */

loc_001027E7: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001027EFu); RECOMP_ABI_CALL(0x000FF9A0u, sub_000FF9A0); /* call 0x000FF9A0 */

loc_001027EF: ;
    SET_LO8(eax, MEM8(esi + 0x571));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102A6B; /* je: equal / zero */

loc_001027FD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x518)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00102819; /* jp: parity */

loc_00102812: ;
    edi = 1;
    goto loc_0010281B;

loc_00102819: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010281B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x3727C4); /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x518); /* addss */
    MEMF(esi + 0x518) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x51C); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x67C); /* comiss */
    if ((_fca > _fcb)) goto loc_00102851; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x67C)) */

loc_00102849: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102942; /* je: equal / zero */

loc_00102851: ;
    edx = MEM32(esi);
    eax = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4DA8ACC5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00102865u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102862u); } /* indirect call */
    }

loc_00102865: ;
    edx = MEM32(esi);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x218); PUSH32(esp, 0x00102874u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010286Eu); } /* indirect call */
    }

loc_00102874: ;
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102885u); RECOMP_ABI_CALL(0x00264FC0u, sub_00264FC0); /* call 0x00264FC0 */

loc_00102885: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = MEM32(esi + 0x518);
    MEM32(esi + 0x51C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00102942; /* je: equal / zero */

loc_00102899: ;
    eax = MEM32(esi + 0x204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102942; /* je: equal / zero */

loc_001028A7: ;
    eax = MEM32(esi + 0x208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x570) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001028D4; /* je: equal / zero */

loc_001028B8: ;
    ecx = eax + 0xB0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001028C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001028C0u); } /* indirect call */
    }

loc_001028C3: ;
    ecx = MEM32(esi + 0x208);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001028D4u); RECOMP_ABI_CALL(0x0003CB80u, sub_0003CB80); /* call 0x0003CB80 */

loc_001028D4: ;
    eax = MEM32(esi + 0x20C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001028FE; /* je: equal / zero */

loc_001028DE: ;
    edx = MEM32(eax + 0xB0);
    ecx = eax + 0xB0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001028EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001028EAu); } /* indirect call */
    }

loc_001028ED: ;
    ecx = MEM32(esi + 0x20C);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001028FEu); RECOMP_ABI_CALL(0x0003CB80u, sub_0003CB80); /* call 0x0003CB80 */

loc_001028FE: ;
    eax = MEM32(esi + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102924; /* je: equal / zero */

loc_00102908: ;
    ecx = eax + 0xB0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00102913u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102910u); } /* indirect call */
    }

loc_00102913: ;
    ecx = MEM32(esi + 0x210);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102924u); RECOMP_ABI_CALL(0x0003CB80u, sub_0003CB80); /* call 0x0003CB80 */

loc_00102924: ;
    ecx = MEM32(esi + 0x204);
    edx = MEM32(ecx);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00102937u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102931u); } /* indirect call */
    }

loc_00102937: ;
    ecx = MEM32(esi + 0x204);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102942u); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_00102942: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x680)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FEC54); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00102A6B; /* jnp: not parity */

loc_0010295B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x518)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x680); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00102A6B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x680)) */

loc_00102970: ;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0010297Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102978u); } /* indirect call */
    }

loc_0010297B: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    ecx = esp + 0x40;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    PUSH32(esp, ecx);
    ecx = eax + 0x30;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001029B2u); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_001029B2: ;
    edx = MEM32(esi + 0xC4);
    ecx = esi + 0xC4;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001029C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001029C3u); } /* indirect call */
    }

loc_001029C6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x34); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x38); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00102A6B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00102A2A: ;
    PUSH32(esp, 0);
    ecx = esi;
    MEM8(esi + 0x520) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102A3Au); RECOMP_ABI_CALL(0x001398F0u, sub_001398F0); /* call 0x001398F0 */

loc_00102A3A: ;
    eax = MEM32(esi + 0x204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x571) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00102A6B; /* je: equal / zero */

loc_00102A4B: ;
    edx = MEM32(eax + 0xB0);
    ecx = eax + 0xB0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00102A5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102A57u); } /* indirect call */
    }

loc_00102A5A: ;
    ecx = MEM32(esi + 0x204);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102A6Bu); RECOMP_ABI_CALL(0x0003CB80u, sub_0003CB80); /* call 0x0003CB80 */

loc_00102A6B: ;
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
 * sub_00102A80
 * Original: 0x00102A80 - 0x00102BE2 (354 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00102A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x128;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102A9Fu); RECOMP_ABI_CALL(0x00102E60u, sub_00102E60); /* call 0x00102E60 */

loc_00102A9F: ;
    ecx = esp + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102AA8u); RECOMP_ABI_CALL(0x0004F7A0u, sub_0004F7A0); /* call 0x0004F7A0 */

loc_00102AA8: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102AAFu); RECOMP_ABI_CALL(0x001032A0u, sub_001032A0); /* call 0x001032A0 */

loc_00102AAF: ;
    ecx = esp + 0x70;
    edi = eax;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102ABDu); RECOMP_ABI_CALL(0x002287F0u, sub_002287F0); /* call 0x002287F0 */

loc_00102ABD: ;
    edx = MEM32(esi + 0x604);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edx;
    MEM32(esp + 0x114) = edx;
    edx = MEM32(esp + 0x78);
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x3C, xmm0); /* movaps */
    XMM_STORE(esp + 0x4C, xmm0); /* movaps */
    XMM_STORE(esp + 0x5C, xmm0); /* movaps */
    XMM_STORE(esp + 0x6C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102B02u); RECOMP_ABI_CALL(0x00258140u, sub_00258140); /* call 0x00258140 */

loc_00102B02: ;
    xmm0 = XMM_MEM(esp + 0x4C); /* movaps */
    XMM_STORE(esp + 0xDC, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x5C); /* movaps */
    XMM_STORE(esp + 0xEC, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x6C); /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x70;
    XMM_STORE(esp + 0xF0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    PUSH32(esp, eax);
    ecx = edi;
    XMM_STORE(esp + 0x104, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102B45u); RECOMP_ABI_CALL(0x00229470u, sub_00229470); /* call 0x00229470 */

loc_00102B45: ;
    eax = MEM32(esp + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00102B6E; /* js: sign (negative) */

loc_00102B50: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00102B6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102B6Bu); } /* indirect call */
    }

loc_00102B6E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x650)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x654)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x658)); /* movss */
    esi = MEM32(esi + 0xB54);
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 0x3C);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00102BC7; /* jnp: not parity */

loc_00102BBB: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_00102BC7: ;
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    POP32(esp, edi);
    XMM_STORE(esi + 0x20, xmm2); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00102BF0
 * Original: 0x00102BF0 - 0x00102C13 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00102BF8u); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_00102BF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00102C0A; /* jne: not equal / not zero */

loc_00102BFC: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102C0A; /* je: equal / zero */

loc_00102C03: ;
    ecx = esi;
    PUSH32(esp, 0x00102C0Au); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_00102C0A: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x68)); return; /* indirect tail jmp */

}

/**
 * sub_00102C20
 * Original: 0x00102C20 - 0x00102C28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102C20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00102C30(); return; /* tail jmp 0x00102C30 */

}

/**
 * sub_00102C30
 * Original: 0x00102C30 - 0x00102C65 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x317764;
    MEM32(esi + 8) = 0x317754;
    PUSH32(esp, 0x00102C45u); RECOMP_ABI_CALL(0x0022AE40u, sub_0022AE40); /* call 0x0022AE40 */

loc_00102C45: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00102C5F; /* je: equal / zero */

loc_00102C4C: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x530EB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00102C5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102C5Cu); } /* indirect call */
    }

loc_00102C5F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00102C70
 * Original: 0x00102C70 - 0x00102C77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102C70(void)
{

loc_00102C70: ;
    eax = ecx + 0x290;
    esp += 4; return; /* ret */

}

/**
 * sub_00102C80
 * Original: 0x00102C80 - 0x00102C87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102C80(void)
{

loc_00102C80: ;
    eax = ecx + 0x504;
    esp += 4; return; /* ret */

}

/**
 * sub_00102C90
 * Original: 0x00102C90 - 0x00102C9F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102C90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00102C90: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x6A0)); /* fmul dword ptr [ecx + 0x6a0] */
    fp_top() = -fp_top(); /* fchs */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102CA0
 * Original: 0x00102CA0 - 0x00102D00 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102CA0(void)
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

loc_00102CA0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102CB3; /* je: equal / zero */

loc_00102CA9: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6A8)); /* movss */
    goto loc_00102CBB;

loc_00102CB3: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6A4)); /* movss */

loc_00102CBB: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00102CE5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00102CCE: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00102CE5: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102D00
 * Original: 0x00102D00 - 0x00102D10 (16 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00102D00: ;
    fp_push(MEMF(ecx + 0x6AC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102D10
 * Original: 0x00102D10 - 0x00102D17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00102D10: ;
    fp_push(MEMF(ecx + 0x6B0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102D20
 * Original: 0x00102D20 - 0x00102D27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00102D20: ;
    fp_push(MEMF(0x31773C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102D30
 * Original: 0x00102D30 - 0x00102D37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00102D30: ;
    fp_push(MEMF(ecx + 0xB80)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102D40
 * Original: 0x00102D40 - 0x00102D47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00102D40: ;
    fp_push(MEMF(ecx + 0xB84)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102D50
 * Original: 0x00102D50 - 0x00102D57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D50(void)
{

loc_00102D50: ;
    SET_LO8(eax, MEM8(ecx + 0xB50));
    esp += 4; return; /* ret */

}

/**
 * sub_00102D60
 * Original: 0x00102D60 - 0x00102D67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00102D60: ;
    fp_push(MEMF(ecx + 0xB88)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102D70
 * Original: 0x00102D70 - 0x00102D77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00102D70: ;
    fp_push(MEMF(ecx + 0xB8C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102D80
 * Original: 0x00102D80 - 0x00102D88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102D80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00103240(); return; /* tail jmp 0x00103240 */

}

/**
 * sub_00102D90
 * Original: 0x00102D90 - 0x00102D9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102D90: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00103240(); return; /* tail jmp 0x00103240 */

}

/**
 * sub_00102DA0
 * Original: 0x00102DA0 - 0x00102DAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102DA0: ;
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00103240(); return; /* tail jmp 0x00103240 */

}

/**
 * sub_00102DB0
 * Original: 0x00102DB0 - 0x00102DBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102DB0: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00103240(); return; /* tail jmp 0x00103240 */

}

/**
 * sub_00102DC0
 * Original: 0x00102DC0 - 0x00102DCB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102DC0: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00103240(); return; /* tail jmp 0x00103240 */

}

/**
 * sub_00102DD0
 * Original: 0x00102DD0 - 0x00102DD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102DD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001393B0(); return; /* tail jmp 0x001393B0 */

}

/**
 * sub_00102DE0
 * Original: 0x00102DE0 - 0x00102DEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102DE0: ;
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00103240(); return; /* tail jmp 0x00103240 */

}

/**
 * sub_00102DF0
 * Original: 0x00102DF0 - 0x00102DFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102DF0: ;
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000E8840(); return; /* tail jmp 0x000E8840 */

}

/**
 * sub_00102E00
 * Original: 0x00102E00 - 0x00102E0D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102E00(void)
{

loc_00102E00: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x1A8) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00102E10
 * Original: 0x00102E10 - 0x00102E17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102E10(void)
{

loc_00102E10: ;
    SET_LO8(eax, MEM8(ecx + 0x1A8));
    esp += 4; return; /* ret */

}

/**
 * sub_00102E20
 * Original: 0x00102E20 - 0x00102E2D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102E20(void)
{

loc_00102E20: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x1A9) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00102E30
 * Original: 0x00102E30 - 0x00102E37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102E30(void)
{

loc_00102E30: ;
    SET_LO8(eax, MEM8(ecx + 0x1A9));
    esp += 4; return; /* ret */

}

/**
 * sub_00102E40
 * Original: 0x00102E40 - 0x00102E4E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102E40: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102E4B; /* je: equal / zero */

loc_00102E44: ;
    eax = ecx + 0xB8;
    esp += 4; return; /* ret */

loc_00102E4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00102E50
 * Original: 0x00102E50 - 0x00102E57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102E50(void)
{

loc_00102E50: ;
    eax = ecx + -196;
    esp += 4; return; /* ret */

}

/**
 * sub_00102E60
 * Original: 0x00102E60 - 0x001030C6 (614 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102E60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = ecx;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(eax + 0x20) = LO8(edx);
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x50);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(eax + 0x58) = edx;
    edx = MEM32(ecx + 0x60);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(eax + 0x64) = edx;
    edx = MEM32(ecx + 0x68);
    MEM32(eax + 0x68) = edx;
    edx = MEM32(ecx + 0x6C);
    MEM32(eax + 0x6C) = edx;
    edx = MEM32(ecx + 0x70);
    MEM32(eax + 0x70) = edx;
    edx = MEM32(ecx + 0x74);
    MEM32(eax + 0x74) = edx;
    edx = MEM32(ecx + 0x78);
    MEM32(eax + 0x78) = edx;
    edx = MEM32(ecx + 0x7C);
    MEM32(eax + 0x7C) = edx;
    edx = MEM32(ecx + 0x80);
    MEM32(eax + 0x80) = edx;
    edx = MEM32(ecx + 0x84);
    MEM32(eax + 0x84) = edx;
    edx = MEM32(ecx + 0x88);
    MEM32(eax + 0x88) = edx;
    edx = MEM32(ecx + 0x8C);
    MEM32(eax + 0x8C) = edx;
    edx = MEM32(ecx + 0x90);
    MEM32(eax + 0x90) = edx;
    edx = MEM32(ecx + 0x94);
    MEM32(eax + 0x94) = edx;
    edx = MEM32(ecx + 0x98);
    MEM32(eax + 0x98) = edx;
    edx = MEM32(ecx + 0x9C);
    MEM32(eax + 0x9C) = edx;
    edx = MEM32(ecx + 0xA0);
    PUSH32(esp, ebx);
    MEM32(eax + 0xA0) = edx;
    edx = MEM32(ecx + 0xA4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax + 0xA4) = edx;
    edx = MEM32(ecx + 0xA8);
    MEM32(eax + 0xA8) = edx;
    edx = MEM32(ecx + 0xAC);
    MEM32(eax + 0xAC) = edx;
    edx = MEM32(ecx + 0xB0);
    MEM32(eax + 0xB0) = edx;
    edx = MEM32(ecx + 0xB4);
    MEM32(eax + 0xB4) = edx;
    edx = ecx;
    esi = eax + 0xB8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0x20;
    /* nop */

loc_00102FD0: ;
    ebx = MEM32(edx + esi);
    MEM32(esi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00102FD0; /* jne: not equal / not zero */

loc_00102FDB: ;
    esi = MEM32(ecx + 0x138);
    MEM32(eax + 0x138) = esi;
    esi = eax + 0x13C;
    edi = 0x20;

loc_00102FF2: ;
    ebx = MEM32(esi + edx);
    MEM32(esi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00102FF2; /* jne: not equal / not zero */

loc_00102FFD: ;
    esi = eax + 0x1BC;
    edi = 0x18;

loc_00103008: ;
    SET_LO8(ebx, MEM8(esi + edx));
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00103008; /* jne: not equal / not zero */

loc_00103011: ;
    esi = eax + 0x1D4;
    edi = 0x18;
    /* nop */

loc_00103020: ;
    SET_LO8(ebx, MEM8(edx + esi));
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00103020; /* jne: not equal / not zero */

loc_00103029: ;
    esi = MEM32(ecx + 0x1EC);
    MEM32(eax + 0x1EC) = esi;
    esi = MEM32(ecx + 0x1F0);
    MEM32(eax + 0x1F0) = esi;
    esi = MEM32(ecx + 0x1F4);
    MEM32(eax + 0x1F4) = esi;
    esi = MEM32(ecx + 0x1F8);
    MEM32(eax + 0x1F8) = esi;
    esi = MEM32(ecx + 0x1FC);
    MEM32(eax + 0x1FC) = esi;
    esi = MEM32(ecx + 0x200);
    MEM32(eax + 0x200) = esi;
    esi = MEM32(ecx + 0x204);
    MEM32(eax + 0x204) = esi;
    esi = MEM32(ecx + 0x208);
    MEM32(eax + 0x208) = esi;
    ecx = MEM32(ecx + 0x20C);
    MEM32(eax + 0x20C) = ecx;
    ebx = eax + 0x210;
    MEM32(esp + 0xC) = 0x18;

loc_001030A3: ;
    esi = edx + ebx;
    edi = ebx;
    ecx = 8;
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
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ecx;
    if ((_fa != 0)) goto loc_001030A3; /* jne: not equal / not zero */

loc_001030BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001030D0
 * Original: 0x001030D0 - 0x001030DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001030D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001030D0: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00102E40(); return; /* tail jmp 0x00102E40 */

}

/**
 * sub_001030E0
 * Original: 0x001030E0 - 0x001031AF (207 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001030E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001030E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 8);
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FE99C); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx, xmm2); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm4 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0 = xmm4; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0x55); /* shufps */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm7 = xmm0; /* movaps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm0, 0xAA); /* shufps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    edx = esp + 0xC;
    MEMF(edx) = xmm7.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0xC9); /* shufps */
    xmm6 = xmm4; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm4, 0xD2); /* shufps */
    xmm6 = XMM_MUL(xmm6, xmm5); /* mulps */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0xD2); /* shufps */
    xmm1 = xmm4; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm4, 0xC9); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm5); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm6); /* subps */
    xmm5 = xmm3; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm3, 0); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm4); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm2 = XMM_ADD(xmm2, xmm5); /* addps */
    XMM_STORE(ecx, xmm2); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001031B0
 * Original: 0x001031B0 - 0x001031B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001031B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001031B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001031C0(); return; /* tail jmp 0x001031C0 */

}

/**
 * sub_001031C0
 * Original: 0x001031C0 - 0x001031F5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001031C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001031C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x317AD0;
    MEM32(esi + 8) = 0x317AC0;
    PUSH32(esp, 0x001031D5u); RECOMP_ABI_CALL(0x0022AE40u, sub_0022AE40); /* call 0x0022AE40 */

loc_001031D5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001031EF; /* je: equal / zero */

loc_001031DC: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x530EB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001031EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001031ECu); } /* indirect call */
    }

loc_001031EF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00103200
 * Original: 0x00103200 - 0x00103232 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00103200: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    MEM32(esi) = 0x317780;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ecx + 6));
    if ((_fa != 0)) goto loc_0010321C; /* jne: not equal / not zero */

loc_00103216: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0010321Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010321Au); } /* indirect call */
    }

loc_0010321C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010322C; /* je: equal / zero */

loc_00103223: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00103229u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00103229: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010322C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00103240
 * Original: 0x00103240 - 0x0010324E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103240(void)
{

loc_00103240: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00103248u); RECOMP_ABI_CALL(0x000FF7F0u, sub_000FF7F0); /* call 0x000FF7F0 */

loc_00103248: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00103250
 * Original: 0x00103250 - 0x0010325B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103250(void)
{

loc_00103250: ;
    MEM32(0x3DB9A8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00103260
 * Original: 0x00103260 - 0x0010326D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103260(void)
{

loc_00103260: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x280) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00103270
 * Original: 0x00103270 - 0x0010328C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00103270: ;
    SET_LO8(eax, MEM8(ecx + 0x520));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103289; /* jne: not equal / not zero */

loc_0010327A: ;
    eax = MEM32(ecx + 0x290);
    _fb = (uint32_t)(0x290) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x290;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_00103289: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00103290
 * Original: 0x00103290 - 0x0010329A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00103290: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103296u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00103296: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001032A0
 * Original: 0x001032A0 - 0x001032A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001032A0(void)
{

loc_001032A0: ;
    eax = MEM32(ecx + 0x10C);
    esp += 4; return; /* ret */

}

/**
 * sub_001032B0
 * Original: 0x001032B0 - 0x001032B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001032B0(void)
{

loc_001032B0: ;
    eax = MEM32(ecx + 0x10C);
    esp += 4; return; /* ret */

}

/**
 * sub_001032C0
 * Original: 0x001032C0 - 0x001032E3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001032C0(void)
{

loc_001032C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001032D5u); RECOMP_ABI_CALL(0x00226D40u, sub_00226D40); /* call 0x00226D40 */

loc_001032D5: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x10C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001032F0
 * Original: 0x001032F0 - 0x001035BC (716 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001032F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001032F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x001032FDu); RECOMP_ABI_CALL(0x001394E0u, sub_001394E0); /* call 0x001394E0 */

loc_001032FD: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    PUSH32(esp, esi);
    ecx = esi + 0x504;
    MEM32(esi + 0x234) = eax;
    PUSH32(esp, 0x00103315u); RECOMP_ABI_CALL(0x000312E0u, sub_000312E0); /* call 0x000312E0 */

loc_00103315: ;
    ecx = MEM32(esi + 0x280);
    ebx = MEM32(esi + 0x290);
    PUSH32(esp, 0);
    ebp = esi + 0x290;
    PUSH32(esp, 0xE11D0E3);
    PUSH32(esp, 0x00103333u); RECOMP_ABI_CALL(0x0003AE00u, sub_0003AE00); /* call 0x0003AE00 */

loc_00103333: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x00103339u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103337u); } /* indirect call */
    }

loc_00103339: ;
    eax = MEM32(esi + 0x280);
    PUSH32(esp, 0xF6009531u);
    ecx = eax + 8;
    PUSH32(esp, 0x0010334Cu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0010334C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103363; /* je: equal / zero */

loc_00103352: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(esi + 0x520) = 1;
    PUSH32(esp, 0x00103361u); RECOMP_ABI_CALL(0x001398F0u, sub_001398F0); /* call 0x001398F0 */

loc_00103361: ;
    goto loc_0010336A;

loc_00103363: ;
    MEM8(esi + 0x520) = 0;

loc_0010336A: ;
    PUSH32(esp, 0x20);
    ecx = edi + 0x60;
    PUSH32(esp, ecx);
    edx = esi + 0x59C;
    PUSH32(esp, edx);
    MEM32(esi + 0x598) = ebx;
    PUSH32(esp, 0x00103382u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00103382: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esi + 0x574;
    PUSH32(esp, 0x00103391u); RECOMP_ABI_CALL(0x00141AF0u, sub_00141AF0); /* call 0x00141AF0 */

loc_00103391: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0010339Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103397u); } /* indirect call */
    }

loc_0010339A: ;
    ecx = MEM32(esi + 0x10C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001033A7u); RECOMP_ABI_CALL(0x002288E0u, sub_002288E0); /* call 0x002288E0 */

loc_001033A7: ;
    ecx = MEM32(edi + 0x84);
    edx = MEM32(esi + 0x10C);
    MEM32(esi + 0x27C) = ecx;
    xmm0 = XMM_MEM(edi + 0x10); /* movaps */
    eax = esi + 0x240;
    XMM_STORE(eax, xmm0); /* movaps */
    ecx = MEM32(edx + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x001033CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001033CCu); } /* indirect call */
    }

loc_001033CF: ;
    xmm0 = XMM_MEM(edi + 0x20); /* movaps */
    XMM_STORE(esi + 0x250, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x30); /* movaps */
    XMM_STORE(esi + 0x260, xmm0); /* movaps */
    eax = MEM32(edi + 0x40);
    MEM32(esi + 0x270) = eax;
    ecx = MEM32(edi + 0x44);
    MEM32(esi + 0x274) = ecx;
    edx = MEM32(edi + 0x48);
    MEM32(esi + 0x278) = edx;
    eax = MEM32(edi + 0x80);
    MEM32(esi + 0x200) = eax;
    eax = MEM32(esi + 0x280);
    PUSH32(esp, 0xF366E3BFu);
    ecx = eax + 8;
    PUSH32(esp, 0x0010341Fu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0010341F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103425u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_00103425: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103433; /* jne: not equal / not zero */

loc_0010342C: ;
    eax = MEM32(edi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103444; /* je: equal / zero */

loc_00103433: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010343Bu); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_0010343B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x204) = eax;

loc_00103444: ;
    eax = MEM32(esi + 0x280);
    PUSH32(esp, 0xDAD3AFF8u);
    ecx = eax + 8;
    PUSH32(esp, 0x00103457u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_00103457: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010345Du); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0010345D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010346B; /* jne: not equal / not zero */

loc_00103464: ;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010347C; /* je: equal / zero */

loc_0010346B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103473u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_00103473: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x208) = eax;

loc_0010347C: ;
    eax = MEM32(esi + 0x280);
    PUSH32(esp, 0xECD8CFF7u);
    ecx = eax + 8;
    PUSH32(esp, 0x0010348Fu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0010348F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103495u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_00103495: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001034B1; /* je: equal / zero */

loc_0010349E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001034A6u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_001034A6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esi + 0x20C) = eax;
    PUSH32(esp, ebp);
    goto loc_001034CC;

loc_001034B1: ;
    eax = MEM32(edi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001034DA; /* je: equal / zero */

loc_001034B8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001034C0u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_001034C0: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0x20C) = eax;
    ecx = MEM32(edi + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);

loc_001034CC: ;
    PUSH32(esp, 0x001034D1u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_001034D1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x210) = eax;

loc_001034DA: ;
    eax = MEM32(esi + 0x280);
    PUSH32(esp, 0x797F01A6);
    ecx = eax + 8;
    PUSH32(esp, 0x001034EDu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_001034ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001034F3u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_001034F3: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010351E; /* je: equal / zero */

loc_001034FC: ;
    edi = esi + 0x214;
    ebx = 6;

loc_00103507: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00103511u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_00103511: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00103507; /* jne: not equal / not zero */

loc_0010351C: ;
    goto loc_00103549;

loc_0010351E: ;
    _fa = (uint32_t)(MEM32(edi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x5C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010354B; /* je: equal / zero */

loc_00103523: ;
    ebp = esi + 0x214;
    ebx = 6;
    edi = edi;

loc_00103530: ;
    edx = MEM32(edi + 0x5C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010353Du); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_0010353D: ;
    MEM32(ebp) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00103530; /* jne: not equal / not zero */

loc_00103549: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010354B: ;
    _fa = (uint32_t)(MEM32(esi + 0x1AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1AC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103585; /* jne: not equal / not zero */

loc_00103553: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x317BB0);
    PUSH32(esp, 0x00103564u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00103564: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103574; /* je: equal / zero */

loc_0010356B: ;
    ecx = eax;
    PUSH32(esp, 0x00103572u); RECOMP_ABI_CALL(0x0003B8B0u, sub_0003B8B0); /* call 0x0003B8B0 */

loc_00103572: ;
    goto loc_00103576;

loc_00103574: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00103576: ;
    PUSH32(esp, eax);
    MEM32(esi + 0x1AC) = eax;
    PUSH32(esp, 0x00103582u); RECOMP_ABI_CALL(0x0003BEB0u, sub_0003BEB0); /* call 0x0003BEB0 */

loc_00103582: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00103585: ;
    eax = MEM32(esi + 0x1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001035AE; /* je: equal / zero */

loc_0010358F: ;
    PUSH32(esp, ebx);
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x24) = ebx;
    ecx = MEM32(esi + 0x1AC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001035AEu); RECOMP_ABI_CALL(0x0003B6B0u, sub_0003B6B0); /* call 0x0003B6B0 */

loc_001035AE: ;
    POP32(esp, edi);
    MEM8(esi + 0x514) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001035C0
 * Original: 0x001035C0 - 0x001035E3 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001035C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001035C0: ;
    ecx = MEM32(ecx + 0x1C8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001035DF; /* je: equal / zero */

loc_001035CD: ;
    PUSH32(esp, 0xAC016BC1u);
    PUSH32(esp, 0x001035D7u); RECOMP_ABI_CALL(0x00039EA0u, sub_00039EA0); /* call 0x00039EA0 */

loc_001035D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001035DF; /* je: equal / zero */

loc_001035DB: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001035DF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001035F0
 * Original: 0x001035F0 - 0x0010361D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001035F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001035F0: ;
    ecx = MEM32(ecx + 0x1C8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103617; /* je: equal / zero */

loc_001035FD: ;
    PUSH32(esp, 0xAC016BC1u);
    PUSH32(esp, 0x00103607u); RECOMP_ABI_CALL(0x00039EA0u, sub_00039EA0); /* call 0x00039EA0 */

loc_00103607: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103617; /* je: equal / zero */

loc_0010360B: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + ecx * 4 + 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00103617: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00103620
 * Original: 0x00103620 - 0x0010368D (109 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00103620: ;
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
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103637u); RECOMP_ABI_CALL(0x00131B40u, sub_00131B40); /* call 0x00131B40 */

loc_00103637: ;
    edi = MEM32(esi + 0x10C);
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103647u); RECOMP_ABI_CALL(0x00232960u, sub_00232960); /* call 0x00232960 */

loc_00103647: ;
    SET_LO8(eax, MEM8(esi + 0x520));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103684; /* jne: not equal / not zero */

loc_00103651: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103658u); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_00103658: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010366A; /* jne: not equal / not zero */

loc_0010365C: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010366A; /* je: equal / zero */

loc_00103663: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010366Au); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_0010366A: ;
    _fa = (uint32_t)(MEM8(edi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00103677; /* je: equal / zero */

loc_00103670: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103684; /* jne: not equal / not zero */

loc_00103677: ;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00103684u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103681u); } /* indirect call */
    }

loc_00103684: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00103690
 * Original: 0x00103690 - 0x001036E6 (86 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103690(void)
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

loc_00103690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x10C);
    ecx = MEM32(eax + 0x3C);
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
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
 * sub_001036F0
 * Original: 0x001036F0 - 0x001037A4 (180 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001036F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001036F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm3 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10C);
    eax = MEM32(esi + 0x3C);
    xmm2 = XMM_MEM(eax + 0x40); /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0x4E); /* shufps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xB1); /* shufps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    ecx = esi;
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010377Eu); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_0010377E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103790; /* jne: not equal / not zero */

loc_00103782: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103790; /* je: equal / zero */

loc_00103789: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103790u); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_00103790: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0010379Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010379Au); } /* indirect call */
    }

loc_0010379D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001037B0
 * Original: 0x001037B0 - 0x001038C9 (281 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001037B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001037B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x59C;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, 0x317BD8);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x20) = 0x2FF9EC;
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x48) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010381Au); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0010381A: ;
    edx = esp + 0xCC;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103827u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00103827: ;
    MEM32(esp + 0x44) = eax;
    eax = esi + 0x574;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103841u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_00103841: ;
    _fa = (uint32_t)(MEM8(esi + 0x570)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x570), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001038C3; /* jne: not equal / not zero */

loc_00103849: ;
    _fa = (uint32_t)(MEM32(esi + 0x208)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x208), ebx (32-bit) */
    MEM8(esi + 0x570) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001038C3; /* je: equal / zero */

loc_00103858: ;
    edx = MEM32(esi);
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4DA8ACC5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0010386Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103869u); } /* indirect call */
    }

loc_0010386C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001038C3; /* je: equal / zero */

loc_00103870: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    ecx = esp + 0xB0;
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001038A5u); RECOMP_ABI_CALL(0x00264FC0u, sub_00264FC0); /* call 0x00264FC0 */

loc_001038A5: ;
    ecx = MEM32(esi + 0x208);
    edx = MEM32(ecx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x001038B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001038B2u); } /* indirect call */
    }

loc_001038B8: ;
    ecx = MEM32(esi + 0x208);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001038C3u); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_001038C3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001038D0
 * Original: 0x001038D0 - 0x0010399A (202 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001038D0(void)
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

loc_001038D0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1FC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00103996; /* jp: parity */

loc_001038EC: ;
    eax = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x001038F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001038F2u); } /* indirect call */
    }

loc_001038F8: ;
    ebx = MEM32(esp + 0x14);
    esi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00103967; /* je: equal / zero */

loc_00103905: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0010390Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103909u); } /* indirect call */
    }

loc_0010390C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103922; /* jne: not equal / not zero */

loc_00103911: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00103918u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103915u); } /* indirect call */
    }

loc_00103918: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103922; /* je: equal / zero */

loc_0010391C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x2C), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103993; /* je: equal / zero */

loc_00103922: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x0010392Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103926u); } /* indirect call */
    }

loc_0010392C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010394A; /* je: equal / zero */

loc_00103930: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00103937u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103934u); } /* indirect call */
    }

loc_00103937: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00103942u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010393Fu); } /* indirect call */
    }

loc_00103942: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103993; /* je: equal / zero */

loc_0010394A: ;
    SET_LO8(eax, MEM8(ebx + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103957; /* je: equal / zero */

loc_00103951: ;
    _fa = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x2C), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103993; /* je: equal / zero */

loc_00103957: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0010395Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010395Bu); } /* indirect call */
    }

loc_0010395E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0010396C; /* jne: not equal / not zero */

loc_00103967: ;
    MEM8(esp + 0x14) = 0;

loc_0010396C: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x1C0); PUSH32(esp, 0x00103984u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010397Eu); } /* indirect call */
    }

loc_00103984: ;
    ecx = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(ebp + 0x1FC) = xmm0.f[0]; /* movss */

loc_00103993: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00103996: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001039A0
 * Original: 0x001039A0 - 0x00103A96 (246 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001039A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001039A0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x280);
    PUSH32(esp, 0xCDC15FAAu);
    ecx = eax + 8;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0x001039C1u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_001039C1: ;
    ebx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001039FE; /* jle: less or equal (signed <=) */

loc_001039C9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xB8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax + 4;

loc_001039D4: ;
    eax = MEM32(edi);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB11233D6u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001039E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001039E3u); } /* indirect call */
    }

loc_001039E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001039EDu); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_001039ED: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001039D4; /* jne: not equal / not zero */

loc_001039F6: ;
    edi = MEM32(esp + 0x10);
    POP32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);

loc_001039FE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x2C) = ecx;
    ecx = edi + 0x59C;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, 0x317BE8);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 0x2FF9EC;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x00103A54u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00103A54: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103A5Eu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00103A5E: ;
    ecx = edi + 0x574;
    MEM32(esp + 0x20) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00103A78u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_00103A78: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x518) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x51C) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00103AA0
 * Original: 0x00103AA0 - 0x00103B07 (103 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00103AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0xEE800C0Eu);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00103AB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103AB4u); } /* indirect call */
    }

loc_00103AB7: ;
    SET_LO8(ecx, MEM8(0x3DB9C0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00103AFE; /* jne: not equal / not zero */

loc_00103AC6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    ecx = MEM32(0x3DB9C0);
    MEMF(0x3DB9B0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(0x3DB9B4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEM32(0x3DB9C0) = ecx;
    MEMF(0x3DB9B8) = xmm0.f[0]; /* movss */

loc_00103AFE: ;
    eax = 0x3DB9B0;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00103B10
 * Original: 0x00103B10 - 0x00103CA7 (407 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00103B10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00103B1Bu); RECOMP_ABI_CALL(0x0013B0A0u, sub_0013B0A0); /* call 0x0013B0A0 */

loc_00103B1B: ;
    edi = esi + 0x1C0;
    ecx = edi;
    PUSH32(esp, 0x00103B28u); RECOMP_ABI_CALL(0x000F1390u, sub_000F1390); /* call 0x000F1390 */

loc_00103B28: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x290;
    MEM32(esi) = 0x317CA8;
    MEM32(esi + 8) = 0x317CA0;
    MEM32(esi + 0xB0) = 0x317C98;
    MEM32(esi + 0xB8) = 0x317C80;
    MEM32(esi + 0xC0) = 0x317C7C;
    MEM32(esi + 0xC4) = 0x317C38;
    MEM32(edi) = 0x317C0C;
    MEMF(esi + 0x1E4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1E8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1EC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1F0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1FC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x204) = ebx;
    MEM32(esi + 0x208) = ebx;
    MEM32(esi + 0x20C) = ebx;
    MEM32(esi + 0x210) = ebx;
    MEM8(esi + 0x22C) = LO8(ebx);
    MEM32(esi + 0x230) = ebx;
    MEM32(esi + 0x280) = ebx;
    MEM32(esi + 0x288) = ebx;
    PUSH32(esp, 0x00103BCBu); RECOMP_ABI_CALL(0x000243C0u, sub_000243C0); /* call 0x000243C0 */

loc_00103BCB: ;
    ecx = esi + 0x504;
    MEM32(esi + 0x500) = ebx;
    PUSH32(esp, 0x00103BDCu); RECOMP_ABI_CALL(0x00031260u, sub_00031260); /* call 0x00031260 */

loc_00103BDC: ;
    MEM8(esi + 0x514) = LO8(ebx);
    MEM8(esi + 0x520) = LO8(ebx);
    MEM8(esi + 0x570) = LO8(ebx);
    MEM8(esi + 0x571) = LO8(ebx);
    MEM8(esi + 0x578) = LO8(ebx);
    MEM32(esi + 0x574) = 0x2FFA54;
    MEM32(esi + 0x580) = ebx;
    MEM32(esi + 0x584) = ebx;
    MEM32(esi + 0x588) = ebx;
    MEM32(esi + 0x57C) = 0x2FF02C;
    PUSH32(esp, 4);
    MEM32(esi + 0x58C) = ebx;
    MEM32(esi + 0x590) = ebx;
    MEM32(esi + 0x594) = ebx;
    MEM32(esi + 0x230) = 0x64;
    PUSH32(esp, 0x00103C43u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00103C43: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103C5C; /* je: equal / zero */

loc_00103C4C: ;
    ecx = ebp;
    PUSH32(esp, 0x00103C53u); RECOMP_ABI_CALL(0x000EE530u, sub_000EE530); /* call 0x000EE530 */

loc_00103C53: ;
    MEM32(ebp) = 0x317B94;
    goto loc_00103C5E;

loc_00103C5C: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00103C5E: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00103C66u); RECOMP_ABI_CALL(0x000F1440u, sub_000F1440); /* call 0x000F1440 */

loc_00103C66: ;
    MEM32(esi + 0x214) = ebx;
    MEM32(esi + 0x218) = ebx;
    MEM32(esi + 0x21C) = ebx;
    MEM32(esi + 0x220) = ebx;
    MEM32(esi + 0x224) = ebx;
    MEM32(esi + 0x228) = ebx;
    eax = MEM32(0x3DB9A8);
    MEM32(esi + 0x284) = eax;
    eax = MEM32(0x3DB9A8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x3DB9A8) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00103CB0
 * Original: 0x00103CB0 - 0x00103E39 (393 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00103CB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x500);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ebx = esi + 0x1C0;
    PUSH32(esp, edi);
    MEM32(esi) = 0x317CA8;
    MEM32(esi + 8) = 0x317CA0;
    MEM32(esi + 0xB0) = 0x317C98;
    MEM32(esi + 0xB8) = 0x317C80;
    MEM32(esi + 0xC0) = 0x317C7C;
    MEM32(esi + 0xC4) = 0x317C38;
    MEM32(ebx) = 0x317C0C;
    if (CMP_EQ(_fa, _fb)) goto loc_00103D0C; /* je: equal / zero */

loc_00103D03: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103D09u); RECOMP_ABI_CALL(0x0018AC20u, sub_0018AC20); /* call 0x0018AC20 */

loc_00103D09: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00103D0C: ;
    ecx = ebx;
    PUSH32(esp, 0x00103D13u); RECOMP_ABI_CALL(0x000F1360u, sub_000F1360); /* call 0x000F1360 */

loc_00103D13: ;
    edi = eax;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00103D2B; /* js: sign (negative) */

loc_00103D18: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00103D20u); RECOMP_ABI_CALL(0x000F1370u, sub_000F1370); /* call 0x000F1370 */

loc_00103D20: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00103D28u); RECOMP_ABI_CALL(0x000F1480u, sub_000F1480); /* call 0x000F1480 */

loc_00103D28: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00103D18; /* jns: not sign (positive) */

loc_00103D2B: ;
    eax = MEM32(esi + 0x500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103D3E; /* je: equal / zero */

loc_00103D35: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103D3Bu); RECOMP_ABI_CALL(0x0018AC20u, sub_0018AC20); /* call 0x0018AC20 */

loc_00103D3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00103D3E: ;
    eax = MEM32(esi + 0x204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103D57; /* je: equal / zero */

loc_00103D48: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103D4Eu); RECOMP_ABI_CALL(0x0010D0E0u, sub_0010D0E0); /* call 0x0010D0E0 */

loc_00103D4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x204) = ebp;

loc_00103D57: ;
    eax = MEM32(esi + 0x208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103D70; /* je: equal / zero */

loc_00103D61: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103D67u); RECOMP_ABI_CALL(0x0010D0E0u, sub_0010D0E0); /* call 0x0010D0E0 */

loc_00103D67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x208) = ebp;

loc_00103D70: ;
    eax = MEM32(esi + 0x20C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103D89; /* je: equal / zero */

loc_00103D7A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103D80u); RECOMP_ABI_CALL(0x0010D0E0u, sub_0010D0E0); /* call 0x0010D0E0 */

loc_00103D80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20C) = ebp;

loc_00103D89: ;
    eax = MEM32(esi + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103DA2; /* je: equal / zero */

loc_00103D93: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103D99u); RECOMP_ABI_CALL(0x0010D0E0u, sub_0010D0E0); /* call 0x0010D0E0 */

loc_00103D99: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x210) = ebp;

loc_00103DA2: ;
    edi = esi + 0x214;
    ebx = 6;
    /* nop */

loc_00103DB0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103DC1; /* je: equal / zero */

loc_00103DB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103DBCu); RECOMP_ABI_CALL(0x0010D0E0u, sub_0010D0E0); /* call 0x0010D0E0 */

loc_00103DBC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebp;

loc_00103DC1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00103DB0; /* jne: not equal / not zero */

loc_00103DC7: ;
    eax = MEM32(esi + 0x288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00103DDD; /* je: equal / zero */

loc_00103DD1: ;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00103DDDu); RECOMP_ABI_CALL(0x00225350u, sub_00225350); /* call 0x00225350 */

loc_00103DDD: ;
    edi = esi + 0x57C;
    MEM32(esi + 0x574) = 0x2FFA54;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(edi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00103E00; /* je: equal / zero */

loc_00103DFA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00103E00u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00103E00: ;
    MEM32(edi + 4) = ebp;
    ecx = esi + 0x504;
    MEM32(esi + 0x574) = 0x2FF9B8;
    PUSH32(esp, 0x00103E18u); RECOMP_ABI_CALL(0x00031280u, sub_00031280); /* call 0x00031280 */

loc_00103E18: ;
    ecx = esi + 0x290;
    PUSH32(esp, 0x00103E23u); RECOMP_ABI_CALL(0x00023F90u, sub_00023F90); /* call 0x00023F90 */

loc_00103E23: ;
    ecx = esi + 0x1C0;
    PUSH32(esp, 0x00103E2Eu); RECOMP_ABI_CALL(0x000F13D0u, sub_000F13D0); /* call 0x000F13D0 */

loc_00103E2E: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0013B200(); return; /* tail jmp 0x0013B200 */

}

/**
 * sub_00103E40
 * Original: 0x00103E40 - 0x0010408F (591 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00103E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00103E57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103E54u); } /* indirect call */
    }

loc_00103E57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25E5F251) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25E5F251 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103EB6; /* jne: not equal / not zero */

loc_00103E5E: ;
    ecx = MEM32(esi + 0x1C8);
    edi = esi + 0x478;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103E70u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_00103E70: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4A8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4AC)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x317EAC); /* subss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103EAEu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00103EAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00103EB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x454AC1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x454AC1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103EDA; /* jne: not equal / not zero */

loc_00103EBD: ;
    SET_LO8(eax, MEM8(esi + 0x4B9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104087; /* jne: not equal / not zero */

loc_00103ECB: ;
    MEM8(esi + 0x440) = MEM8(esi + 0x440) | 0x10;
    _fa = (uint32_t)(MEM8(esi + 0x440)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00103EDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13A2F2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13A2F2AA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103EF0; /* jne: not equal / not zero */

loc_00103EE1: ;
    MEM8(esi + 0x440) = MEM8(esi + 0x440) & 0xEF;
    _fa = (uint32_t)(MEM8(esi + 0x440)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00103EF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBD5A5DA6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBD5A5DA6u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103F3E; /* jne: not equal / not zero */

loc_00103EF7: ;
    SET_LO8(eax, MEM8(esi + 0x440));
    SET_LO8(eax, LO8(eax) & 0xEF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xDF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(edx));
    MEM8(esi + 0x440) = LO8(eax);
    MEM8(esi + 0x440) = LO8(edx);
    SET_LO8(ecx, LO8(ecx) & 0xBF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x440) = LO8(ecx);
    edx = MEM32(esi + -184);
    ecx = esi + -184;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(esi + 0x4B9) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x1C4); PUSH32(esp, 0x00103F36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103F30u); } /* indirect call */
    }

loc_00103F36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00103F3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF6531BE8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF6531BE8u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103F66; /* jne: not equal / not zero */

loc_00103F45: ;
    SET_LO8(ecx, MEM8(esi + 0x440));
    SET_LO8(ecx, LO8(ecx) | 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) | 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x440) = LO8(ecx);
    MEM8(esi + 0x440) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00103F66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFC56E1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFC56E1F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00103F8E; /* jne: not equal / not zero */

loc_00103F6D: ;
    SET_LO8(ecx, MEM8(esi + 0x440));
    SET_LO8(ecx, LO8(ecx) & 0xDF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x440) = LO8(ecx);
    MEM8(esi + 0x440) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00103F8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F1066FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F1066FB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010405C; /* jne: not equal / not zero */

loc_00103F99: ;
    SET_LO8(eax, MEM8(esi + 0x468));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104087; /* je: equal / zero */

loc_00103FA7: ;
    ecx = MEM32(esi + 0x1C8);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM8(esi + 0x468) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103FBEu); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_00103FBE: ;
    edx = MEM32(esi + -184);
    edi = esi + -184;
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00103FD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00103FD1u); } /* indirect call */
    }

loc_00103FD7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103FFFu); RECOMP_ABI_CALL(0x00104DF0u, sub_00104DF0); /* call 0x00104DF0 */

loc_00103FFF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0x54);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104027u); RECOMP_ABI_CALL(0x00104E20u, sub_00104E20); /* call 0x00104E20 */

loc_00104027: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104030u); RECOMP_ABI_CALL(0x001398F0u, sub_001398F0); /* call 0x001398F0 */

loc_00104030: ;
    ecx = esi + 0x1D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010403Bu); RECOMP_ABI_CALL(0x00024380u, sub_00024380); /* call 0x00024380 */

loc_0010403B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x504) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x4B8) = 0;
    MEM8(esi + 0x4B9) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0010405C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB16BD083u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB16BD083u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010407F; /* jne: not equal / not zero */

loc_00104063: ;
    PUSH32(esp, 0);
    ecx = esi + -184;
    MEM8(esi + 0x468) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104077u); RECOMP_ABI_CALL(0x001398F0u, sub_001398F0); /* call 0x001398F0 */

loc_00104077: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0010407F: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104087u); RECOMP_ABI_CALL(0x0013ADE0u, sub_0013ADE0); /* call 0x0013ADE0 */

loc_00104087: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00104090
 * Original: 0x00104090 - 0x00104173 (227 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104090: ;
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
    SET_LO8(eax, MEM8(esi + 0x520));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00104138; /* je: equal / zero */

loc_001040AC: ;
    ecx = MEM32(esi + 0x10C);
    ebx = esi + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001040BDu); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_001040BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104138; /* je: equal / zero */

loc_001040C1: ;
    eax = MEM32(esi);
    edi = esi + 0x530;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x001040D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001040CCu); } /* indirect call */
    }

loc_001040D2: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001040DAu); RECOMP_ABI_CALL(0x001103B0u, sub_001103B0); /* call 0x001103B0 */

loc_001040DA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = MEM32(ebx);
    ecx = edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001040FEu); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_001040FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104110; /* jne: not equal / not zero */

loc_00104102: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104110; /* je: equal / zero */

loc_00104109: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104110u); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_00104110: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0010411Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010411Au); } /* indirect call */
    }

loc_0010411D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104122u); RECOMP_ABI_CALL(0x0007E760u, sub_0007E760); /* call 0x0007E760 */

loc_00104122: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x3DB9A8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x3DB9A8))); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x284)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x284) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104138; /* jne: not equal / not zero */

loc_00104131: ;
    ecx = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104138u); RECOMP_ABI_CALL(0x00222CC0u, sub_00222CC0); /* call 0x00222CC0 */

loc_00104138: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104143u); RECOMP_ABI_CALL(0x001397A0u, sub_001397A0); /* call 0x001397A0 */

loc_00104143: ;
    SET_LO8(eax, MEM8(esi + 0x520));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104160; /* je: equal / zero */

loc_0010414D: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104156u); RECOMP_ABI_CALL(0x001398F0u, sub_001398F0); /* call 0x001398F0 */

loc_00104156: ;
    SET_LO8(eax, MEM8(esi + 0x520));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010416A; /* jne: not equal / not zero */

loc_00104160: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1FC); PUSH32(esp, 0x0010416Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104164u); } /* indirect call */
    }

loc_0010416A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00104180
 * Original: 0x00104180 - 0x001042EB (363 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104180: ;
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
    eax = MEM32(esi + 0x500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001042E4; /* je: equal / zero */

loc_0010419D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
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
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00104218u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104215u); } /* indirect call */
    }

loc_00104218: ;
    ecx = MEM32(esi + 0x500);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x0010422Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104225u); } /* indirect call */
    }

loc_0010422B: ;
    eax = MEM32(esi + 0x500);
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(eax + 0x1F0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(eax + 0x1F4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(eax + 0x1F8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x500);
    ecx = MEM32(eax + 0x210);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEM32(eax + 0x220) = ecx;
    edx = MEM32(eax + 0x214);
    MEM32(eax + 0x224) = edx;
    ecx = MEM32(eax + 0x218);
    MEM32(eax + 0x228) = ecx;
    MEMF(eax + 0x210) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    PUSH32(esp, 0xBF800000u);
    MEMF(eax + 0x214) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    PUSH32(esp, 0x42FE0000);
    MEMF(eax + 0x218) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x500);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001042E4u); RECOMP_ABI_CALL(0x00187DC0u, sub_00187DC0); /* call 0x00187DC0 */

loc_001042E4: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001042F0
 * Original: 0x001042F0 - 0x001043A6 (182 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001042F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001042F0: ;
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
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104372u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00104372: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010437Du); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_0010437D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010439F; /* je: equal / zero */

loc_00104386: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x00104390u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010438Au); } /* indirect call */
    }

loc_00104390: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x0010439Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104399u); } /* indirect call */
    }

loc_0010439F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001043B0
 * Original: 0x001043B0 - 0x001045F0 (576 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001043B0(void)
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

loc_001043B0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1A8); PUSH32(esp, 0x001043C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001043BCu); } /* indirect call */
    }

loc_001043C2: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x001043D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001043CAu); } /* indirect call */
    }

loc_001043D0: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x571));
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001043EB; /* jne: not equal / not zero */

loc_001043E3: ;
    _fa = (uint32_t)(MEM8(esi + 0x520)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x520), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001043F6; /* je: equal / zero */

loc_001043EB: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_001043FC;

loc_001043F6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_001043FC: ;
    ecx = MEM32(esi + 0x598);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104499; /* jne: not equal / not zero */

loc_0010440A: ;
    fp_push(MEMD(0x30FE50)); /* fld double */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001045E7; /* jbe: below or equal (unsigned <=) */

loc_0010441E: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00104427u); RECOMP_ABI_CALL(0x00104EA0u, sub_00104EA0); /* call 0x00104EA0 */

loc_00104427: ;
    eax = MEM32(esi + 0x590);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010443B; /* je: equal / zero */

loc_00104431: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0010443Bu); RECOMP_ABI_CALL(0x00144C40u, sub_00144C40); /* call 0x00144C40 */

loc_0010443B: ;
    PUSH32(esp, 9);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00104446u); RECOMP_ABI_CALL(0x00142100u, sub_00142100); /* call 0x00142100 */

loc_00104446: ;
    eax = esi + 0x59C;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x50) = ebx;
    PUSH32(esp, 0x0010445Au); RECOMP_ABI_CALL(0x00142130u, sub_00142130); /* call 0x00142130 */

loc_0010445A: ;
    ecx = esi + 0x574;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    MEM8(esp + 0x5D) = LO8(ebx);
    PUSH32(esp, 0x0010446Eu); RECOMP_ABI_CALL(0x00142750u, sub_00142750); /* call 0x00142750 */

loc_0010446E: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00104477u); RECOMP_ABI_CALL(0x00145A60u, sub_00145A60); /* call 0x00145A60 */

loc_00104477: ;
    ecx = esp + 0x10;
    MEM32(esi + 0x590) = eax;
    MEM32(esi + 0x598) = 1;
    PUSH32(esp, 0x00104490u); RECOMP_ABI_CALL(0x00104F60u, sub_00104F60); /* call 0x00104F60 */

loc_00104490: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00104499: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104528; /* jne: not equal / not zero */

loc_001044A2: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00104528; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_001044A9: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001044B2u); RECOMP_ABI_CALL(0x00104EA0u, sub_00104EA0); /* call 0x00104EA0 */

loc_001044B2: ;
    eax = MEM32(esi + 0x58C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001044C6; /* je: equal / zero */

loc_001044BC: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001044C6u); RECOMP_ABI_CALL(0x00144C40u, sub_00144C40); /* call 0x00144C40 */

loc_001044C6: ;
    PUSH32(esp, 9);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001044D1u); RECOMP_ABI_CALL(0x00142100u, sub_00142100); /* call 0x00142100 */

loc_001044D1: ;
    edx = esi + 0x59C;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + 0x50) = 5;
    PUSH32(esp, 0x001044E9u); RECOMP_ABI_CALL(0x00142130u, sub_00142130); /* call 0x00142130 */

loc_001044E9: ;
    eax = esi + 0x574;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM8(esp + 0x5D) = LO8(ebx);
    PUSH32(esp, 0x001044FDu); RECOMP_ABI_CALL(0x00142750u, sub_00142750); /* call 0x00142750 */

loc_001044FD: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00104506u); RECOMP_ABI_CALL(0x00145A60u, sub_00145A60); /* call 0x00145A60 */

loc_00104506: ;
    ecx = esp + 0x10;
    MEM32(esi + 0x58C) = eax;
    MEM32(esi + 0x598) = 2;
    PUSH32(esp, 0x0010451Fu); RECOMP_ABI_CALL(0x00104F60u, sub_00104F60); /* call 0x00104F60 */

loc_0010451F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00104528: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001045D3; /* jne: not equal / not zero */

loc_00104531: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001045D3; /* jp: parity */

loc_0010453E: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00104547u); RECOMP_ABI_CALL(0x00104EA0u, sub_00104EA0); /* call 0x00104EA0 */

loc_00104547: ;
    ecx = MEM32(esi + 0x58C);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00104557u); RECOMP_ABI_CALL(0x00144C40u, sub_00144C40); /* call 0x00144C40 */

loc_00104557: ;
    eax = MEM32(esi + 0x594);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x58C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00104571; /* je: equal / zero */

loc_00104567: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00104571u); RECOMP_ABI_CALL(0x00144C40u, sub_00144C40); /* call 0x00144C40 */

loc_00104571: ;
    PUSH32(esp, 9);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0010457Cu); RECOMP_ABI_CALL(0x00142100u, sub_00142100); /* call 0x00142100 */

loc_0010457C: ;
    edx = esi + 0x59C;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + 0x50) = 1;
    PUSH32(esp, 0x00104594u); RECOMP_ABI_CALL(0x00142130u, sub_00142130); /* call 0x00142130 */

loc_00104594: ;
    eax = esi + 0x574;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM8(esp + 0x5D) = LO8(ebx);
    PUSH32(esp, 0x001045A8u); RECOMP_ABI_CALL(0x00142750u, sub_00142750); /* call 0x00142750 */

loc_001045A8: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001045B1u); RECOMP_ABI_CALL(0x00145A60u, sub_00145A60); /* call 0x00145A60 */

loc_001045B1: ;
    ecx = esp + 0x10;
    MEM32(esi + 0x594) = eax;
    MEM32(esi + 0x598) = 3;
    PUSH32(esp, 0x001045CAu); RECOMP_ABI_CALL(0x00104F60u, sub_00104F60); /* call 0x00104F60 */

loc_001045CA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001045D3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001045E7; /* jne: not equal / not zero */

loc_001045D8: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001045E7; /* jp: parity */

loc_001045E1: ;
    MEM32(esi + 0x598) = ebx;

loc_001045E7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001045F0
 * Original: 0x001045F0 - 0x00104806 (534 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001045F0(void)
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

loc_001045F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi);
    ebx = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0010460Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104608u); } /* indirect call */
    }

loc_0010460B: ;
    edx = MEM32(edi);
    ecx = edi;
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00104617u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104611u); } /* indirect call */
    }

loc_00104617: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001046EA; /* je: equal / zero */

loc_00104621: ;
    ecx = esp + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010462Au); RECOMP_ABI_CALL(0x000169F0u, sub_000169F0); /* call 0x000169F0 */

loc_0010462A: ;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esp + 0x7C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010463Au); RECOMP_ABI_CALL(0x000169C0u, sub_000169C0); /* call 0x000169C0 */

loc_0010463A: ;
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    eax = MEM32(edi + 0xB0);
    ecx = edi + 0xB0;
    edx = esp + 0xF0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0010465Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104657u); } /* indirect call */
    }

loc_0010465A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x100)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x104)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    MEM32(esp + 0x90) = 0;
    if ((_fca >= _fcb)) goto loc_0010469B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_00104690: ;
    MEM32(esp + 0x90) = 1;

loc_0010469B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001046A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010469Fu); } /* indirect call */
    }

loc_001046A2: ;
    edx = MEM32(eax);
    ecx = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001046AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001046ABu); } /* indirect call */
    }

loc_001046AE: ;
    ecx = MEM32(esp + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x78) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_001046C8; /* je: equal / zero */

loc_001046BE: ;
    edx = esp + 0x78;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001046C8u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_001046C8: ;
    ecx = esp + 0x70;
    MEM32(esp + 0x7C) = 0;
    MEM32(esp + 0x70) = 0x2FF1B8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001046E1u); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_001046E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001046EA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001047FD; /* je: equal / zero */

loc_001046F2: ;
    eax = MEM32(ebx + 0x10C);
    eax = MEM32(eax + 0x3C);
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x31BE80); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001047FD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x31BE80)) */

loc_00104736: ;
    xmm0 = XMM_MEM(ebx + 0x40); /* movaps */
    edx = MEM32(ebx + 0xC4);
    ecx = ebx + 0xC4;
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00104753u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104750u); } /* indirect call */
    }

loc_00104753: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */
    ecx = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104798u); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_00104798: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x317A8C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001047FD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x317A8C)) */

loc_001047BF: ;
    SET_LO8(eax, MEM8(ebx + 0x514));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001047FD; /* jne: not equal / not zero */

loc_001047C9: ;
    PUSH32(esp, 0);
    ecx = esi + 0x1440;
    MEM8(ebx + 0x514) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001047DDu); RECOMP_ABI_CALL(0x00128DC0u, sub_00128DC0); /* call 0x00128DC0 */

loc_001047DD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001047EAu); RECOMP_ABI_CALL(0x00116E20u, sub_00116E20); /* call 0x00116E20 */

loc_001047EA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001047F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001047EEu); } /* indirect call */
    }

loc_001047F1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC61C3F9Au);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001047FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001047FAu); } /* indirect call */
    }

loc_001047FD: ;
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
 * sub_00104810
 * Original: 0x00104810 - 0x00104DE4 (1492 bytes, 379 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104810(void)
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

loc_00104810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1F4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00104858; /* jne: not equal / not zero */

loc_0010482B: ;
    ecx = MEM32(esi + 0x230);
    eax = MEM32(esi + 0x278);
    PUSH32(esp, ecx);
    ecx = MEM32(0x523510);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104845u); RECOMP_ABI_CALL(0x0018ACA0u, sub_0018ACA0); /* call 0x0018ACA0 */

loc_00104845: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x500) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00104858; /* je: equal / zero */

loc_0010484F: ;
    PUSH32(esp, 0);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104858u); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_00104858: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010485Fu); RECOMP_ABI_CALL(0x001043B0u, sub_001043B0); /* call 0x001043B0 */

loc_0010485F: ;
    edi = MEM32(esi + 0x1D8);
    ebx = esi + 0x1D4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104893; /* je: equal / zero */

loc_00104874: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x1C0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00104887u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104884u); } /* indirect call */
    }

loc_00104887: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104874; /* jne: not equal / not zero */

loc_00104893: ;
    SET_LO8(eax, MEM8(esi + 0x570));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010490F; /* je: equal / zero */

loc_0010489D: ;
    eax = MEM32(esi + 0x208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010490F; /* je: equal / zero */

loc_001048A7: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4DA8ACC5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001048B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001048B5u); } /* indirect call */
    }

loc_001048B8: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    ecx = esp + 0x50;
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    XMM_STORE(esp + 0xB4, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001048F9u); RECOMP_ABI_CALL(0x00264FC0u, sub_00264FC0); /* call 0x00264FC0 */

loc_001048F9: ;
    ecx = MEM32(esi + 0x208);
    edx = MEM32(ecx);
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0010490Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104909u); } /* indirect call */
    }

loc_0010490F: ;
    eax = MEM32(esi + 0x20C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104A54; /* je: equal / zero */

loc_0010491D: ;
    SET_LO8(eax, MEM8(esi + 0x571));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104A54; /* jne: not equal / not zero */

loc_0010492B: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3239E89F);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0010493Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104939u); } /* indirect call */
    }

loc_0010493C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104997; /* je: equal / zero */

loc_00104940: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    ecx = esp + 0x50;
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    XMM_STORE(esp + 0xB4, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104981u); RECOMP_ABI_CALL(0x00264FC0u, sub_00264FC0); /* call 0x00264FC0 */

loc_00104981: ;
    ecx = MEM32(esi + 0x20C);
    edx = MEM32(ecx);
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00104997u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104991u); } /* indirect call */
    }

loc_00104997: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAB30B925u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001049A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001049A5u); } /* indirect call */
    }

loc_001049A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104A03; /* je: equal / zero */

loc_001049AC: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    ecx = esp + 0x50;
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    XMM_STORE(esp + 0xB4, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001049EDu); RECOMP_ABI_CALL(0x00264FC0u, sub_00264FC0); /* call 0x00264FC0 */

loc_001049ED: ;
    ecx = MEM32(esi + 0x210);
    edx = MEM32(ecx);
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00104A03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001049FDu); } /* indirect call */
    }

loc_00104A03: ;
    SET_LO8(eax, MEM8(esi + 0x22C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104A54; /* jne: not equal / not zero */

loc_00104A0D: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3239E89F);
    ecx = esi;
    MEM8(esi + 0x22C) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00104A25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104A22u); } /* indirect call */
    }

loc_00104A25: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104A34; /* je: equal / zero */

loc_00104A29: ;
    ecx = MEM32(esi + 0x20C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104A34u); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_00104A34: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAB30B925u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00104A45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104A42u); } /* indirect call */
    }

loc_00104A45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104A54; /* je: equal / zero */

loc_00104A49: ;
    ecx = MEM32(esi + 0x210);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104A54u); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_00104A54: ;
    eax = MEM32(esi + 0x288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(0x3DEA20);
    if (CMP_NE(_fa, _fb)) goto loc_00104B67; /* jne: not equal / not zero */

loc_00104A68: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00104A77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104A74u); } /* indirect call */
    }

loc_00104A77: ;
    PUSH32(esp, 0);
    ecx = esi + 0x250;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104A8Du); RECOMP_ABI_CALL(0x001F94E0u, sub_001F94E0); /* call 0x001F94E0 */

loc_00104A8D: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(0x530EB4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = 0x80000000u;
    MEM8(esp + 0x2C) = LO8(eax);
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    MEM32(esp + 0x24) = 0x1F;
    MEM32(esp + 0x28) = edi;
    edx = MEM32(ecx);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00104AF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104AF1u); } /* indirect call */
    }

loc_00104AF4: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0xD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104B06u); RECOMP_ABI_CALL(0x0022A790u, sub_0022A790); /* call 0x0022A790 */

loc_00104B06: ;
    MEM32(esi + 0x288) = eax;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104B1F; /* jne: not equal / not zero */

loc_00104B17: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00104B1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104B1Du); } /* indirect call */
    }

loc_00104B1F: ;
    eax = MEM32(esi + 0x288);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104B2Du); RECOMP_ABI_CALL(0x002251A0u, sub_002251A0); /* call 0x002251A0 */

loc_00104B2D: ;
    ecx = MEM32(esi + 0x288);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104B44; /* jne: not equal / not zero */

loc_00104B3E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00104B44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104B42u); } /* indirect call */
    }

loc_00104B44: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00104B67; /* js: sign (negative) */

loc_00104B4C: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00104B67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104B64u); } /* indirect call */
    }

loc_00104B67: ;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00104B72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104B6Fu); } /* indirect call */
    }

loc_00104B72: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esi + 0xC4);
    ecx = esi + 0xC4;
    edx = esp + 0xD0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00104BBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104BB8u); } /* indirect call */
    }

loc_00104BBB: ;
    eax = esp + 0xD0;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104BCFu); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00104BCF: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104BD8u); RECOMP_ABI_CALL(0x0007E760u, sub_0007E760); /* call 0x0007E760 */

loc_00104BD8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x3DB9A8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x3DB9A8))); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x284)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x284) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104BFA; /* je: equal / zero */

loc_00104BE7: ;
    xmm0 = XMM_SCALAR(MEMF(0x317EB8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00104DC5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_00104BFA: ;
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104C07u); RECOMP_ABI_CALL(0x00232960u, sub_00232960); /* call 0x00232960 */

loc_00104C07: ;
    xmm5 = XMM_SCALAR(MEMF(esi + 0x264)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x268)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x258); /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x260)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(edi); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    ecx = esp + 0x20;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x288);
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(esp + 0x54, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104CCBu); RECOMP_ABI_CALL(0x0022A000u, sub_0022A000); /* call 0x0022A000 */

loc_00104CCB: ;
    ecx = MEM32(esi + 0x288);
    edx = esp + 0xFC;
    MEM32(esp + 0xF0) = edx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0xE8;
    MEM32(esp + 0xE8) = 0x317EB0;
    MEM32(esp + 0xF8) = 0x80000010u;
    MEM32(esp + 0xF4) = ebx;
    MEM8(esp + 0xEC) = LO8(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00104D12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104D0Fu); } /* indirect call */
    }

loc_00104D12: ;
    eax = MEM32(esp + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00104D91; /* jle: less or equal (signed <=) */

loc_00104D1D: ;
    MEM32(esp + 0xC) = eax;
    goto loc_00104D30;

    /* nop */
    /* nop */

loc_00104D30: ;
    ecx = MEM32(esp + 0xF0);
    edx = MEM32(esi + 0x288);
    eax = MEM32(ebx + ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104D4B; /* jne: not equal / not zero */

loc_00104D47: ;
    eax = MEM32(ebx + ecx + 8);

loc_00104D4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104D83; /* je: equal / zero */

loc_00104D4F: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104D83; /* je: equal / zero */

loc_00104D56: ;
    edx = MEM32(ecx + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00104D83; /* jle: less or equal (signed <=) */

loc_00104D5F: ;
    edi = MEM32(ecx + 0x30);
    ecx = edi;

loc_00104D64: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104D73; /* je: equal / zero */

loc_00104D69: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00104D64; /* jl: less (signed <) */

loc_00104D71: ;
    goto loc_00104D83;

loc_00104D73: ;
    eax = MEM32(edi + eax * 8 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104D83; /* je: equal / zero */

loc_00104D7B: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104D83u); RECOMP_ABI_CALL(0x001045F0u, sub_001045F0); /* call 0x001045F0 */

loc_00104D83: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_00104D30; /* jne: not equal / not zero */

loc_00104D91: ;
    eax = MEM32(esp + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xE8) = 0x317EB0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00104DC5; /* js: sign (negative) */

loc_00104DA7: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xF8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00104DC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104DC2u); } /* indirect call */
    }

loc_00104DC5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00104DD0u); RECOMP_ABI_CALL(0x00139FC0u, sub_00139FC0); /* call 0x00139FC0 */

loc_00104DD0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    MEMF(esi + 0x1FC) = xmm0.f[0]; /* movss */
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
 * sub_00104DF0
 * Original: 0x00104DF0 - 0x00104E13 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00104DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00104DF8u); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_00104DF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104E0A; /* jne: not equal / not zero */

loc_00104DFC: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104E0A; /* je: equal / zero */

loc_00104E03: ;
    ecx = esi;
    PUSH32(esp, 0x00104E0Au); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_00104E0A: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x50)); return; /* indirect tail jmp */

}

/**
 * sub_00104E20
 * Original: 0x00104E20 - 0x00104E43 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00104E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00104E28u); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_00104E28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00104E3A; /* jne: not equal / not zero */

loc_00104E2C: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00104E3A; /* je: equal / zero */

loc_00104E33: ;
    ecx = esi;
    PUSH32(esp, 0x00104E3Au); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_00104E3A: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x54)); return; /* indirect tail jmp */

}

/**
 * sub_00104E50
 * Original: 0x00104E50 - 0x00104E6E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00104E58u); RECOMP_ABI_CALL(0x000EE540u, sub_000EE540); /* call 0x000EE540 */

loc_00104E58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00104E68; /* je: equal / zero */

loc_00104E5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00104E65u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00104E65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00104E68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00104E70
 * Original: 0x00104E70 - 0x00104E96 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104E70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x317BA8;
    if (TEST_Z(_fa, _fb)) goto loc_00104E90; /* je: equal / zero */

loc_00104E80: ;
    ecx = MEM32(0x530EB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x17);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00104E90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00104E8Du); } /* indirect call */
    }

loc_00104E90: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00104EA0
 * Original: 0x00104EA0 - 0x00104F56 (182 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104EA0: ;
    eax = ecx;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ecx;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = ecx;
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    MEM32(eax) = 0x317BF4;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = 2;
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = LO8(ecx);
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = 0x1000;
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x6C) = LO8(ecx);
    edx = 1;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x3C) = edx;
    MEM8(eax + 0x94) = LO8(ecx);
    MEM32(eax + 0x90) = 0x2FFA54;
    MEM32(eax + 0x9C) = ecx;
    MEM32(eax + 0xA0) = ecx;
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0x98) = 0x2FF02C;
    MEM8(eax + 0x6D) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00104F60
 * Original: 0x00104F60 - 0x00104FA7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x317BF4;
    PUSH32(esp, edi);
    edi = esi + 0x98;
    MEM32(esi + 0x90) = 0x2FFA54;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00104F8D; /* je: equal / zero */

loc_00104F87: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00104F8Du); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00104F8D: ;
    MEM32(edi + 4) = 0;
    MEM32(esi + 0x90) = 0x2FF9B8;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF9D4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00104FB0
 * Original: 0x00104FB0 - 0x0010500B (91 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00104FB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x317BF4;
    PUSH32(esp, edi);
    edi = esi + 0x98;
    MEM32(esi + 0x90) = 0x2FFA54;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00104FDD; /* je: equal / zero */

loc_00104FD7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00104FDDu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00104FDD: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(edi + 4) = 0;
    MEM32(esi + 0x90) = 0x2FF9B8;
    MEM32(esi) = 0x2FF9D4;
    if (TEST_Z(_fa, _fb)) goto loc_00105004; /* je: equal / zero */

loc_00104FFB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00105001u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00105001: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00105004: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00105010
 * Original: 0x00105010 - 0x00105019 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105010(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00105010: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00105020
 * Original: 0x00105020 - 0x00105029 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105020(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00105020: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00105030
 * Original: 0x00105030 - 0x00105038 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105030: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00105090(); return; /* tail jmp 0x00105090 */

}

/**
 * sub_00105040
 * Original: 0x00105040 - 0x0010504B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105040: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00105090(); return; /* tail jmp 0x00105090 */

}

/**
 * sub_00105050
 * Original: 0x00105050 - 0x0010505B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105050: ;
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00105090(); return; /* tail jmp 0x00105090 */

}

/**
 * sub_00105060
 * Original: 0x00105060 - 0x0010506B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105060: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00105090(); return; /* tail jmp 0x00105090 */

}

/**
 * sub_00105070
 * Original: 0x00105070 - 0x0010507B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105070: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00105090(); return; /* tail jmp 0x00105090 */

}

/**
 * sub_00105080
 * Original: 0x00105080 - 0x0010508B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105080: ;
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00105090(); return; /* tail jmp 0x00105090 */

}

/**
 * sub_00105090
 * Original: 0x00105090 - 0x0010509E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105090(void)
{

loc_00105090: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00105098u); RECOMP_ABI_CALL(0x00103CB0u, sub_00103CB0); /* call 0x00103CB0 */

loc_00105098: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001050A0
 * Original: 0x001050A0 - 0x001050DB (59 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001050A0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001050A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x317EC4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_001050CE; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001050C1: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001050D4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001050CE: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_001050D4: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001050E0
 * Original: 0x001050E0 - 0x001050E3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001050E0(void)
{

loc_001050E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001050F0
 * Original: 0x001050F0 - 0x001052CB (475 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001050F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001050F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9B);
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00105108u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00105108: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9C);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x312444); /* mulss */
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010512Fu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0010512F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9D);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x312444); /* mulss */
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00105156u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00105156: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9E);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x312444); /* mulss */
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0010517Du); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0010517D: ;
    xmm3 = XMM_SCALAR(MEMF(0x317EC4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x312444); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001051BE; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001051B6: ;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    goto loc_001051C9;

loc_001051BE: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001051C9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_001051C3: ;
    MEMF(esp + 8) = xmm4.f[0]; /* movss */

loc_001051C9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001051E6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001051DE: ;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    goto loc_001051F1;

loc_001051E6: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001051F1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_001051EB: ;
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */

loc_001051F1: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010520D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00105205: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    goto loc_00105218;

loc_0010520D: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00105218; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00105212: ;
    MEMF(esp + 4) = xmm4.f[0]; /* movss */

loc_00105218: ;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010522D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00105226: ;
    MEMF(esp) = xmm2.f[0]; /* movss */
    goto loc_00105237;

loc_0010522D: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00105237; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00105232: ;
    MEMF(esp) = xmm4.f[0]; /* movss */

loc_00105237: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00105249u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00105249: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0x12);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    MEM8(esp + 0x28) = LO8(eax);
    PUSH32(esp, 0x00105264u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00105264: ;
    PUSH32(esp, 0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x10);
    MEM8(esp + 0x20) = LO8(ecx);
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0010527Fu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0010527F: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ecx);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0x10) = LO8(edx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00105291u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010528Eu); } /* indirect call */
    }

loc_00105291: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3E8D08);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1B0); PUSH32(esp, 0x001052C5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001052BFu); } /* indirect call */
    }

loc_001052C5: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001052D0
 * Original: 0x001052D0 - 0x001052DE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001052D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001052D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x24;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001052E0
 * Original: 0x001052E0 - 0x001052FA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001052E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001052E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00105300
 * Original: 0x00105300 - 0x0010530E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105300: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0xE8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00105310
 * Original: 0x00105310 - 0x0010533E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105310: ;
    ecx = MEM32(0x3DB9D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010532A; /* je: equal / zero */

loc_0010531A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00105320u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010531Eu); } /* indirect call */
    }

loc_00105320: ;
    MEM32(0x3DB9D0) = 0;

loc_0010532A: ;
    ecx = 0x3DE7E0;
    PUSH32(esp, 0x00105334u); RECOMP_ABI_CALL(0x000EF3F0u, sub_000EF3F0); /* call 0x000EF3F0 */

loc_00105334: ;
    ecx = 0x3DE810;
    g_seh_ebp = ebp; sub_000EF3F0(); return; /* tail jmp 0x000EF3F0 */

}

/**
 * sub_00105340
 * Original: 0x00105340 - 0x00105341 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105340(void)
{

loc_00105340: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00105350
 * Original: 0x00105350 - 0x00105364 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105350: ;
    ecx = 0x3DE7E0;
    PUSH32(esp, 0x0010535Au); RECOMP_ABI_CALL(0x000EF3E0u, sub_000EF3E0); /* call 0x000EF3E0 */

loc_0010535A: ;
    ecx = 0x3DE810;
    g_seh_ebp = ebp; sub_000EF3E0(); return; /* tail jmp 0x000EF3E0 */

}

/**
 * sub_00105370
 * Original: 0x00105370 - 0x001053B0 (64 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105370: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xA4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001053AC; /* jle: less or equal (signed <=) */

loc_0010537F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xA8);
    ecx = edi;
    PUSH32(esp, ebp);
    edi = edi;

loc_00105390: ;
    ebp = MEM32(ecx);
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001053A6; /* je: equal / zero */

loc_00105397: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00105390; /* jl: less (signed <) */

loc_0010539F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001053A6: ;
    eax = MEM32(edi + edx * 4);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001053AC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001053B0
 * Original: 0x001053B0 - 0x0010540D (93 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001053B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001053B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001053DD; /* jle: less or equal (signed <=) */

loc_001053C0: ;
    eax = MEM32(esi + 0xA8);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001053CFu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001053CF: ;
    eax = MEM32(esi + 0xA4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001053C0; /* jl: less (signed <) */

loc_001053DD: ;
    edx = MEM32(esi + 0xA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001053E9u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_001053E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xA8) = 0;
    MEM32(esi + 0xA4) = 0;
    MEM32(esi + 0xA0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00105410
 * Original: 0x00105410 - 0x0010544F (63 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105410: ;
    ecx = MEM32(0x3DB9D0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105422; /* je: equal / zero */

loc_0010541D: ;
    PUSH32(esp, 0x00105422u); RECOMP_ABI_CALL(0x001053B0u, sub_001053B0); /* call 0x001053B0 */

loc_00105422: ;
    ecx = 0x3DE7E0;
    MEM32(0x3DC468) = esi;
    MEM32(0x3DD8C8) = esi;
    MEM32(0x3DD928) = esi;
    MEM32(0x3DE7C8) = esi;
    PUSH32(esp, 0x00105444u); RECOMP_ABI_CALL(0x000EF3E0u, sub_000EF3E0); /* call 0x000EF3E0 */

loc_00105444: ;
    ecx = 0x3DE810;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000EF3E0(); return; /* tail jmp 0x000EF3E0 */

}

/**
 * sub_00105450
 * Original: 0x00105450 - 0x00105482 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105450: ;
    edx = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx + 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    MEM32(edx) = 0x317ED0;
    ecx = 0x24;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = esi;
    ecx = 0x24;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(edx + 0xA4) = eax;
    MEM32(edx + 0xA0) = eax;
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00105490
 * Original: 0x00105490 - 0x00105497 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105490(void)
{

loc_00105490: ;
    MEM32(ecx) = 0x2FF0D4;
    esp += 4; return; /* ret */

}

/**
 * sub_001054A0
 * Original: 0x001054A0 - 0x001054E7 (71 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001054A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001054A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE860)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x3DE860) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001054E3; /* jne: not equal / not zero */

loc_001054B1: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx);
    MEM32(esi + 0xA0) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x317EFC);
    PUSH32(esp, 0x001054D0u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_001054D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xA4) = 0;

loc_001054E3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001054F0
 * Original: 0x001054F0 - 0x00105762 (626 bytes, 222 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001054F0(void)
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

loc_001054F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE860)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x3DE860) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010575E; /* jne: not equal / not zero */

loc_00105505: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = esi + 0x10;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00105521; /* jne: not equal / not zero */

loc_00105510: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x24;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    MEM32(edx) = eax;

loc_00105521: ;
    edi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x0010552Cu); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_0010552C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE864)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE864) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105545; /* jne: not equal / not zero */

loc_00105534: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0010553Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0010553D: ;
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00105545: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE868)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE868) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010555E; /* jne: not equal / not zero */

loc_0010554D: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00105556u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00105556: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0010555E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE86C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE86C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010557A; /* jne: not equal / not zero */

loc_00105566: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0010556Fu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0010556F: ;
    POP32(esp, edi);
    MEM32(esi + 0x94) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0010557A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE870)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE870) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105593; /* jne: not equal / not zero */

loc_00105582: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0010558Bu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0010558B: ;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00105593: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE874)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE874) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001055AC; /* jne: not equal / not zero */

loc_0010559B: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001055A4u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_001055A4: ;
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001055AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE878)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE878) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001055C5; /* jne: not equal / not zero */

loc_001055B4: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001055BDu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_001055BD: ;
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001055C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE87C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE87C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001055DE; /* jne: not equal / not zero */

loc_001055CD: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001055D6u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_001055D6: ;
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001055DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE880)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE880) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001055F7; /* jne: not equal / not zero */

loc_001055E6: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001055EFu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_001055EF: ;
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001055F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE884)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE884) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105610; /* jne: not equal / not zero */

loc_001055FF: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00105608u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00105608: ;
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00105610: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE888)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE888) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105629; /* jne: not equal / not zero */

loc_00105618: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00105621u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00105621: ;
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00105629: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE88C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE88C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105642; /* jne: not equal / not zero */

loc_00105631: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0010563Au); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0010563A: ;
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00105642: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE890)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE890) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010565B; /* jne: not equal / not zero */

loc_0010564A: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00105653u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00105653: ;
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0010565B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE894)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE894) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105674; /* jne: not equal / not zero */

loc_00105663: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0010566Cu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_0010566C: ;
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00105674: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE898)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE898) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010568D; /* jne: not equal / not zero */

loc_0010567C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00105685u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00105685: ;
    POP32(esp, edi);
    MEM32(esi + 0x54) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0010568D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE89C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE89C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001056A6; /* jne: not equal / not zero */

loc_00105695: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0010569Eu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0010569E: ;
    POP32(esp, edi);
    MEM32(esi + 0x58) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001056A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE8A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE8A0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001056BF; /* jne: not equal / not zero */

loc_001056AE: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001056B7u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_001056B7: ;
    POP32(esp, edi);
    MEM32(esi + 0x5C) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001056BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE8A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE8A4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001056D8; /* jne: not equal / not zero */

loc_001056C7: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001056D0u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_001056D0: ;
    POP32(esp, edi);
    MEM32(esi + 0x60) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001056D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE8A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE8A8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001056F1; /* jne: not equal / not zero */

loc_001056E0: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x001056E9u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_001056E9: ;
    POP32(esp, edi);
    MEM32(esi + 0x64) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001056F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE8AC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE8AC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010570A; /* jne: not equal / not zero */

loc_001056F9: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00105702u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_00105702: ;
    POP32(esp, edi);
    MEM32(esi + 0x68) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0010570A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE8B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE8B0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105723; /* jne: not equal / not zero */

loc_00105712: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0010571Bu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_0010571B: ;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00105723: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE8B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE8B4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105746; /* jne: not equal / not zero */

loc_0010572B: ;
    PUSH32(esp, 0x20);
    ecx = edi;
    PUSH32(esp, 0x00105734u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_00105734: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010573Eu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0010573E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00105746: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE8BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DE8BC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010575D; /* jne: not equal / not zero */

loc_0010574E: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00105757u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_00105757: ;
    MEMF(esi + 0x90) = (float)fp_top(); fp_pop(); /* fstp */

loc_0010575D: ;
    POP32(esp, edi);

loc_0010575E: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00105770
 * Original: 0x00105770 - 0x00105824 (180 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105770: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0xBE0);
    PUSH32(esp, 0x317F78);
    ecx = 0x3DE7E0;
    PUSH32(esp, 0x00105789u); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_00105789: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0xC70);
    PUSH32(esp, 0x317F68);
    ecx = 0x3DE810;
    PUSH32(esp, 0x001057A1u); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_001057A1: ;
    eax = MEM32(0x3DB9D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105806; /* jne: not equal / not zero */

loc_001057AA: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x317F38);
    PUSH32(esp, 0x001057BEu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_001057BE: ;
    edx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001057FC; /* je: equal / zero */

loc_001057C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx + 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = 0x317ED0;
    edi = esi;
    ecx = 0x24;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = esi;
    ecx = 0x24;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(edx + 0xA4) = eax;
    MEM32(edx + 0xA0) = eax;
    MEM32(0x3DB9D0) = edx;
    POP32(esp, esi);
    goto loc_00105806;

loc_001057FC: ;
    MEM32(0x3DB9D0) = 0;

loc_00105806: ;
    PUSH32(esp, 0x317F2C);
    ecx = esp + 4;
    PUSH32(esp, 0x00105814u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_00105814: ;
    PUSH32(esp, eax);
    eax = MEM32(0x3DB9D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105820u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_00105820: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00105830
 * Original: 0x00105830 - 0x00105867 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105830: ;
    edx = MEM32(0x3DD928);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x3DD920);
    if (CMP_LE(_fas, _fbs)) goto loc_0010585C; /* jle: less or equal (signed <=) */

loc_00105844: ;
    esi = MEM32(esp + 0xC);
    ecx = edi;
    /* nop */

loc_00105850: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010585F; /* je: equal / zero */

loc_00105854: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00105850; /* jl: less (signed <) */

loc_0010585C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0010585F: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00105870
 * Original: 0x00105870 - 0x001058AD (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105870: ;
    edx = MEM32(0x3DE7C8);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x3DE7C0);
    if (CMP_LE(_fas, _fbs)) goto loc_0010589F; /* jle: less or equal (signed <=) */

loc_00105884: ;
    esi = MEM32(esp + 0xC);
    ecx = edi;
    /* nop */

loc_00105890: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001058A2; /* je: equal / zero */

loc_00105894: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x3A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3A0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00105890; /* jl: less (signed <) */

loc_0010589F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001058A2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3A0);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001058B0
 * Original: 0x001058B0 - 0x00105919 (105 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001058B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001058B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DE860)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x3DE860) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00105915; /* jne: not equal / not zero */

loc_001058C1: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x317F88);
    PUSH32(esp, 0x001058D5u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_001058D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001058E9; /* je: equal / zero */

loc_001058DC: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001058E7u); RECOMP_ABI_CALL(0x00105A60u, sub_00105A60); /* call 0x00105A60 */

loc_001058E7: ;
    goto loc_001058EB;

loc_001058E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001058EB: ;
    ecx = MEM32(esi + 0xA4);
    edx = MEM32(esi + 0xA8);
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(esi + 0xA4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(esi + 0xA4) = eax;
    ecx = 0x24;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00105915: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00105920
 * Original: 0x00105920 - 0x00105946 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105920: ;
    eax = MEM32(0x3DD8C8);
    edx = MEM32(0x3DD8C0);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x510);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3DD8C8) = eax;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105945u); RECOMP_ABI_CALL(0x00102E60u, sub_00102E60); /* call 0x00102E60 */

loc_00105945: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00105950
 * Original: 0x00105950 - 0x00105976 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105950: ;
    eax = MEM32(0x3DC468);
    edx = MEM32(0x3DC460);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x540);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3DC468) = eax;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105975u); RECOMP_ABI_CALL(0x00105FE0u, sub_00105FE0); /* call 0x00105FE0 */

loc_00105975: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00105980
 * Original: 0x00105980 - 0x001059EB (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105980: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001059E5; /* jge: greater or equal (signed >=) */

loc_0010598B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001059AAu); RECOMP_ABI_CALL(0x000EF230u, sub_000EF230); /* call 0x000EF230 */

loc_001059AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001059B7; /* je: equal / zero */

loc_001059AE: ;
    ecx = eax;
    PUSH32(esp, 0x001059B5u); RECOMP_ABI_CALL(0x00106E60u, sub_00106E60); /* call 0x00106E60 */

loc_001059B5: ;
    goto loc_001059B9;

loc_001059B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001059B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001059C6; /* je: equal / zero */

loc_001059BF: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001059C8;

loc_001059C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001059C8: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001059D5u); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_001059D5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001059E5; /* je: equal / zero */

loc_001059DC: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001059E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001059F0
 * Original: 0x001059F0 - 0x00105A5B (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001059F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001059F0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00105A55; /* jge: greater or equal (signed >=) */

loc_001059FB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00105A1Au); RECOMP_ABI_CALL(0x000EF230u, sub_000EF230); /* call 0x000EF230 */

loc_00105A1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105A27; /* je: equal / zero */

loc_00105A1E: ;
    ecx = eax;
    PUSH32(esp, 0x00105A25u); RECOMP_ABI_CALL(0x000FF680u, sub_000FF680); /* call 0x000FF680 */

loc_00105A25: ;
    goto loc_00105A29;

loc_00105A27: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00105A29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00105A36; /* je: equal / zero */

loc_00105A2F: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00105A38;

loc_00105A36: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00105A38: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00105A45u); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_00105A45: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00105A55; /* je: equal / zero */

loc_00105A4C: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00105A55: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00105A60
 * Original: 0x00105A60 - 0x00105AEA (138 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105A60(void)
{

loc_00105A60: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    xmm0 = XMM_MEM(edx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(edx + 0x20); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(edx + 0x30); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    ecx = MEM32(edx + 0x40);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(edx + 0x44);
    MEM32(eax + 0x44) = ecx;
    ecx = MEM32(edx + 0x48);
    MEM32(eax + 0x48) = ecx;
    ecx = MEM32(edx + 0x4C);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(edx + 0x50);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(edx + 0x54);
    MEM32(eax + 0x54) = ecx;
    ecx = MEM32(edx + 0x58);
    MEM32(eax + 0x58) = ecx;
    ecx = MEM32(edx + 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax + 0x5C) = ecx;
    esi = edx + 0x60;
    edi = eax + 0x60;
    ecx = 8;
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
    ecx = MEM32(edx + 0x80);
    MEM32(eax + 0x80) = ecx;
    edx = MEM32(edx + 0x84);
    POP32(esp, edi);
    MEM32(eax + 0x84) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00105AF0
 * Original: 0x00105AF0 - 0x00105BAA (186 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105AF0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x50); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x60); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x70); /* movaps */
    PUSH32(esp, ebx);
    XMM_STORE(eax + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x80); /* movaps */
    PUSH32(esp, ebp);
    XMM_STORE(eax + 0x80, xmm0); /* movaps */
    edx = MEM32(ecx + 0x90);
    PUSH32(esp, esi);
    ebx = ecx;
    MEM32(eax + 0x90) = edx;
    PUSH32(esp, edi);
    edx = eax + 0x94;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = 0x18;

loc_00105B91: ;
    esi = ebx + edx;
    edi = edx;
    ecx = 8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
    if ((_fa != 0)) goto loc_00105B91; /* jne: not equal / not zero */

loc_00105BA3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00105BB0
 * Original: 0x00105BB0 - 0x00105C55 (165 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ecx;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(eax + 0x20) = LO8(edx);
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    SET_LO8(edx, MEM8(ecx + 0x2C));
    MEM8(eax + 0x2C) = LO8(edx);
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x50);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(eax + 0x58) = edx;
    edx = MEM32(ecx + 0x60);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(eax + 0x64) = edx;
    edx = MEM32(ecx + 0x68);
    MEM32(eax + 0x68) = edx;
    edx = MEM32(ecx + 0x70);
    MEM32(eax + 0x70) = edx;
    SET_LO8(ecx, MEM8(ecx + 0x74));
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax + 0x74) = LO8(ecx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00105C60
 * Original: 0x00105C60 - 0x00105CF6 (150 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105C60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi;
    ebx = 2;
    /* nop */

loc_00105C70: ;
    PUSH32(esp, 0xE8840);
    PUSH32(esp, 6);
    PUSH32(esp, 0x80);
    eax = esi + 0x240;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105C88u); RECOMP_ABI_CALL(0x00012790u, sub_00012790); /* call 0x00012790 */

loc_00105C88: ;
    ecx = esi;
    PUSH32(esp, 0x00105C8Fu); RECOMP_ABI_CALL(0x00106490u, sub_00106490); /* call 0x00106490 */

loc_00105C8F: ;
    _fb = (uint32_t)(0x540) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x540;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00105C70; /* jne: not equal / not zero */

loc_00105C98: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0xA80) = ebx;
    MEM32(edi + 0xA84) = ebx;
    MEM32(edi + 0xA88) = ebx;
    MEM32(edi + 0xA8C) = ebx;
    MEM8(edi + 0xA90) = 1;
    MEM32(edi + 0xA94) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM8(edi + 0xA90)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xA90), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105CDA; /* je: equal / zero */

loc_00105CCB: ;
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105CDA; /* je: equal / zero */

loc_00105CD1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105CD7u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00105CD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00105CDA: ;
    MEM8(edi + 0xA90) = LO8(ebx);
    MEM32(edi + 0xA80) = edi;
    MEM32(edi + 0xA8C) = 2;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00105D00
 * Original: 0x00105D00 - 0x00105D7E (126 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105D00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi;
    ebx = 4;
    /* nop */

loc_00105D10: ;
    ecx = edi;
    PUSH32(esp, 0x00105D17u); RECOMP_ABI_CALL(0x000FF2D0u, sub_000FF2D0); /* call 0x000FF2D0 */

loc_00105D17: ;
    _fb = (uint32_t)(0x510) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x510;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00105D10; /* jne: not equal / not zero */

loc_00105D20: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1440) = ebx;
    MEM32(esi + 0x1444) = ebx;
    MEM32(esi + 0x1448) = ebx;
    MEM32(esi + 0x144C) = ebx;
    MEM8(esi + 0x1450) = 1;
    MEM32(esi + 0x1454) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM8(esi + 0x1450)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1450), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105D62; /* je: equal / zero */

loc_00105D53: ;
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105D62; /* je: equal / zero */

loc_00105D59: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105D5Fu); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00105D5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00105D62: ;
    POP32(esp, edi);
    MEM8(esi + 0x1450) = LO8(ebx);
    MEM32(esi + 0x1440) = esi;
    MEM32(esi + 0x144C) = 4;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00105D80
 * Original: 0x00105D80 - 0x00105DD0 (80 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105D80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x10;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM8(esi + 0x50) = 1;
    MEM32(esi + 0x54) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x50), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105DBD; /* je: equal / zero */

loc_00105DAE: ;
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105DBD; /* je: equal / zero */

loc_00105DB4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105DBAu); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00105DBA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00105DBD: ;
    POP32(esp, edi);
    MEM8(esi + 0x50) = LO8(ebx);
    MEM32(esi + 0x40) = esi;
    MEM32(esi + 0x4C) = 2;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00105DD0
 * Original: 0x00105DD0 - 0x00105E65 (149 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105DD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    esi = ebp;
    ebx = 4;
    PUSH32(esp, edi);
    /* nop */

loc_00105DE0: ;
    PUSH32(esp, 0xE8840);
    PUSH32(esp, 6);
    PUSH32(esp, 0x10);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105DF2u); RECOMP_ABI_CALL(0x00012790u, sub_00012790); /* call 0x00012790 */

loc_00105DF2: ;
    edi = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xE8;
    _fb = (uint32_t)(0x3A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3A0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if ((_fa != 0)) goto loc_00105DE0; /* jne: not equal / not zero */

loc_00105E06: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0xE80) = ebx;
    MEM32(ebp + 0xE84) = ebx;
    MEM32(ebp + 0xE88) = ebx;
    MEM32(ebp + 0xE8C) = ebx;
    MEM8(ebp + 0xE90) = 1;
    MEM32(ebp + 0xE94) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM8(ebp + 0xE90)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xE90), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00105E49; /* je: equal / zero */

loc_00105E3A: ;
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105E49; /* je: equal / zero */

loc_00105E40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00105E46u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_00105E46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00105E49: ;
    POP32(esp, esi);
    MEM8(ebp + 0xE90) = LO8(ebx);
    MEM32(ebp + 0xE80) = ebp;
    MEM32(ebp + 0xE8C) = 4;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00105E70
 * Original: 0x00105E70 - 0x00105FD5 (357 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105E70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0xD43DDD1Au);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105E8Bu); RECOMP_ABI_CALL(0x0003AE00u, sub_0003AE00); /* call 0x0003AE00 */

loc_00105E8B: ;
    esi = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = 0x3DE7E0;
    MEM32(esp + 0x1C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105EA0u); RECOMP_ABI_CALL(0x00105980u, sub_00105980); /* call 0x00105980 */

loc_00105EA0: ;
    ebx = MEM32(esp + 0x1C);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x194); PUSH32(esp, 0x00105EAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00105EA9u); } /* indirect call */
    }

loc_00105EAF: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105EB7u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_00105EB7: ;
    ecx = MEM32(0x3DB9D0);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00105EC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00105EC3u); } /* indirect call */
    }

loc_00105EC6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105ED6u); RECOMP_ABI_CALL(0x0013B390u, sub_0013B390); /* call 0x0013B390 */

loc_00105ED6: ;
    edx = MEM32(0x3DC468);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00105EFF; /* jle: less or equal (signed <=) */

loc_00105EE2: ;
    edi = MEM32(esi + 8);
    ecx = MEM32(0x3DC460);
    goto loc_00105EF0;

    /* nop */

loc_00105EF0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105F49; /* je: equal / zero */

loc_00105EF4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x540) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x540;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00105EF0; /* jl: less (signed <) */

loc_00105EFF: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00105F02: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x204); PUSH32(esp, 0x00105F0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00105F07u); } /* indirect call */
    }

loc_00105F0D: ;
    eax = MEM32(0x3DC460);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x540);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105F25u); RECOMP_ABI_CALL(0x00109470u, sub_00109470); /* call 0x00109470 */

loc_00105F25: ;
    ecx = MEM32(0x3DD928);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00105F51; /* jle: less or equal (signed <=) */

loc_00105F31: ;
    edx = MEM32(0x3DD920);

loc_00105F37: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00105F4D; /* je: equal / zero */

loc_00105F3F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00105F37; /* jl: less (signed <) */

loc_00105F47: ;
    goto loc_00105F51;

loc_00105F49: ;
    edi = eax;
    goto loc_00105F02;

loc_00105F4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00105FB2; /* jge: greater or equal (signed >=) */

loc_00105F51: ;
    ecx = MEM32(0x3DC460);
    eax = MEM32(esp + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, esi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105F90u); RECOMP_ABI_CALL(0x001064E0u, sub_001064E0); /* call 0x001064E0 */

loc_00105F90: ;
    edi = MEM32(0x3DD928);
    ecx = MEM32(0x3DD920);
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 8;
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
    MEM32(0x3DD928) = MEM32(0x3DD928) + 1;
    _fa = (uint32_t)(MEM32(0x3DD928)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00105FB2: ;
    ecx = MEM32(ebp + 8);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00105FBFu); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_00105FBF: ;
    edx = MEM32(ebx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00105FCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00105FC8u); } /* indirect call */
    }

loc_00105FCE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00105FE0
 * Original: 0x00105FE0 - 0x00106328 (840 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00105FE0: ;
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
    esi = ecx;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esi + 0x28) = ecx;
    edx = MEM32(eax + 0x2C);
    MEM32(esi + 0x2C) = edx;
    ecx = MEM32(eax + 0x30);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(eax + 0x34);
    MEM32(esi + 0x34) = edx;
    ecx = MEM32(eax + 0x38);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(eax + 0x3C);
    MEM32(esi + 0x3C) = edx;
    ecx = MEM32(eax + 0x40);
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(eax + 0x44);
    MEM32(esi + 0x44) = edx;
    ecx = MEM32(eax + 0x48);
    MEM32(esi + 0x48) = ecx;
    edx = MEM32(eax + 0x4C);
    MEM32(esi + 0x4C) = edx;
    ecx = MEM32(eax + 0x50);
    MEM32(esi + 0x50) = ecx;
    edx = MEM32(eax + 0x54);
    MEM32(esi + 0x54) = edx;
    ecx = MEM32(eax + 0x58);
    MEM32(esi + 0x58) = ecx;
    edx = MEM32(eax + 0x5C);
    MEM32(esi + 0x5C) = edx;
    ecx = MEM32(eax + 0x60);
    MEM32(esi + 0x60) = ecx;
    edx = MEM32(eax + 0x64);
    MEM32(esi + 0x64) = edx;
    ecx = MEM32(eax + 0x68);
    PUSH32(esp, edi);
    edi = eax;
    MEM32(esi + 0x68) = ecx;
    ecx = esi + 0x6C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x20;
    goto loc_001060A0;

    /* nop */

loc_001060A0: ;
    ebx = MEM32(edi + ecx);
    MEM32(ecx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001060A0; /* jne: not equal / not zero */

loc_001060AB: ;
    edx = MEM32(eax + 0xEC);
    MEM32(esi + 0xEC) = edx;
    ecx = esi + 0xF0;
    edx = 0x20;

loc_001060C2: ;
    ebx = MEM32(edi + ecx);
    MEM32(ecx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001060C2; /* jne: not equal / not zero */

loc_001060CD: ;
    ecx = MEM32(eax + 0x170);
    MEM32(esi + 0x170) = ecx;
    edx = MEM32(eax + 0x174);
    MEM32(esi + 0x174) = edx;
    ecx = MEM32(eax + 0x178);
    MEM32(esi + 0x178) = ecx;
    edx = MEM32(eax + 0x17C);
    MEM32(esi + 0x17C) = edx;
    ecx = MEM32(eax + 0x180);
    MEM32(esi + 0x180) = ecx;
    edx = MEM32(eax + 0x190);
    MEM32(esi + 0x190) = edx;
    ecx = MEM32(eax + 0x194);
    MEM32(esi + 0x194) = ecx;
    edx = MEM32(eax + 0x198);
    MEM32(esi + 0x198) = edx;
    ecx = MEM32(eax + 0x1A0);
    MEM32(esi + 0x1A0) = ecx;
    edx = MEM32(eax + 0x1A4);
    MEM32(esi + 0x1A4) = edx;
    ecx = MEM32(eax + 0x1A8);
    MEM32(esi + 0x1A8) = ecx;
    edx = MEM32(eax + 0x1AC);
    MEM32(esi + 0x1AC) = edx;
    ecx = MEM32(eax + 0x1B0);
    MEM32(esi + 0x1B0) = ecx;
    edx = MEM32(eax + 0x1B4);
    MEM32(esi + 0x1B4) = edx;
    ecx = MEM32(eax + 0x1B8);
    MEM32(esi + 0x1B8) = ecx;
    edx = MEM32(eax + 0x1BC);
    MEM32(esi + 0x1BC) = edx;
    ecx = MEM32(eax + 0x1C0);
    MEM32(esi + 0x1C0) = ecx;
    edx = MEM32(eax + 0x1C4);
    MEM32(esi + 0x1C4) = edx;
    ecx = MEM32(eax + 0x1C8);
    MEM32(esi + 0x1C8) = ecx;
    edx = MEM32(eax + 0x1CC);
    MEM32(esi + 0x1CC) = edx;
    ecx = MEM32(eax + 0x1D0);
    MEM32(esi + 0x1D0) = ecx;
    edx = MEM32(eax + 0x1D4);
    MEM32(esi + 0x1D4) = edx;
    ecx = MEM32(eax + 0x1D8);
    MEM32(esi + 0x1D8) = ecx;
    edx = MEM32(eax + 0x1DC);
    MEM32(esi + 0x1DC) = edx;
    ecx = MEM32(eax + 0x1E0);
    MEM32(esi + 0x1E0) = ecx;
    edx = MEM32(eax + 0x1E4);
    MEM32(esi + 0x1E4) = edx;
    ecx = MEM32(eax + 0x1E8);
    MEM32(esi + 0x1E8) = ecx;
    edx = MEM32(eax + 0x1EC);
    MEM32(esi + 0x1EC) = edx;
    ecx = MEM32(eax + 0x1F0);
    MEM32(esi + 0x1F0) = ecx;
    edx = MEM32(eax + 0x1F4);
    MEM32(esi + 0x1F4) = edx;
    ecx = MEM32(eax + 0x1F8);
    MEM32(esi + 0x1F8) = ecx;
    edx = MEM32(eax + 0x1FC);
    MEM32(esi + 0x1FC) = edx;
    ecx = MEM32(eax + 0x200);
    MEM32(esi + 0x200) = ecx;
    edx = MEM32(eax + 0x204);
    MEM32(esi + 0x204) = edx;
    ecx = MEM32(eax + 0x208);
    MEM32(esi + 0x208) = ecx;
    edx = MEM32(eax + 0x20C);
    MEM32(esi + 0x20C) = edx;
    ecx = MEM32(eax + 0x210);
    MEM32(esi + 0x210) = ecx;
    edx = MEM32(eax + 0x214);
    MEM32(esi + 0x214) = edx;
    ecx = MEM32(eax + 0x218);
    MEM32(esi + 0x218) = ecx;
    edx = MEM32(eax + 0x21C);
    MEM32(esi + 0x21C) = edx;
    ecx = MEM32(eax + 0x220);
    MEM32(esi + 0x220) = ecx;
    edx = MEM32(eax + 0x224);
    MEM32(esi + 0x224) = edx;
    ecx = eax + 0x228;
    ebx = MEM32(ecx);
    edx = esi + 0x228;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(ecx + 8);
    MEM32(edx + 8) = ebx;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(eax + 0x238);
    MEM32(esi + 0x238) = edx;
    ebx = esi + 0x240;
    MEM32(esp + 0xC) = 6;

loc_00106301: ;
    eax = edi + ebx;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010630Cu); RECOMP_ABI_CALL(0x00105BB0u, sub_00105BB0); /* call 0x00105BB0 */

loc_0010630C: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_00106301; /* jne: not equal / not zero */

loc_0010631D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00106330
 * Original: 0x00106330 - 0x00106485 (341 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3F4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0xD43DDD1Au);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010634Eu); RECOMP_ABI_CALL(0x0003AE00u, sub_0003AE00); /* call 0x0003AE00 */

loc_0010634E: ;
    ebx = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = 0x3DE810;
    MEM32(esp + 0x1C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00106363u); RECOMP_ABI_CALL(0x001059F0u, sub_001059F0); /* call 0x001059F0 */

loc_00106363: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x194); PUSH32(esp, 0x00106372u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010636Cu); } /* indirect call */
    }

loc_00106372: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010637Au); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_0010637A: ;
    ecx = MEM32(0x3DB9D0);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00106389u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106386u); } /* indirect call */
    }

loc_00106389: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ebx = eax;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00106399u); RECOMP_ABI_CALL(0x0013B390u, sub_0013B390); /* call 0x0013B390 */

loc_00106399: ;
    edx = MEM32(0x3DD8C8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001063BF; /* jle: less or equal (signed <=) */

loc_001063A5: ;
    edi = MEM32(ebx + 8);
    ecx = MEM32(0x3DD8C0);
    edi = edi;

loc_001063B0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010640C; /* je: equal / zero */

loc_001063B4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x510) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x510;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001063B0; /* jl: less (signed <) */

loc_001063BF: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001063C2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x204); PUSH32(esp, 0x001063CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001063C7u); } /* indirect call */
    }

loc_001063CD: ;
    eax = MEM32(0x3DD8C0);
    ebx = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x510);
    ecx = ebx + eax;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001063E5u); RECOMP_ABI_CALL(0x001011C0u, sub_001011C0); /* call 0x001011C0 */

loc_001063E5: ;
    ecx = MEM32(0x3DE7C8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00106414; /* jle: less or equal (signed <=) */

loc_001063F1: ;
    edx = MEM32(0x3DE7C0);

loc_001063F7: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106410; /* je: equal / zero */

loc_001063FF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x3A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3A0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001063F7; /* jl: less (signed <) */

loc_0010640A: ;
    goto loc_00106414;

loc_0010640C: ;
    edi = eax;
    goto loc_001063C2;

loc_00106410: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00106462; /* jge: greater or equal (signed >=) */

loc_00106414: ;
    edx = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xE8;
    edi = esp + 0x60;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x3DD8C0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x68) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010643Du); RECOMP_ABI_CALL(0x00102350u, sub_00102350); /* call 0x00102350 */

loc_0010643D: ;
    eax = MEM32(0x3DE7C8);
    edi = MEM32(0x3DE7C0);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3A0);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x60;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(0x3DE7C8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00106462u); RECOMP_ABI_CALL(0x00105AF0u, sub_00105AF0); /* call 0x00105AF0 */

loc_00106462: ;
    ecx = MEM32(ebp + 8);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010646Fu); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_0010646F: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0010647Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106478u); } /* indirect call */
    }

loc_0010647E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00106490
 * Original: 0x00106490 - 0x001064AD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106490: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    edx = ecx;
    PUSH32(esp, edi);
    ecx = 0x150;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001064B0
 * Original: 0x001064B0 - 0x001064D3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001064B0(void)
{

loc_001064B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001064BDu); RECOMP_ABI_CALL(0x001032F0u, sub_001032F0); /* call 0x001032F0 */

loc_001064BD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x5BC) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x571) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001064E0
 * Original: 0x001064E0 - 0x00106551 (113 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001064E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001064E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x317B50);
    { uint32_t _icall_target = MEM32(eax + 0x184); PUSH32(esp, 0x001064F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001064EEu); } /* indirect call */
    }

loc_001064F4: ;
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    MEM32(edi + 4) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2B0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00106510: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x238)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x238) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00106535; /* jge: greater or equal (signed >=) */

loc_0010651C: ;
    SET_LO8(eax, MEM8(ebx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106535; /* jne: not equal / not zero */

loc_00106523: ;
    eax = MEM32(ebx);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00106531u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010652Bu); } /* indirect call */
    }

loc_00106531: ;
    MEM32(edi) = eax;
    goto loc_0010653B;

loc_00106535: ;
    MEM32(edi) = 0xFFFFFFFFu;

loc_0010653B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106510; /* jl: less (signed <) */

loc_0010654A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00106560
 * Original: 0x00106560 - 0x0010656F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106560: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00106570
 * Original: 0x00106570 - 0x001065B5 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106570(void)
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

loc_00106570: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x0010657Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106575u); } /* indirect call */
    }

loc_0010657B: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1A4); PUSH32(esp, 0x00106587u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106581u); } /* indirect call */
    }

loc_00106587: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esi + 0xB04);
    ecx = MEM32(esi + 0x1E4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x1E8);
    MEM32(eax + 4) = edx;
    SET_LO8(ecx, MEM8(esi + 0x571));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax + 8) = LO8(ecx);
    POP32(esp, esi);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001065C0
 * Original: 0x001065C0 - 0x001065C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001065C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001065C0: ;
    fp_push(MEMF(ecx + 0xB10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001065D0
 * Original: 0x001065D0 - 0x001065E0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001065D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001065D0: ;
    eax = MEM32(ecx + 0xB08);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x1C);
    fp_push(MEMF(edx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001065E0
 * Original: 0x001065E0 - 0x001065F0 (16 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001065E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001065E0: ;
    fp_push(MEMF(ecx + 0xB0C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001065F0
 * Original: 0x001065F0 - 0x00106625 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001065F0(void)
{

loc_001065F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001065FDu); RECOMP_ABI_CALL(0x0022AEC0u, sub_0022AEC0); /* call 0x0022AEC0 */

loc_001065FD: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x20) = eax;
    MEM32(esi) = 0x31817C;
    MEM32(esi + 8) = 0x31816C;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x1C) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
